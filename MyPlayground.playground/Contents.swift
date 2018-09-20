//: Playground - noun: a place where people can play

import UIKit
import Foundation

public class LinkedListNode<T> {
    
    var value:T
    var next: LinkedListNode?
    weak var previous: LinkedListNode?
    
    init(value: T) {
        self.value = value
    }
}


public class LinkedList<T> {
    
    public typealias Node = LinkedListNode<T>
    
    private var head:Node?
    
    public var isEmpty:Bool {
        return head == nil
    }
    
    public var first:Node? {
        return head
    }
    
    public var last: Node? {
        
        guard var node = head else { return nil }
        
        while let next = node.next {
            node = next
        }
        
        return node
    }
    
    public func append(value: T) {
        
        let newNode = Node(value: value)
        
        if let lastNode = last {
            newNode.previous = lastNode
            lastNode.next = newNode
        }
        else {
            head = newNode
        }
    }
    
    public func node(atIndex index: Int)->Node {
        
        if index == 0 {
            return head!
        }
        else {
            
            var nodeAtIndex = head!.next
            
            for _ in 1..<index {
                nodeAtIndex = nodeAtIndex?.next
                
                if nodeAtIndex == nil {
                    break
                }
            }
            return nodeAtIndex!
        }
    }
    
    public func insert(value: T, atIndex index:Int) {
        
        let newNode = Node(value: value)
        
        if index == 0 {
            newNode.next = head
            head?.previous = newNode
            head = newNode
        }
        else {
            
            let prev = node(atIndex: index - 1)
            let next = prev.next
            
            newNode.previous = prev
            newNode.next = prev.next
            
            prev.next = newNode
            next?.previous = newNode
        }
    }
}


let linkList = LinkedList<Int>()

linkList.append(value: 1)
linkList.append(value: 2)
print(linkList.last?.value)
linkList.insert(value: 3, atIndex: 2)
print(linkList.last?.value)




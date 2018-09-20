//
//  Stack.swift
//  
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 9/17/18.
//

import Foundation
//: Playground - noun: a place where people can play

public struct Stack <T> {
    
    private var stackContainer = [T]()
    
    mutating func push(value: T) {
        
        stackContainer.append(value)
    }
    
    mutating func pop()->T? {
        
        if isEmpty() {
            return nil
        }
        return (stackContainer.popLast())!
    }
    
    func peek()->T? {
        
        if isEmpty() {
            return nil
        }
        return (stackContainer.last)!
    }
    
    func isEmpty()->Bool {
        
        if stackContainer.count == 0 {
            return true
        }
        else {
            return false
        }
    }
    
    func count()->Int {
        
        if isEmpty() {
            return 0
        }
        return stackContainer.count
    }
}


var stack = Stack<Int>()

stack.push(value: 20)
stack.push(value: 30)
stack.push(value: 40)

stack.count()


print(stack.pop())
print(stack.count())

stack.push(value: 100)
print(stack.count())

print(stack)




//
//  ArrayShuffle(Fisher Yates Algorithm).swift
//  
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 9/17/18.
//

import Foundation

extension Array {
    
    mutating func shuffle()->[Any] {
        
        var last = self.count - 1
        
        while last > 0 {
            
            let swapIndex = Int (arc4random_uniform(UInt32(last)))
            self.swapAt(swapIndex, last)
            last = last - 1
        }
        return self
    }
}

//var arrValue = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "L"]
var arrValue = Array(1...100)
print(arrValue.shuffle())

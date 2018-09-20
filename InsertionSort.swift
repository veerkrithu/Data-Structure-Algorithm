//
//  InsertionSort.swift
//  
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 9/6/18.
//

import Foundation

func insertionSort(value: [Int])->[Int] {
    
    var result = value
    
    for iIndex in 1..<result.count {
        
        var jIndex = iIndex - 1
        let keyValue = result[iIndex]
        
        while jIndex >= 0 && keyValue < result[jIndex] {
            result[jIndex + 1] = result [jIndex]
            jIndex = jIndex - 1
        }
        
        result[jIndex + 1] = keyValue
    }
    
    return result
}

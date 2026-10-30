// roc 2012-06 0042741d  unit: InsertObject  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042741d
//
// 0042741d  6a00                 push 0
// 0042741f  6a00                 push 0
// 00427421  e81ebd5500           call 0x983144
// copied from an identical function in another client (function __catch$??$_Uninit_copy@PAVSortedVertex@?$ConvexHull2@M@Wml@@PAV123@V?$allocator@VSortedVertex@?$ConvexHull2@M@Wml@@@std@@@std@@YAPAVSortedVertex@?$ConvexHull2@M@Wml@@PAV123@00AAV?$allocator@VSortedVertex@?$ConvexHull2@M@Wml@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z$0)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob1 /GS- /MT
// roc-lib: wildmagic-2-core Containment/WmlConvexHull2.cpp
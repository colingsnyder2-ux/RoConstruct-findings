// roc 2011-06 00637662  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00637662
//
// 00637662  6a00                 push 0
// 00637664  6a00                 push 0
// 00637666  e8413a1d00           call 0x80b0ac
// copied from an identical function in another client (function __catch$??$_Uninit_copy@PAVSortedVertex@?$ConvexHull2@M@Wml@@PAV123@V?$allocator@VSortedVertex@?$ConvexHull2@M@Wml@@@std@@@std@@YAPAVSortedVertex@?$ConvexHull2@M@Wml@@PAV123@00AAV?$allocator@VSortedVertex@?$ConvexHull2@M@Wml@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z$0)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob1 /GS- /MT
// roc-lib: wildmagic-2-core Containment/WmlConvexHull2.cpp
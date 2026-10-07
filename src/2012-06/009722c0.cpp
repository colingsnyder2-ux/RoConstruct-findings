// roc 2012-06 009722c0  unit: seg_00970000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009722c0
//
// 009722c0  ff059080e500         inc dword ptr [0xe58090]
// 009722c6  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss.cpp (function ?tss_data_inc_use@?A0x568608d8@@YAXAAV?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp

// from server: 100% by auto
// roc 2011-06 007f8a40  unit: RBX::Log  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f8a40
//
// 007f8a40  ff058c61cd00         inc dword ptr [0xcd618c]
// 007f8a46  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss.cpp (function ?tss_data_inc_use@?A0x568608d8@@YAXAAV?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp

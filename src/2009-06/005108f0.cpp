// from server: 100% by auto
// roc 2009-06 005108f0  unit: CSHA1  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005108f0
//
// 005108f0  8b442404             mov eax, dword ptr [esp + 4]
// 005108f4  50                   push eax
// 005108f5  ff15b8e28900         call dword ptr [0x89e2b8]
// 005108fb  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

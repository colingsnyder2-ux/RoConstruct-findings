// from server: 100% by auto
// roc 2007-08 004ca670  unit: seg_004c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca670
//
// 004ca670  8b442404             mov eax, dword ptr [esp + 4]
// 004ca674  50                   push eax
// 004ca675  ff1520d27700         call dword ptr [0x77d220]
// 004ca67b  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

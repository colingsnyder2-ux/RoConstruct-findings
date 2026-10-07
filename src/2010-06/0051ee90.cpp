// roc 2010-06 0051ee90  unit: CSHA1  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ee90
//
// 0051ee90  8b442404             mov eax, dword ptr [esp + 4]
// 0051ee94  50                   push eax
// 0051ee95  ff1588a29e00         call dword ptr [0x9ea288]
// 0051ee9b  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

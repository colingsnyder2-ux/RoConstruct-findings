// roc 2008-06 004d4170  unit: seg_004d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d4170
//
// 004d4170  8b442404             mov eax, dword ptr [esp + 4]
// 004d4174  50                   push eax
// 004d4175  ff1560228000         call dword ptr [0x802260]
// 004d417b  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

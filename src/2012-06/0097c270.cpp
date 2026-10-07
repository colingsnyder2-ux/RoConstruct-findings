// roc 2012-06 0097c270  unit: RBX::Tasks::SequenceBase  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097c270
//
// 0097c270  8b442404             mov eax, dword ptr [esp + 4]
// 0097c274  50                   push eax
// 0097c275  ff159821b200         call dword ptr [0xb22198]
// 0097c27b  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

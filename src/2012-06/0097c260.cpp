// from server: 100% by auto
// roc 2012-06 0097c260  unit: RBX::Tasks::SequenceBase  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097c260
//
// 0097c260  8b442404             mov eax, dword ptr [esp + 4]
// 0097c264  50                   push eax
// 0097c265  ff159421b200         call dword ptr [0xb22194]
// 0097c26b  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

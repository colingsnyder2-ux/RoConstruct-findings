// roc 2012-06 0097c280  unit: RBX::Tasks::SequenceBase  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097c280
//
// 0097c280  8b442408             mov eax, dword ptr [esp + 8]
// 0097c284  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0097c288  50                   push eax
// 0097c289  51                   push ecx
// 0097c28a  ff159822b200         call dword ptr [0xb22298]
// 0097c290  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_current_directory@?A0x062878eb@@YAKKPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

// from server: 100% by auto
// roc 2011-06 008011f0  unit: RBX::Tasks::SequenceBase  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008011f0
//
// 008011f0  8b442408             mov eax, dword ptr [esp + 8]
// 008011f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008011f8  50                   push eax
// 008011f9  51                   push ecx
// 008011fa  ff156003a400         call dword ptr [0xa40360]
// 00801200  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_current_directory@?A0x062878eb@@YAKKPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

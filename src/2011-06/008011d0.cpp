// from server: 100% by auto
// roc 2011-06 008011d0  unit: RBX::Tasks::SequenceBase  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008011d0
//
// 008011d0  8b442404             mov eax, dword ptr [esp + 4]
// 008011d4  50                   push eax
// 008011d5  ff154803a400         call dword ptr [0xa40348]
// 008011db  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

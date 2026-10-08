// from server: 100% by auto
// roc 2012-06 005c87a0  unit: RBX::AdornRbxGfx  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c87a0
//
// 005c87a0  8b442404             mov eax, dword ptr [esp + 4]
// 005c87a4  50                   push eax
// 005c87a5  ff157c22b200         call dword ptr [0xb2227c]
// 005c87ab  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp

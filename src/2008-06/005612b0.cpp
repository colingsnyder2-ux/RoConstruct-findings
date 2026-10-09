// roc 2008-06 005612b0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005612b0
//
// 005612b0  64a100000000         mov eax, dword ptr fs:[0]
// 005612b6  6aff                 push -1
// 005612b8  68beed7c00           push 0x7cedbe
// 005612bd  50                   push eax
// 005612be  b801000000           mov eax, 1
// 005612c3  64892500000000       mov dword ptr fs:[0], esp
// 005612ca  8405e8409700         test byte ptr [0x9740e8], al
// 005612d0  7530                 jne 0x561302
// 005612d2  0905e8409700         or dword ptr [0x9740e8], eax
// 005612d8  68cc419400           push 0x9441cc
// 005612dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005612e5  e8969aeaff           call 0x40ad80
// 005612ea  50                   push eax
// 005612eb  b928409700           mov ecx, 0x974028
// 005612f0  e8fbf50000           call 0x5708f0
// 005612f5  6800cc7f00           push 0x7fcc00
// 005612fa  e8b0041400           call 0x6a17af
// 005612ff  83c404               add esp, 4
// 00561302  8b0c24               mov ecx, dword ptr [esp]
// 00561305  b828409700           mov eax, 0x974028
// 0056130a  64890d00000000       mov dword ptr fs:[0], ecx
// 00561311  83c40c               add esp, 0xc
// 00561314  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2008-06 0049e9a0  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e9a0
//
// 0049e9a0  64a100000000         mov eax, dword ptr fs:[0]
// 0049e9a6  6aff                 push -1
// 0049e9a8  682e767c00           push 0x7c762e
// 0049e9ad  50                   push eax
// 0049e9ae  b801000000           mov eax, 1
// 0049e9b3  64892500000000       mov dword ptr fs:[0], esp
// 0049e9ba  840598079700         test byte ptr [0x970798], al
// 0049e9c0  7530                 jne 0x49e9f2
// 0049e9c2  090598079700         or dword ptr [0x970798], eax
// 0049e9c8  68d8f78200           push 0x82f7d8
// 0049e9cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049e9d5  e8a6c3f6ff           call 0x40ad80
// 0049e9da  50                   push eax
// 0049e9db  b9d8069700           mov ecx, 0x9706d8
// 0049e9e0  e80b1f0d00           call 0x5708f0
// 0049e9e5  6880ba7f00           push 0x7fba80
// 0049e9ea  e8c02d2000           call 0x6a17af
// 0049e9ef  83c404               add esp, 4
// 0049e9f2  8b0c24               mov ecx, dword ptr [esp]
// 0049e9f5  b8d8069700           mov eax, 0x9706d8
// 0049e9fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ea01  83c40c               add esp, 0xc
// 0049ea04  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

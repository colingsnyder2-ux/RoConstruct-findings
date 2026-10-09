// roc 2008-06 0049a8a0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a8a0
//
// 0049a8a0  64a100000000         mov eax, dword ptr fs:[0]
// 0049a8a6  6aff                 push -1
// 0049a8a8  681e707c00           push 0x7c701e
// 0049a8ad  50                   push eax
// 0049a8ae  b801000000           mov eax, 1
// 0049a8b3  64892500000000       mov dword ptr fs:[0], esp
// 0049a8ba  8405b8069700         test byte ptr [0x9706b8], al
// 0049a8c0  7530                 jne 0x49a8f2
// 0049a8c2  0905b8069700         or dword ptr [0x9706b8], eax
// 0049a8c8  684c789300           push 0x93784c
// 0049a8cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049a8d5  e8a604f7ff           call 0x40ad80
// 0049a8da  50                   push eax
// 0049a8db  b9f8059700           mov ecx, 0x9705f8
// 0049a8e0  e80b600d00           call 0x5708f0
// 0049a8e5  6820b87f00           push 0x7fb820
// 0049a8ea  e8c06e2000           call 0x6a17af
// 0049a8ef  83c404               add esp, 4
// 0049a8f2  8b0c24               mov ecx, dword ptr [esp]
// 0049a8f5  b8f8059700           mov eax, 0x9705f8
// 0049a8fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a901  83c40c               add esp, 0xc
// 0049a904  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

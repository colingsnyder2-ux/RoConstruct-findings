// roc 2007-08 005ed790  unit: RBX::VRocket::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed790
//
// 005ed790  64a100000000         mov eax, dword ptr fs:[0]
// 005ed796  6aff                 push -1
// 005ed798  686eb27500           push 0x75b26e
// 005ed79d  50                   push eax
// 005ed79e  b801000000           mov eax, 1
// 005ed7a3  64892500000000       mov dword ptr fs:[0], esp
// 005ed7aa  840548728c00         test byte ptr [0x8c7248], al
// 005ed7b0  7530                 jne 0x5ed7e2
// 005ed7b2  090548728c00         or dword ptr [0x8c7248], eax
// 005ed7b8  68f4f38a00           push 0x8af3f4
// 005ed7bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ed7c5  e8c6aee2ff           call 0x418690
// 005ed7ca  50                   push eax
// 005ed7cb  b9c0718c00           mov ecx, 0x8c71c0
// 005ed7d0  e82b34f8ff           call 0x570c00
// 005ed7d5  6830c37700           push 0x77c330
// 005ed7da  e844350400           call 0x630d23
// 005ed7df  83c404               add esp, 4
// 005ed7e2  8b0c24               mov ecx, dword ptr [esp]
// 005ed7e5  b8c0718c00           mov eax, 0x8c71c0
// 005ed7ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed7f1  83c40c               add esp, 0xc
// 005ed7f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

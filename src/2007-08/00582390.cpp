// roc 2007-08 00582390  unit: RBX::VHat::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00582390
//
// 00582390  64a100000000         mov eax, dword ptr fs:[0]
// 00582396  6aff                 push -1
// 00582398  68ee5c7500           push 0x755cee
// 0058239d  50                   push eax
// 0058239e  b801000000           mov eax, 1
// 005823a3  64892500000000       mov dword ptr fs:[0], esp
// 005823aa  840528328c00         test byte ptr [0x8c3228], al
// 005823b0  7530                 jne 0x5823e2
// 005823b2  090528328c00         or dword ptr [0x8c3228], eax
// 005823b8  6820c07a00           push 0x7ac020
// 005823bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005823c5  e8c662e9ff           call 0x418690
// 005823ca  50                   push eax
// 005823cb  b9a0318c00           mov ecx, 0x8c31a0
// 005823d0  e82be8feff           call 0x570c00
// 005823d5  6820a67700           push 0x77a620
// 005823da  e844e90a00           call 0x630d23
// 005823df  83c404               add esp, 4
// 005823e2  8b0c24               mov ecx, dword ptr [esp]
// 005823e5  b8a0318c00           mov eax, 0x8c31a0
// 005823ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005823f1  83c40c               add esp, 0xc
// 005823f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

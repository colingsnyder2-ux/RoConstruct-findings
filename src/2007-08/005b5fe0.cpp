// roc 2007-08 005b5fe0  unit: RBX::VSky::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5fe0
//
// 005b5fe0  64a100000000         mov eax, dword ptr fs:[0]
// 005b5fe6  6aff                 push -1
// 005b5fe8  68de8f7500           push 0x758fde
// 005b5fed  50                   push eax
// 005b5fee  b801000000           mov eax, 1
// 005b5ff3  64892500000000       mov dword ptr fs:[0], esp
// 005b5ffa  8405605f8c00         test byte ptr [0x8c5f60], al
// 005b6000  7530                 jne 0x5b6032
// 005b6002  0905605f8c00         or dword ptr [0x8c5f60], eax
// 005b6008  6848a78a00           push 0x8aa748
// 005b600d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b6015  e87626e6ff           call 0x418690
// 005b601a  50                   push eax
// 005b601b  b9d85e8c00           mov ecx, 0x8c5ed8
// 005b6020  e8dbabfbff           call 0x570c00
// 005b6025  6820b87700           push 0x77b820
// 005b602a  e8f4ac0700           call 0x630d23
// 005b602f  83c404               add esp, 4
// 005b6032  8b0c24               mov ecx, dword ptr [esp]
// 005b6035  b8d85e8c00           mov eax, 0x8c5ed8
// 005b603a  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6041  83c40c               add esp, 0xc
// 005b6044  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2007-08 005edcb0  unit: RBX::VBodyThrust::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005edcb0
//
// 005edcb0  64a100000000         mov eax, dword ptr fs:[0]
// 005edcb6  6aff                 push -1
// 005edcb8  684eb37500           push 0x75b34e
// 005edcbd  50                   push eax
// 005edcbe  b801000000           mov eax, 1
// 005edcc3  64892500000000       mov dword ptr fs:[0], esp
// 005edcca  840568738c00         test byte ptr [0x8c7368], al
// 005edcd0  7530                 jne 0x5edd02
// 005edcd2  090568738c00         or dword ptr [0x8c7368], eax
// 005edcd8  680cf48a00           push 0x8af40c
// 005edcdd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005edce5  e8a6a9e2ff           call 0x418690
// 005edcea  50                   push eax
// 005edceb  b9e0728c00           mov ecx, 0x8c72e0
// 005edcf0  e80b2ff8ff           call 0x570c00
// 005edcf5  68f0c27700           push 0x77c2f0
// 005edcfa  e824300400           call 0x630d23
// 005edcff  83c404               add esp, 4
// 005edd02  8b0c24               mov ecx, dword ptr [esp]
// 005edd05  b8e0728c00           mov eax, 0x8c72e0
// 005edd0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005edd11  83c40c               add esp, 0xc
// 005edd14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

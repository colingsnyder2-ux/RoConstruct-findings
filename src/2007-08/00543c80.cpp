// roc 2007-08 00543c80  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543c80
//
// 00543c80  64a100000000         mov eax, dword ptr fs:[0]
// 00543c86  6aff                 push -1
// 00543c88  680e187500           push 0x75180e
// 00543c8d  50                   push eax
// 00543c8e  b801000000           mov eax, 1
// 00543c93  64892500000000       mov dword ptr fs:[0], esp
// 00543c9a  8405081b8c00         test byte ptr [0x8c1b08], al
// 00543ca0  7530                 jne 0x543cd2
// 00543ca2  0905081b8c00         or dword ptr [0x8c1b08], eax
// 00543ca8  68b8677a00           push 0x7a67b8
// 00543cad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00543cb5  e8d649edff           call 0x418690
// 00543cba  50                   push eax
// 00543cbb  b9801a8c00           mov ecx, 0x8c1a80
// 00543cc0  e83bcf0200           call 0x570c00
// 00543cc5  68e0997700           push 0x7799e0
// 00543cca  e854d00e00           call 0x630d23
// 00543ccf  83c404               add esp, 4
// 00543cd2  8b0c24               mov ecx, dword ptr [esp]
// 00543cd5  b8801a8c00           mov eax, 0x8c1a80
// 00543cda  64890d00000000       mov dword ptr fs:[0], ecx
// 00543ce1  83c40c               add esp, 0xc
// 00543ce4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2007-03 005e1d70  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1d70
//
// 005e1d70  64a100000000         mov eax, dword ptr fs:[0]
// 005e1d76  6aff                 push -1
// 005e1d78  68debd7500           push 0x75bdde
// 005e1d7d  50                   push eax
// 005e1d7e  b801000000           mov eax, 1
// 005e1d83  64892500000000       mov dword ptr fs:[0], esp
// 005e1d8a  8405280b8c00         test byte ptr [0x8c0b28], al
// 005e1d90  7530                 jne 0x5e1dc2
// 005e1d92  0905280b8c00         or dword ptr [0x8c0b28], eax
// 005e1d98  6890aa8a00           push 0x8aaa90
// 005e1d9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1da5  e8b67de3ff           call 0x419b60
// 005e1daa  50                   push eax
// 005e1dab  b9a00a8c00           mov ecx, 0x8c0aa0
// 005e1db0  e82bf0f8ff           call 0x570de0
// 005e1db5  6890ba7700           push 0x77ba90
// 005e1dba  e8f4d30300           call 0x61f1b3
// 005e1dbf  83c404               add esp, 4
// 005e1dc2  8b0c24               mov ecx, dword ptr [esp]
// 005e1dc5  b8a00a8c00           mov eax, 0x8c0aa0
// 005e1dca  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1dd1  83c40c               add esp, 0xc
// 005e1dd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

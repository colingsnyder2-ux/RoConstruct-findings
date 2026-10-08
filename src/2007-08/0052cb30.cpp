// roc 2007-08 0052cb30  unit: seg_00520000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052cb30
//
// 0052cb30  6aff                 push -1
// 0052cb32  68d6027500           push 0x7502d6
// 0052cb37  64a100000000         mov eax, dword ptr fs:[0]
// 0052cb3d  50                   push eax
// 0052cb3e  64892500000000       mov dword ptr fs:[0], esp
// 0052cb45  83ec08               sub esp, 8
// 0052cb48  56                   push esi
// 0052cb49  57                   push edi
// 0052cb4a  68540c8c00           push 0x8c0c54
// 0052cb4f  6830c75200           push 0x52c730
// 0052cb54  e8c7891f00           call 0x725520
// 0052cb59  83c408               add esp, 8
// 0052cb5c  e86ffbffff           call 0x52c6d0
// 0052cb61  8bf0                 mov esi, eax
// 0052cb63  8bce                 mov ecx, esi
// 0052cb65  89742408             mov dword ptr [esp + 8], esi
// 0052cb69  e8e28b1f00           call 0x725750
// 0052cb6e  b801000000           mov eax, 1
// 0052cb73  8844240c             mov byte ptr [esp + 0xc], al
// 0052cb77  8405880c8c00         test byte ptr [0x8c0c88], al
// 0052cb7d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052cb85  751e                 jne 0x52cba5
// 0052cb87  0905880c8c00         or dword ptr [0x8c0c88], eax
// 0052cb8d  6a00                 push 0
// 0052cb8f  6854597800           push 0x785954
// 0052cb94  88442420             mov byte ptr [esp + 0x20], al
// 0052cb98  e8a3fdffff           call 0x52c940
// 0052cb9d  83c408               add esp, 8
// 0052cba0  a3840c8c00           mov dword ptr [0x8c0c84], eax
// 0052cba5  8b3d840c8c00         mov edi, dword ptr [0x8c0c84]
// 0052cbab  8bce                 mov ecx, esi
// 0052cbad  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0052cbb5  e8b68b1f00           call 0x725770
// 0052cbba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052cbbe  8bc7                 mov eax, edi
// 0052cbc0  5f                   pop edi
// 0052cbc1  5e                   pop esi
// 0052cbc2  64890d00000000       mov dword ptr fs:[0], ecx
// 0052cbc9  83c414               add esp, 0x14
// 0052cbcc  c3                   ret 
// library rbxgs/util\Name.cpp (function ?getNullName@Name@RBX@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

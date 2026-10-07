// roc 2008-06 0070a230  unit: CXTPToolTipContext::CHTMLToolTip  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070a230
//
// 0070a230  55                   push ebp
// 0070a231  56                   push esi
// 0070a232  57                   push edi
// 0070a233  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0070a237  8bf7                 mov esi, edi
// 0070a239  c1e604               shl esi, 4
// 0070a23c  f7d6                 not esi
// 0070a23e  81e600000200         and esi, 0x20000
// 0070a244  81ce20080000         or esi, 0x820
// 0070a24a  8be9                 mov ebp, ecx
// 0070a24c  f7c600000200         test esi, 0x20000
// 0070a252  7416                 je 0x70a26a
// 0070a254  e8d7ddfdff           call 0x6e8030
// 0070a259  8bc8                 mov ecx, eax
// 0070a25b  e8d0e6fdff           call 0x6e8930
// 0070a260  84c0                 test al, al
// 0070a262  7506                 jne 0x70a26a
// 0070a264  81e6fffffdff         and esi, 0xfffdffff
// 0070a26a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070a26e  53                   push ebx
// 0070a26f  85c0                 test eax, eax
// 0070a271  7504                 jne 0x70a277
// 0070a273  33db                 xor ebx, ebx
// 0070a275  eb03                 jmp 0x70a27a
// 0070a277  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0070a27a  e8a766f9ff           call 0x6a0926
// 0070a27f  68007f0000           push 0x7f00
// 0070a284  6a00                 push 0
// 0070a286  ff15d02d8000         call dword ptr [0x802dd0]
// 0070a28c  6a00                 push 0
// 0070a28e  6a00                 push 0
// 0070a290  53                   push ebx
// 0070a291  6800000080           push 0x80000000
// 0070a296  6800000080           push 0x80000000
// 0070a29b  6800000080           push 0x80000000
// 0070a2a0  6800000080           push 0x80000000
// 0070a2a5  81cf00000080         or edi, 0x80000000
// 0070a2ab  57                   push edi
// 0070a2ac  6a00                 push 0
// 0070a2ae  6a00                 push 0
// 0070a2b0  6a00                 push 0
// 0070a2b2  50                   push eax
// 0070a2b3  56                   push esi
// 0070a2b4  e8d36cf9ff           call 0x6a0f8c
// 0070a2b9  50                   push eax
// 0070a2ba  6880000000           push 0x80
// 0070a2bf  8bcd                 mov ecx, ebp
// 0070a2c1  e83864f9ff           call 0x6a06fe
// 0070a2c6  5b                   pop ebx
// 0070a2c7  85c0                 test eax, eax
// 0070a2c9  7419                 je 0x70a2e4
// 0070a2cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070a2cf  85c9                 test ecx, ecx
// 0070a2d1  740c                 je 0x70a2df
// 0070a2d3  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0070a2d6  5f                   pop edi
// 0070a2d7  5e                   pop esi
// 0070a2d8  894d38               mov dword ptr [ebp + 0x38], ecx
// 0070a2db  5d                   pop ebp
// 0070a2dc  c20800               ret 8
// 0070a2df  33c9                 xor ecx, ecx
// 0070a2e1  894d38               mov dword ptr [ebp + 0x38], ecx
// 0070a2e4  5f                   pop edi
// 0070a2e5  5e                   pop esi
// 0070a2e6  5d                   pop ebp
// 0070a2e7  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?Create@CXTPToolTipContextToolTip@@QAEHPAVCWnd@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp

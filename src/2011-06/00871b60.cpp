// from server: 100% by auto
// roc 2011-06 00871b60  unit: CXTPToolTipContext::CHTMLToolTip  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871b60
//
// 00871b60  55                   push ebp
// 00871b61  56                   push esi
// 00871b62  57                   push edi
// 00871b63  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00871b67  8bf7                 mov esi, edi
// 00871b69  c1e604               shl esi, 4
// 00871b6c  f7d6                 not esi
// 00871b6e  81e600000200         and esi, 0x20000
// 00871b74  81ce20080000         or esi, 0x820
// 00871b7a  8be9                 mov ebp, ecx
// 00871b7c  f7c600000200         test esi, 0x20000
// 00871b82  7416                 je 0x871b9a
// 00871b84  e837f5fdff           call 0x8510c0
// 00871b89  8bc8                 mov ecx, eax
// 00871b8b  e830fefdff           call 0x8519c0
// 00871b90  84c0                 test al, al
// 00871b92  7506                 jne 0x871b9a
// 00871b94  81e6fffffdff         and esi, 0xfffdffff
// 00871b9a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00871b9e  53                   push ebx
// 00871b9f  85c0                 test eax, eax
// 00871ba1  7504                 jne 0x871ba7
// 00871ba3  33db                 xor ebx, ebx
// 00871ba5  eb03                 jmp 0x871baa
// 00871ba7  8b5820               mov ebx, dword ptr [eax + 0x20]
// 00871baa  e86d87f9ff           call 0x80a31c
// 00871baf  68007f0000           push 0x7f00
// 00871bb4  6a00                 push 0
// 00871bb6  ff15081aa400         call dword ptr [0xa41a08]
// 00871bbc  6a00                 push 0
// 00871bbe  6a00                 push 0
// 00871bc0  53                   push ebx
// 00871bc1  6800000080           push 0x80000000
// 00871bc6  6800000080           push 0x80000000
// 00871bcb  6800000080           push 0x80000000
// 00871bd0  6800000080           push 0x80000000
// 00871bd5  81cf00000080         or edi, 0x80000000
// 00871bdb  57                   push edi
// 00871bdc  6a00                 push 0
// 00871bde  6a00                 push 0
// 00871be0  6a00                 push 0
// 00871be2  50                   push eax
// 00871be3  56                   push esi
// 00871be4  e8418ef9ff           call 0x80aa2a
// 00871be9  50                   push eax
// 00871bea  6880000000           push 0x80
// 00871bef  8bcd                 mov ecx, ebp
// 00871bf1  e8e084f9ff           call 0x80a0d6
// 00871bf6  5b                   pop ebx
// 00871bf7  85c0                 test eax, eax
// 00871bf9  7419                 je 0x871c14
// 00871bfb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00871bff  85c9                 test ecx, ecx
// 00871c01  740c                 je 0x871c0f
// 00871c03  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00871c06  5f                   pop edi
// 00871c07  5e                   pop esi
// 00871c08  894d38               mov dword ptr [ebp + 0x38], ecx
// 00871c0b  5d                   pop ebp
// 00871c0c  c20800               ret 8
// 00871c0f  33c9                 xor ecx, ecx
// 00871c11  894d38               mov dword ptr [ebp + 0x38], ecx
// 00871c14  5f                   pop edi
// 00871c15  5e                   pop esi
// 00871c16  5d                   pop ebp
// 00871c17  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?Create@CXTPToolTipContextToolTip@@QAEHPAVCWnd@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp

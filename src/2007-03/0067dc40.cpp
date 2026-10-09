// roc 2007-03 0067dc40  unit: seg_00670000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067dc40
//
// 0067dc40  55                   push ebp
// 0067dc41  56                   push esi
// 0067dc42  57                   push edi
// 0067dc43  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0067dc47  8bf7                 mov esi, edi
// 0067dc49  c1e604               shl esi, 4
// 0067dc4c  f7d6                 not esi
// 0067dc4e  81e600000200         and esi, 0x20000
// 0067dc54  81ce20080000         or esi, 0x820
// 0067dc5a  f7c600000200         test esi, 0x20000
// 0067dc60  8be9                 mov ebp, ecx
// 0067dc62  7416                 je 0x67dc7a
// 0067dc64  e8a7800000           call 0x685d10
// 0067dc69  8bc8                 mov ecx, eax
// 0067dc6b  e8c0890000           call 0x686630
// 0067dc70  84c0                 test al, al
// 0067dc72  7506                 jne 0x67dc7a
// 0067dc74  81e6fffffdff         and esi, 0xfffdffff
// 0067dc7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0067dc7e  85c0                 test eax, eax
// 0067dc80  53                   push ebx
// 0067dc81  7504                 jne 0x67dc87
// 0067dc83  33db                 xor ebx, ebx
// 0067dc85  eb03                 jmp 0x67dc8a
// 0067dc87  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0067dc8a  e80107faff           call 0x61e390
// 0067dc8f  68007f0000           push 0x7f00
// 0067dc94  6a00                 push 0
// 0067dc96  ff15f0ec7700         call dword ptr [0x77ecf0]
// 0067dc9c  6a00                 push 0
// 0067dc9e  6a00                 push 0
// 0067dca0  53                   push ebx
// 0067dca1  6800000080           push 0x80000000
// 0067dca6  6800000080           push 0x80000000
// 0067dcab  6800000080           push 0x80000000
// 0067dcb0  6800000080           push 0x80000000
// 0067dcb5  81cf00000080         or edi, 0x80000000
// 0067dcbb  57                   push edi
// 0067dcbc  6a00                 push 0
// 0067dcbe  6a00                 push 0
// 0067dcc0  6a00                 push 0
// 0067dcc2  50                   push eax
// 0067dcc3  56                   push esi
// 0067dcc4  e8bb0cfaff           call 0x61e984
// 0067dcc9  50                   push eax
// 0067dcca  6880000000           push 0x80
// 0067dccf  8bcd                 mov ecx, ebp
// 0067dcd1  e8a404faff           call 0x61e17a
// 0067dcd6  85c0                 test eax, eax
// 0067dcd8  5b                   pop ebx
// 0067dcd9  7419                 je 0x67dcf4
// 0067dcdb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067dcdf  85c9                 test ecx, ecx
// 0067dce1  740c                 je 0x67dcef
// 0067dce3  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0067dce6  5f                   pop edi
// 0067dce7  5e                   pop esi
// 0067dce8  894d38               mov dword ptr [ebp + 0x38], ecx
// 0067dceb  5d                   pop ebp
// 0067dcec  c20800               ret 8
// 0067dcef  33c9                 xor ecx, ecx
// 0067dcf1  894d38               mov dword ptr [ebp + 0x38], ecx
// 0067dcf4  5f                   pop edi
// 0067dcf5  5e                   pop esi
// 0067dcf6  5d                   pop ebp
// 0067dcf7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?Create@CXTPToolTipContextToolTip@@QAEHPAVCWnd@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp

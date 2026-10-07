// roc 2007-08 00694200  unit: CXTPStatusBar  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694200
//
// 00694200  55                   push ebp
// 00694201  56                   push esi
// 00694202  57                   push edi
// 00694203  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00694207  8bf7                 mov esi, edi
// 00694209  c1e604               shl esi, 4
// 0069420c  f7d6                 not esi
// 0069420e  81e600000200         and esi, 0x20000
// 00694214  81ce20080000         or esi, 0x820
// 0069421a  f7c600000200         test esi, 0x20000
// 00694220  8be9                 mov ebp, ecx
// 00694222  7416                 je 0x69423a
// 00694224  e817cffdff           call 0x671140
// 00694229  8bc8                 mov ecx, eax
// 0069422b  e830d8fdff           call 0x671a60
// 00694230  84c0                 test al, al
// 00694232  7506                 jne 0x69423a
// 00694234  81e6fffffdff         and esi, 0xfffdffff
// 0069423a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069423e  85c0                 test eax, eax
// 00694240  53                   push ebx
// 00694241  7504                 jne 0x694247
// 00694243  33db                 xor ebx, ebx
// 00694245  eb03                 jmp 0x69424a
// 00694247  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0069424a  e8b3bcf9ff           call 0x62ff02
// 0069424f  68007f0000           push 0x7f00
// 00694254  6a00                 push 0
// 00694256  ff1520ec7700         call dword ptr [0x77ec20]
// 0069425c  6a00                 push 0
// 0069425e  6a00                 push 0
// 00694260  53                   push ebx
// 00694261  6800000080           push 0x80000000
// 00694266  6800000080           push 0x80000000
// 0069426b  6800000080           push 0x80000000
// 00694270  6800000080           push 0x80000000
// 00694275  81cf00000080         or edi, 0x80000000
// 0069427b  57                   push edi
// 0069427c  6a00                 push 0
// 0069427e  6a00                 push 0
// 00694280  6a00                 push 0
// 00694282  50                   push eax
// 00694283  56                   push esi
// 00694284  e86dc2f9ff           call 0x6304f6
// 00694289  50                   push eax
// 0069428a  6880000000           push 0x80
// 0069428f  8bcd                 mov ecx, ebp
// 00694291  e850baf9ff           call 0x62fce6
// 00694296  85c0                 test eax, eax
// 00694298  5b                   pop ebx
// 00694299  7419                 je 0x6942b4
// 0069429b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069429f  85c9                 test ecx, ecx
// 006942a1  740c                 je 0x6942af
// 006942a3  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006942a6  5f                   pop edi
// 006942a7  5e                   pop esi
// 006942a8  894d38               mov dword ptr [ebp + 0x38], ecx
// 006942ab  5d                   pop ebp
// 006942ac  c20800               ret 8
// 006942af  33c9                 xor ecx, ecx
// 006942b1  894d38               mov dword ptr [ebp + 0x38], ecx
// 006942b4  5f                   pop edi
// 006942b5  5e                   pop esi
// 006942b6  5d                   pop ebp
// 006942b7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?Create@CXTPToolTipContextToolTip@@QAEHPAVCWnd@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp

// roc 2009-12 00805c30  unit: CXTPCommandBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805c30
//
// 00805c30  8b442408             mov eax, dword ptr [esp + 8]
// 00805c34  56                   push esi
// 00805c35  8bf1                 mov esi, ecx
// 00805c37  0fbfc8               movsx ecx, ax
// 00805c3a  c1e810               shr eax, 0x10
// 00805c3d  98                   cwde 
// 00805c3e  50                   push eax
// 00805c3f  51                   push ecx
// 00805c40  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00805c46  e8d5f90300           call 0x845620
// 00805c4b  85c0                 test eax, eax
// 00805c4d  7441                 je 0x805c90
// 00805c4f  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 00805c55  85c9                 test ecx, ecx
// 00805c57  7e0b                 jle 0x805c64
// 00805c59  8bc1                 mov eax, ecx
// 00805c5b  0500000100           add eax, 0x10000
// 00805c60  5e                   pop esi
// 00805c61  c20800               ret 8
// 00805c64  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 00805c6a  85c9                 test ecx, ecx
// 00805c6c  7413                 je 0x805c81
// 00805c6e  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00805c71  85c0                 test eax, eax
// 00805c73  7f12                 jg 0x805c87
// 00805c75  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00805c78  0500000100           add eax, 0x10000
// 00805c7d  5e                   pop esi
// 00805c7e  c20800               ret 8
// 00805c81  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 00805c87  0500000100           add eax, 0x10000
// 00805c8c  5e                   pop esi
// 00805c8d  c20800               ret 8
// 00805c90  8b4620               mov eax, dword ptr [esi + 0x20]
// 00805c93  50                   push eax
// 00805c94  ff15e8ca9800         call dword ptr [0x98cae8]
// 00805c9a  0fb7c0               movzx eax, ax
// 00805c9d  85c0                 test eax, eax
// 00805c9f  7409                 je 0x805caa
// 00805ca1  0500000500           add eax, 0x50000
// 00805ca6  5e                   pop esi
// 00805ca7  c20800               ret 8
// 00805caa  33c0                 xor eax, eax
// 00805cac  5e                   pop esi
// 00805cad  c20800               ret 8
// copied from an identical function in another client (function ?OnHelpHitTest@CXTPCommandBar@@QAEJIJ@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCommandBar.cpp
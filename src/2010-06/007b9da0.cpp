// roc 2010-06 007b9da0  unit: CXTPCommandBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b9da0
//
// 007b9da0  8b442408             mov eax, dword ptr [esp + 8]
// 007b9da4  56                   push esi
// 007b9da5  8bf1                 mov esi, ecx
// 007b9da7  0fbfc8               movsx ecx, ax
// 007b9daa  c1e810               shr eax, 0x10
// 007b9dad  98                   cwde 
// 007b9dae  50                   push eax
// 007b9daf  51                   push ecx
// 007b9db0  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007b9db6  e805f90300           call 0x7f96c0
// 007b9dbb  85c0                 test eax, eax
// 007b9dbd  7441                 je 0x7b9e00
// 007b9dbf  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 007b9dc5  85c9                 test ecx, ecx
// 007b9dc7  7e0b                 jle 0x7b9dd4
// 007b9dc9  8bc1                 mov eax, ecx
// 007b9dcb  0500000100           add eax, 0x10000
// 007b9dd0  5e                   pop esi
// 007b9dd1  c20800               ret 8
// 007b9dd4  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 007b9dda  85c9                 test ecx, ecx
// 007b9ddc  7413                 je 0x7b9df1
// 007b9dde  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007b9de1  85c0                 test eax, eax
// 007b9de3  7f12                 jg 0x7b9df7
// 007b9de5  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007b9de8  0500000100           add eax, 0x10000
// 007b9ded  5e                   pop esi
// 007b9dee  c20800               ret 8
// 007b9df1  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 007b9df7  0500000100           add eax, 0x10000
// 007b9dfc  5e                   pop esi
// 007b9dfd  c20800               ret 8
// 007b9e00  8b4620               mov eax, dword ptr [esi + 0x20]
// 007b9e03  50                   push eax
// 007b9e04  ff15b8ba9e00         call dword ptr [0x9ebab8]
// 007b9e0a  0fb7c0               movzx eax, ax
// 007b9e0d  85c0                 test eax, eax
// 007b9e0f  7409                 je 0x7b9e1a
// 007b9e11  0500000500           add eax, 0x50000
// 007b9e16  5e                   pop esi
// 007b9e17  c20800               ret 8
// 007b9e1a  33c0                 xor eax, eax
// 007b9e1c  5e                   pop esi
// 007b9e1d  c20800               ret 8
// copied from an identical function in another client (function ?OnHelpHitTest@CXTPCommandBar@@QAEJIJ@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCommandBar.cpp
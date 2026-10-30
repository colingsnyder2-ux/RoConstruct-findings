// roc 2011-06 0081c1f0  unit: CXTPCommandBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081c1f0
//
// 0081c1f0  8b442408             mov eax, dword ptr [esp + 8]
// 0081c1f4  56                   push esi
// 0081c1f5  8bf1                 mov esi, ecx
// 0081c1f7  0fbfc8               movsx ecx, ax
// 0081c1fa  c1e810               shr eax, 0x10
// 0081c1fd  98                   cwde 
// 0081c1fe  50                   push eax
// 0081c1ff  51                   push ecx
// 0081c200  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081c206  e8f5ad0300           call 0x857000
// 0081c20b  85c0                 test eax, eax
// 0081c20d  7441                 je 0x81c250
// 0081c20f  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 0081c215  85c9                 test ecx, ecx
// 0081c217  7e0b                 jle 0x81c224
// 0081c219  8bc1                 mov eax, ecx
// 0081c21b  0500000100           add eax, 0x10000
// 0081c220  5e                   pop esi
// 0081c221  c20800               ret 8
// 0081c224  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 0081c22a  85c9                 test ecx, ecx
// 0081c22c  7413                 je 0x81c241
// 0081c22e  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0081c231  85c0                 test eax, eax
// 0081c233  7f12                 jg 0x81c247
// 0081c235  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0081c238  0500000100           add eax, 0x10000
// 0081c23d  5e                   pop esi
// 0081c23e  c20800               ret 8
// 0081c241  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0081c247  0500000100           add eax, 0x10000
// 0081c24c  5e                   pop esi
// 0081c24d  c20800               ret 8
// 0081c250  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081c253  50                   push eax
// 0081c254  ff15f41aa400         call dword ptr [0xa41af4]
// 0081c25a  0fb7c0               movzx eax, ax
// 0081c25d  85c0                 test eax, eax
// 0081c25f  7409                 je 0x81c26a
// 0081c261  0500000500           add eax, 0x50000
// 0081c266  5e                   pop esi
// 0081c267  c20800               ret 8
// 0081c26a  33c0                 xor eax, eax
// 0081c26c  5e                   pop esi
// 0081c26d  c20800               ret 8
// copied from an identical function in another client (function ?OnHelpHitTest@CXTPCommandBar@@QAEJIJ@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCommandBar.cpp
// roc 2012-06 009944e0  unit: CXTPCommandBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009944e0
//
// 009944e0  8b442408             mov eax, dword ptr [esp + 8]
// 009944e4  56                   push esi
// 009944e5  8bf1                 mov esi, ecx
// 009944e7  0fbfc8               movsx ecx, ax
// 009944ea  c1e810               shr eax, 0x10
// 009944ed  98                   cwde 
// 009944ee  50                   push eax
// 009944ef  51                   push ecx
// 009944f0  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 009944f6  e8d5af0300           call 0x9cf4d0
// 009944fb  85c0                 test eax, eax
// 009944fd  7441                 je 0x994540
// 009944ff  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 00994505  85c9                 test ecx, ecx
// 00994507  7e0b                 jle 0x994514
// 00994509  8bc1                 mov eax, ecx
// 0099450b  0500000100           add eax, 0x10000
// 00994510  5e                   pop esi
// 00994511  c20800               ret 8
// 00994514  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 0099451a  85c9                 test ecx, ecx
// 0099451c  7413                 je 0x994531
// 0099451e  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00994521  85c0                 test eax, eax
// 00994523  7f12                 jg 0x994537
// 00994525  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00994528  0500000100           add eax, 0x10000
// 0099452d  5e                   pop esi
// 0099452e  c20800               ret 8
// 00994531  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 00994537  0500000100           add eax, 0x10000
// 0099453c  5e                   pop esi
// 0099453d  c20800               ret 8
// 00994540  8b4620               mov eax, dword ptr [esi + 0x20]
// 00994543  50                   push eax
// 00994544  ff15043db200         call dword ptr [0xb23d04]
// 0099454a  0fb7c0               movzx eax, ax
// 0099454d  85c0                 test eax, eax
// 0099454f  7409                 je 0x99455a
// 00994551  0500000500           add eax, 0x50000
// 00994556  5e                   pop esi
// 00994557  c20800               ret 8
// 0099455a  33c0                 xor eax, eax
// 0099455c  5e                   pop esi
// 0099455d  c20800               ret 8
// copied from an identical function in another client (function ?OnHelpHitTest@CXTPCommandBar@@QAEJIJ@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCommandBar.cpp
// roc 2009-06 0072eaf0  unit: CXTPCommandBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072eaf0
//
// 0072eaf0  8b442408             mov eax, dword ptr [esp + 8]
// 0072eaf4  56                   push esi
// 0072eaf5  8bf1                 mov esi, ecx
// 0072eaf7  0fbfc8               movsx ecx, ax
// 0072eafa  c1e810               shr eax, 0x10
// 0072eafd  98                   cwde 
// 0072eafe  50                   push eax
// 0072eaff  51                   push ecx
// 0072eb00  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0072eb06  e835bd0300           call 0x76a840
// 0072eb0b  85c0                 test eax, eax
// 0072eb0d  7441                 je 0x72eb50
// 0072eb0f  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 0072eb15  85c9                 test ecx, ecx
// 0072eb17  7e0b                 jle 0x72eb24
// 0072eb19  8bc1                 mov eax, ecx
// 0072eb1b  0500000100           add eax, 0x10000
// 0072eb20  5e                   pop esi
// 0072eb21  c20800               ret 8
// 0072eb24  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 0072eb2a  85c9                 test ecx, ecx
// 0072eb2c  7413                 je 0x72eb41
// 0072eb2e  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0072eb31  85c0                 test eax, eax
// 0072eb33  7f12                 jg 0x72eb47
// 0072eb35  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0072eb38  0500000100           add eax, 0x10000
// 0072eb3d  5e                   pop esi
// 0072eb3e  c20800               ret 8
// 0072eb41  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0072eb47  0500000100           add eax, 0x10000
// 0072eb4c  5e                   pop esi
// 0072eb4d  c20800               ret 8
// 0072eb50  8b4620               mov eax, dword ptr [esi + 0x20]
// 0072eb53  50                   push eax
// 0072eb54  ff15fcee8900         call dword ptr [0x89eefc]
// 0072eb5a  0fb7c0               movzx eax, ax
// 0072eb5d  85c0                 test eax, eax
// 0072eb5f  7409                 je 0x72eb6a
// 0072eb61  0500000500           add eax, 0x50000
// 0072eb66  5e                   pop esi
// 0072eb67  c20800               ret 8
// 0072eb6a  33c0                 xor eax, eax
// 0072eb6c  5e                   pop esi
// 0072eb6d  c20800               ret 8
// copied from an identical function in another client (function ?OnHelpHitTest@CXTPCommandBar@@QAEJIJ@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCommandBar.cpp
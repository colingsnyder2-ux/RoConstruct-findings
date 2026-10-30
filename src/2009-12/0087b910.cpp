// roc 2009-12 0087b910  unit: CXTPControlGallery  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b910
//
// 0087b910  83ec08               sub esp, 8
// 0087b913  e838baffff           call 0x877350
// 0087b918  85c0                 test eax, eax
// 0087b91a  7506                 jne 0x87b922
// 0087b91c  83c408               add esp, 8
// 0087b91f  c21000               ret 0x10
// 0087b922  66837c241000         cmp word ptr [esp + 0x10], 0
// 0087b928  8b5020               mov edx, dword ptr [eax + 0x20]
// 0087b92b  8b4024               mov eax, dword ptr [eax + 0x24]
// 0087b92e  891424               mov dword ptr [esp], edx
// 0087b931  7d05                 jge 0x87b938
// 0087b933  8d1440               lea edx, [eax + eax*2]
// 0087b936  eb0b                 jmp 0x87b943
// 0087b938  8d148500000000       lea edx, [eax*4]
// 0087b93f  2bd0                 sub edx, eax
// 0087b941  f7da                 neg edx
// 0087b943  8b810c020000         mov eax, dword ptr [ecx + 0x20c]
// 0087b949  03c2                 add eax, edx
// 0087b94b  50                   push eax
// 0087b94c  e87ff2ffff           call 0x87abd0
// 0087b951  b801000000           mov eax, 1
// 0087b956  83c408               add esp, 8
// 0087b959  c21000               ret 0x10
// copied from an identical function in another client (function ?OnHookMouseWheel@CXTPControlGallery@@MAEHIFVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp
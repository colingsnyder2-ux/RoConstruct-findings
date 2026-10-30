// roc 2009-12 008c0520  unit: CXTPShadowsManager::CShadowWnd  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0520
//
// 008c0520  8b442408             mov eax, dword ptr [esp + 8]
// 008c0524  56                   push esi
// 008c0525  8bf1                 mov esi, ecx
// 008c0527  83f818               cmp eax, 0x18
// 008c052a  752a                 jne 0x8c0556
// 008c052c  57                   push edi
// 008c052d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008c0531  833f00               cmp dword ptr [edi], 0
// 008c0534  750a                 jne 0x8c0540
// 008c0536  6a00                 push 0
// 008c0538  8d4eac               lea ecx, [esi - 0x54]
// 008c053b  e80836f3ff           call 0x7f3b48
// 008c0540  833f01               cmp dword ptr [edi], 1
// 008c0543  5f                   pop edi
// 008c0544  7540                 jne 0x8c0586
// 008c0546  6a08                 push 8
// 008c0548  8d4eac               lea ecx, [esi - 0x54]
// 008c054b  e8f835f3ff           call 0x7f3b48
// 008c0550  33c0                 xor eax, eax
// 008c0552  5e                   pop esi
// 008c0553  c21400               ret 0x14
// 008c0556  83f802               cmp eax, 2
// 008c0559  752b                 jne 0x8c0586
// 008c055b  8d46ac               lea eax, [esi - 0x54]
// 008c055e  f7d8                 neg eax
// 008c0560  1bc0                 sbb eax, eax
// 008c0562  23c6                 and eax, esi
// 008c0564  50                   push eax
// 008c0565  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c0569  50                   push eax
// 008c056a  e87103fbff           call 0x8708e0
// 008c056f  8bc8                 mov ecx, eax
// 008c0571  e8ea07fbff           call 0x870d60
// 008c0576  83c6ac               add esi, -0x54
// 008c0579  56                   push esi
// 008c057a  e831ffffff           call 0x8c04b0
// 008c057f  8bc8                 mov ecx, eax
// 008c0581  e87afdffff           call 0x8c0300
// 008c0586  33c0                 xor eax, eax
// 008c0588  5e                   pop esi
// 008c0589  c21400               ret 0x14
// copied from an identical function in another client (function ?OnHookMessage@CShadowWnd@CXTPShadowsManager@@EAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPShadowsManager.cpp
// roc 2009-12 0083c390  unit: CXTPAccessible  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c390
//
// 0083c390  56                   push esi
// 0083c391  57                   push edi
// 0083c392  8bf1                 mov esi, ecx
// 0083c394  e8b7f4ffff           call 0x83b850
// 0083c399  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0083c39d  57                   push edi
// 0083c39e  ff151cb29800         call dword ptr [0x98b21c]
// 0083c3a4  894608               mov dword ptr [esi + 8], eax
// 0083c3a7  85c0                 test eax, eax
// 0083c3a9  741b                 je 0x83c3c6
// 0083c3ab  57                   push edi
// 0083c3ac  8d4e04               lea ecx, [esi + 4]
// 0083c3af  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0083c3b6  ff155cde9800         call dword ptr [0x98de5c]
// 0083c3bc  5f                   pop edi
// 0083c3bd  b801000000           mov eax, 1
// 0083c3c2  5e                   pop esi
// 0083c3c3  c20400               ret 4
// 0083c3c6  5f                   pop edi
// 0083c3c7  33c0                 xor eax, eax
// 0083c3c9  5e                   pop esi
// 0083c3ca  c20400               ret 4
// copied from an identical function in another client (function ?GetModuleHandleA@CXTPModuleHandle@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp
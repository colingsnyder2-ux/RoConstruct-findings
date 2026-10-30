// roc 2009-06 00721470  unit: PAVCXTPControlAction::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721470
//
// 00721470  8b5164               mov edx, dword ptr [ecx + 0x64]
// 00721473  33c0                 xor eax, eax
// 00721475  85d2                 test edx, edx
// 00721477  7e21                 jle 0x72149a
// 00721479  56                   push esi
// 0072147a  8b742408             mov esi, dword ptr [esp + 8]
// 0072147e  83c15c               add ecx, 0x5c
// 00721481  57                   push edi
// 00721482  85c0                 test eax, eax
// 00721484  7c38                 jl 0x7214be
// 00721486  3b4108               cmp eax, dword ptr [ecx + 8]
// 00721489  7d33                 jge 0x7214be
// 0072148b  8b7904               mov edi, dword ptr [ecx + 4]
// 0072148e  393487               cmp dword ptr [edi + eax*4], esi
// 00721491  740a                 je 0x72149d
// 00721493  40                   inc eax
// 00721494  3bc2                 cmp eax, edx
// 00721496  7cea                 jl 0x721482
// 00721498  5f                   pop edi
// 00721499  5e                   pop esi
// 0072149a  c20400               ret 4
// 0072149d  6a01                 push 1
// 0072149f  50                   push eax
// 007214a0  e8bb110300           call 0x752660
// 007214a5  5f                   pop edi
// 007214a6  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 007214b0  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 007214ba  5e                   pop esi
// 007214bb  c20400               ret 4
// 007214be  e82178ffff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp
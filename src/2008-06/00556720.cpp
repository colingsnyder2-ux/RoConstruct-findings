// roc 2008-06 00556720  unit: RBX::VRunService::?$BoundFuncDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556720
//
// 00556720  6aff                 push -1
// 00556722  6878df7c00           push 0x7cdf78
// 00556727  64a100000000         mov eax, dword ptr fs:[0]
// 0055672d  50                   push eax
// 0055672e  64892500000000       mov dword ptr fs:[0], esp
// 00556735  51                   push ecx
// 00556736  56                   push esi
// 00556737  8bf1                 mov esi, ecx
// 00556739  89742404             mov dword ptr [esp + 4], esi
// 0055673d  e86edcffff           call 0x5543b0
// 00556742  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055674a  e8e1fcffff           call 0x556430
// 0055674f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00556753  89461c               mov dword ptr [esi + 0x1c], eax
// 00556756  c706b4d58200         mov dword ptr [esi], 0x82d5b4
// 0055675c  c74610a4d58200       mov dword ptr [esi + 0x10], 0x82d5a4
// 00556763  c746149cd58200       mov dword ptr [esi + 0x14], 0x82d59c
// 0055676a  c7462094d58200       mov dword ptr [esi + 0x20], 0x82d594
// 00556771  c7462484d58200       mov dword ptr [esi + 0x24], 0x82d584
// 00556778  c7464474d58200       mov dword ptr [esi + 0x44], 0x82d574
// 0055677f  c7466464d58200       mov dword ptr [esi + 0x64], 0x82d564
// 00556786  c7868400000054d58200 mov dword ptr [esi + 0x84], 0x82d554
// 00556790  c786a400000044d58200 mov dword ptr [esi + 0xa4], 0x82d544
// 0055679a  c786c400000034d58200 mov dword ptr [esi + 0xc4], 0x82d534
// 005567a4  8bc6                 mov eax, esi
// 005567a6  5e                   pop esi
// 005567a7  64890d00000000       mov dword ptr fs:[0], ecx
// 005567ae  83c410               add esp, 0x10
// 005567b1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2009-12 008ef190  unit: CXTPRibbonGroupPopupToolBar  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef190
//
// 008ef190  6aff                 push -1
// 008ef192  6848689600           push 0x966848
// 008ef197  64a100000000         mov eax, dword ptr fs:[0]
// 008ef19d  50                   push eax
// 008ef19e  51                   push ecx
// 008ef19f  56                   push esi
// 008ef1a0  57                   push edi
// 008ef1a1  a10052b600           mov eax, dword ptr [0xb65200]
// 008ef1a6  33c4                 xor eax, esp
// 008ef1a8  50                   push eax
// 008ef1a9  8d442410             lea eax, [esp + 0x10]
// 008ef1ad  64a300000000         mov dword ptr fs:[0], eax
// 008ef1b3  8bf1                 mov esi, ecx
// 008ef1b5  8974240c             mov dword ptr [esp + 0xc], esi
// 008ef1b9  e8725df5ff           call 0x844f30
// 008ef1be  8d965c020000         lea edx, [esi + 0x25c]
// 008ef1c4  8bca                 mov ecx, edx
// 008ef1c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008ef1ce  e84df8ffff           call 0x8eea20
// 008ef1d3  56                   push esi
// 008ef1d4  8bca                 mov ecx, edx
// 008ef1d6  c70604dea000         mov dword ptr [esi], 0xa0de04
// 008ef1dc  c74654f4dda000       mov dword ptr [esi + 0x54], 0xa0ddf4
// 008ef1e3  c7465c94dda000       mov dword ptr [esi + 0x5c], 0xa0dd94
// 008ef1ea  c70280dda000         mov dword ptr [edx], 0xa0dd80
// 008ef1f0  e82bfdffff           call 0x8eef20
// 008ef1f5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008ef1f9  8bcf                 mov ecx, edi
// 008ef1fb  e830b3ffff           call 0x8ea530
// 008ef200  898678020000         mov dword ptr [esi + 0x278], eax
// 008ef206  8b07                 mov eax, dword ptr [edi]
// 008ef208  8b10                 mov edx, dword ptr [eax]
// 008ef20a  8bcf                 mov ecx, edi
// 008ef20c  ffd2                 call edx
// 008ef20e  8bc8                 mov ecx, eax
// 008ef210  e84d50f0ff           call 0x7f4262
// 008ef215  898674020000         mov dword ptr [esi + 0x274], eax
// 008ef21b  89b08c000000         mov dword ptr [eax + 0x8c], esi
// 008ef221  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008ef227  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008ef22d  898888000000         mov dword ptr [eax + 0x88], ecx
// 008ef233  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008ef239  8b11                 mov edx, dword ptr [ecx]
// 008ef23b  8b4260               mov eax, dword ptr [edx + 0x60]
// 008ef23e  57                   push edi
// 008ef23f  ffd0                 call eax
// 008ef241  8b5744               mov edx, dword ptr [edi + 0x44]
// 008ef244  8d4744               lea eax, [edi + 0x44]
// 008ef247  83ec10               sub esp, 0x10
// 008ef24a  8bcc                 mov ecx, esp
// 008ef24c  8911                 mov dword ptr [ecx], edx
// 008ef24e  8b5004               mov edx, dword ptr [eax + 4]
// 008ef251  895104               mov dword ptr [ecx + 4], edx
// 008ef254  8b5008               mov edx, dword ptr [eax + 8]
// 008ef257  8b400c               mov eax, dword ptr [eax + 0xc]
// 008ef25a  895108               mov dword ptr [ecx + 8], edx
// 008ef25d  89410c               mov dword ptr [ecx + 0xc], eax
// 008ef260  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008ef266  e895f5fdff           call 0x8ce800
// 008ef26b  6a00                 push 0
// 008ef26d  6800002000           push 0x200000
// 008ef272  8bce                 mov ecx, esi
// 008ef274  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 008ef27e  e8cd54f1ff           call 0x804750
// 008ef283  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008ef289  e8d250f1ff           call 0x804360
// 008ef28e  50                   push eax
// 008ef28f  8bce                 mov ecx, esi
// 008ef291  e8aa50f1ff           call 0x804340
// 008ef296  8bc6                 mov eax, esi
// 008ef298  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ef29c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ef2a3  59                   pop ecx
// 008ef2a4  5f                   pop edi
// 008ef2a5  5e                   pop esi
// 008ef2a6  83c410               add esp, 0x10
// 008ef2a9  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPRibbonTabPopupToolBar@@QAE@PAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonPopups.cpp
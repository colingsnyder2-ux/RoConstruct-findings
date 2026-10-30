// roc 2007-03 00712370  unit: seg_00710000  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00712370
//
// 00712370  6aff                 push -1
// 00712372  6809bb7600           push 0x76bb09
// 00712377  64a100000000         mov eax, dword ptr fs:[0]
// 0071237d  50                   push eax
// 0071237e  83ec10               sub esp, 0x10
// 00712381  53                   push ebx
// 00712382  56                   push esi
// 00712383  57                   push edi
// 00712384  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00712389  33c4                 xor eax, esp
// 0071238b  50                   push eax
// 0071238c  8d442420             lea eax, [esp + 0x20]
// 00712390  64a300000000         mov dword ptr fs:[0], eax
// 00712396  8bf1                 mov esi, ecx
// 00712398  e8b3d1f1ff           call 0x62f550
// 0071239d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007123a1  8bd8                 mov ebx, eax
// 007123a3  8b03                 mov eax, dword ptr [ebx]
// 007123a5  8b5078               mov edx, dword ptr [eax + 0x78]
// 007123a8  56                   push esi
// 007123a9  57                   push edi
// 007123aa  8bcb                 mov ecx, ebx
// 007123ac  ffd2                 call edx
// 007123ae  8b03                 mov eax, dword ptr [ebx]
// 007123b0  8b507c               mov edx, dword ptr [eax + 0x7c]
// 007123b3  56                   push esi
// 007123b4  8bcb                 mov ecx, ebx
// 007123b6  ffd2                 call edx
// 007123b8  8b17                 mov edx, dword ptr [edi]
// 007123ba  50                   push eax
// 007123bb  8b4238               mov eax, dword ptr [edx + 0x38]
// 007123be  8bcf                 mov ecx, edi
// 007123c0  ffd0                 call eax
// 007123c2  6a01                 push 1
// 007123c4  8bcf                 mov ecx, edi
// 007123c6  e8d5870200           call 0x73aba0
// 007123cb  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 007123d1  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 007123d7  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 007123dd  8b9ecc000000         mov ebx, dword ptr [esi + 0xcc]
// 007123e3  83c007               add eax, 7
// 007123e6  89542418             mov dword ptr [esp + 0x18], edx
// 007123ea  8b16                 mov edx, dword ptr [esi]
// 007123ec  8b5258               mov edx, dword ptr [edx + 0x58]
// 007123ef  89442410             mov dword ptr [esp + 0x10], eax
// 007123f3  8d442430             lea eax, [esp + 0x30]
// 007123f7  894c2414             mov dword ptr [esp + 0x14], ecx
// 007123fb  50                   push eax
// 007123fc  8bce                 mov ecx, esi
// 007123fe  895c2420             mov dword ptr [esp + 0x20], ebx
// 00712402  ffd2                 call edx
// 00712404  8bf0                 mov esi, eax
// 00712406  8b1f                 mov ebx, dword ptr [edi]
// 00712408  6a24                 push 0x24
// 0071240a  8d442414             lea eax, [esp + 0x14]
// 0071240e  50                   push eax
// 0071240f  8bce                 mov ecx, esi
// 00712411  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00712419  ff1520db7700         call dword ptr [0x77db20]
// 0071241f  50                   push eax
// 00712420  8bce                 mov ecx, esi
// 00712422  ff1554dd7700         call dword ptr [0x77dd54]
// 00712428  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0071242b  50                   push eax
// 0071242c  8bcf                 mov ecx, edi
// 0071242e  ffd2                 call edx
// 00712430  8d4c2430             lea ecx, [esp + 0x30]
// 00712434  ff1578dd7700         call dword ptr [0x77dd78]
// 0071243a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071243e  64890d00000000       mov dword ptr fs:[0], ecx
// 00712445  59                   pop ecx
// 00712446  5f                   pop edi
// 00712447  5e                   pop esi
// 00712448  5b                   pop ebx
// 00712449  83c41c               add esp, 0x1c
// 0071244c  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListItem@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp
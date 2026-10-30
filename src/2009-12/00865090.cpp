// roc 2009-12 00865090  unit: CXTPPropertyGridItem  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865090
//
// 00865090  6aff                 push -1
// 00865092  6839ee9500           push 0x95ee39
// 00865097  64a100000000         mov eax, dword ptr fs:[0]
// 0086509d  50                   push eax
// 0086509e  83ec08               sub esp, 8
// 008650a1  56                   push esi
// 008650a2  57                   push edi
// 008650a3  a10052b600           mov eax, dword ptr [0xb65200]
// 008650a8  33c4                 xor eax, esp
// 008650aa  50                   push eax
// 008650ab  8d442414             lea eax, [esp + 0x14]
// 008650af  64a300000000         mov dword ptr fs:[0], eax
// 008650b5  8bf9                 mov edi, ecx
// 008650b7  8b07                 mov eax, dword ptr [edi]
// 008650b9  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 008650bf  ffd2                 call edx
// 008650c1  8bf0                 mov esi, eax
// 008650c3  8b06                 mov eax, dword ptr [esi]
// 008650c5  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008650cb  8bce                 mov ecx, esi
// 008650cd  ffd2                 call edx
// 008650cf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008650d2  85c0                 test eax, eax
// 008650d4  0f84af000000         je 0x865189
// 008650da  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 008650e0  0f85a3000000         jne 0x865189
// 008650e6  8d4c240c             lea ecx, [esp + 0xc]
// 008650ea  ff1574de9800         call dword ptr [0x98de74]
// 008650f0  8d44240c             lea eax, [esp + 0xc]
// 008650f4  50                   push eax
// 008650f5  8bce                 mov ecx, esi
// 008650f7  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008650ff  e844edf8ff           call 0x7f3e48
// 00865104  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 0086510b  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 00865115  740e                 je 0x865125
// 00865117  8b17                 mov edx, dword ptr [edi]
// 00865119  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0086511f  8bcf                 mov ecx, edi
// 00865121  ffd0                 call eax
// 00865123  eb5a                 jmp 0x86517f
// 00865125  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 0086512c  7451                 je 0x86517f
// 0086512e  8b17                 mov edx, dword ptr [edi]
// 00865130  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00865136  8d44240c             lea eax, [esp + 0xc]
// 0086513a  50                   push eax
// 0086513b  8bcf                 mov ecx, edi
// 0086513d  ffd2                 call edx
// 0086513f  85c0                 test eax, eax
// 00865141  743c                 je 0x86517f
// 00865143  8d44240c             lea eax, [esp + 0xc]
// 00865147  50                   push eax
// 00865148  8d8fa4000000         lea ecx, [edi + 0xa4]
// 0086514e  51                   push ecx
// 0086514f  e83c13f9ff           call 0x7f6490
// 00865154  83c408               add esp, 8
// 00865157  84c0                 test al, al
// 00865159  7424                 je 0x86517f
// 0086515b  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 00865162  751b                 jne 0x86517f
// 00865164  51                   push ecx
// 00865165  8d542410             lea edx, [esp + 0x10]
// 00865169  8bcc                 mov ecx, esp
// 0086516b  89642414             mov dword ptr [esp + 0x14], esp
// 0086516f  52                   push edx
// 00865170  ff1594de9800         call dword ptr [0x98de94]
// 00865176  8b07                 mov eax, dword ptr [edi]
// 00865178  8b5064               mov edx, dword ptr [eax + 0x64]
// 0086517b  8bcf                 mov ecx, edi
// 0086517d  ffd2                 call edx
// 0086517f  8d4c240c             lea ecx, [esp + 0xc]
// 00865183  ff15c0de9800         call dword ptr [0x98dec0]
// 00865189  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086518d  64890d00000000       mov dword ptr fs:[0], ecx
// 00865194  59                   pop ecx
// 00865195  5f                   pop edi
// 00865196  5e                   pop esi
// 00865197  83c414               add esp, 0x14
// 0086519a  c3                   ret 
// copied from an identical function in another client (function ?OnValidateEdit@CXTPPropertyGridItem@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
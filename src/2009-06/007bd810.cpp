// roc 2009-06 007bd810  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bd810
//
// 007bd810  83ec14               sub esp, 0x14
// 007bd813  57                   push edi
// 007bd814  33ff                 xor edi, edi
// 007bd816  397924               cmp dword ptr [ecx + 0x24], edi
// 007bd819  894c2404             mov dword ptr [esp + 4], ecx
// 007bd81d  0f8e8e000000         jle 0x7bd8b1
// 007bd823  55                   push ebp
// 007bd824  53                   push ebx
// 007bd825  8d691c               lea ebp, [ecx + 0x1c]
// 007bd828  56                   push esi
// 007bd829  8da42400000000       lea esp, [esp]
// 007bd830  85ff                 test edi, edi
// 007bd832  0f8c80000000         jl 0x7bd8b8
// 007bd838  3b7d08               cmp edi, dword ptr [ebp + 8]
// 007bd83b  7d7b                 jge 0x7bd8b8
// 007bd83d  8b4504               mov eax, dword ptr [ebp + 4]
// 007bd840  8b34b8               mov esi, dword ptr [eax + edi*4]
// 007bd843  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007bd847  51                   push ecx
// 007bd848  8d5e10               lea ebx, [esi + 0x10]
// 007bd84b  53                   push ebx
// 007bd84c  8d54241c             lea edx, [esp + 0x1c]
// 007bd850  52                   push edx
// 007bd851  ff15f0ee8900         call dword ptr [0x89eef0]
// 007bd857  85c0                 test eax, eax
// 007bd859  7449                 je 0x7bd8a4
// 007bd85b  53                   push ebx
// 007bd85c  8d442418             lea eax, [esp + 0x18]
// 007bd860  50                   push eax
// 007bd861  ff15acee8900         call dword ptr [0x89eeac]
// 007bd867  85c0                 test eax, eax
// 007bd869  7421                 je 0x7bd88c
// 007bd86b  6a01                 push 1
// 007bd86d  57                   push edi
// 007bd86e  8bcd                 mov ecx, ebp
// 007bd870  e8eb4df9ff           call 0x752660
// 007bd875  85f6                 test esi, esi
// 007bd877  7410                 je 0x7bd889
// 007bd879  8bce                 mov ecx, esi
// 007bd87b  e8f0fdffff           call 0x7bd670
// 007bd880  56                   push esi
// 007bd881  e8acb1f5ff           call 0x718a32
// 007bd886  83c404               add esp, 4
// 007bd889  4f                   dec edi
// 007bd88a  eb18                 jmp 0x7bd8a4
// 007bd88c  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 007bd891  7411                 je 0x7bd8a4
// 007bd893  8b542428             mov edx, dword ptr [esp + 0x28]
// 007bd897  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007bd89a  8d4e24               lea ecx, [esi + 0x24]
// 007bd89d  52                   push edx
// 007bd89e  50                   push eax
// 007bd89f  e8ecfaffff           call 0x7bd390
// 007bd8a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007bd8a8  47                   inc edi
// 007bd8a9  3b7924               cmp edi, dword ptr [ecx + 0x24]
// 007bd8ac  7c82                 jl 0x7bd830
// 007bd8ae  5e                   pop esi
// 007bd8af  5b                   pop ebx
// 007bd8b0  5d                   pop ebp
// 007bd8b1  5f                   pop edi
// 007bd8b2  83c414               add esp, 0x14
// 007bd8b5  c20800               ret 8
// 007bd8b8  e827b4f5ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveIntersections@CXTPCommandBarAnimation@@IAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp
// roc 2011-06 00858550  unit: CXTPControls  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00858550
//
// 00858550  53                   push ebx
// 00858551  55                   push ebp
// 00858552  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00858556  57                   push edi
// 00858557  8bd9                 mov ebx, ecx
// 00858559  85ed                 test ebp, ebp
// 0085855b  0f8c93000000         jl 0x8585f4
// 00858561  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00858565  85ff                 test edi, edi
// 00858567  0f8e87000000         jle 0x8585f4
// 0085856d  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 00858570  7c0d                 jl 0x85857f
// 00858572  6aff                 push -1
// 00858574  8d042f               lea eax, [edi + ebp]
// 00858577  50                   push eax
// 00858578  e8c365feff           call 0x83eb40
// 0085857d  eb53                 jmp 0x8585d2
// 0085857f  56                   push esi
// 00858580  8b7308               mov esi, dword ptr [ebx + 8]
// 00858583  6aff                 push -1
// 00858585  8d0c3e               lea ecx, [esi + edi]
// 00858588  51                   push ecx
// 00858589  8bcb                 mov ecx, ebx
// 0085858b  e8b065feff           call 0x83eb40
// 00858590  8b4304               mov eax, dword ptr [ebx + 4]
// 00858593  2bf5                 sub esi, ebp
// 00858595  03f6                 add esi, esi
// 00858597  03f6                 add esi, esi
// 00858599  8d0ca8               lea ecx, [eax + ebp*4]
// 0085859c  56                   push esi
// 0085859d  51                   push ecx
// 0085859e  8d142f               lea edx, [edi + ebp]
// 008585a1  8d0490               lea eax, [eax + edx*4]
// 008585a4  56                   push esi
// 008585a5  50                   push eax
// 008585a6  ff15fc09a400         call dword ptr [0xa409fc]
// 008585ac  50                   push eax
// 008585ad  e85eaebaff           call 0x403410
// 008585b2  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008585b5  8d04bd00000000       lea eax, [edi*4]
// 008585bc  50                   push eax
// 008585bd  8d04ad00000000       lea eax, [ebp*4]
// 008585c4  03c8                 add ecx, eax
// 008585c6  6a00                 push 0
// 008585c8  51                   push ecx
// 008585c9  e8162dfbff           call 0x80b2e4
// 008585ce  83c420               add esp, 0x20
// 008585d1  5e                   pop esi
// 008585d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008585d6  03ed                 add ebp, ebp
// 008585d8  03ed                 add ebp, ebp
// 008585da  8d9b00000000         lea ebx, [ebx]
// 008585e0  8b5304               mov edx, dword ptr [ebx + 4]
// 008585e3  4f                   dec edi
// 008585e4  89042a               mov dword ptr [edx + ebp], eax
// 008585e7  83c504               add ebp, 4
// 008585ea  85ff                 test edi, edi
// 008585ec  75f2                 jne 0x8585e0
// 008585ee  5f                   pop edi
// 008585ef  5d                   pop ebp
// 008585f0  5b                   pop ebx
// 008585f1  c20c00               ret 0xc
// 008585f4  e8111dfbff           call 0x80a30a
// copied from an identical function in another client (function ?InsertAt@?$CArray@PAVCXTPPropertyGridItem@@PAV1@@@QAEXHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
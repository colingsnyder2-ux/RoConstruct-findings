// roc 2012-06 009bb2d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb2d0
//
// 009bb2d0  53                   push ebx
// 009bb2d1  55                   push ebp
// 009bb2d2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009bb2d6  57                   push edi
// 009bb2d7  8bd9                 mov ebx, ecx
// 009bb2d9  85ed                 test ebp, ebp
// 009bb2db  0f8c93000000         jl 0x9bb374
// 009bb2e1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009bb2e5  85ff                 test edi, edi
// 009bb2e7  0f8e87000000         jle 0x9bb374
// 009bb2ed  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 009bb2f0  7c0d                 jl 0x9bb2ff
// 009bb2f2  6aff                 push -1
// 009bb2f4  8d042f               lea eax, [edi + ebp]
// 009bb2f7  50                   push eax
// 009bb2f8  e863cffdff           call 0x998260
// 009bb2fd  eb53                 jmp 0x9bb352
// 009bb2ff  56                   push esi
// 009bb300  8b7308               mov esi, dword ptr [ebx + 8]
// 009bb303  6aff                 push -1
// 009bb305  8d0c3e               lea ecx, [esi + edi]
// 009bb308  51                   push ecx
// 009bb309  8bcb                 mov ecx, ebx
// 009bb30b  e850cffdff           call 0x998260
// 009bb310  8b4304               mov eax, dword ptr [ebx + 4]
// 009bb313  2bf5                 sub esi, ebp
// 009bb315  03f6                 add esi, esi
// 009bb317  03f6                 add esi, esi
// 009bb319  8d0ca8               lea ecx, [eax + ebp*4]
// 009bb31c  56                   push esi
// 009bb31d  51                   push ecx
// 009bb31e  8d142f               lea edx, [edi + ebp]
// 009bb321  8d0490               lea eax, [eax + edx*4]
// 009bb324  56                   push esi
// 009bb325  50                   push eax
// 009bb326  ff15c02ab200         call dword ptr [0xb22ac0]
// 009bb32c  50                   push eax
// 009bb32d  e8ee8ca4ff           call 0x404020
// 009bb332  8b4b04               mov ecx, dword ptr [ebx + 4]
// 009bb335  8d04bd00000000       lea eax, [edi*4]
// 009bb33c  50                   push eax
// 009bb33d  8d04ad00000000       lea eax, [ebp*4]
// 009bb344  03c8                 add ecx, eax
// 009bb346  6a00                 push 0
// 009bb348  51                   push ecx
// 009bb349  e82680fcff           call 0x983374
// 009bb34e  83c420               add esp, 0x20
// 009bb351  5e                   pop esi
// 009bb352  8b442414             mov eax, dword ptr [esp + 0x14]
// 009bb356  03ed                 add ebp, ebp
// 009bb358  03ed                 add ebp, ebp
// 009bb35a  8d9b00000000         lea ebx, [ebx]
// 009bb360  8b5304               mov edx, dword ptr [ebx + 4]
// 009bb363  4f                   dec edi
// 009bb364  89042a               mov dword ptr [edx + ebp], eax
// 009bb367  83c504               add ebp, 4
// 009bb36a  85ff                 test edi, edi
// 009bb36c  75f2                 jne 0x9bb360
// 009bb36e  5f                   pop edi
// 009bb36f  5d                   pop ebp
// 009bb370  5b                   pop ebx
// 009bb371  c20c00               ret 0xc
// 009bb374  e84770fcff           call 0x9823c0
// copied from an identical function in another client (function ?InsertAt@?$CArray@PAVCXTPPropertyGridItem@@PAV1@@@QAEXHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
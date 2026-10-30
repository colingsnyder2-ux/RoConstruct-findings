// from server: 100% by auto
// roc 2010-06 005761b0  unit: seg_00570000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005761b0
//
// 005761b0  53                   push ebx
// 005761b1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005761b5  55                   push ebp
// 005761b6  56                   push esi
// 005761b7  57                   push edi
// 005761b8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005761bc  8b6f04               mov ebp, dword ptr [edi + 4]
// 005761bf  81fbf0c99a3b         cmp ebx, 0x3b9ac9f0
// 005761c5  761c                 jbe 0x5761e3
// 005761c7  8b07                 mov eax, dword ptr [edi]
// 005761c9  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 005761d0  8b0f                 mov ecx, dword ptr [edi]
// 005761d2  c7411803000000       mov dword ptr [ecx + 0x18], 3
// 005761d9  8b17                 mov edx, dword ptr [edi]
// 005761db  8b02                 mov eax, dword ptr [edx]
// 005761dd  57                   push edi
// 005761de  ffd0                 call eax
// 005761e0  83c404               add esp, 4
// 005761e3  8bc3                 mov eax, ebx
// 005761e5  83e007               and eax, 7
// 005761e8  7609                 jbe 0x5761f3
// 005761ea  b908000000           mov ecx, 8
// 005761ef  2bc8                 sub ecx, eax
// 005761f1  03d9                 add ebx, ecx
// 005761f3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005761f7  85c0                 test eax, eax
// 005761f9  7c05                 jl 0x576200
// 005761fb  83f802               cmp eax, 2
// 005761fe  7c18                 jl 0x576218
// 00576200  8b17                 mov edx, dword ptr [edi]
// 00576202  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 00576209  8b0f                 mov ecx, dword ptr [edi]
// 0057620b  894118               mov dword ptr [ecx + 0x18], eax
// 0057620e  8b17                 mov edx, dword ptr [edi]
// 00576210  8b02                 mov eax, dword ptr [edx]
// 00576212  57                   push edi
// 00576213  ffd0                 call eax
// 00576215  83c404               add esp, 4
// 00576218  8d4b10               lea ecx, [ebx + 0x10]
// 0057621b  51                   push ecx
// 0057621c  57                   push edi
// 0057621d  e8ae830000           call 0x57e5d0
// 00576222  8bf0                 mov esi, eax
// 00576224  83c408               add esp, 8
// 00576227  85f6                 test esi, esi
// 00576229  751c                 jne 0x576247
// 0057622b  8b17                 mov edx, dword ptr [edi]
// 0057622d  c7421436000000       mov dword ptr [edx + 0x14], 0x36
// 00576234  8b07                 mov eax, dword ptr [edi]
// 00576236  c7401804000000       mov dword ptr [eax + 0x18], 4
// 0057623d  8b0f                 mov ecx, dword ptr [edi]
// 0057623f  8b11                 mov edx, dword ptr [ecx]
// 00576241  57                   push edi
// 00576242  ffd2                 call edx
// 00576244  83c404               add esp, 4
// 00576247  8d4310               lea eax, [ebx + 0x10]
// 0057624a  01454c               add dword ptr [ebp + 0x4c], eax
// 0057624d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00576251  8b4c853c             mov ecx, dword ptr [ebp + eax*4 + 0x3c]
// 00576255  895e04               mov dword ptr [esi + 4], ebx
// 00576258  890e                 mov dword ptr [esi], ecx
// 0057625a  c7460800000000       mov dword ptr [esi + 8], 0
// 00576261  8974853c             mov dword ptr [ebp + eax*4 + 0x3c], esi
// 00576265  5f                   pop edi
// 00576266  8d4610               lea eax, [esi + 0x10]
// 00576269  5e                   pop esi
// 0057626a  5d                   pop ebp
// 0057626b  5b                   pop ebx
// 0057626c  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_large)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

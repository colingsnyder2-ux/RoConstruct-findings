// roc 2010-06 005865c0  unit: seg_00580000  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005865c0
//
// 005865c0  53                   push ebx
// 005865c1  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 005865c4  55                   push ebp
// 005865c5  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005865c9  85ed                 test ebp, ebp
// 005865cb  7519                 jne 0x5865e6
// 005865cd  8b4620               mov eax, dword ptr [esi + 0x20]
// 005865d0  8b08                 mov ecx, dword ptr [eax]
// 005865d2  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 005865d9  8b4620               mov eax, dword ptr [esi + 0x20]
// 005865dc  8b10                 mov edx, dword ptr [eax]
// 005865de  50                   push eax
// 005865df  8b02                 mov eax, dword ptr [edx]
// 005865e1  ffd0                 call eax
// 005865e3  83c404               add esp, 4
// 005865e6  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005865ea  0f85fe000000         jne 0x5866ee
// 005865f0  57                   push edi
// 005865f1  8bcd                 mov ecx, ebp
// 005865f3  bf01000000           mov edi, 1
// 005865f8  d3e7                 shl edi, cl
// 005865fa  03dd                 add ebx, ebp
// 005865fc  b918000000           mov ecx, 0x18
// 00586601  2bcb                 sub ecx, ebx
// 00586603  4f                   dec edi
// 00586604  237c2410             and edi, dword ptr [esp + 0x10]
// 00586608  d3e7                 shl edi, cl
// 0058660a  0b7e18               or edi, dword ptr [esi + 0x18]
// 0058660d  83fb08               cmp ebx, 8
// 00586610  0f8cd1000000         jl 0x5866e7
// 00586616  8beb                 mov ebp, ebx
// 00586618  c1ed03               shr ebp, 3
// 0058661b  8bcd                 mov ecx, ebp
// 0058661d  f7d9                 neg ecx
// 0058661f  8d14cb               lea edx, [ebx + ecx*8]
// 00586622  896c2414             mov dword ptr [esp + 0x14], ebp
// 00586626  89542410             mov dword ptr [esp + 0x10], edx
// 0058662a  8d9b00000000         lea ebx, [ebx]
// 00586630  8b4610               mov eax, dword ptr [esi + 0x10]
// 00586633  8bdf                 mov ebx, edi
// 00586635  c1fb10               sar ebx, 0x10
// 00586638  81e3ff000000         and ebx, 0xff
// 0058663e  8818                 mov byte ptr [eax], bl
// 00586640  ff4610               inc dword ptr [esi + 0x10]
// 00586643  834614ff             add dword ptr [esi + 0x14], -1
// 00586647  753c                 jne 0x586685
// 00586649  8b4620               mov eax, dword ptr [esi + 0x20]
// 0058664c  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0058664f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00586652  50                   push eax
// 00586653  ffd1                 call ecx
// 00586655  83c404               add esp, 4
// 00586658  84c0                 test al, al
// 0058665a  7519                 jne 0x586675
// 0058665c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0058665f  8b02                 mov eax, dword ptr [edx]
// 00586661  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00586668  8b4620               mov eax, dword ptr [esi + 0x20]
// 0058666b  8b08                 mov ecx, dword ptr [eax]
// 0058666d  8b11                 mov edx, dword ptr [ecx]
// 0058666f  50                   push eax
// 00586670  ffd2                 call edx
// 00586672  83c404               add esp, 4
// 00586675  8b4500               mov eax, dword ptr [ebp]
// 00586678  894610               mov dword ptr [esi + 0x10], eax
// 0058667b  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0058667e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00586682  894e14               mov dword ptr [esi + 0x14], ecx
// 00586685  81fbff000000         cmp ebx, 0xff
// 0058668b  7546                 jne 0x5866d3
// 0058668d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00586690  c60200               mov byte ptr [edx], 0
// 00586693  ff4610               inc dword ptr [esi + 0x10]
// 00586696  834614ff             add dword ptr [esi + 0x14], -1
// 0058669a  7537                 jne 0x5866d3
// 0058669c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0058669f  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005866a2  50                   push eax
// 005866a3  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005866a6  ffd0                 call eax
// 005866a8  83c404               add esp, 4
// 005866ab  84c0                 test al, al
// 005866ad  7519                 jne 0x5866c8
// 005866af  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005866b2  8b11                 mov edx, dword ptr [ecx]
// 005866b4  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 005866bb  8b4620               mov eax, dword ptr [esi + 0x20]
// 005866be  8b08                 mov ecx, dword ptr [eax]
// 005866c0  8b11                 mov edx, dword ptr [ecx]
// 005866c2  50                   push eax
// 005866c3  ffd2                 call edx
// 005866c5  83c404               add esp, 4
// 005866c8  8b03                 mov eax, dword ptr [ebx]
// 005866ca  894610               mov dword ptr [esi + 0x10], eax
// 005866cd  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005866d0  894e14               mov dword ptr [esi + 0x14], ecx
// 005866d3  c1e708               shl edi, 8
// 005866d6  83ed01               sub ebp, 1
// 005866d9  896c2414             mov dword ptr [esp + 0x14], ebp
// 005866dd  0f854dffffff         jne 0x586630
// 005866e3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005866e7  897e18               mov dword ptr [esi + 0x18], edi
// 005866ea  895e1c               mov dword ptr [esi + 0x1c], ebx
// 005866ed  5f                   pop edi
// 005866ee  5d                   pop ebp
// 005866ef  5b                   pop ebx
// 005866f0  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c

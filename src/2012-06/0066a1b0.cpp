// roc 2012-06 0066a1b0  unit: seg_00660000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a1b0
//
// 0066a1b0  83ec10               sub esp, 0x10
// 0066a1b3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066a1b7  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 0066a1bd  53                   push ebx
// 0066a1be  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 0066a1c1  55                   push ebp
// 0066a1c2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0066a1c6  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0066a1c9  03c0                 add eax, eax
// 0066a1cb  03c0                 add eax, eax
// 0066a1cd  56                   push esi
// 0066a1ce  8b742428             mov esi, dword ptr [esp + 0x28]
// 0066a1d2  03c0                 add eax, eax
// 0066a1d4  52                   push edx
// 0066a1d5  89442410             mov dword ptr [esp + 0x10], eax
// 0066a1d9  03c0                 add eax, eax
// 0066a1db  56                   push esi
// 0066a1dc  e88ffcffff           call 0x669e70
// 0066a1e1  33db                 xor ebx, ebx
// 0066a1e3  83c408               add esp, 8
// 0066a1e6  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 0066a1e9  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066a1ed  0f8e7f000000         jle 0x66a272
// 0066a1f3  8bd6                 mov edx, esi
// 0066a1f5  89542410             mov dword ptr [esp + 0x10], edx
// 0066a1f9  57                   push edi
// 0066a1fa  8d9b00000000         lea ebx, [ebx]
// 0066a200  837c241000           cmp dword ptr [esp + 0x10], 0
// 0066a205  8b442430             mov eax, dword ptr [esp + 0x30]
// 0066a209  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0066a20c  8b02                 mov eax, dword ptr [edx]
// 0066a20e  8b4a04               mov ecx, dword ptr [edx + 4]
// 0066a211  bf01000000           mov edi, 1
// 0066a216  7648                 jbe 0x66a260
// 0066a218  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066a21c  89542424             mov dword ptr [esp + 0x24], edx
// 0066a220  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0066a224  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0066a228  03d3                 add edx, ebx
// 0066a22a  0fb619               movzx ebx, byte ptr [ecx]
// 0066a22d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066a231  0fb608               movzx ecx, byte ptr [eax]
// 0066a234  03df                 add ebx, edi
// 0066a236  03da                 add ebx, edx
// 0066a238  03cb                 add ecx, ebx
// 0066a23a  c1f902               sar ecx, 2
// 0066a23d  880e                 mov byte ptr [esi], cl
// 0066a23f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066a243  46                   inc esi
// 0066a244  83f703               xor edi, 3
// 0066a247  83c002               add eax, 2
// 0066a24a  83c102               add ecx, 2
// 0066a24d  836c242401           sub dword ptr [esp + 0x24], 1
// 0066a252  75cc                 jne 0x66a220
// 0066a254  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0066a258  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066a25c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066a260  43                   inc ebx
// 0066a261  83c208               add edx, 8
// 0066a264  3b5d0c               cmp ebx, dword ptr [ebp + 0xc]
// 0066a267  89542414             mov dword ptr [esp + 0x14], edx
// 0066a26b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0066a26f  7c8f                 jl 0x66a200
// 0066a271  5f                   pop edi
// 0066a272  5e                   pop esi
// 0066a273  5d                   pop ebp
// 0066a274  5b                   pop ebx
// 0066a275  83c410               add esp, 0x10
// 0066a278  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c

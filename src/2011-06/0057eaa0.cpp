// from server: 100% by auto
// roc 2011-06 0057eaa0  unit: seg_00570000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057eaa0
//
// 0057eaa0  83ec10               sub esp, 0x10
// 0057eaa3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057eaa7  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 0057eaad  53                   push ebx
// 0057eaae  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 0057eab1  55                   push ebp
// 0057eab2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0057eab6  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0057eab9  03c0                 add eax, eax
// 0057eabb  03c0                 add eax, eax
// 0057eabd  56                   push esi
// 0057eabe  8b742428             mov esi, dword ptr [esp + 0x28]
// 0057eac2  03c0                 add eax, eax
// 0057eac4  52                   push edx
// 0057eac5  89442410             mov dword ptr [esp + 0x10], eax
// 0057eac9  03c0                 add eax, eax
// 0057eacb  56                   push esi
// 0057eacc  e88ffcffff           call 0x57e760
// 0057ead1  33db                 xor ebx, ebx
// 0057ead3  83c408               add esp, 8
// 0057ead6  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 0057ead9  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057eadd  0f8e7f000000         jle 0x57eb62
// 0057eae3  8bd6                 mov edx, esi
// 0057eae5  89542410             mov dword ptr [esp + 0x10], edx
// 0057eae9  57                   push edi
// 0057eaea  8d9b00000000         lea ebx, [ebx]
// 0057eaf0  837c241000           cmp dword ptr [esp + 0x10], 0
// 0057eaf5  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057eaf9  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0057eafc  8b02                 mov eax, dword ptr [edx]
// 0057eafe  8b4a04               mov ecx, dword ptr [edx + 4]
// 0057eb01  bf01000000           mov edi, 1
// 0057eb06  7648                 jbe 0x57eb50
// 0057eb08  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057eb0c  89542424             mov dword ptr [esp + 0x24], edx
// 0057eb10  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0057eb14  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057eb18  03d3                 add edx, ebx
// 0057eb1a  0fb619               movzx ebx, byte ptr [ecx]
// 0057eb1d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057eb21  0fb608               movzx ecx, byte ptr [eax]
// 0057eb24  03df                 add ebx, edi
// 0057eb26  03da                 add ebx, edx
// 0057eb28  03cb                 add ecx, ebx
// 0057eb2a  c1f902               sar ecx, 2
// 0057eb2d  880e                 mov byte ptr [esi], cl
// 0057eb2f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057eb33  46                   inc esi
// 0057eb34  83f703               xor edi, 3
// 0057eb37  83c002               add eax, 2
// 0057eb3a  83c102               add ecx, 2
// 0057eb3d  836c242401           sub dword ptr [esp + 0x24], 1
// 0057eb42  75cc                 jne 0x57eb10
// 0057eb44  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0057eb48  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0057eb4c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057eb50  43                   inc ebx
// 0057eb51  83c208               add edx, 8
// 0057eb54  3b5d0c               cmp ebx, dword ptr [ebp + 0xc]
// 0057eb57  89542414             mov dword ptr [esp + 0x14], edx
// 0057eb5b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0057eb5f  7c8f                 jl 0x57eaf0
// 0057eb61  5f                   pop edi
// 0057eb62  5e                   pop esi
// 0057eb63  5d                   pop ebp
// 0057eb64  5b                   pop ebx
// 0057eb65  83c410               add esp, 0x10
// 0057eb68  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c

// from server: 100% by auto
// roc 2008-06 0053aa00  unit: seg_00530000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053aa00
//
// 0053aa00  83ec10               sub esp, 0x10
// 0053aa03  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053aa07  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 0053aa0d  53                   push ebx
// 0053aa0e  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 0053aa11  55                   push ebp
// 0053aa12  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0053aa16  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0053aa19  03c0                 add eax, eax
// 0053aa1b  03c0                 add eax, eax
// 0053aa1d  56                   push esi
// 0053aa1e  8b742428             mov esi, dword ptr [esp + 0x28]
// 0053aa22  03c0                 add eax, eax
// 0053aa24  52                   push edx
// 0053aa25  89442410             mov dword ptr [esp + 0x10], eax
// 0053aa29  03c0                 add eax, eax
// 0053aa2b  56                   push esi
// 0053aa2c  e88ffcffff           call 0x53a6c0
// 0053aa31  33db                 xor ebx, ebx
// 0053aa33  83c408               add esp, 8
// 0053aa36  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 0053aa39  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053aa3d  0f8e7f000000         jle 0x53aac2
// 0053aa43  8bd6                 mov edx, esi
// 0053aa45  89542410             mov dword ptr [esp + 0x10], edx
// 0053aa49  57                   push edi
// 0053aa4a  8d9b00000000         lea ebx, [ebx]
// 0053aa50  837c241000           cmp dword ptr [esp + 0x10], 0
// 0053aa55  8b442430             mov eax, dword ptr [esp + 0x30]
// 0053aa59  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0053aa5c  8b02                 mov eax, dword ptr [edx]
// 0053aa5e  8b4a04               mov ecx, dword ptr [edx + 4]
// 0053aa61  bf01000000           mov edi, 1
// 0053aa66  7648                 jbe 0x53aab0
// 0053aa68  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053aa6c  89542424             mov dword ptr [esp + 0x24], edx
// 0053aa70  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0053aa74  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0053aa78  03d3                 add edx, ebx
// 0053aa7a  0fb619               movzx ebx, byte ptr [ecx]
// 0053aa7d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053aa81  0fb608               movzx ecx, byte ptr [eax]
// 0053aa84  03df                 add ebx, edi
// 0053aa86  03da                 add ebx, edx
// 0053aa88  03cb                 add ecx, ebx
// 0053aa8a  c1f902               sar ecx, 2
// 0053aa8d  880e                 mov byte ptr [esi], cl
// 0053aa8f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053aa93  46                   inc esi
// 0053aa94  83f703               xor edi, 3
// 0053aa97  83c002               add eax, 2
// 0053aa9a  83c102               add ecx, 2
// 0053aa9d  836c242401           sub dword ptr [esp + 0x24], 1
// 0053aaa2  75cc                 jne 0x53aa70
// 0053aaa4  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0053aaa8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0053aaac  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053aab0  43                   inc ebx
// 0053aab1  83c208               add edx, 8
// 0053aab4  3b5d0c               cmp ebx, dword ptr [ebp + 0xc]
// 0053aab7  89542414             mov dword ptr [esp + 0x14], edx
// 0053aabb  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053aabf  7c8f                 jl 0x53aa50
// 0053aac1  5f                   pop edi
// 0053aac2  5e                   pop esi
// 0053aac3  5d                   pop ebp
// 0053aac4  5b                   pop ebx
// 0053aac5  83c410               add esp, 0x10
// 0053aac8  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c

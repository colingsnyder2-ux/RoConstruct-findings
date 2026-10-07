// roc 2010-06 005887f0  unit: seg_00580000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005887f0
//
// 005887f0  83ec10               sub esp, 0x10
// 005887f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005887f7  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 005887fd  53                   push ebx
// 005887fe  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 00588801  55                   push ebp
// 00588802  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00588806  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00588809  03c0                 add eax, eax
// 0058880b  03c0                 add eax, eax
// 0058880d  56                   push esi
// 0058880e  8b742428             mov esi, dword ptr [esp + 0x28]
// 00588812  03c0                 add eax, eax
// 00588814  52                   push edx
// 00588815  89442410             mov dword ptr [esp + 0x10], eax
// 00588819  03c0                 add eax, eax
// 0058881b  56                   push esi
// 0058881c  e88ffcffff           call 0x5884b0
// 00588821  33db                 xor ebx, ebx
// 00588823  83c408               add esp, 8
// 00588826  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00588829  895c2414             mov dword ptr [esp + 0x14], ebx
// 0058882d  0f8e7f000000         jle 0x5888b2
// 00588833  8bd6                 mov edx, esi
// 00588835  89542410             mov dword ptr [esp + 0x10], edx
// 00588839  57                   push edi
// 0058883a  8d9b00000000         lea ebx, [ebx]
// 00588840  837c241000           cmp dword ptr [esp + 0x10], 0
// 00588845  8b442430             mov eax, dword ptr [esp + 0x30]
// 00588849  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0058884c  8b02                 mov eax, dword ptr [edx]
// 0058884e  8b4a04               mov ecx, dword ptr [edx + 4]
// 00588851  bf01000000           mov edi, 1
// 00588856  7648                 jbe 0x5888a0
// 00588858  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058885c  89542424             mov dword ptr [esp + 0x24], edx
// 00588860  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00588864  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00588868  03d3                 add edx, ebx
// 0058886a  0fb619               movzx ebx, byte ptr [ecx]
// 0058886d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00588871  0fb608               movzx ecx, byte ptr [eax]
// 00588874  03df                 add ebx, edi
// 00588876  03da                 add ebx, edx
// 00588878  03cb                 add ecx, ebx
// 0058887a  c1f902               sar ecx, 2
// 0058887d  880e                 mov byte ptr [esi], cl
// 0058887f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00588883  46                   inc esi
// 00588884  83f703               xor edi, 3
// 00588887  83c002               add eax, 2
// 0058888a  83c102               add ecx, 2
// 0058888d  836c242401           sub dword ptr [esp + 0x24], 1
// 00588892  75cc                 jne 0x588860
// 00588894  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00588898  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0058889c  8b542414             mov edx, dword ptr [esp + 0x14]
// 005888a0  43                   inc ebx
// 005888a1  83c208               add edx, 8
// 005888a4  3b5d0c               cmp ebx, dword ptr [ebp + 0xc]
// 005888a7  89542414             mov dword ptr [esp + 0x14], edx
// 005888ab  895c2418             mov dword ptr [esp + 0x18], ebx
// 005888af  7c8f                 jl 0x588840
// 005888b1  5f                   pop edi
// 005888b2  5e                   pop esi
// 005888b3  5d                   pop ebp
// 005888b4  5b                   pop ebx
// 005888b5  83c410               add esp, 0x10
// 005888b8  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c

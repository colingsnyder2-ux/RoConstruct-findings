// roc 2009-12 00626c90  unit: seg_00620000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626c90
//
// 00626c90  83ec10               sub esp, 0x10
// 00626c93  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00626c97  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 00626c9d  53                   push ebx
// 00626c9e  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 00626ca1  55                   push ebp
// 00626ca2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00626ca6  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00626ca9  03c0                 add eax, eax
// 00626cab  03c0                 add eax, eax
// 00626cad  56                   push esi
// 00626cae  8b742428             mov esi, dword ptr [esp + 0x28]
// 00626cb2  03c0                 add eax, eax
// 00626cb4  52                   push edx
// 00626cb5  89442410             mov dword ptr [esp + 0x10], eax
// 00626cb9  03c0                 add eax, eax
// 00626cbb  56                   push esi
// 00626cbc  e88ffcffff           call 0x626950
// 00626cc1  33db                 xor ebx, ebx
// 00626cc3  83c408               add esp, 8
// 00626cc6  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00626cc9  895c2414             mov dword ptr [esp + 0x14], ebx
// 00626ccd  0f8e7f000000         jle 0x626d52
// 00626cd3  8bd6                 mov edx, esi
// 00626cd5  89542410             mov dword ptr [esp + 0x10], edx
// 00626cd9  57                   push edi
// 00626cda  8d9b00000000         lea ebx, [ebx]
// 00626ce0  837c241000           cmp dword ptr [esp + 0x10], 0
// 00626ce5  8b442430             mov eax, dword ptr [esp + 0x30]
// 00626ce9  8b3498               mov esi, dword ptr [eax + ebx*4]
// 00626cec  8b02                 mov eax, dword ptr [edx]
// 00626cee  8b4a04               mov ecx, dword ptr [edx + 4]
// 00626cf1  bf01000000           mov edi, 1
// 00626cf6  7648                 jbe 0x626d40
// 00626cf8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00626cfc  89542424             mov dword ptr [esp + 0x24], edx
// 00626d00  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00626d04  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00626d08  03d3                 add edx, ebx
// 00626d0a  0fb619               movzx ebx, byte ptr [ecx]
// 00626d0d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00626d11  0fb608               movzx ecx, byte ptr [eax]
// 00626d14  03df                 add ebx, edi
// 00626d16  03da                 add ebx, edx
// 00626d18  03cb                 add ecx, ebx
// 00626d1a  c1f902               sar ecx, 2
// 00626d1d  880e                 mov byte ptr [esi], cl
// 00626d1f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00626d23  46                   inc esi
// 00626d24  83f703               xor edi, 3
// 00626d27  83c002               add eax, 2
// 00626d2a  83c102               add ecx, 2
// 00626d2d  836c242401           sub dword ptr [esp + 0x24], 1
// 00626d32  75cc                 jne 0x626d00
// 00626d34  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00626d38  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00626d3c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00626d40  43                   inc ebx
// 00626d41  83c208               add edx, 8
// 00626d44  3b5d0c               cmp ebx, dword ptr [ebp + 0xc]
// 00626d47  89542414             mov dword ptr [esp + 0x14], edx
// 00626d4b  895c2418             mov dword ptr [esp + 0x18], ebx
// 00626d4f  7c8f                 jl 0x626ce0
// 00626d51  5f                   pop edi
// 00626d52  5e                   pop esi
// 00626d53  5d                   pop ebp
// 00626d54  5b                   pop ebx
// 00626d55  83c410               add esp, 0x10
// 00626d58  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c

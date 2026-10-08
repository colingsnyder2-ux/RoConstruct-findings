// roc 2007-03 00526be0  unit: seg_00520000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526be0
//
// 00526be0  83ec24               sub esp, 0x24
// 00526be3  53                   push ebx
// 00526be4  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00526be8  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00526beb  8b08                 mov ecx, dword ptr [eax]
// 00526bed  8b5004               mov edx, dword ptr [eax + 4]
// 00526bf0  56                   push esi
// 00526bf1  57                   push edi
// 00526bf2  8bbb5c010000         mov edi, dword ptr [ebx + 0x15c]
// 00526bf8  8b470c               mov eax, dword ptr [edi + 0xc]
// 00526bfb  894c240c             mov dword ptr [esp + 0xc], ecx
// 00526bff  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00526c02  89542410             mov dword ptr [esp + 0x10], edx
// 00526c06  8b5714               mov edx, dword ptr [edi + 0x14]
// 00526c09  89442414             mov dword ptr [esp + 0x14], eax
// 00526c0d  8b4718               mov eax, dword ptr [edi + 0x18]
// 00526c10  894c2418             mov dword ptr [esp + 0x18], ecx
// 00526c14  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00526c17  8954241c             mov dword ptr [esp + 0x1c], edx
// 00526c1b  8b5720               mov edx, dword ptr [edi + 0x20]
// 00526c1e  8d74240c             lea esi, [esp + 0xc]
// 00526c22  89442420             mov dword ptr [esp + 0x20], eax
// 00526c26  894c2424             mov dword ptr [esp + 0x24], ecx
// 00526c2a  89542428             mov dword ptr [esp + 0x28], edx
// 00526c2e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00526c32  e8e9fbffff           call 0x526820
// 00526c37  84c0                 test al, al
// 00526c39  7513                 jne 0x526c4e
// 00526c3b  8b03                 mov eax, dword ptr [ebx]
// 00526c3d  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00526c44  8b0b                 mov ecx, dword ptr [ebx]
// 00526c46  8b11                 mov edx, dword ptr [ecx]
// 00526c48  53                   push ebx
// 00526c49  ffd2                 call edx
// 00526c4b  83c404               add esp, 4
// 00526c4e  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00526c51  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00526c55  8908                 mov dword ptr [eax], ecx
// 00526c57  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00526c5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00526c5e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00526c62  894204               mov dword ptr [edx + 4], eax
// 00526c65  8b542418             mov edx, dword ptr [esp + 0x18]
// 00526c69  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00526c6d  894f0c               mov dword ptr [edi + 0xc], ecx
// 00526c70  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00526c74  895710               mov dword ptr [edi + 0x10], edx
// 00526c77  8b542424             mov edx, dword ptr [esp + 0x24]
// 00526c7b  894714               mov dword ptr [edi + 0x14], eax
// 00526c7e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00526c82  894f18               mov dword ptr [edi + 0x18], ecx
// 00526c85  89571c               mov dword ptr [edi + 0x1c], edx
// 00526c88  894720               mov dword ptr [edi + 0x20], eax
// 00526c8b  5f                   pop edi
// 00526c8c  5e                   pop esi
// 00526c8d  5b                   pop ebx
// 00526c8e  83c424               add esp, 0x24
// 00526c91  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jchuff.c

// from server: 100% by auto
// roc 2012-06 00665c80  unit: seg_00660000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665c80
//
// 00665c80  83ec28               sub esp, 0x28
// 00665c83  53                   push ebx
// 00665c84  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00665c88  55                   push ebp
// 00665c89  56                   push esi
// 00665c8a  57                   push edi
// 00665c8b  8bbba8010000         mov edi, dword ptr [ebx + 0x1a8]
// 00665c91  8d7720               lea esi, [edi + 0x20]
// 00665c94  56                   push esi
// 00665c95  53                   push ebx
// 00665c96  897c243c             mov dword ptr [esp + 0x3c], edi
// 00665c9a  e8f1feffff           call 0x665b90
// 00665c9f  83c408               add esp, 8
// 00665ca2  837b6403             cmp dword ptr [ebx + 0x64], 3
// 00665ca6  8be8                 mov ebp, eax
// 00665ca8  6a01                 push 1
// 00665caa  896c2430             mov dword ptr [esp + 0x30], ebp
// 00665cae  53                   push ebx
// 00665caf  752a                 jne 0x665cdb
// 00665cb1  8b03                 mov eax, dword ptr [ebx]
// 00665cb3  83c018               add eax, 0x18
// 00665cb6  8928                 mov dword ptr [eax], ebp
// 00665cb8  8b0e                 mov ecx, dword ptr [esi]
// 00665cba  894804               mov dword ptr [eax + 4], ecx
// 00665cbd  8b5724               mov edx, dword ptr [edi + 0x24]
// 00665cc0  895008               mov dword ptr [eax + 8], edx
// 00665cc3  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00665cc6  89480c               mov dword ptr [eax + 0xc], ecx
// 00665cc9  8b13                 mov edx, dword ptr [ebx]
// 00665ccb  c742145e000000       mov dword ptr [edx + 0x14], 0x5e
// 00665cd2  8b03                 mov eax, dword ptr [ebx]
// 00665cd4  8b4804               mov ecx, dword ptr [eax + 4]
// 00665cd7  ffd1                 call ecx
// 00665cd9  eb15                 jmp 0x665cf0
// 00665cdb  8b13                 mov edx, dword ptr [ebx]
// 00665cdd  c742145f000000       mov dword ptr [edx + 0x14], 0x5f
// 00665ce4  8b03                 mov eax, dword ptr [ebx]
// 00665ce6  896818               mov dword ptr [eax + 0x18], ebp
// 00665ce9  8b0b                 mov ecx, dword ptr [ebx]
// 00665ceb  8b5104               mov edx, dword ptr [ecx + 4]
// 00665cee  ffd2                 call edx
// 00665cf0  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 00665cf3  8b4304               mov eax, dword ptr [ebx + 4]
// 00665cf6  8b5008               mov edx, dword ptr [eax + 8]
// 00665cf9  83c408               add esp, 8
// 00665cfc  51                   push ecx
// 00665cfd  55                   push ebp
// 00665cfe  6a01                 push 1
// 00665d00  53                   push ebx
// 00665d01  ffd2                 call edx
// 00665d03  83c410               add esp, 0x10
// 00665d06  837b6400             cmp dword ptr [ebx + 0x64], 0
// 00665d0a  89442430             mov dword ptr [esp + 0x30], eax
// 00665d0e  896c2414             mov dword ptr [esp + 0x14], ebp
// 00665d12  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00665d1a  0f8eb7000000         jle 0x665dd7
// 00665d20  8bf8                 mov edi, eax
// 00665d22  89742418             mov dword ptr [esp + 0x18], esi
// 00665d26  8b442418             mov eax, dword ptr [esp + 0x18]
// 00665d2a  8b08                 mov ecx, dword ptr [eax]
// 00665d2c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00665d30  99                   cdq 
// 00665d31  f7f9                 idiv ecx
// 00665d33  8bf0                 mov esi, eax
// 00665d35  85c9                 test ecx, ecx
// 00665d37  7e6a                 jle 0x665da3
// 00665d39  8d41ff               lea eax, [ecx - 1]
// 00665d3c  89442428             mov dword ptr [esp + 0x28], eax
// 00665d40  99                   cdq 
// 00665d41  2bc2                 sub eax, edx
// 00665d43  d1f8                 sar eax, 1
// 00665d45  33db                 xor ebx, ebx
// 00665d47  89442424             mov dword ptr [esp + 0x24], eax
// 00665d4b  895c2410             mov dword ptr [esp + 0x10], ebx
// 00665d4f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00665d53  eb04                 jmp 0x665d59
// 00665d55  8b442424             mov eax, dword ptr [esp + 0x24]
// 00665d59  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00665d5d  03c1                 add eax, ecx
// 00665d5f  99                   cdq 
// 00665d60  f77c2428             idiv dword ptr [esp + 0x28]
// 00665d64  3bdd                 cmp ebx, ebp
// 00665d66  8bd3                 mov edx, ebx
// 00665d68  7d24                 jge 0x665d8e
// 00665d6a  8d9b00000000         lea ebx, [ebx]
// 00665d70  33c9                 xor ecx, ecx
// 00665d72  85f6                 test esi, esi
// 00665d74  7e10                 jle 0x665d86
// 00665d76  8b2f                 mov ebp, dword ptr [edi]
// 00665d78  03e9                 add ebp, ecx
// 00665d7a  41                   inc ecx
// 00665d7b  3bce                 cmp ecx, esi
// 00665d7d  88042a               mov byte ptr [edx + ebp], al
// 00665d80  7cf4                 jl 0x665d76
// 00665d82  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00665d86  03542414             add edx, dword ptr [esp + 0x14]
// 00665d8a  3bd5                 cmp edx, ebp
// 00665d8c  7ce2                 jl 0x665d70
// 00665d8e  81442410ff000000     add dword ptr [esp + 0x10], 0xff
// 00665d96  03de                 add ebx, esi
// 00665d98  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00665d9d  75b6                 jne 0x665d55
// 00665d9f  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00665da3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00665da7  8344241804           add dword ptr [esp + 0x18], 4
// 00665dac  40                   inc eax
// 00665dad  83c704               add edi, 4
// 00665db0  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 00665db3  89742414             mov dword ptr [esp + 0x14], esi
// 00665db7  89442420             mov dword ptr [esp + 0x20], eax
// 00665dbb  0f8c65ffffff         jl 0x665d26
// 00665dc1  8b442434             mov eax, dword ptr [esp + 0x34]
// 00665dc5  8b542430             mov edx, dword ptr [esp + 0x30]
// 00665dc9  5f                   pop edi
// 00665dca  5e                   pop esi
// 00665dcb  896814               mov dword ptr [eax + 0x14], ebp
// 00665dce  5d                   pop ebp
// 00665dcf  895010               mov dword ptr [eax + 0x10], edx
// 00665dd2  5b                   pop ebx
// 00665dd3  83c428               add esp, 0x28
// 00665dd6  c3                   ret 
// 00665dd7  896f14               mov dword ptr [edi + 0x14], ebp
// 00665dda  894710               mov dword ptr [edi + 0x10], eax
// 00665ddd  5f                   pop edi
// 00665dde  5e                   pop esi
// 00665ddf  5d                   pop ebp
// 00665de0  5b                   pop ebx
// 00665de1  83c428               add esp, 0x28
// 00665de4  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colormap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c

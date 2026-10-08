// from server: 100% by auto
// roc 2008-06 0078c710  unit: CXTPRichRender  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c710
//
// 0078c710  83ec30               sub esp, 0x30
// 0078c713  53                   push ebx
// 0078c714  8bd9                 mov ebx, ecx
// 0078c716  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0078c719  55                   push ebp
// 0078c71a  33ed                 xor ebp, ebp
// 0078c71c  3bcd                 cmp ecx, ebp
// 0078c71e  7511                 jne 0x78c731
// 0078c720  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0078c724  8928                 mov dword ptr [eax], ebp
// 0078c726  896804               mov dword ptr [eax + 4], ebp
// 0078c729  5d                   pop ebp
// 0078c72a  5b                   pop ebx
// 0078c72b  83c430               add esp, 0x30
// 0078c72e  c20c00               ret 0xc
// 0078c731  56                   push esi
// 0078c732  8d542414             lea edx, [esp + 0x14]
// 0078c736  52                   push edx
// 0078c737  6800000400           push 0x40000
// 0078c73c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0078c740  8b01                 mov eax, dword ptr [ecx]
// 0078c742  8b400c               mov eax, dword ptr [eax + 0xc]
// 0078c745  55                   push ebp
// 0078c746  6845040000           push 0x445
// 0078c74b  ffd0                 call eax
// 0078c74d  8b442448             mov eax, dword ptr [esp + 0x48]
// 0078c751  33f6                 xor esi, esi
// 0078c753  03c0                 add eax, eax
// 0078c755  89ab28010000         mov dword ptr [ebx + 0x128], ebp
// 0078c75b  89ab24010000         mov dword ptr [ebx + 0x124], ebp
// 0078c761  89742410             mov dword ptr [esp + 0x10], esi
// 0078c765  896c240c             mov dword ptr [esp + 0xc], ebp
// 0078c769  89442448             mov dword ptr [esp + 0x48], eax
// 0078c76d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0078c771  896c2420             mov dword ptr [esp + 0x20], ebp
// 0078c775  896c2424             mov dword ptr [esp + 0x24], ebp
// 0078c779  896c2428             mov dword ptr [esp + 0x28], ebp
// 0078c77d  57                   push edi
// 0078c77e  8bff                 mov edi, edi
// 0078c780  8b7b24               mov edi, dword ptr [ebx + 0x24]
// 0078c783  55                   push ebp
// 0078c784  55                   push ebp
// 0078c785  03c6                 add eax, esi
// 0078c787  55                   push ebp
// 0078c788  99                   cdq 
// 0078c789  8d4c242c             lea ecx, [esp + 0x2c]
// 0078c78d  51                   push ecx
// 0078c78e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0078c792  2bc2                 sub eax, edx
// 0078c794  55                   push ebp
// 0078c795  8d542444             lea edx, [esp + 0x44]
// 0078c799  8bf0                 mov esi, eax
// 0078c79b  52                   push edx
// 0078c79c  d1fe                 sar esi, 1
// 0078c79e  55                   push ebp
// 0078c79f  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0078c7a3  896c2450             mov dword ptr [esp + 0x50], ebp
// 0078c7a7  89742454             mov dword ptr [esp + 0x54], esi
// 0078c7ab  c744245801000000     mov dword ptr [esp + 0x58], 1
// 0078c7b3  e88823f2ff           call 0x6aeb40
// 0078c7b8  50                   push eax
// 0078c7b9  8b07                 mov eax, dword ptr [edi]
// 0078c7bb  8b4010               mov eax, dword ptr [eax + 0x10]
// 0078c7be  33ed                 xor ebp, ebp
// 0078c7c0  55                   push ebp
// 0078c7c1  55                   push ebp
// 0078c7c2  55                   push ebp
// 0078c7c3  6a01                 push 1
// 0078c7c5  8bcf                 mov ecx, edi
// 0078c7c7  ffd0                 call eax
// 0078c7c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078c7cd  3bcd                 cmp ecx, ebp
// 0078c7cf  750a                 jne 0x78c7db
// 0078c7d1  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 0078c7d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0078c7db  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 0078c7e1  7e0b                 jle 0x78c7ee
// 0078c7e3  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0078c7e7  46                   inc esi
// 0078c7e8  89742414             mov dword ptr [esp + 0x14], esi
// 0078c7ec  eb0b                 jmp 0x78c7f9
// 0078c7ee  8d46ff               lea eax, [esi - 1]
// 0078c7f1  8b742414             mov esi, dword ptr [esp + 0x14]
// 0078c7f5  8944244c             mov dword ptr [esp + 0x4c], eax
// 0078c7f9  3bf0                 cmp esi, eax
// 0078c7fb  7c83                 jl 0x78c780
// 0078c7fd  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 0078c803  5f                   pop edi
// 0078c804  7e43                 jle 0x78c849
// 0078c806  40                   inc eax
// 0078c807  89442434             mov dword ptr [esp + 0x34], eax
// 0078c80b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0078c80f  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0078c813  896c2430             mov dword ptr [esp + 0x30], ebp
// 0078c817  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0078c81f  3bc5                 cmp eax, ebp
// 0078c821  7504                 jne 0x78c827
// 0078c823  33c0                 xor eax, eax
// 0078c825  eb03                 jmp 0x78c82a
// 0078c827  8b4004               mov eax, dword ptr [eax + 4]
// 0078c82a  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0078c82d  8b11                 mov edx, dword ptr [ecx]
// 0078c82f  55                   push ebp
// 0078c830  55                   push ebp
// 0078c831  55                   push ebp
// 0078c832  8d742428             lea esi, [esp + 0x28]
// 0078c836  56                   push esi
// 0078c837  55                   push ebp
// 0078c838  8d742440             lea esi, [esp + 0x40]
// 0078c83c  56                   push esi
// 0078c83d  55                   push ebp
// 0078c83e  50                   push eax
// 0078c83f  8b4210               mov eax, dword ptr [edx + 0x10]
// 0078c842  55                   push ebp
// 0078c843  55                   push ebp
// 0078c844  55                   push ebp
// 0078c845  6a01                 push 1
// 0078c847  ffd0                 call eax
// 0078c849  8b8b24010000         mov ecx, dword ptr [ebx + 0x124]
// 0078c84f  8b442440             mov eax, dword ptr [esp + 0x40]
// 0078c853  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 0078c859  5e                   pop esi
// 0078c85a  5d                   pop ebp
// 0078c85b  8908                 mov dword ptr [eax], ecx
// 0078c85d  895004               mov dword ptr [eax + 4], edx
// 0078c860  5b                   pop ebx
// 0078c861  83c430               add esp, 0x30
// 0078c864  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPRichRender.cpp (function ?GetTextExtent@CXTPRichRender@@QAE?AVCSize@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPRichRender.cpp

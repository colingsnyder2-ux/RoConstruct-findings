// from server: 100% by auto
// roc 2012-06 00a64ad0  unit: CXTPRichRender  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64ad0
//
// 00a64ad0  83ec30               sub esp, 0x30
// 00a64ad3  53                   push ebx
// 00a64ad4  8bd9                 mov ebx, ecx
// 00a64ad6  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00a64ad9  55                   push ebp
// 00a64ada  33ed                 xor ebp, ebp
// 00a64adc  3bcd                 cmp ecx, ebp
// 00a64ade  7511                 jne 0xa64af1
// 00a64ae0  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a64ae4  8928                 mov dword ptr [eax], ebp
// 00a64ae6  896804               mov dword ptr [eax + 4], ebp
// 00a64ae9  5d                   pop ebp
// 00a64aea  5b                   pop ebx
// 00a64aeb  83c430               add esp, 0x30
// 00a64aee  c20c00               ret 0xc
// 00a64af1  56                   push esi
// 00a64af2  8d542414             lea edx, [esp + 0x14]
// 00a64af6  52                   push edx
// 00a64af7  6800000400           push 0x40000
// 00a64afc  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a64b00  8b01                 mov eax, dword ptr [ecx]
// 00a64b02  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a64b05  55                   push ebp
// 00a64b06  6845040000           push 0x445
// 00a64b0b  ffd0                 call eax
// 00a64b0d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a64b11  33f6                 xor esi, esi
// 00a64b13  03c0                 add eax, eax
// 00a64b15  89ab28010000         mov dword ptr [ebx + 0x128], ebp
// 00a64b1b  89ab24010000         mov dword ptr [ebx + 0x124], ebp
// 00a64b21  89742410             mov dword ptr [esp + 0x10], esi
// 00a64b25  896c240c             mov dword ptr [esp + 0xc], ebp
// 00a64b29  89442448             mov dword ptr [esp + 0x48], eax
// 00a64b2d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a64b31  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a64b35  896c2424             mov dword ptr [esp + 0x24], ebp
// 00a64b39  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a64b3d  57                   push edi
// 00a64b3e  8bff                 mov edi, edi
// 00a64b40  8b7b24               mov edi, dword ptr [ebx + 0x24]
// 00a64b43  55                   push ebp
// 00a64b44  55                   push ebp
// 00a64b45  03c6                 add eax, esi
// 00a64b47  55                   push ebp
// 00a64b48  99                   cdq 
// 00a64b49  8d4c242c             lea ecx, [esp + 0x2c]
// 00a64b4d  51                   push ecx
// 00a64b4e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a64b52  2bc2                 sub eax, edx
// 00a64b54  55                   push ebp
// 00a64b55  8d542444             lea edx, [esp + 0x44]
// 00a64b59  8bf0                 mov esi, eax
// 00a64b5b  52                   push edx
// 00a64b5c  d1fe                 sar esi, 1
// 00a64b5e  55                   push ebp
// 00a64b5f  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00a64b63  896c2450             mov dword ptr [esp + 0x50], ebp
// 00a64b67  89742454             mov dword ptr [esp + 0x54], esi
// 00a64b6b  c744245801000000     mov dword ptr [esp + 0x58], 1
// 00a64b73  e84883a2ff           call 0x48cec0
// 00a64b78  50                   push eax
// 00a64b79  8b07                 mov eax, dword ptr [edi]
// 00a64b7b  8b4010               mov eax, dword ptr [eax + 0x10]
// 00a64b7e  33ed                 xor ebp, ebp
// 00a64b80  55                   push ebp
// 00a64b81  55                   push ebp
// 00a64b82  55                   push ebp
// 00a64b83  6a01                 push 1
// 00a64b85  8bcf                 mov ecx, edi
// 00a64b87  ffd0                 call eax
// 00a64b89  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a64b8d  3bcd                 cmp ecx, ebp
// 00a64b8f  750a                 jne 0xa64b9b
// 00a64b91  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 00a64b97  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a64b9b  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 00a64ba1  7e0b                 jle 0xa64bae
// 00a64ba3  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a64ba7  46                   inc esi
// 00a64ba8  89742414             mov dword ptr [esp + 0x14], esi
// 00a64bac  eb0b                 jmp 0xa64bb9
// 00a64bae  8d46ff               lea eax, [esi - 1]
// 00a64bb1  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a64bb5  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a64bb9  3bf0                 cmp esi, eax
// 00a64bbb  7c83                 jl 0xa64b40
// 00a64bbd  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 00a64bc3  5f                   pop edi
// 00a64bc4  7e43                 jle 0xa64c09
// 00a64bc6  40                   inc eax
// 00a64bc7  89442434             mov dword ptr [esp + 0x34], eax
// 00a64bcb  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a64bcf  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00a64bd3  896c2430             mov dword ptr [esp + 0x30], ebp
// 00a64bd7  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00a64bdf  3bc5                 cmp eax, ebp
// 00a64be1  7504                 jne 0xa64be7
// 00a64be3  33c0                 xor eax, eax
// 00a64be5  eb03                 jmp 0xa64bea
// 00a64be7  8b4004               mov eax, dword ptr [eax + 4]
// 00a64bea  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00a64bed  8b11                 mov edx, dword ptr [ecx]
// 00a64bef  55                   push ebp
// 00a64bf0  55                   push ebp
// 00a64bf1  55                   push ebp
// 00a64bf2  8d742428             lea esi, [esp + 0x28]
// 00a64bf6  56                   push esi
// 00a64bf7  55                   push ebp
// 00a64bf8  8d742440             lea esi, [esp + 0x40]
// 00a64bfc  56                   push esi
// 00a64bfd  55                   push ebp
// 00a64bfe  50                   push eax
// 00a64bff  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a64c02  55                   push ebp
// 00a64c03  55                   push ebp
// 00a64c04  55                   push ebp
// 00a64c05  6a01                 push 1
// 00a64c07  ffd0                 call eax
// 00a64c09  8b8b24010000         mov ecx, dword ptr [ebx + 0x124]
// 00a64c0f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a64c13  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 00a64c19  5e                   pop esi
// 00a64c1a  5d                   pop ebp
// 00a64c1b  8908                 mov dword ptr [eax], ecx
// 00a64c1d  895004               mov dword ptr [eax + 4], edx
// 00a64c20  5b                   pop ebx
// 00a64c21  83c430               add esp, 0x30
// 00a64c24  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?GetTextExtent@CXTPRichRender@@QAE?AVCSize@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp

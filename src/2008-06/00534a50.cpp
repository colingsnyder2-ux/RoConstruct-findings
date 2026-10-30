// from server: 100% by auto
// roc 2008-06 00534a50  unit: seg_00530000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534a50
//
// 00534a50  51                   push ecx
// 00534a51  53                   push ebx
// 00534a52  55                   push ebp
// 00534a53  56                   push esi
// 00534a54  57                   push edi
// 00534a55  8bf8                 mov edi, eax
// 00534a57  8b4704               mov eax, dword ptr [edi + 4]
// 00534a5a  8b08                 mov ecx, dword ptr [eax]
// 00534a5c  8bb7a0010000         mov esi, dword ptr [edi + 0x1a0]
// 00534a62  6800040000           push 0x400
// 00534a67  6a01                 push 1
// 00534a69  57                   push edi
// 00534a6a  ffd1                 call ecx
// 00534a6c  894610               mov dword ptr [esi + 0x10], eax
// 00534a6f  8b5704               mov edx, dword ptr [edi + 4]
// 00534a72  8b02                 mov eax, dword ptr [edx]
// 00534a74  6800040000           push 0x400
// 00534a79  6a01                 push 1
// 00534a7b  57                   push edi
// 00534a7c  ffd0                 call eax
// 00534a7e  894614               mov dword ptr [esi + 0x14], eax
// 00534a81  8b4f04               mov ecx, dword ptr [edi + 4]
// 00534a84  8b11                 mov edx, dword ptr [ecx]
// 00534a86  6800040000           push 0x400
// 00534a8b  6a01                 push 1
// 00534a8d  57                   push edi
// 00534a8e  ffd2                 call edx
// 00534a90  894618               mov dword ptr [esi + 0x18], eax
// 00534a93  8b4704               mov eax, dword ptr [edi + 4]
// 00534a96  8b08                 mov ecx, dword ptr [eax]
// 00534a98  6800040000           push 0x400
// 00534a9d  6a01                 push 1
// 00534a9f  57                   push edi
// 00534aa0  ffd1                 call ecx
// 00534aa2  83c430               add esp, 0x30
// 00534aa5  89461c               mov dword ptr [esi + 0x1c], eax
// 00534aa8  33c0                 xor eax, eax
// 00534aaa  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00534ab2  bf00af1dff           mov edi, 0xff1daf00
// 00534ab7  ba800b4dff           mov edx, 0xff4d0b80
// 00534abc  b9008d2c00           mov ecx, 0x2c8d00
// 00534ac1  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00534ac4  8bda                 mov ebx, edx
// 00534ac6  c1fb10               sar ebx, 0x10
// 00534ac9  891c28               mov dword ptr [eax + ebp], ebx
// 00534acc  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00534acf  8bdf                 mov ebx, edi
// 00534ad1  c1fb10               sar ebx, 0x10
// 00534ad4  891c28               mov dword ptr [eax + ebp], ebx
// 00534ad7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00534ada  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00534ade  891c28               mov dword ptr [eax + ebp], ebx
// 00534ae1  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00534ae4  890c28               mov dword ptr [eax + ebp], ecx
// 00534ae7  81ebd2b60000         sub ebx, 0xb6d2
// 00534aed  81e91a580000         sub ecx, 0x581a
// 00534af3  81c2e9660100         add edx, 0x166e9
// 00534af9  81c7a2c50100         add edi, 0x1c5a2
// 00534aff  83c004               add eax, 4
// 00534b02  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00534b08  895c2410             mov dword ptr [esp + 0x10], ebx
// 00534b0c  7db3                 jge 0x534ac1
// 00534b0e  5f                   pop edi
// 00534b0f  5e                   pop esi
// 00534b10  5d                   pop ebp
// 00534b11  5b                   pop ebx
// 00534b12  59                   pop ecx
// 00534b13  c3                   ret 
// library jpeg-6b/jdmerge.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c

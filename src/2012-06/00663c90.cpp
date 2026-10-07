// roc 2012-06 00663c90  unit: seg_00660000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663c90
//
// 00663c90  51                   push ecx
// 00663c91  53                   push ebx
// 00663c92  55                   push ebp
// 00663c93  56                   push esi
// 00663c94  57                   push edi
// 00663c95  8bf8                 mov edi, eax
// 00663c97  8b4704               mov eax, dword ptr [edi + 4]
// 00663c9a  8b08                 mov ecx, dword ptr [eax]
// 00663c9c  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 00663ca2  6800040000           push 0x400
// 00663ca7  6a01                 push 1
// 00663ca9  57                   push edi
// 00663caa  ffd1                 call ecx
// 00663cac  894608               mov dword ptr [esi + 8], eax
// 00663caf  8b5704               mov edx, dword ptr [edi + 4]
// 00663cb2  8b02                 mov eax, dword ptr [edx]
// 00663cb4  6800040000           push 0x400
// 00663cb9  6a01                 push 1
// 00663cbb  57                   push edi
// 00663cbc  ffd0                 call eax
// 00663cbe  89460c               mov dword ptr [esi + 0xc], eax
// 00663cc1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00663cc4  8b11                 mov edx, dword ptr [ecx]
// 00663cc6  6800040000           push 0x400
// 00663ccb  6a01                 push 1
// 00663ccd  57                   push edi
// 00663cce  ffd2                 call edx
// 00663cd0  894610               mov dword ptr [esi + 0x10], eax
// 00663cd3  8b4704               mov eax, dword ptr [edi + 4]
// 00663cd6  8b08                 mov ecx, dword ptr [eax]
// 00663cd8  6800040000           push 0x400
// 00663cdd  6a01                 push 1
// 00663cdf  57                   push edi
// 00663ce0  ffd1                 call ecx
// 00663ce2  83c430               add esp, 0x30
// 00663ce5  894614               mov dword ptr [esi + 0x14], eax
// 00663ce8  33c0                 xor eax, eax
// 00663cea  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00663cf2  bf00af1dff           mov edi, 0xff1daf00
// 00663cf7  ba800b4dff           mov edx, 0xff4d0b80
// 00663cfc  b9008d2c00           mov ecx, 0x2c8d00
// 00663d01  8b6e08               mov ebp, dword ptr [esi + 8]
// 00663d04  8bda                 mov ebx, edx
// 00663d06  c1fb10               sar ebx, 0x10
// 00663d09  891c28               mov dword ptr [eax + ebp], ebx
// 00663d0c  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00663d0f  8bdf                 mov ebx, edi
// 00663d11  c1fb10               sar ebx, 0x10
// 00663d14  891c28               mov dword ptr [eax + ebp], ebx
// 00663d17  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00663d1a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00663d1e  891c28               mov dword ptr [eax + ebp], ebx
// 00663d21  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00663d24  890c28               mov dword ptr [eax + ebp], ecx
// 00663d27  81ebd2b60000         sub ebx, 0xb6d2
// 00663d2d  81e91a580000         sub ecx, 0x581a
// 00663d33  81c2e9660100         add edx, 0x166e9
// 00663d39  81c7a2c50100         add edi, 0x1c5a2
// 00663d3f  83c004               add eax, 4
// 00663d42  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00663d48  895c2410             mov dword ptr [esp + 0x10], ebx
// 00663d4c  7db3                 jge 0x663d01
// 00663d4e  5f                   pop edi
// 00663d4f  5e                   pop esi
// 00663d50  5d                   pop ebp
// 00663d51  5b                   pop ebx
// 00663d52  59                   pop ecx
// 00663d53  c3                   ret 
// library jpeg-6b/jdcolor.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c

// roc 2011-06 00844b00  unit: CXTPReportSelectedRows  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844b00
//
// 00844b00  53                   push ebx
// 00844b01  55                   push ebp
// 00844b02  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00844b06  56                   push esi
// 00844b07  8b742418             mov esi, dword ptr [esp + 0x18]
// 00844b0b  33c9                 xor ecx, ecx
// 00844b0d  83fe64               cmp esi, 0x64
// 00844b10  0f9dc1               setge cl
// 00844b13  57                   push edi
// 00844b14  49                   dec ecx
// 00844b15  81e17cfcffff         and ecx, 0xfffffc7c
// 00844b1b  81c1e8030000         add ecx, 0x3e8
// 00844b21  8bc1                 mov eax, ecx
// 00844b23  99                   cdq 
// 00844b24  2bc2                 sub eax, edx
// 00844b26  8bd8                 mov ebx, eax
// 00844b28  8bc5                 mov eax, ebp
// 00844b2a  c1e810               shr eax, 0x10
// 00844b2d  0fb6d0               movzx edx, al
// 00844b30  8b442414             mov eax, dword ptr [esp + 0x14]
// 00844b34  c1e810               shr eax, 0x10
// 00844b37  0fb6c0               movzx eax, al
// 00844b3a  0fafc6               imul eax, esi
// 00844b3d  8bf9                 mov edi, ecx
// 00844b3f  2bfe                 sub edi, esi
// 00844b41  0fafd7               imul edx, edi
// 00844b44  d1fb                 sar ebx, 1
// 00844b46  03d3                 add edx, ebx
// 00844b48  03c2                 add eax, edx
// 00844b4a  99                   cdq 
// 00844b4b  f7f9                 idiv ecx
// 00844b4d  8bd5                 mov edx, ebp
// 00844b4f  c1ea08               shr edx, 8
// 00844b52  0fb6d2               movzx edx, dl
// 00844b55  0fafd7               imul edx, edi
// 00844b58  03d3                 add edx, ebx
// 00844b5a  0fb66c2418           movzx ebp, byte ptr [esp + 0x18]
// 00844b5f  0fafef               imul ebp, edi
// 00844b62  0fb6c0               movzx eax, al
// 00844b65  c1e008               shl eax, 8
// 00844b68  8944241c             mov dword ptr [esp + 0x1c], eax
// 00844b6c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00844b70  c1e808               shr eax, 8
// 00844b73  0fb6c0               movzx eax, al
// 00844b76  0fafc6               imul eax, esi
// 00844b79  03c2                 add eax, edx
// 00844b7b  99                   cdq 
// 00844b7c  f7f9                 idiv ecx
// 00844b7e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00844b82  03eb                 add ebp, ebx
// 00844b84  5f                   pop edi
// 00844b85  0fb6c0               movzx eax, al
// 00844b88  0bd0                 or edx, eax
// 00844b8a  0fb6442410           movzx eax, byte ptr [esp + 0x10]
// 00844b8f  0fafc6               imul eax, esi
// 00844b92  03c5                 add eax, ebp
// 00844b94  c1e208               shl edx, 8
// 00844b97  89542410             mov dword ptr [esp + 0x10], edx
// 00844b9b  99                   cdq 
// 00844b9c  f7f9                 idiv ecx
// 00844b9e  5e                   pop esi
// 00844b9f  5d                   pop ebp
// 00844ba0  5b                   pop ebx
// 00844ba1  0fb6c8               movzx ecx, al
// 00844ba4  8b442404             mov eax, dword ptr [esp + 4]
// 00844ba8  0bc1                 or eax, ecx
// 00844baa  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?LightColor@CXTPColorManager@@QBEKKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp

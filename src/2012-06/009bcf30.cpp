// from server: 100% by auto
// roc 2012-06 009bcf30  unit: CXTPReportSelectedRows  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bcf30
//
// 009bcf30  53                   push ebx
// 009bcf31  55                   push ebp
// 009bcf32  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009bcf36  56                   push esi
// 009bcf37  8b742418             mov esi, dword ptr [esp + 0x18]
// 009bcf3b  33c9                 xor ecx, ecx
// 009bcf3d  83fe64               cmp esi, 0x64
// 009bcf40  0f9dc1               setge cl
// 009bcf43  57                   push edi
// 009bcf44  49                   dec ecx
// 009bcf45  81e17cfcffff         and ecx, 0xfffffc7c
// 009bcf4b  81c1e8030000         add ecx, 0x3e8
// 009bcf51  8bc1                 mov eax, ecx
// 009bcf53  99                   cdq 
// 009bcf54  2bc2                 sub eax, edx
// 009bcf56  8bd8                 mov ebx, eax
// 009bcf58  8bc5                 mov eax, ebp
// 009bcf5a  c1e810               shr eax, 0x10
// 009bcf5d  0fb6d0               movzx edx, al
// 009bcf60  8b442414             mov eax, dword ptr [esp + 0x14]
// 009bcf64  c1e810               shr eax, 0x10
// 009bcf67  0fb6c0               movzx eax, al
// 009bcf6a  0fafc6               imul eax, esi
// 009bcf6d  8bf9                 mov edi, ecx
// 009bcf6f  2bfe                 sub edi, esi
// 009bcf71  0fafd7               imul edx, edi
// 009bcf74  d1fb                 sar ebx, 1
// 009bcf76  03d3                 add edx, ebx
// 009bcf78  03c2                 add eax, edx
// 009bcf7a  99                   cdq 
// 009bcf7b  f7f9                 idiv ecx
// 009bcf7d  8bd5                 mov edx, ebp
// 009bcf7f  c1ea08               shr edx, 8
// 009bcf82  0fb6d2               movzx edx, dl
// 009bcf85  0fafd7               imul edx, edi
// 009bcf88  03d3                 add edx, ebx
// 009bcf8a  0fb66c2418           movzx ebp, byte ptr [esp + 0x18]
// 009bcf8f  0fafef               imul ebp, edi
// 009bcf92  0fb6c0               movzx eax, al
// 009bcf95  c1e008               shl eax, 8
// 009bcf98  8944241c             mov dword ptr [esp + 0x1c], eax
// 009bcf9c  8b442414             mov eax, dword ptr [esp + 0x14]
// 009bcfa0  c1e808               shr eax, 8
// 009bcfa3  0fb6c0               movzx eax, al
// 009bcfa6  0fafc6               imul eax, esi
// 009bcfa9  03c2                 add eax, edx
// 009bcfab  99                   cdq 
// 009bcfac  f7f9                 idiv ecx
// 009bcfae  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009bcfb2  03eb                 add ebp, ebx
// 009bcfb4  5f                   pop edi
// 009bcfb5  0fb6c0               movzx eax, al
// 009bcfb8  0bd0                 or edx, eax
// 009bcfba  0fb6442410           movzx eax, byte ptr [esp + 0x10]
// 009bcfbf  0fafc6               imul eax, esi
// 009bcfc2  03c5                 add eax, ebp
// 009bcfc4  c1e208               shl edx, 8
// 009bcfc7  89542410             mov dword ptr [esp + 0x10], edx
// 009bcfcb  99                   cdq 
// 009bcfcc  f7f9                 idiv ecx
// 009bcfce  5e                   pop esi
// 009bcfcf  5d                   pop ebp
// 009bcfd0  5b                   pop ebx
// 009bcfd1  0fb6c8               movzx ecx, al
// 009bcfd4  8b442404             mov eax, dword ptr [esp + 4]
// 009bcfd8  0bc1                 or eax, ecx
// 009bcfda  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?LightColor@CXTPColorManager@@QBEKKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp

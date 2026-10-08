// from server: 100% by auto
// roc 2008-06 006b9a80  unit: CXTPPropertyGridItemConstraint  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9a80
//
// 006b9a80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b9a84  d9e8                 fld1 
// 006b9a86  dd442408             fld qword ptr [esp + 8]
// 006b9a8a  8bc1                 mov eax, ecx
// 006b9a8c  c1e810               shr eax, 0x10
// 006b9a8f  dce9                 fsub st(1), st(0)
// 006b9a91  dc0dd8358100         fmul qword ptr [0x8135d8]
// 006b9a97  0fb6d0               movzx edx, al
// 006b9a9a  89542404             mov dword ptr [esp + 4], edx
// 006b9a9e  db442404             fild dword ptr [esp + 4]
// 006b9aa2  d97c2404             fnstcw word ptr [esp + 4]
// 006b9aa6  0fb7442404           movzx eax, word ptr [esp + 4]
// 006b9aab  d8ca                 fmul st(2)
// 006b9aad  0d000c0000           or eax, 0xc00
// 006b9ab2  89442408             mov dword ptr [esp + 8], eax
// 006b9ab6  d8c1                 fadd st(1)
// 006b9ab8  d96c2408             fldcw word ptr [esp + 8]
// 006b9abc  db5c2408             fistp dword ptr [esp + 8]
// 006b9ac0  0fb6442408           movzx eax, byte ptr [esp + 8]
// 006b9ac5  0fb6d0               movzx edx, al
// 006b9ac8  d96c2404             fldcw word ptr [esp + 4]
// 006b9acc  8bc1                 mov eax, ecx
// 006b9ace  c1e808               shr eax, 8
// 006b9ad1  0fb6c0               movzx eax, al
// 006b9ad4  89442404             mov dword ptr [esp + 4], eax
// 006b9ad8  db442404             fild dword ptr [esp + 4]
// 006b9adc  0fb6c9               movzx ecx, cl
// 006b9adf  d97c2404             fnstcw word ptr [esp + 4]
// 006b9ae3  0fb7442404           movzx eax, word ptr [esp + 4]
// 006b9ae8  d8ca                 fmul st(2)
// 006b9aea  0d000c0000           or eax, 0xc00
// 006b9aef  89442408             mov dword ptr [esp + 8], eax
// 006b9af3  d8c1                 fadd st(1)
// 006b9af5  c1e208               shl edx, 8
// 006b9af8  d96c2408             fldcw word ptr [esp + 8]
// 006b9afc  db5c2408             fistp dword ptr [esp + 8]
// 006b9b00  0fb6442408           movzx eax, byte ptr [esp + 8]
// 006b9b05  0bd0                 or edx, eax
// 006b9b07  c1e208               shl edx, 8
// 006b9b0a  d96c2404             fldcw word ptr [esp + 4]
// 006b9b0e  894c2404             mov dword ptr [esp + 4], ecx
// 006b9b12  db442404             fild dword ptr [esp + 4]
// 006b9b16  d97c2404             fnstcw word ptr [esp + 4]
// 006b9b1a  deca                 fmulp st(2)
// 006b9b1c  0fb7442404           movzx eax, word ptr [esp + 4]
// 006b9b21  0d000c0000           or eax, 0xc00
// 006b9b26  89442408             mov dword ptr [esp + 8], eax
// 006b9b2a  dec1                 faddp st(1)
// 006b9b2c  d96c2408             fldcw word ptr [esp + 8]
// 006b9b30  db5c2408             fistp dword ptr [esp + 8]
// 006b9b34  0fb6442408           movzx eax, byte ptr [esp + 8]
// 006b9b39  0fb6c8               movzx ecx, al
// 006b9b3c  d96c2404             fldcw word ptr [esp + 4]
// 006b9b40  0bd1                 or edx, ecx
// 006b9b42  8bc2                 mov eax, edx
// 006b9b44  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?LightenColor@CXTPImageManagerIcon@@AAEKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp

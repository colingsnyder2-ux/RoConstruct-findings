// roc 2012-06 00997a40  unit: CXTPPropertyGridItemConstraint  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997a40
//
// 00997a40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00997a44  d9e8                 fld1 
// 00997a46  dd442408             fld qword ptr [esp + 8]
// 00997a4a  8bc1                 mov eax, ecx
// 00997a4c  c1e810               shr eax, 0x10
// 00997a4f  dce9                 fsub st(1), st(0)
// 00997a51  dc0d383bb500         fmul qword ptr [0xb53b38]
// 00997a57  0fb6d0               movzx edx, al
// 00997a5a  89542404             mov dword ptr [esp + 4], edx
// 00997a5e  db442404             fild dword ptr [esp + 4]
// 00997a62  d97c2404             fnstcw word ptr [esp + 4]
// 00997a66  0fb7442404           movzx eax, word ptr [esp + 4]
// 00997a6b  d8ca                 fmul st(2)
// 00997a6d  0d000c0000           or eax, 0xc00
// 00997a72  89442408             mov dword ptr [esp + 8], eax
// 00997a76  d8c1                 fadd st(1)
// 00997a78  d96c2408             fldcw word ptr [esp + 8]
// 00997a7c  db5c2408             fistp dword ptr [esp + 8]
// 00997a80  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00997a85  0fb6d0               movzx edx, al
// 00997a88  d96c2404             fldcw word ptr [esp + 4]
// 00997a8c  8bc1                 mov eax, ecx
// 00997a8e  c1e808               shr eax, 8
// 00997a91  0fb6c0               movzx eax, al
// 00997a94  89442404             mov dword ptr [esp + 4], eax
// 00997a98  db442404             fild dword ptr [esp + 4]
// 00997a9c  0fb6c9               movzx ecx, cl
// 00997a9f  d97c2404             fnstcw word ptr [esp + 4]
// 00997aa3  0fb7442404           movzx eax, word ptr [esp + 4]
// 00997aa8  d8ca                 fmul st(2)
// 00997aaa  0d000c0000           or eax, 0xc00
// 00997aaf  89442408             mov dword ptr [esp + 8], eax
// 00997ab3  d8c1                 fadd st(1)
// 00997ab5  c1e208               shl edx, 8
// 00997ab8  d96c2408             fldcw word ptr [esp + 8]
// 00997abc  db5c2408             fistp dword ptr [esp + 8]
// 00997ac0  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00997ac5  0bd0                 or edx, eax
// 00997ac7  c1e208               shl edx, 8
// 00997aca  d96c2404             fldcw word ptr [esp + 4]
// 00997ace  894c2404             mov dword ptr [esp + 4], ecx
// 00997ad2  db442404             fild dword ptr [esp + 4]
// 00997ad6  d97c2404             fnstcw word ptr [esp + 4]
// 00997ada  deca                 fmulp st(2)
// 00997adc  0fb7442404           movzx eax, word ptr [esp + 4]
// 00997ae1  0d000c0000           or eax, 0xc00
// 00997ae6  89442408             mov dword ptr [esp + 8], eax
// 00997aea  dec1                 faddp st(1)
// 00997aec  d96c2408             fldcw word ptr [esp + 8]
// 00997af0  db5c2408             fistp dword ptr [esp + 8]
// 00997af4  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00997af9  0fb6c8               movzx ecx, al
// 00997afc  d96c2404             fldcw word ptr [esp + 4]
// 00997b00  0bd1                 or edx, ecx
// 00997b02  8bc2                 mov eax, edx
// 00997b04  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?LightenColor@CXTPImageManagerIcon@@AAEKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp

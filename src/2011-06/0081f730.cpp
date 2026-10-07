// roc 2011-06 0081f730  unit: CXTPCommandBar  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f730
//
// 0081f730  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081f734  d9e8                 fld1 
// 0081f736  dd442408             fld qword ptr [esp + 8]
// 0081f73a  8bc1                 mov eax, ecx
// 0081f73c  c1e810               shr eax, 0x10
// 0081f73f  dce9                 fsub st(1), st(0)
// 0081f741  dc0d2891a600         fmul qword ptr [0xa69128]
// 0081f747  0fb6d0               movzx edx, al
// 0081f74a  89542404             mov dword ptr [esp + 4], edx
// 0081f74e  db442404             fild dword ptr [esp + 4]
// 0081f752  d97c2404             fnstcw word ptr [esp + 4]
// 0081f756  0fb7442404           movzx eax, word ptr [esp + 4]
// 0081f75b  d8ca                 fmul st(2)
// 0081f75d  0d000c0000           or eax, 0xc00
// 0081f762  89442408             mov dword ptr [esp + 8], eax
// 0081f766  d8c1                 fadd st(1)
// 0081f768  d96c2408             fldcw word ptr [esp + 8]
// 0081f76c  db5c2408             fistp dword ptr [esp + 8]
// 0081f770  0fb6442408           movzx eax, byte ptr [esp + 8]
// 0081f775  0fb6d0               movzx edx, al
// 0081f778  d96c2404             fldcw word ptr [esp + 4]
// 0081f77c  8bc1                 mov eax, ecx
// 0081f77e  c1e808               shr eax, 8
// 0081f781  0fb6c0               movzx eax, al
// 0081f784  89442404             mov dword ptr [esp + 4], eax
// 0081f788  db442404             fild dword ptr [esp + 4]
// 0081f78c  0fb6c9               movzx ecx, cl
// 0081f78f  d97c2404             fnstcw word ptr [esp + 4]
// 0081f793  0fb7442404           movzx eax, word ptr [esp + 4]
// 0081f798  d8ca                 fmul st(2)
// 0081f79a  0d000c0000           or eax, 0xc00
// 0081f79f  89442408             mov dword ptr [esp + 8], eax
// 0081f7a3  d8c1                 fadd st(1)
// 0081f7a5  c1e208               shl edx, 8
// 0081f7a8  d96c2408             fldcw word ptr [esp + 8]
// 0081f7ac  db5c2408             fistp dword ptr [esp + 8]
// 0081f7b0  0fb6442408           movzx eax, byte ptr [esp + 8]
// 0081f7b5  0bd0                 or edx, eax
// 0081f7b7  c1e208               shl edx, 8
// 0081f7ba  d96c2404             fldcw word ptr [esp + 4]
// 0081f7be  894c2404             mov dword ptr [esp + 4], ecx
// 0081f7c2  db442404             fild dword ptr [esp + 4]
// 0081f7c6  d97c2404             fnstcw word ptr [esp + 4]
// 0081f7ca  deca                 fmulp st(2)
// 0081f7cc  0fb7442404           movzx eax, word ptr [esp + 4]
// 0081f7d1  0d000c0000           or eax, 0xc00
// 0081f7d6  89442408             mov dword ptr [esp + 8], eax
// 0081f7da  dec1                 faddp st(1)
// 0081f7dc  d96c2408             fldcw word ptr [esp + 8]
// 0081f7e0  db5c2408             fistp dword ptr [esp + 8]
// 0081f7e4  0fb6442408           movzx eax, byte ptr [esp + 8]
// 0081f7e9  0fb6c8               movzx ecx, al
// 0081f7ec  d96c2404             fldcw word ptr [esp + 4]
// 0081f7f0  0bd1                 or edx, ecx
// 0081f7f2  8bc2                 mov eax, edx
// 0081f7f4  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?LightenColor@CXTPImageManagerIcon@@AAEKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp

// roc 2007-03 00625120  unit: seg_00620000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00625120
//
// 00625120  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00625124  d9e8                 fld1 
// 00625126  dd442408             fld qword ptr [esp + 8]
// 0062512a  8bc1                 mov eax, ecx
// 0062512c  c1e810               shr eax, 0x10
// 0062512f  dce9                 fsub st(1), st(0)
// 00625131  dc0d10c47800         fmul qword ptr [0x78c410]
// 00625137  0fb6d0               movzx edx, al
// 0062513a  89542404             mov dword ptr [esp + 4], edx
// 0062513e  33d2                 xor edx, edx
// 00625140  db442404             fild dword ptr [esp + 4]
// 00625144  d97c2404             fnstcw word ptr [esp + 4]
// 00625148  0fb7442404           movzx eax, word ptr [esp + 4]
// 0062514d  d8ca                 fmul st(2)
// 0062514f  0d000c0000           or eax, 0xc00
// 00625154  89442408             mov dword ptr [esp + 8], eax
// 00625158  d8c1                 fadd st(1)
// 0062515a  d96c2408             fldcw word ptr [esp + 8]
// 0062515e  db5c2408             fistp dword ptr [esp + 8]
// 00625162  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00625167  8af0                 mov dh, al
// 00625169  0fb6c5               movzx eax, ch
// 0062516c  d96c2404             fldcw word ptr [esp + 4]
// 00625170  89442404             mov dword ptr [esp + 4], eax
// 00625174  0fb6c9               movzx ecx, cl
// 00625177  db442404             fild dword ptr [esp + 4]
// 0062517b  d97c2404             fnstcw word ptr [esp + 4]
// 0062517f  d8ca                 fmul st(2)
// 00625181  0fb7442404           movzx eax, word ptr [esp + 4]
// 00625186  0d000c0000           or eax, 0xc00
// 0062518b  89442408             mov dword ptr [esp + 8], eax
// 0062518f  d8c1                 fadd st(1)
// 00625191  d96c2408             fldcw word ptr [esp + 8]
// 00625195  db5c2408             fistp dword ptr [esp + 8]
// 00625199  0fb6442408           movzx eax, byte ptr [esp + 8]
// 0062519e  8ad0                 mov dl, al
// 006251a0  d96c2404             fldcw word ptr [esp + 4]
// 006251a4  894c2404             mov dword ptr [esp + 4], ecx
// 006251a8  db442404             fild dword ptr [esp + 4]
// 006251ac  c1e208               shl edx, 8
// 006251af  d97c2404             fnstcw word ptr [esp + 4]
// 006251b3  deca                 fmulp st(2)
// 006251b5  0fb7442404           movzx eax, word ptr [esp + 4]
// 006251ba  0d000c0000           or eax, 0xc00
// 006251bf  89442408             mov dword ptr [esp + 8], eax
// 006251c3  dec1                 faddp st(1)
// 006251c5  d96c2408             fldcw word ptr [esp + 8]
// 006251c9  db5c2408             fistp dword ptr [esp + 8]
// 006251cd  0fb6442408           movzx eax, byte ptr [esp + 8]
// 006251d2  0fb6c8               movzx ecx, al
// 006251d5  d96c2404             fldcw word ptr [esp + 4]
// 006251d9  0bd1                 or edx, ecx
// 006251db  8bc2                 mov eax, edx
// 006251dd  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?LightenColor@CXTPImageManagerIcon@@AAEKKN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp

// roc 2008-06 00612fb0  unit: seg_00610000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00612fb0
//
// 00612fb0  56                   push esi
// 00612fb1  8bf1                 mov esi, ecx
// 00612fb3  807e0800             cmp byte ptr [esi + 8], 0
// 00612fb7  7405                 je 0x612fbe
// 00612fb9  e8625d0400           call 0x658d20
// 00612fbe  8b442408             mov eax, dword ptr [esp + 8]
// 00612fc2  d98684000000         fld dword ptr [esi + 0x84]
// 00612fc8  d800                 fadd dword ptr [eax]
// 00612fca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00612fce  d99e84000000         fstp dword ptr [esi + 0x84]
// 00612fd4  d94004               fld dword ptr [eax + 4]
// 00612fd7  d88688000000         fadd dword ptr [esi + 0x88]
// 00612fdd  d99e88000000         fstp dword ptr [esi + 0x88]
// 00612fe3  d94008               fld dword ptr [eax + 8]
// 00612fe6  d8868c000000         fadd dword ptr [esi + 0x8c]
// 00612fec  d99e8c000000         fstp dword ptr [esi + 0x8c]
// 00612ff2  d901                 fld dword ptr [ecx]
// 00612ff4  d86630               fsub dword ptr [esi + 0x30]
// 00612ff7  d94104               fld dword ptr [ecx + 4]
// 00612ffa  d86634               fsub dword ptr [esi + 0x34]
// 00612ffd  d94108               fld dword ptr [ecx + 8]
// 00613000  d86638               fsub dword ptr [esi + 0x38]
// 00613003  d94008               fld dword ptr [eax + 8]
// 00613006  d8ca                 fmul st(2)
// 00613008  d94004               fld dword ptr [eax + 4]
// 0061300b  d8ca                 fmul st(2)
// 0061300d  dee9                 fsubp st(1)
// 0061300f  d900                 fld dword ptr [eax]
// 00613011  deca                 fmulp st(2)
// 00613013  d94008               fld dword ptr [eax + 8]
// 00613016  d8cc                 fmul st(4)
// 00613018  deea                 fsubp st(2)
// 0061301a  d94004               fld dword ptr [eax + 4]
// 0061301d  decc                 fmulp st(4)
// 0061301f  d900                 fld dword ptr [eax]
// 00613021  decb                 fmulp st(3)
// 00613023  d9cb                 fxch st(3)
// 00613025  dee2                 fsubrp st(2)
// 00613027  d98690000000         fld dword ptr [esi + 0x90]
// 0061302d  dec3                 faddp st(3)
// 0061302f  d9ca                 fxch st(2)
// 00613031  d99e90000000         fstp dword ptr [esi + 0x90]
// 00613037  d98694000000         fld dword ptr [esi + 0x94]
// 0061303d  dec2                 faddp st(2)
// 0061303f  d9c9                 fxch st(1)
// 00613041  d99e94000000         fstp dword ptr [esi + 0x94]
// 00613047  d88698000000         fadd dword ptr [esi + 0x98]
// 0061304d  d99e98000000         fstp dword ptr [esi + 0x98]
// 00613053  5e                   pop esi
// 00613054  c20800               ret 8
// library rbxgs/roc_simbody_native_full_family_6e9d82d2be587087.cpp (function ?accumulateForce@SimBody@RBX@@QAEXABVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_simbody_native_full_family_6e9d82d2be587087.cpp

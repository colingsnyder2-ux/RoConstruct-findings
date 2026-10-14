// roc 2008-06 0060f750  unit: RBX::BlockBlockContact  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060f750
//
// 0060f750  83ec18               sub esp, 0x18
// 0060f753  d901                 fld dword ptr [ecx]
// 0060f755  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060f759  d94104               fld dword ptr [ecx + 4]
// 0060f75c  50                   push eax
// 0060f75d  d94108               fld dword ptr [ecx + 8]
// 0060f760  d9410c               fld dword ptr [ecx + 0xc]
// 0060f763  d94110               fld dword ptr [ecx + 0x10]
// 0060f766  d9442424             fld dword ptr [esp + 0x24]
// 0060f76a  dced                 fsub st(5), st(0)
// 0060f76c  d9cd                 fxch st(5)
// 0060f76e  d95c2404             fstp dword ptr [esp + 4]
// 0060f772  d9cb                 fxch st(3)
// 0060f774  d8e4                 fsub st(4)
// 0060f776  d95c2408             fstp dword ptr [esp + 8]
// 0060f77a  d9c9                 fxch st(1)
// 0060f77c  d8e3                 fsub st(3)
// 0060f77e  d95c240c             fstp dword ptr [esp + 0xc]
// 0060f782  d8c2                 fadd st(2)
// 0060f784  d95c2410             fstp dword ptr [esp + 0x10]
// 0060f788  d8c1                 fadd st(1)
// 0060f78a  d95c2414             fstp dword ptr [esp + 0x14]
// 0060f78e  d84114               fadd dword ptr [ecx + 0x14]
// 0060f791  8d4c2404             lea ecx, [esp + 4]
// 0060f795  d95c2418             fstp dword ptr [esp + 0x18]
// 0060f799  e8c273ffff           call 0x606b60
// 0060f79e  33c9                 xor ecx, ecx
// 0060f7a0  84c0                 test al, al
// 0060f7a2  0f94c1               sete cl
// 0060f7a5  8ac1                 mov al, cl
// 0060f7a7  83c418               add esp, 0x18
// 0060f7aa  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?separatedByMoreThan@Extents@RBX@@QBE_NABV12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/util/Extents.cpp

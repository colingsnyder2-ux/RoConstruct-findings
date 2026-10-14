// roc 2008-06 005cef60  unit: DxUserInput  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cef60
//
// 005cef60  8b442408             mov eax, dword ptr [esp + 8]
// 005cef64  d9ee                 fldz 
// 005cef66  d9c0                 fld st(0)
// 005cef68  d94008               fld dword ptr [eax + 8]
// 005cef6b  d820                 fsub dword ptr [eax]
// 005cef6d  d9400c               fld dword ptr [eax + 0xc]
// 005cef70  d86004               fsub dword ptr [eax + 4]
// 005cef73  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005cef77  d905ac9b8100         fld dword ptr [0x819bac]
// 005cef7d  83e802               sub eax, 2
// 005cef80  741e                 je 0x5cefa0
// 005cef82  83e801               sub eax, 1
// 005cef85  7410                 je 0x5cef97
// 005cef87  83e801               sub eax, 1
// 005cef8a  751a                 jne 0x5cefa6
// 005cef8c  dddb                 fstp st(3)
// 005cef8e  d94108               fld dword ptr [ecx + 8]
// 005cef91  d8e2                 fsub st(2)
// 005cef93  d8cb                 fmul st(3)
// 005cef95  eb0d                 jmp 0x5cefa4
// 005cef97  dddb                 fstp st(3)
// 005cef99  d94108               fld dword ptr [ecx + 8]
// 005cef9c  d8e2                 fsub st(2)
// 005cef9e  eb04                 jmp 0x5cefa4
// 005cefa0  dddb                 fstp st(3)
// 005cefa2  d901                 fld dword ptr [ecx]
// 005cefa4  d9cb                 fxch st(3)
// 005cefa6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005cefaa  83e800               sub eax, 0
// 005cefad  7440                 je 0x5cefef
// 005cefaf  83e801               sub eax, 1
// 005cefb2  7410                 je 0x5cefc4
// 005cefb4  83e803               sub eax, 3
// 005cefb7  753f                 jne 0x5ceff8
// 005cefb9  dddc                 fstp st(4)
// 005cefbb  d9410c               fld dword ptr [ecx + 0xc]
// 005cefbe  d8e1                 fsub st(1)
// 005cefc0  decc                 fmulp st(4)
// 005cefc2  eb0b                 jmp 0x5cefcf
// 005cefc4  dddc                 fstp st(4)
// 005cefc6  dddb                 fstp st(3)
// 005cefc8  d9410c               fld dword ptr [ecx + 0xc]
// 005cefcb  d8e3                 fsub st(3)
// 005cefcd  d9cb                 fxch st(3)
// 005cefcf  8b442404             mov eax, dword ptr [esp + 4]
// 005cefd3  d9c9                 fxch st(1)
// 005cefd5  d8c2                 fadd st(2)
// 005cefd7  d9c9                 fxch st(1)
// 005cefd9  d8c3                 fadd st(3)
// 005cefdb  d9ca                 fxch st(2)
// 005cefdd  d918                 fstp dword ptr [eax]
// 005cefdf  d9ca                 fxch st(2)
// 005cefe1  d95804               fstp dword ptr [eax + 4]
// 005cefe4  d9c9                 fxch st(1)
// 005cefe6  d95808               fstp dword ptr [eax + 8]
// 005cefe9  d9580c               fstp dword ptr [eax + 0xc]
// 005cefec  c21000               ret 0x10
// 005cefef  dddc                 fstp st(4)
// 005ceff1  dddb                 fstp st(3)
// 005ceff3  d94104               fld dword ptr [ecx + 4]
// 005ceff6  ebd5                 jmp 0x5cefcd
// 005ceff8  ddd8                 fstp st(0)
// 005ceffa  ebd3                 jmp 0x5cefcf
// library rbxgs-dll/util\Rect.cpp (function ?positionChild@Rect@RBX@@QBE?AV12@ABV12@W4Location@12@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Rect.cpp

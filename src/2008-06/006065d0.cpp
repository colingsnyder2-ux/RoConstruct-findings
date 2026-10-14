// roc 2008-06 006065d0  unit: RBX::PointToPointBreakConnector  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006065d0
//
// 006065d0  80791800             cmp byte ptr [ecx + 0x18], 0
// 006065d4  0f8589000000         jne 0x606663
// 006065da  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006065dd  8b5108               mov edx, dword ptr [ecx + 8]
// 006065e0  d9401c               fld dword ptr [eax + 0x1c]
// 006065e3  d8621c               fsub dword ptr [edx + 0x1c]
// 006065e6  83c01c               add eax, 0x1c
// 006065e9  d94004               fld dword ptr [eax + 4]
// 006065ec  d86220               fsub dword ptr [edx + 0x20]
// 006065ef  d94008               fld dword ptr [eax + 8]
// 006065f2  d86224               fsub dword ptr [edx + 0x24]
// 006065f5  d94110               fld dword ptr [ecx + 0x10]
// 006065f8  d9e0                 fchs 
// 006065fa  dccb                 fmul st(3), st(0)
// 006065fc  dcca                 fmul st(2), st(0)
// 006065fe  dec9                 fmulp st(1)
// 00606600  d9c1                 fld st(1)
// 00606602  d9e1                 fabs 
// 00606604  d9c3                 fld st(3)
// 00606606  d9e1                 fabs 
// 00606608  dec1                 faddp st(1)
// 0060660a  d9c1                 fld st(1)
// 0060660c  d9e1                 fabs 
// 0060660e  dec1                 faddp st(1)
// 00606610  d85914               fcomp dword ptr [ecx + 0x14]
// 00606613  dfe0                 fnstsw ax
// 00606615  f6c441               test ah, 0x41
// 00606618  7507                 jne 0x606621
// 0060661a  b801000000           mov eax, 1
// 0060661f  eb02                 jmp 0x606623
// 00606621  33c0                 xor eax, eax
// 00606623  884118               mov byte ptr [ecx + 0x18], al
// 00606626  d9c2                 fld st(2)
// 00606628  d9e0                 fchs 
// 0060662a  d9c2                 fld st(2)
// 0060662c  d9e0                 fchs 
// 0060662e  d9c2                 fld st(2)
// 00606630  d9e0                 fchs 
// 00606632  d94228               fld dword ptr [edx + 0x28]
// 00606635  dec3                 faddp st(3)
// 00606637  d9ca                 fxch st(2)
// 00606639  d95a28               fstp dword ptr [edx + 0x28]
// 0060663c  d8422c               fadd dword ptr [edx + 0x2c]
// 0060663f  d95a2c               fstp dword ptr [edx + 0x2c]
// 00606642  d84230               fadd dword ptr [edx + 0x30]
// 00606645  d95a30               fstp dword ptr [edx + 0x30]
// 00606648  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0060664b  d94028               fld dword ptr [eax + 0x28]
// 0060664e  83c028               add eax, 0x28
// 00606651  dec3                 faddp st(3)
// 00606653  d9ca                 fxch st(2)
// 00606655  d918                 fstp dword ptr [eax]
// 00606657  d84004               fadd dword ptr [eax + 4]
// 0060665a  d95804               fstp dword ptr [eax + 4]
// 0060665d  d84008               fadd dword ptr [eax + 8]
// 00606660  d95808               fstp dword ptr [eax + 8]
// 00606663  c20800               ret 8
// library openrbx-client/App\v8kernel\Connector.cpp (function ?computeForce@PointToPointBreakConnector@RBX@@UAEXM_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8kernel/Connector.cpp

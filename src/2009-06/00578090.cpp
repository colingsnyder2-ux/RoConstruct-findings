// roc 2009-06 00578090  unit: G3D::LineSegment  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578090
//
// 00578090  d9e8                 fld1 
// 00578092  56                   push esi
// 00578093  8bf1                 mov esi, ecx
// 00578095  d85e08               fcomp dword ptr [esi + 8]
// 00578098  dfe0                 fnstsw ax
// 0057809a  f6c441               test ah, 0x41
// 0057809d  0f8595000000         jne 0x578138
// 005780a3  d90594758b00         fld dword ptr [0x8b7594]
// 005780a9  d85e08               fcomp dword ptr [esi + 8]
// 005780ac  dfe0                 fnstsw ax
// 005780ae  f6c405               test ah, 5
// 005780b1  8b442408             mov eax, dword ptr [esp + 8]
// 005780b5  7a5b                 jp 0x578112
// 005780b7  d94614               fld dword ptr [esi + 0x14]
// 005780ba  d9e0                 fchs 
// 005780bc  d94620               fld dword ptr [esi + 0x20]
// 005780bf  d9f3                 fpatan 
// 005780c1  d918                 fstp dword ptr [eax]
// 005780c3  d94608               fld dword ptr [esi + 8]
// 005780c6  dc1588cf8b00         fcom qword ptr [0x8bcf88]
// 005780cc  dfe0                 fnstsw ax
// 005780ce  f6c441               test ah, 0x41
// 005780d1  751c                 jne 0x5780ef
// 005780d3  d9e8                 fld1 
// 005780d5  d8d9                 fcomp st(1)
// 005780d7  dfe0                 fnstsw ax
// 005780d9  f6c441               test ah, 0x41
// 005780dc  7507                 jne 0x5780e5
// 005780de  e87f231a00           call 0x71a462
// 005780e3  eb12                 jmp 0x5780f7
// 005780e5  ddd8                 fstp st(0)
// 005780e7  dd05e0b88c00         fld qword ptr [0x8cb8e0]
// 005780ed  eb08                 jmp 0x5780f7
// 005780ef  ddd8                 fstp st(0)
// 005780f1  dd05d8b88c00         fld qword ptr [0x8cb8d8]
// 005780f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005780fb  d919                 fstp dword ptr [ecx]
// 005780fd  8b542410             mov edx, dword ptr [esp + 0x10]
// 00578101  d94604               fld dword ptr [esi + 4]
// 00578104  b001                 mov al, 1
// 00578106  d9e0                 fchs 
// 00578108  d906                 fld dword ptr [esi]
// 0057810a  5e                   pop esi
// 0057810b  d9f3                 fpatan 
// 0057810d  d91a                 fstp dword ptr [edx]
// 0057810f  c20c00               ret 0xc
// 00578112  d9460c               fld dword ptr [esi + 0xc]
// 00578115  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00578119  d94610               fld dword ptr [esi + 0x10]
// 0057811c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00578120  d9f3                 fpatan 
// 00578122  5e                   pop esi
// 00578123  d9e0                 fchs 
// 00578125  d918                 fstp dword ptr [eax]
// 00578127  d90550fe8b00         fld dword ptr [0x8bfe50]
// 0057812d  d919                 fstp dword ptr [ecx]
// 0057812f  32c0                 xor al, al
// 00578131  d9ee                 fldz 
// 00578133  d91a                 fstp dword ptr [edx]
// 00578135  c20c00               ret 0xc
// 00578138  d9460c               fld dword ptr [esi + 0xc]
// 0057813b  8b442408             mov eax, dword ptr [esp + 8]
// 0057813f  d94610               fld dword ptr [esi + 0x10]
// 00578142  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00578146  d9f3                 fpatan 
// 00578148  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057814c  5e                   pop esi
// 0057814d  d918                 fstp dword ptr [eax]
// 0057814f  d90554fe8b00         fld dword ptr [0x8bfe54]
// 00578155  d919                 fstp dword ptr [ecx]
// 00578157  32c0                 xor al, al
// 00578159  d9ee                 fldz 
// 0057815b  d91a                 fstp dword ptr [edx]
// 0057815d  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?toEulerAnglesXYZ@Matrix3@G3D@@QBE_NAAM00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp

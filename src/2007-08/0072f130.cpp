// from server: 100% by auto
// roc 2007-08 0072f130  unit: seg_00720000  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072f130
//
// 0072f130  83ec40               sub esp, 0x40
// 0072f133  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0072f137  d94004               fld dword ptr [eax + 4]
// 0072f13a  83ec10               sub esp, 0x10
// 0072f13d  d9ee                 fldz 
// 0072f13f  dcc1                 fadd st(1), st(0)
// 0072f141  d9c9                 fxch st(1)
// 0072f143  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072f147  d944246c             fld dword ptr [esp + 0x6c]
// 0072f14b  d95c240c             fstp dword ptr [esp + 0xc]
// 0072f14f  d800                 fadd dword ptr [eax]
// 0072f151  8d442410             lea eax, [esp + 0x10]
// 0072f155  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072f159  d944246c             fld dword ptr [esp + 0x6c]
// 0072f15d  d95c2408             fstp dword ptr [esp + 8]
// 0072f161  d9ee                 fldz 
// 0072f163  d9542404             fst dword ptr [esp + 4]
// 0072f167  d91c24               fstp dword ptr [esp]
// 0072f16a  50                   push eax
// 0072f16b  e8a091d2ff           call 0x458310
// 0072f170  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0072f174  d94004               fld dword ptr [eax + 4]
// 0072f177  83c404               add esp, 4
// 0072f17a  d9ee                 fldz 
// 0072f17c  8d4c2420             lea ecx, [esp + 0x20]
// 0072f180  dcc1                 fadd st(1), st(0)
// 0072f182  d9c9                 fxch st(1)
// 0072f184  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072f188  d944246c             fld dword ptr [esp + 0x6c]
// 0072f18c  d95c240c             fstp dword ptr [esp + 0xc]
// 0072f190  d800                 fadd dword ptr [eax]
// 0072f192  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072f196  d944246c             fld dword ptr [esp + 0x6c]
// 0072f19a  d95c2408             fstp dword ptr [esp + 8]
// 0072f19e  d9ee                 fldz 
// 0072f1a0  d9542404             fst dword ptr [esp + 4]
// 0072f1a4  d91c24               fstp dword ptr [esp]
// 0072f1a7  51                   push ecx
// 0072f1a8  e86391d2ff           call 0x458310
// 0072f1ad  8b442468             mov eax, dword ptr [esp + 0x68]
// 0072f1b1  d94004               fld dword ptr [eax + 4]
// 0072f1b4  83c404               add esp, 4
// 0072f1b7  d9ee                 fldz 
// 0072f1b9  8d542430             lea edx, [esp + 0x30]
// 0072f1bd  dcc1                 fadd st(1), st(0)
// 0072f1bf  d9c9                 fxch st(1)
// 0072f1c1  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072f1c5  d944246c             fld dword ptr [esp + 0x6c]
// 0072f1c9  d95c240c             fstp dword ptr [esp + 0xc]
// 0072f1cd  d800                 fadd dword ptr [eax]
// 0072f1cf  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072f1d3  d944246c             fld dword ptr [esp + 0x6c]
// 0072f1d7  d95c2408             fstp dword ptr [esp + 8]
// 0072f1db  d9ee                 fldz 
// 0072f1dd  d9542404             fst dword ptr [esp + 4]
// 0072f1e1  d91c24               fstp dword ptr [esp]
// 0072f1e4  52                   push edx
// 0072f1e5  e82691d2ff           call 0x458310
// 0072f1ea  8b442464             mov eax, dword ptr [esp + 0x64]
// 0072f1ee  d94004               fld dword ptr [eax + 4]
// 0072f1f1  83c404               add esp, 4
// 0072f1f4  d9ee                 fldz 
// 0072f1f6  dcc1                 fadd st(1), st(0)
// 0072f1f8  d9c9                 fxch st(1)
// 0072f1fa  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072f1fe  d944246c             fld dword ptr [esp + 0x6c]
// 0072f202  d95c240c             fstp dword ptr [esp + 0xc]
// 0072f206  d800                 fadd dword ptr [eax]
// 0072f208  8d442440             lea eax, [esp + 0x40]
// 0072f20c  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072f210  d944246c             fld dword ptr [esp + 0x6c]
// 0072f214  d95c2408             fstp dword ptr [esp + 8]
// 0072f218  d9ee                 fldz 
// 0072f21a  d9542404             fst dword ptr [esp + 4]
// 0072f21e  d91c24               fstp dword ptr [esp]
// 0072f221  50                   push eax
// 0072f222  e8e990d2ff           call 0x458310
// 0072f227  8d4c2414             lea ecx, [esp + 0x14]
// 0072f22b  51                   push ecx
// 0072f22c  8d542428             lea edx, [esp + 0x28]
// 0072f230  52                   push edx
// 0072f231  8d44243c             lea eax, [esp + 0x3c]
// 0072f235  8b542468             mov edx, dword ptr [esp + 0x68]
// 0072f239  50                   push eax
// 0072f23a  8b442468             mov eax, dword ptr [esp + 0x68]
// 0072f23e  8d4c2450             lea ecx, [esp + 0x50]
// 0072f242  51                   push ecx
// 0072f243  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0072f247  52                   push edx
// 0072f248  50                   push eax
// 0072f249  51                   push ecx
// 0072f24a  e841faffff           call 0x72ec90
// 0072f24f  83c470               add esp, 0x70
// 0072f252  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?rect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@ABVVector2@2@333@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp

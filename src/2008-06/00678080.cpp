// roc 2008-06 00678080  unit: RBX::AdornG3D  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00678080
//
// 00678080  83ec18               sub esp, 0x18
// 00678083  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00678087  d900                 fld dword ptr [eax]
// 00678089  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067808d  d95c2404             fstp dword ptr [esp + 4]
// 00678091  56                   push esi
// 00678092  d94004               fld dword ptr [eax + 4]
// 00678095  8b742428             mov esi, dword ptr [esp + 0x28]
// 00678099  d95c240c             fstp dword ptr [esp + 0xc]
// 0067809d  d94008               fld dword ptr [eax + 8]
// 006780a0  d95c2420             fstp dword ptr [esp + 0x20]
// 006780a4  d9400c               fld dword ptr [eax + 0xc]
// 006780a7  8d86a8040000         lea eax, [esi + 0x4a8]
// 006780ad  d95c2404             fstp dword ptr [esp + 4]
// 006780b1  50                   push eax
// 006780b2  d901                 fld dword ptr [ecx]
// 006780b4  d918                 fstp dword ptr [eax]
// 006780b6  d94104               fld dword ptr [ecx + 4]
// 006780b9  d95804               fstp dword ptr [eax + 4]
// 006780bc  d94108               fld dword ptr [ecx + 8]
// 006780bf  d95808               fstp dword ptr [eax + 8]
// 006780c2  d9410c               fld dword ptr [ecx + 0xc]
// 006780c5  d9580c               fstp dword ptr [eax + 0xc]
// 006780c8  ff15f4298000         call dword ptr [0x8029f4]
// 006780ce  d9442424             fld dword ptr [esp + 0x24]
// 006780d2  83ec08               sub esp, 8
// 006780d5  8bce                 mov ecx, esi
// 006780d7  dd1c24               fstp qword ptr [esp]
// 006780da  e861f5dfff           call 0x477640
// 006780df  d9ee                 fldz 
// 006780e1  d9542410             fst dword ptr [esp + 0x10]
// 006780e5  8d442410             lea eax, [esp + 0x10]
// 006780e9  d95c2414             fstp dword ptr [esp + 0x14]
// 006780ed  50                   push eax
// 006780ee  d9e8                 fld1 
// 006780f0  8bce                 mov ecx, esi
// 006780f2  d95c241c             fstp dword ptr [esp + 0x1c]
// 006780f6  e8b5fcdfff           call 0x477db0
// 006780fb  6a00                 push 0
// 006780fd  8bce                 mov ecx, esi
// 006780ff  e80c33e0ff           call 0x47b410
// 00678104  d9442408             fld dword ptr [esp + 8]
// 00678108  d95c2410             fstp dword ptr [esp + 0x10]
// 0067810c  8d4c2410             lea ecx, [esp + 0x10]
// 00678110  d944240c             fld dword ptr [esp + 0xc]
// 00678114  51                   push ecx
// 00678115  8bce                 mov ecx, esi
// 00678117  d95c2418             fstp dword ptr [esp + 0x18]
// 0067811b  e880fddfff           call 0x477ea0
// 00678120  d9442420             fld dword ptr [esp + 0x20]
// 00678124  d95c2410             fstp dword ptr [esp + 0x10]
// 00678128  8d542410             lea edx, [esp + 0x10]
// 0067812c  d944240c             fld dword ptr [esp + 0xc]
// 00678130  52                   push edx
// 00678131  8bce                 mov ecx, esi
// 00678133  d95c2418             fstp dword ptr [esp + 0x18]
// 00678137  e864fddfff           call 0x477ea0
// 0067813c  d9442420             fld dword ptr [esp + 0x20]
// 00678140  d95c2410             fstp dword ptr [esp + 0x10]
// 00678144  8d442410             lea eax, [esp + 0x10]
// 00678148  d944240c             fld dword ptr [esp + 0xc]
// 0067814c  50                   push eax
// 0067814d  8bce                 mov ecx, esi
// 0067814f  d95c2418             fstp dword ptr [esp + 0x18]
// 00678153  e848fddfff           call 0x477ea0
// 00678158  d9442420             fld dword ptr [esp + 0x20]
// 0067815c  d95c2410             fstp dword ptr [esp + 0x10]
// 00678160  8d4c2410             lea ecx, [esp + 0x10]
// 00678164  d9442404             fld dword ptr [esp + 4]
// 00678168  51                   push ecx
// 00678169  8bce                 mov ecx, esi
// 0067816b  d95c2418             fstp dword ptr [esp + 0x18]
// 0067816f  e82cfddfff           call 0x477ea0
// 00678174  d9442420             fld dword ptr [esp + 0x20]
// 00678178  d95c2410             fstp dword ptr [esp + 0x10]
// 0067817c  8d542410             lea edx, [esp + 0x10]
// 00678180  d9442404             fld dword ptr [esp + 4]
// 00678184  52                   push edx
// 00678185  8bce                 mov ecx, esi
// 00678187  d95c2418             fstp dword ptr [esp + 0x18]
// 0067818b  e810fddfff           call 0x477ea0
// 00678190  d9442408             fld dword ptr [esp + 8]
// 00678194  d95c2410             fstp dword ptr [esp + 0x10]
// 00678198  8d442410             lea eax, [esp + 0x10]
// 0067819c  d9442404             fld dword ptr [esp + 4]
// 006781a0  50                   push eax
// 006781a1  8bce                 mov ecx, esi
// 006781a3  d95c2418             fstp dword ptr [esp + 0x18]
// 006781a7  e8f4fcdfff           call 0x477ea0
// 006781ac  d9442408             fld dword ptr [esp + 8]
// 006781b0  d95c2410             fstp dword ptr [esp + 0x10]
// 006781b4  8d4c2410             lea ecx, [esp + 0x10]
// 006781b8  d9442404             fld dword ptr [esp + 4]
// 006781bc  51                   push ecx
// 006781bd  8bce                 mov ecx, esi
// 006781bf  d95c2418             fstp dword ptr [esp + 0x18]
// 006781c3  e8d8fcdfff           call 0x477ea0
// 006781c8  d9442408             fld dword ptr [esp + 8]
// 006781cc  d95c2410             fstp dword ptr [esp + 0x10]
// 006781d0  8d542410             lea edx, [esp + 0x10]
// 006781d4  d944240c             fld dword ptr [esp + 0xc]
// 006781d8  52                   push edx
// 006781d9  8bce                 mov ecx, esi
// 006781db  d95c2418             fstp dword ptr [esp + 0x18]
// 006781df  e8bcfcdfff           call 0x477ea0
// 006781e4  8bce                 mov ecx, esi
// 006781e6  5e                   pop esi
// 006781e7  83c418               add esp, 0x18
// 006781ea  e9a107e0ff           jmp 0x478990
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?outlineRect2d@DrawPrimitives@RBX@@SAXABVRect@2@MPAVRenderDevice@G3D@@ABVColor4@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp

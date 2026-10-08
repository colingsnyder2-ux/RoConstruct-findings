// roc 2007-08 0062f800  unit: RBX::IndexBox  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f800
//
// 0062f800  83ec18               sub esp, 0x18
// 0062f803  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062f807  d900                 fld dword ptr [eax]
// 0062f809  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062f80d  d95c2404             fstp dword ptr [esp + 4]
// 0062f811  56                   push esi
// 0062f812  d94004               fld dword ptr [eax + 4]
// 0062f815  8b742428             mov esi, dword ptr [esp + 0x28]
// 0062f819  d95c240c             fstp dword ptr [esp + 0xc]
// 0062f81d  d94008               fld dword ptr [eax + 8]
// 0062f820  d95c2420             fstp dword ptr [esp + 0x20]
// 0062f824  d9400c               fld dword ptr [eax + 0xc]
// 0062f827  8d86a8040000         lea eax, [esi + 0x4a8]
// 0062f82d  d95c2404             fstp dword ptr [esp + 4]
// 0062f831  50                   push eax
// 0062f832  d901                 fld dword ptr [ecx]
// 0062f834  d918                 fstp dword ptr [eax]
// 0062f836  d94104               fld dword ptr [ecx + 4]
// 0062f839  d95804               fstp dword ptr [eax + 4]
// 0062f83c  d94108               fld dword ptr [ecx + 8]
// 0062f83f  d95808               fstp dword ptr [eax + 8]
// 0062f842  d9410c               fld dword ptr [ecx + 0xc]
// 0062f845  d9580c               fstp dword ptr [eax + 0xc]
// 0062f848  ff150ceb7700         call dword ptr [0x77eb0c]
// 0062f84e  d9442424             fld dword ptr [esp + 0x24]
// 0062f852  83ec08               sub esp, 8
// 0062f855  8bce                 mov ecx, esi
// 0062f857  dd1c24               fstp qword ptr [esp]
// 0062f85a  e8714ae4ff           call 0x4742d0
// 0062f85f  d9ee                 fldz 
// 0062f861  d9542410             fst dword ptr [esp + 0x10]
// 0062f865  8d442410             lea eax, [esp + 0x10]
// 0062f869  d95c2414             fstp dword ptr [esp + 0x14]
// 0062f86d  50                   push eax
// 0062f86e  d9e8                 fld1 
// 0062f870  8bce                 mov ecx, esi
// 0062f872  d95c241c             fstp dword ptr [esp + 0x1c]
// 0062f876  e86552e4ff           call 0x474ae0
// 0062f87b  6a00                 push 0
// 0062f87d  8bce                 mov ecx, esi
// 0062f87f  e8bc85e4ff           call 0x477e40
// 0062f884  d9442408             fld dword ptr [esp + 8]
// 0062f888  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f88c  8d4c2410             lea ecx, [esp + 0x10]
// 0062f890  d944240c             fld dword ptr [esp + 0xc]
// 0062f894  51                   push ecx
// 0062f895  8bce                 mov ecx, esi
// 0062f897  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f89b  e83053e4ff           call 0x474bd0
// 0062f8a0  d9442420             fld dword ptr [esp + 0x20]
// 0062f8a4  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f8a8  8d542410             lea edx, [esp + 0x10]
// 0062f8ac  d944240c             fld dword ptr [esp + 0xc]
// 0062f8b0  52                   push edx
// 0062f8b1  8bce                 mov ecx, esi
// 0062f8b3  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f8b7  e81453e4ff           call 0x474bd0
// 0062f8bc  d9442420             fld dword ptr [esp + 0x20]
// 0062f8c0  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f8c4  8d442410             lea eax, [esp + 0x10]
// 0062f8c8  d944240c             fld dword ptr [esp + 0xc]
// 0062f8cc  50                   push eax
// 0062f8cd  8bce                 mov ecx, esi
// 0062f8cf  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f8d3  e8f852e4ff           call 0x474bd0
// 0062f8d8  d9442420             fld dword ptr [esp + 0x20]
// 0062f8dc  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f8e0  8d4c2410             lea ecx, [esp + 0x10]
// 0062f8e4  d9442404             fld dword ptr [esp + 4]
// 0062f8e8  51                   push ecx
// 0062f8e9  8bce                 mov ecx, esi
// 0062f8eb  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f8ef  e8dc52e4ff           call 0x474bd0
// 0062f8f4  d9442420             fld dword ptr [esp + 0x20]
// 0062f8f8  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f8fc  8d542410             lea edx, [esp + 0x10]
// 0062f900  d9442404             fld dword ptr [esp + 4]
// 0062f904  52                   push edx
// 0062f905  8bce                 mov ecx, esi
// 0062f907  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f90b  e8c052e4ff           call 0x474bd0
// 0062f910  d9442408             fld dword ptr [esp + 8]
// 0062f914  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f918  8d442410             lea eax, [esp + 0x10]
// 0062f91c  d9442404             fld dword ptr [esp + 4]
// 0062f920  50                   push eax
// 0062f921  8bce                 mov ecx, esi
// 0062f923  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f927  e8a452e4ff           call 0x474bd0
// 0062f92c  d9442408             fld dword ptr [esp + 8]
// 0062f930  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f934  8d4c2410             lea ecx, [esp + 0x10]
// 0062f938  d9442404             fld dword ptr [esp + 4]
// 0062f93c  51                   push ecx
// 0062f93d  8bce                 mov ecx, esi
// 0062f93f  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f943  e88852e4ff           call 0x474bd0
// 0062f948  d9442408             fld dword ptr [esp + 8]
// 0062f94c  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f950  8d542410             lea edx, [esp + 0x10]
// 0062f954  d944240c             fld dword ptr [esp + 0xc]
// 0062f958  52                   push edx
// 0062f959  8bce                 mov ecx, esi
// 0062f95b  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f95f  e86c52e4ff           call 0x474bd0
// 0062f964  8bce                 mov ecx, esi
// 0062f966  5e                   pop esi
// 0062f967  83c418               add esp, 0x18
// 0062f96a  e9815ee4ff           jmp 0x4757f0
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?outlineRect2d@DrawPrimitives@RBX@@SAXABVRect@2@MPAVRenderDevice@G3D@@ABVColor4@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp

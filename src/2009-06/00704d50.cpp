// roc 2009-06 00704d50  unit: RBX::AdornG3D  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00704d50
//
// 00704d50  83ec18               sub esp, 0x18
// 00704d53  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00704d57  d900                 fld dword ptr [eax]
// 00704d59  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00704d5d  d95c2404             fstp dword ptr [esp + 4]
// 00704d61  56                   push esi
// 00704d62  d94004               fld dword ptr [eax + 4]
// 00704d65  8b742428             mov esi, dword ptr [esp + 0x28]
// 00704d69  d95c240c             fstp dword ptr [esp + 0xc]
// 00704d6d  d94008               fld dword ptr [eax + 8]
// 00704d70  d95c2420             fstp dword ptr [esp + 0x20]
// 00704d74  d9400c               fld dword ptr [eax + 0xc]
// 00704d77  8d86a8040000         lea eax, [esi + 0x4a8]
// 00704d7d  d95c2404             fstp dword ptr [esp + 4]
// 00704d81  50                   push eax
// 00704d82  d901                 fld dword ptr [ecx]
// 00704d84  d918                 fstp dword ptr [eax]
// 00704d86  d94104               fld dword ptr [ecx + 4]
// 00704d89  d95804               fstp dword ptr [eax + 4]
// 00704d8c  d94108               fld dword ptr [ecx + 8]
// 00704d8f  d95808               fstp dword ptr [eax + 8]
// 00704d92  d9410c               fld dword ptr [ecx + 0xc]
// 00704d95  d9580c               fstp dword ptr [eax + 0xc]
// 00704d98  ff1594eb8900         call dword ptr [0x89eb94]
// 00704d9e  d9442424             fld dword ptr [esp + 0x24]
// 00704da2  83ec08               sub esp, 8
// 00704da5  8bce                 mov ecx, esi
// 00704da7  dd1c24               fstp qword ptr [esp]
// 00704daa  e8019fd9ff           call 0x49ecb0
// 00704daf  d9ee                 fldz 
// 00704db1  d9542410             fst dword ptr [esp + 0x10]
// 00704db5  8d442410             lea eax, [esp + 0x10]
// 00704db9  d95c2414             fstp dword ptr [esp + 0x14]
// 00704dbd  50                   push eax
// 00704dbe  d9e8                 fld1 
// 00704dc0  8bce                 mov ecx, esi
// 00704dc2  d95c241c             fstp dword ptr [esp + 0x1c]
// 00704dc6  e855a6d9ff           call 0x49f420
// 00704dcb  6a00                 push 0
// 00704dcd  8bce                 mov ecx, esi
// 00704dcf  e84cdbd9ff           call 0x4a2920
// 00704dd4  d9442408             fld dword ptr [esp + 8]
// 00704dd8  d95c2410             fstp dword ptr [esp + 0x10]
// 00704ddc  8d4c2410             lea ecx, [esp + 0x10]
// 00704de0  d944240c             fld dword ptr [esp + 0xc]
// 00704de4  51                   push ecx
// 00704de5  8bce                 mov ecx, esi
// 00704de7  d95c2418             fstp dword ptr [esp + 0x18]
// 00704deb  e820a7d9ff           call 0x49f510
// 00704df0  d9442420             fld dword ptr [esp + 0x20]
// 00704df4  d95c2410             fstp dword ptr [esp + 0x10]
// 00704df8  8d542410             lea edx, [esp + 0x10]
// 00704dfc  d944240c             fld dword ptr [esp + 0xc]
// 00704e00  52                   push edx
// 00704e01  8bce                 mov ecx, esi
// 00704e03  d95c2418             fstp dword ptr [esp + 0x18]
// 00704e07  e804a7d9ff           call 0x49f510
// 00704e0c  d9442420             fld dword ptr [esp + 0x20]
// 00704e10  d95c2410             fstp dword ptr [esp + 0x10]
// 00704e14  8d442410             lea eax, [esp + 0x10]
// 00704e18  d944240c             fld dword ptr [esp + 0xc]
// 00704e1c  50                   push eax
// 00704e1d  8bce                 mov ecx, esi
// 00704e1f  d95c2418             fstp dword ptr [esp + 0x18]
// 00704e23  e8e8a6d9ff           call 0x49f510
// 00704e28  d9442420             fld dword ptr [esp + 0x20]
// 00704e2c  d95c2410             fstp dword ptr [esp + 0x10]
// 00704e30  8d4c2410             lea ecx, [esp + 0x10]
// 00704e34  d9442404             fld dword ptr [esp + 4]
// 00704e38  51                   push ecx
// 00704e39  8bce                 mov ecx, esi
// 00704e3b  d95c2418             fstp dword ptr [esp + 0x18]
// 00704e3f  e8cca6d9ff           call 0x49f510
// 00704e44  d9442420             fld dword ptr [esp + 0x20]
// 00704e48  d95c2410             fstp dword ptr [esp + 0x10]
// 00704e4c  8d542410             lea edx, [esp + 0x10]
// 00704e50  d9442404             fld dword ptr [esp + 4]
// 00704e54  52                   push edx
// 00704e55  8bce                 mov ecx, esi
// 00704e57  d95c2418             fstp dword ptr [esp + 0x18]
// 00704e5b  e8b0a6d9ff           call 0x49f510
// 00704e60  d9442408             fld dword ptr [esp + 8]
// 00704e64  d95c2410             fstp dword ptr [esp + 0x10]
// 00704e68  8d442410             lea eax, [esp + 0x10]
// 00704e6c  d9442404             fld dword ptr [esp + 4]
// 00704e70  50                   push eax
// 00704e71  8bce                 mov ecx, esi
// 00704e73  d95c2418             fstp dword ptr [esp + 0x18]
// 00704e77  e894a6d9ff           call 0x49f510
// 00704e7c  d9442408             fld dword ptr [esp + 8]
// 00704e80  d95c2410             fstp dword ptr [esp + 0x10]
// 00704e84  8d4c2410             lea ecx, [esp + 0x10]
// 00704e88  d9442404             fld dword ptr [esp + 4]
// 00704e8c  51                   push ecx
// 00704e8d  8bce                 mov ecx, esi
// 00704e8f  d95c2418             fstp dword ptr [esp + 0x18]
// 00704e93  e878a6d9ff           call 0x49f510
// 00704e98  d9442408             fld dword ptr [esp + 8]
// 00704e9c  d95c2410             fstp dword ptr [esp + 0x10]
// 00704ea0  8d542410             lea edx, [esp + 0x10]
// 00704ea4  d944240c             fld dword ptr [esp + 0xc]
// 00704ea8  52                   push edx
// 00704ea9  8bce                 mov ecx, esi
// 00704eab  d95c2418             fstp dword ptr [esp + 0x18]
// 00704eaf  e85ca6d9ff           call 0x49f510
// 00704eb4  8bce                 mov ecx, esi
// 00704eb6  5e                   pop esi
// 00704eb7  83c418               add esp, 0x18
// 00704eba  e9b1b0d9ff           jmp 0x49ff70
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?outlineRect2d@DrawPrimitives@RBX@@SAXABVRect@2@MPAVRenderDevice@G3D@@ABVColor4@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp

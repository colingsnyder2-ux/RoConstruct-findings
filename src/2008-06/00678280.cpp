// roc 2008-06 00678280  unit: RBX::AdornG3D  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00678280
//
// 00678280  83ec30               sub esp, 0x30
// 00678283  56                   push esi
// 00678284  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00678288  6a02                 push 2
// 0067828a  6a01                 push 1
// 0067828c  6a00                 push 0
// 0067828e  8bce                 mov ecx, esi
// 00678290  e85bf2dfff           call 0x4774f0
// 00678295  d9e8                 fld1 
// 00678297  8d442404             lea eax, [esp + 4]
// 0067829b  d9542404             fst dword ptr [esp + 4]
// 0067829f  50                   push eax
// 006782a0  d954240c             fst dword ptr [esp + 0xc]
// 006782a4  8d4c2410             lea ecx, [esp + 0x10]
// 006782a8  d9542410             fst dword ptr [esp + 0x10]
// 006782ac  51                   push ecx
// 006782ad  d9542418             fst dword ptr [esp + 0x18]
// 006782b1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006782b5  d954241c             fst dword ptr [esp + 0x1c]
// 006782b9  8d54241c             lea edx, [esp + 0x1c]
// 006782bd  d9542420             fst dword ptr [esp + 0x20]
// 006782c1  52                   push edx
// 006782c2  d9542428             fst dword ptr [esp + 0x28]
// 006782c6  8d442428             lea eax, [esp + 0x28]
// 006782ca  d95c242c             fstp dword ptr [esp + 0x2c]
// 006782ce  50                   push eax
// 006782cf  8b442448             mov eax, dword ptr [esp + 0x48]
// 006782d3  51                   push ecx
// 006782d4  56                   push esi
// 006782d5  8d5008               lea edx, [eax + 8]
// 006782d8  52                   push edx
// 006782d9  50                   push eax
// 006782da  8d442444             lea eax, [esp + 0x44]
// 006782de  50                   push eax
// 006782df  e8ecb2e7ff           call 0x4f35d0
// 006782e4  83c40c               add esp, 0xc
// 006782e7  50                   push eax
// 006782e8  e8f3811300           call 0x7b04e0
// 006782ed  83c41c               add esp, 0x1c
// 006782f0  6a02                 push 2
// 006782f2  6a03                 push 3
// 006782f4  6a02                 push 2
// 006782f6  8bce                 mov ecx, esi
// 006782f8  e8f3f1dfff           call 0x4774f0
// 006782fd  5e                   pop esi
// 006782fe  83c430               add esp, 0x30
// 00678301  c3                   ret 
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rect2d@DrawPrimitives@RBX@@SAXABVRect@2@PAVRenderDevice@G3D@@ABVColor4@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp

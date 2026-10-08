// roc 2007-08 0062fa00  unit: RBX::IndexBox  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062fa00
//
// 0062fa00  83ec30               sub esp, 0x30
// 0062fa03  56                   push esi
// 0062fa04  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0062fa08  6a02                 push 2
// 0062fa0a  6a01                 push 1
// 0062fa0c  6a00                 push 0
// 0062fa0e  8bce                 mov ecx, esi
// 0062fa10  e85b47e4ff           call 0x474170
// 0062fa15  d9e8                 fld1 
// 0062fa17  8d442404             lea eax, [esp + 4]
// 0062fa1b  d9542404             fst dword ptr [esp + 4]
// 0062fa1f  50                   push eax
// 0062fa20  d954240c             fst dword ptr [esp + 0xc]
// 0062fa24  8d4c2410             lea ecx, [esp + 0x10]
// 0062fa28  d9542410             fst dword ptr [esp + 0x10]
// 0062fa2c  51                   push ecx
// 0062fa2d  d9542418             fst dword ptr [esp + 0x18]
// 0062fa31  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0062fa35  d954241c             fst dword ptr [esp + 0x1c]
// 0062fa39  8d54241c             lea edx, [esp + 0x1c]
// 0062fa3d  d9542420             fst dword ptr [esp + 0x20]
// 0062fa41  52                   push edx
// 0062fa42  d9542428             fst dword ptr [esp + 0x28]
// 0062fa46  8d442428             lea eax, [esp + 0x28]
// 0062fa4a  d95c242c             fstp dword ptr [esp + 0x2c]
// 0062fa4e  50                   push eax
// 0062fa4f  8b442448             mov eax, dword ptr [esp + 0x48]
// 0062fa53  51                   push ecx
// 0062fa54  56                   push esi
// 0062fa55  8d5008               lea edx, [eax + 8]
// 0062fa58  52                   push edx
// 0062fa59  50                   push eax
// 0062fa5a  8d442444             lea eax, [esp + 0x44]
// 0062fa5e  50                   push eax
// 0062fa5f  e81c07ebff           call 0x4e0180
// 0062fa64  83c40c               add esp, 0xc
// 0062fa67  50                   push eax
// 0062fa68  e8c3f60f00           call 0x72f130
// 0062fa6d  83c41c               add esp, 0x1c
// 0062fa70  6a02                 push 2
// 0062fa72  6a03                 push 3
// 0062fa74  6a02                 push 2
// 0062fa76  8bce                 mov ecx, esi
// 0062fa78  e8f346e4ff           call 0x474170
// 0062fa7d  5e                   pop esi
// 0062fa7e  83c430               add esp, 0x30
// 0062fa81  c3                   ret 
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rect2d@DrawPrimitives@RBX@@SAXABVRect@2@PAVRenderDevice@G3D@@ABVColor4@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp

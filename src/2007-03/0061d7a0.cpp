// roc 2007-03 0061d7a0  unit: seg_00610000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061d7a0
//
// 0061d7a0  83ec30               sub esp, 0x30
// 0061d7a3  56                   push esi
// 0061d7a4  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0061d7a8  6a02                 push 2
// 0061d7aa  6a01                 push 1
// 0061d7ac  6a00                 push 0
// 0061d7ae  8bce                 mov ecx, esi
// 0061d7b0  e8bb6ae5ff           call 0x474270
// 0061d7b5  d9e8                 fld1 
// 0061d7b7  8d442404             lea eax, [esp + 4]
// 0061d7bb  d9542404             fst dword ptr [esp + 4]
// 0061d7bf  50                   push eax
// 0061d7c0  d954240c             fst dword ptr [esp + 0xc]
// 0061d7c4  8d4c2410             lea ecx, [esp + 0x10]
// 0061d7c8  d9542410             fst dword ptr [esp + 0x10]
// 0061d7cc  51                   push ecx
// 0061d7cd  d9542418             fst dword ptr [esp + 0x18]
// 0061d7d1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061d7d5  d954241c             fst dword ptr [esp + 0x1c]
// 0061d7d9  8d54241c             lea edx, [esp + 0x1c]
// 0061d7dd  d9542420             fst dword ptr [esp + 0x20]
// 0061d7e1  52                   push edx
// 0061d7e2  d9542428             fst dword ptr [esp + 0x28]
// 0061d7e6  8d442428             lea eax, [esp + 0x28]
// 0061d7ea  d95c242c             fstp dword ptr [esp + 0x2c]
// 0061d7ee  50                   push eax
// 0061d7ef  8b442448             mov eax, dword ptr [esp + 0x48]
// 0061d7f3  51                   push ecx
// 0061d7f4  56                   push esi
// 0061d7f5  8d5008               lea edx, [eax + 8]
// 0061d7f8  52                   push edx
// 0061d7f9  50                   push eax
// 0061d7fa  8d442444             lea eax, [esp + 0x44]
// 0061d7fe  50                   push eax
// 0061d7ff  e82c63ebff           call 0x4d3b30
// 0061d804  83c40c               add esp, 0xc
// 0061d807  50                   push eax
// 0061d808  e893401100           call 0x7318a0
// 0061d80d  83c41c               add esp, 0x1c
// 0061d810  6a02                 push 2
// 0061d812  6a03                 push 3
// 0061d814  6a02                 push 2
// 0061d816  8bce                 mov ecx, esi
// 0061d818  e8536ae5ff           call 0x474270
// 0061d81d  5e                   pop esi
// 0061d81e  83c430               add esp, 0x30
// 0061d821  c3                   ret 
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rect2d@DrawPrimitives@RBX@@SAXABVRect@2@PAVRenderDevice@G3D@@ABVColor4@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp

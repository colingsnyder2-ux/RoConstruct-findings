// roc 2009-06 00704f50  unit: RBX::AdornG3D  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00704f50
//
// 00704f50  83ec30               sub esp, 0x30
// 00704f53  56                   push esi
// 00704f54  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00704f58  6a02                 push 2
// 00704f5a  6a01                 push 1
// 00704f5c  6a00                 push 0
// 00704f5e  8bce                 mov ecx, esi
// 00704f60  e8fb9bd9ff           call 0x49eb60
// 00704f65  d9e8                 fld1 
// 00704f67  8d442404             lea eax, [esp + 4]
// 00704f6b  d9542404             fst dword ptr [esp + 4]
// 00704f6f  50                   push eax
// 00704f70  d954240c             fst dword ptr [esp + 0xc]
// 00704f74  8d4c2410             lea ecx, [esp + 0x10]
// 00704f78  d9542410             fst dword ptr [esp + 0x10]
// 00704f7c  51                   push ecx
// 00704f7d  d9542418             fst dword ptr [esp + 0x18]
// 00704f81  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00704f85  d954241c             fst dword ptr [esp + 0x1c]
// 00704f89  8d54241c             lea edx, [esp + 0x1c]
// 00704f8d  d9542420             fst dword ptr [esp + 0x20]
// 00704f91  52                   push edx
// 00704f92  d9542428             fst dword ptr [esp + 0x28]
// 00704f96  8d442428             lea eax, [esp + 0x28]
// 00704f9a  d95c242c             fstp dword ptr [esp + 0x2c]
// 00704f9e  50                   push eax
// 00704f9f  8b442448             mov eax, dword ptr [esp + 0x48]
// 00704fa3  51                   push ecx
// 00704fa4  56                   push esi
// 00704fa5  8d5008               lea edx, [eax + 8]
// 00704fa8  52                   push edx
// 00704fa9  50                   push eax
// 00704faa  8d442444             lea eax, [esp + 0x44]
// 00704fae  50                   push eax
// 00704faf  e88c8be2ff           call 0x52db40
// 00704fb4  83c40c               add esp, 0xc
// 00704fb7  50                   push eax
// 00704fb8  e8d3bd1300           call 0x840d90
// 00704fbd  83c41c               add esp, 0x1c
// 00704fc0  6a02                 push 2
// 00704fc2  6a03                 push 3
// 00704fc4  6a02                 push 2
// 00704fc6  8bce                 mov ecx, esi
// 00704fc8  e8939bd9ff           call 0x49eb60
// 00704fcd  5e                   pop esi
// 00704fce  83c430               add esp, 0x30
// 00704fd1  c3                   ret 
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rect2d@DrawPrimitives@RBX@@SAXABVRect@2@PAVRenderDevice@G3D@@ABVColor4@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp

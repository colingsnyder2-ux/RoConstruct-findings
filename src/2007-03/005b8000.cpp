// roc 2007-03 005b8000  unit: seg_005b0000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b8000
//
// 005b8000  83ec1c               sub esp, 0x1c
// 005b8003  56                   push esi
// 005b8004  8b742428             mov esi, dword ptr [esp + 0x28]
// 005b8008  56                   push esi
// 005b8009  8d442418             lea eax, [esp + 0x18]
// 005b800d  50                   push eax
// 005b800e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b8016  e855f9ffff           call 0x5b7970
// 005b801b  56                   push esi
// 005b801c  e80fcbffff           call 0x5b4b30
// 005b8021  d900                 fld dword ptr [eax]
// 005b8023  8b742428             mov esi, dword ptr [esp + 0x28]
// 005b8027  d95c240c             fstp dword ptr [esp + 0xc]
// 005b802b  d94004               fld dword ptr [eax + 4]
// 005b802e  83c404               add esp, 4
// 005b8031  8d4c2414             lea ecx, [esp + 0x14]
// 005b8035  d95c240c             fstp dword ptr [esp + 0xc]
// 005b8039  d94008               fld dword ptr [eax + 8]
// 005b803c  51                   push ecx
// 005b803d  8d54240c             lea edx, [esp + 0xc]
// 005b8041  d95c2414             fstp dword ptr [esp + 0x14]
// 005b8045  52                   push edx
// 005b8046  8bce                 mov ecx, esi
// 005b8048  e873c4f5ff           call 0x5144c0
// 005b804d  8bc6                 mov eax, esi
// 005b804f  5e                   pop esi
// 005b8050  83c41c               add esp, 0x1c
// 005b8053  c20800               ret 8
// library rbxgs/util\Extents.cpp (function ?getPlane@Extents@RBX@@QBE?AVPlane@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp

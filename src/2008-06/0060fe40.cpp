// roc 2008-06 0060fe40  unit: RBX::BlockBlockContact  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060fe40
//
// 0060fe40  83ec1c               sub esp, 0x1c
// 0060fe43  56                   push esi
// 0060fe44  8b742428             mov esi, dword ptr [esp + 0x28]
// 0060fe48  56                   push esi
// 0060fe49  8d442418             lea eax, [esp + 0x18]
// 0060fe4d  50                   push eax
// 0060fe4e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0060fe56  e855f9ffff           call 0x60f7b0
// 0060fe5b  56                   push esi
// 0060fe5c  e80fc7fdff           call 0x5ec570
// 0060fe61  d900                 fld dword ptr [eax]
// 0060fe63  8b742428             mov esi, dword ptr [esp + 0x28]
// 0060fe67  d95c240c             fstp dword ptr [esp + 0xc]
// 0060fe6b  d94004               fld dword ptr [eax + 4]
// 0060fe6e  83c404               add esp, 4
// 0060fe71  8d4c2414             lea ecx, [esp + 0x14]
// 0060fe75  d95c240c             fstp dword ptr [esp + 0xc]
// 0060fe79  d94008               fld dword ptr [eax + 8]
// 0060fe7c  51                   push ecx
// 0060fe7d  8d54240c             lea edx, [esp + 0xc]
// 0060fe81  d95c2414             fstp dword ptr [esp + 0x14]
// 0060fe85  52                   push edx
// 0060fe86  8bce                 mov ecx, esi
// 0060fe88  e8535bf1ff           call 0x5259e0
// 0060fe8d  8bc6                 mov eax, esi
// 0060fe8f  5e                   pop esi
// 0060fe90  83c41c               add esp, 0x1c
// 0060fe93  c20800               ret 8
// library rbxgs/util\Extents.cpp (function ?getPlane@Extents@RBX@@QBE?AVPlane@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp

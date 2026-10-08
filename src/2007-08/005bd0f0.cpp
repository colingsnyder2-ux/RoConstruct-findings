// roc 2007-08 005bd0f0  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bd0f0
//
// 005bd0f0  83ec1c               sub esp, 0x1c
// 005bd0f3  56                   push esi
// 005bd0f4  8b742428             mov esi, dword ptr [esp + 0x28]
// 005bd0f8  56                   push esi
// 005bd0f9  8d442418             lea eax, [esp + 0x18]
// 005bd0fd  50                   push eax
// 005bd0fe  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005bd106  e855f9ffff           call 0x5bca60
// 005bd10b  56                   push esi
// 005bd10c  e84fccffff           call 0x5b9d60
// 005bd111  d900                 fld dword ptr [eax]
// 005bd113  8b742428             mov esi, dword ptr [esp + 0x28]
// 005bd117  d95c240c             fstp dword ptr [esp + 0xc]
// 005bd11b  d94004               fld dword ptr [eax + 4]
// 005bd11e  83c404               add esp, 4
// 005bd121  8d4c2414             lea ecx, [esp + 0x14]
// 005bd125  d95c240c             fstp dword ptr [esp + 0xc]
// 005bd129  d94008               fld dword ptr [eax + 8]
// 005bd12c  51                   push ecx
// 005bd12d  8d54240c             lea edx, [esp + 0xc]
// 005bd131  d95c2414             fstp dword ptr [esp + 0x14]
// 005bd135  52                   push edx
// 005bd136  8bce                 mov ecx, esi
// 005bd138  e8c30ff6ff           call 0x51e100
// 005bd13d  8bc6                 mov eax, esi
// 005bd13f  5e                   pop esi
// 005bd140  83c41c               add esp, 0x1c
// 005bd143  c20800               ret 8
// library rbxgs/util\Extents.cpp (function ?getPlane@Extents@RBX@@QBE?AVPlane@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp

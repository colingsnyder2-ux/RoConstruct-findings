// roc 2009-06 006b3890  unit: RBX::BlockBlockContact  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b3890
//
// 006b3890  83ec1c               sub esp, 0x1c
// 006b3893  56                   push esi
// 006b3894  8b742428             mov esi, dword ptr [esp + 0x28]
// 006b3898  56                   push esi
// 006b3899  8d442418             lea eax, [esp + 0x18]
// 006b389d  50                   push eax
// 006b389e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006b38a6  e815faffff           call 0x6b32c0
// 006b38ab  56                   push esi
// 006b38ac  e85ff8fcff           call 0x683110
// 006b38b1  d900                 fld dword ptr [eax]
// 006b38b3  8b742428             mov esi, dword ptr [esp + 0x28]
// 006b38b7  d95c240c             fstp dword ptr [esp + 0xc]
// 006b38bb  d94004               fld dword ptr [eax + 4]
// 006b38be  83c404               add esp, 4
// 006b38c1  8d4c2414             lea ecx, [esp + 0x14]
// 006b38c5  d95c240c             fstp dword ptr [esp + 0xc]
// 006b38c9  d94008               fld dword ptr [eax + 8]
// 006b38cc  51                   push ecx
// 006b38cd  8d54240c             lea edx, [esp + 0xc]
// 006b38d1  d95c2414             fstp dword ptr [esp + 0x14]
// 006b38d5  52                   push edx
// 006b38d6  8bce                 mov ecx, esi
// 006b38d8  e86363edff           call 0x589c40
// 006b38dd  8bc6                 mov eax, esi
// 006b38df  5e                   pop esi
// 006b38e0  83c41c               add esp, 0x1c
// 006b38e3  c20800               ret 8
// library rbxgs/util\Extents.cpp (function ?getPlane@Extents@RBX@@QBE?AVPlane@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp

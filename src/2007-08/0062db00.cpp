// roc 2007-08 0062db00  unit: RBX::AdornG3D  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062db00
//
// 0062db00  83ec20               sub esp, 0x20
// 0062db03  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062db07  d9442428             fld dword ptr [esp + 0x28]
// 0062db0b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062db0e  50                   push eax
// 0062db0f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062db13  51                   push ecx
// 0062db14  51                   push ecx
// 0062db15  d91c24               fstp dword ptr [esp]
// 0062db18  8d54241c             lea edx, [esp + 0x1c]
// 0062db1c  d900                 fld dword ptr [eax]
// 0062db1e  52                   push edx
// 0062db1f  d95c2410             fstp dword ptr [esp + 0x10]
// 0062db23  d94004               fld dword ptr [eax + 4]
// 0062db26  d95c2414             fstp dword ptr [esp + 0x14]
// 0062db2a  d94008               fld dword ptr [eax + 8]
// 0062db2d  d95c2418             fstp dword ptr [esp + 0x18]
// 0062db31  d9400c               fld dword ptr [eax + 0xc]
// 0062db34  d95c241c             fstp dword ptr [esp + 0x1c]
// 0062db38  d9442410             fld dword ptr [esp + 0x10]
// 0062db3c  d95c2420             fstp dword ptr [esp + 0x20]
// 0062db40  d9442414             fld dword ptr [esp + 0x14]
// 0062db44  d95c2424             fstp dword ptr [esp + 0x24]
// 0062db48  d9442418             fld dword ptr [esp + 0x18]
// 0062db4c  d95c2428             fstp dword ptr [esp + 0x28]
// 0062db50  d944241c             fld dword ptr [esp + 0x1c]
// 0062db54  d95c242c             fstp dword ptr [esp + 0x2c]
// 0062db58  e8a31c0000           call 0x62f800
// 0062db5d  83c430               add esp, 0x30
// 0062db60  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?outlineRect2d@AdornG3D@RBX@@UBEXABVRect2D@G3D@@MABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp

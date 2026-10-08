// roc 2007-08 0062daa0  unit: RBX::AdornG3D  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062daa0
//
// 0062daa0  83ec20               sub esp, 0x20
// 0062daa3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062daa7  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062daaa  50                   push eax
// 0062daab  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062daaf  d900                 fld dword ptr [eax]
// 0062dab1  51                   push ecx
// 0062dab2  d95c2408             fstp dword ptr [esp + 8]
// 0062dab6  8d542418             lea edx, [esp + 0x18]
// 0062daba  d94004               fld dword ptr [eax + 4]
// 0062dabd  52                   push edx
// 0062dabe  d95c2410             fstp dword ptr [esp + 0x10]
// 0062dac2  d94008               fld dword ptr [eax + 8]
// 0062dac5  d95c2414             fstp dword ptr [esp + 0x14]
// 0062dac9  d9400c               fld dword ptr [eax + 0xc]
// 0062dacc  d95c2418             fstp dword ptr [esp + 0x18]
// 0062dad0  d944240c             fld dword ptr [esp + 0xc]
// 0062dad4  d95c241c             fstp dword ptr [esp + 0x1c]
// 0062dad8  d9442410             fld dword ptr [esp + 0x10]
// 0062dadc  d95c2420             fstp dword ptr [esp + 0x20]
// 0062dae0  d9442414             fld dword ptr [esp + 0x14]
// 0062dae4  d95c2424             fstp dword ptr [esp + 0x24]
// 0062dae8  d9442418             fld dword ptr [esp + 0x18]
// 0062daec  d95c2428             fstp dword ptr [esp + 0x28]
// 0062daf0  e80b1f0000           call 0x62fa00
// 0062daf5  83c42c               add esp, 0x2c
// 0062daf8  c20800               ret 8
// library rbxgs-appdraw/AdornG3D.cpp (function ?rect2d@AdornG3D@RBX@@UBEXABVRect2D@G3D@@ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp

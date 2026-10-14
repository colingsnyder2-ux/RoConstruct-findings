// roc 2008-06 00573960  unit: RBX::PercentPanel  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573960
//
// 00573960  83ec20               sub esp, 0x20
// 00573963  56                   push esi
// 00573964  8bf1                 mov esi, ecx
// 00573966  8b06                 mov eax, dword ptr [esi]
// 00573968  8b5048               mov edx, dword ptr [eax + 0x48]
// 0057396b  8d4c2404             lea ecx, [esp + 4]
// 0057396f  51                   push ecx
// 00573970  8bce                 mov ecx, esi
// 00573972  ffd2                 call edx
// 00573974  8b06                 mov eax, dword ptr [esi]
// 00573976  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00573979  8d4c240c             lea ecx, [esp + 0xc]
// 0057397d  51                   push ecx
// 0057397e  8bce                 mov ecx, esi
// 00573980  ffd2                 call edx
// 00573982  d900                 fld dword ptr [eax]
// 00573984  d9442404             fld dword ptr [esp + 4]
// 00573988  8b742428             mov esi, dword ptr [esp + 0x28]
// 0057398c  dcc1                 fadd st(1), st(0)
// 0057398e  8d4c2414             lea ecx, [esp + 0x14]
// 00573992  d94004               fld dword ptr [eax + 4]
// 00573995  8d44241c             lea eax, [esp + 0x1c]
// 00573999  d9442408             fld dword ptr [esp + 8]
// 0057399d  50                   push eax
// 0057399e  dcc1                 fadd st(1), st(0)
// 005739a0  51                   push ecx
// 005739a1  d9ca                 fxch st(2)
// 005739a3  56                   push esi
// 005739a4  d95c2420             fstp dword ptr [esp + 0x20]
// 005739a8  d9c9                 fxch st(1)
// 005739aa  d95c2424             fstp dword ptr [esp + 0x24]
// 005739ae  d9c9                 fxch st(1)
// 005739b0  d95c2428             fstp dword ptr [esp + 0x28]
// 005739b4  d95c242c             fstp dword ptr [esp + 0x2c]
// 005739b8  e813fcf7ff           call 0x4f35d0
// 005739bd  83c40c               add esp, 0xc
// 005739c0  8bc6                 mov eax, esi
// 005739c2  5e                   pop esi
// 005739c3  83c420               add esp, 0x20
// 005739c6  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?getMyRect2D@GuiItem@RBX@@IBE?AVRect2D@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/gui/GUI.cpp

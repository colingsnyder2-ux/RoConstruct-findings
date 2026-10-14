// roc 2008-06 00573310  unit: RBX::GuiTarget  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573310
//
// 00573310  83ec10               sub esp, 0x10
// 00573313  56                   push esi
// 00573314  8bf1                 mov esi, ecx
// 00573316  8b06                 mov eax, dword ptr [esi]
// 00573318  8b5048               mov edx, dword ptr [eax + 0x48]
// 0057331b  8d4c2404             lea ecx, [esp + 4]
// 0057331f  51                   push ecx
// 00573320  8bce                 mov ecx, esi
// 00573322  ffd2                 call edx
// 00573324  8b06                 mov eax, dword ptr [esi]
// 00573326  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00573329  8d4c240c             lea ecx, [esp + 0xc]
// 0057332d  51                   push ecx
// 0057332e  8bce                 mov ecx, esi
// 00573330  ffd2                 call edx
// 00573332  d900                 fld dword ptr [eax]
// 00573334  d9442404             fld dword ptr [esp + 4]
// 00573338  5e                   pop esi
// 00573339  dcc1                 fadd st(1), st(0)
// 0057333b  d94004               fld dword ptr [eax + 4]
// 0057333e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00573342  d9442404             fld dword ptr [esp + 4]
// 00573346  dcc1                 fadd st(1), st(0)
// 00573348  d9ca                 fxch st(2)
// 0057334a  d918                 fstp dword ptr [eax]
// 0057334c  d9c9                 fxch st(1)
// 0057334e  d95804               fstp dword ptr [eax + 4]
// 00573351  d9c9                 fxch st(1)
// 00573353  d95808               fstp dword ptr [eax + 8]
// 00573356  d9580c               fstp dword ptr [eax + 0xc]
// 00573359  83c410               add esp, 0x10
// 0057335c  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?getMyRect@GuiItem@RBX@@IBE?AVRect@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/gui/GUI.cpp

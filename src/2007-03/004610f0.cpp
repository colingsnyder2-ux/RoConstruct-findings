// roc 2007-03 004610f0  unit: seg_00460000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004610f0
//
// 004610f0  56                   push esi
// 004610f1  8bf1                 mov esi, ecx
// 004610f3  8b4614               mov eax, dword ptr [esi + 0x14]
// 004610f6  85c0                 test eax, eax
// 004610f8  57                   push edi
// 004610f9  8d7801               lea edi, [eax + 1]
// 004610fc  7e17                 jle 0x461115
// 004610fe  85ff                 test edi, edi
// 00461100  7f0f                 jg 0x461111
// 00461102  8b06                 mov eax, dword ptr [esi]
// 00461104  8b5074               mov edx, dword ptr [eax + 0x74]
// 00461107  6a01                 push 1
// 00461109  ffd2                 call edx
// 0046110b  897e14               mov dword ptr [esi + 0x14], edi
// 0046110e  5f                   pop edi
// 0046110f  5e                   pop esi
// 00461110  c3                   ret 
// 00461111  85c0                 test eax, eax
// 00461113  7f0d                 jg 0x461122
// 00461115  85ff                 test edi, edi
// 00461117  7e09                 jle 0x461122
// 00461119  8b06                 mov eax, dword ptr [esi]
// 0046111b  8b5074               mov edx, dword ptr [eax + 0x74]
// 0046111e  6a00                 push 0
// 00461120  ffd2                 call edx
// 00461122  897e14               mov dword ptr [esi + 0x14], edi
// 00461125  5f                   pop edi
// 00461126  5e                   pop esi
// 00461127  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?incMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp

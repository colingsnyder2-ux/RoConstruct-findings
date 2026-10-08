// roc 2007-03 00461130  unit: seg_00460000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00461130
//
// 00461130  56                   push esi
// 00461131  8bf1                 mov esi, ecx
// 00461133  8b4614               mov eax, dword ptr [esi + 0x14]
// 00461136  85c0                 test eax, eax
// 00461138  57                   push edi
// 00461139  8d78ff               lea edi, [eax - 1]
// 0046113c  7e17                 jle 0x461155
// 0046113e  85ff                 test edi, edi
// 00461140  7f0f                 jg 0x461151
// 00461142  8b06                 mov eax, dword ptr [esi]
// 00461144  8b5074               mov edx, dword ptr [eax + 0x74]
// 00461147  6a01                 push 1
// 00461149  ffd2                 call edx
// 0046114b  897e14               mov dword ptr [esi + 0x14], edi
// 0046114e  5f                   pop edi
// 0046114f  5e                   pop esi
// 00461150  c3                   ret 
// 00461151  85c0                 test eax, eax
// 00461153  7f0d                 jg 0x461162
// 00461155  85ff                 test edi, edi
// 00461157  7e09                 jle 0x461162
// 00461159  8b06                 mov eax, dword ptr [esi]
// 0046115b  8b5074               mov edx, dword ptr [eax + 0x74]
// 0046115e  6a00                 push 0
// 00461160  ffd2                 call edx
// 00461162  897e14               mov dword ptr [esi + 0x14], edi
// 00461165  5f                   pop edi
// 00461166  5e                   pop esi
// 00461167  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?decMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp

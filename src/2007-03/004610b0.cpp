// roc 2007-03 004610b0  unit: seg_00460000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004610b0
//
// 004610b0  56                   push esi
// 004610b1  8bf1                 mov esi, ecx
// 004610b3  8b4610               mov eax, dword ptr [esi + 0x10]
// 004610b6  85c0                 test eax, eax
// 004610b8  57                   push edi
// 004610b9  8d78ff               lea edi, [eax - 1]
// 004610bc  7e17                 jle 0x4610d5
// 004610be  85ff                 test edi, edi
// 004610c0  7f0f                 jg 0x4610d1
// 004610c2  8b06                 mov eax, dword ptr [esi]
// 004610c4  8b5064               mov edx, dword ptr [eax + 0x64]
// 004610c7  6a00                 push 0
// 004610c9  ffd2                 call edx
// 004610cb  897e10               mov dword ptr [esi + 0x10], edi
// 004610ce  5f                   pop edi
// 004610cf  5e                   pop esi
// 004610d0  c3                   ret 
// 004610d1  85c0                 test eax, eax
// 004610d3  7f0d                 jg 0x4610e2
// 004610d5  85ff                 test edi, edi
// 004610d7  7e09                 jle 0x4610e2
// 004610d9  8b06                 mov eax, dword ptr [esi]
// 004610db  8b5064               mov edx, dword ptr [eax + 0x64]
// 004610de  6a01                 push 1
// 004610e0  ffd2                 call edx
// 004610e2  897e10               mov dword ptr [esi + 0x10], edi
// 004610e5  5f                   pop edi
// 004610e6  5e                   pop esi
// 004610e7  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?decInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp

// roc 2007-03 00461070  unit: seg_00460000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00461070
//
// 00461070  56                   push esi
// 00461071  8bf1                 mov esi, ecx
// 00461073  8b4610               mov eax, dword ptr [esi + 0x10]
// 00461076  85c0                 test eax, eax
// 00461078  57                   push edi
// 00461079  8d7801               lea edi, [eax + 1]
// 0046107c  7e17                 jle 0x461095
// 0046107e  85ff                 test edi, edi
// 00461080  7f0f                 jg 0x461091
// 00461082  8b06                 mov eax, dword ptr [esi]
// 00461084  8b5064               mov edx, dword ptr [eax + 0x64]
// 00461087  6a00                 push 0
// 00461089  ffd2                 call edx
// 0046108b  897e10               mov dword ptr [esi + 0x10], edi
// 0046108e  5f                   pop edi
// 0046108f  5e                   pop esi
// 00461090  c3                   ret 
// 00461091  85c0                 test eax, eax
// 00461093  7f0d                 jg 0x4610a2
// 00461095  85ff                 test edi, edi
// 00461097  7e09                 jle 0x4610a2
// 00461099  8b06                 mov eax, dword ptr [esi]
// 0046109b  8b5064               mov edx, dword ptr [eax + 0x64]
// 0046109e  6a01                 push 1
// 004610a0  ffd2                 call edx
// 004610a2  897e10               mov dword ptr [esi + 0x10], edi
// 004610a5  5f                   pop edi
// 004610a6  5e                   pop esi
// 004610a7  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?incInputCaptureCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp

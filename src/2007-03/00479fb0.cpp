// roc 2007-03 00479fb0  unit: seg_00470000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00479fb0
//
// 00479fb0  56                   push esi
// 00479fb1  8bb1e8010000         mov esi, dword ptr [ecx + 0x1e8]
// 00479fb7  ff1580ed7700         call dword ptr [0x77ed80]
// 00479fbd  3bf0                 cmp esi, eax
// 00479fbf  7512                 jne 0x479fd3
// 00479fc1  56                   push esi
// 00479fc2  ff158ced7700         call dword ptr [0x77ed8c]
// 00479fc8  85c0                 test eax, eax
// 00479fca  7407                 je 0x479fd3
// 00479fcc  b801000000           mov eax, 1
// 00479fd1  5e                   pop esi
// 00479fd2  c3                   ret 
// 00479fd3  33c0                 xor eax, eax
// 00479fd5  5e                   pop esi
// 00479fd6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?hasFocus@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp

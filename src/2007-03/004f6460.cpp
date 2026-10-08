// roc 2007-03 004f6460  unit: seg_004f0000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6460
//
// 004f6460  6844ae8b00           push 0x8bae44
// 004f6465  ff15e8ed7700         call dword ptr [0x77ede8]
// 004f646b  a15cae8b00           mov eax, dword ptr [0x8bae5c]
// 004f6470  8b0d58ae8b00         mov ecx, dword ptr [0x8bae58]
// 004f6476  50                   push eax
// 004f6477  51                   push ecx
// 004f6478  ff15d4ed7700         call dword ptr [0x77edd4]
// 004f647e  8b1540ae8b00         mov edx, dword ptr [0x8bae40]
// 004f6484  52                   push edx
// 004f6485  ff15d0ed7700         call dword ptr [0x77edd0]
// 004f648b  a154ae8b00           mov eax, dword ptr [0x8bae54]
// 004f6490  85c0                 test eax, eax
// 004f6492  7d1f                 jge 0x4f64b3
// 004f6494  56                   push esi
// 004f6495  33f6                 xor esi, esi
// 004f6497  85c0                 test eax, eax
// 004f6499  7d17                 jge 0x4f64b2
// 004f649b  57                   push edi
// 004f649c  8b3de4ed7700         mov edi, dword ptr [0x77ede4]
// 004f64a2  6a00                 push 0
// 004f64a4  ffd7                 call edi
// 004f64a6  83ee01               sub esi, 1
// 004f64a9  3b3554ae8b00         cmp esi, dword ptr [0x8bae54]
// 004f64af  7ff1                 jg 0x4f64a2
// 004f64b1  5f                   pop edi
// 004f64b2  5e                   pop esi
// 004f64b3  c3                   ret 
// library rbxgs-g3d/G3Dcpp\debugAssert.cpp (function ?_restoreInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/debugAssert.cpp

// roc 2008-06 00483320  unit: G3D::Win32Window  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483320
//
// 00483320  6aff                 push -1
// 00483322  683bf47b00           push 0x7bf43b
// 00483327  64a100000000         mov eax, dword ptr fs:[0]
// 0048332d  50                   push eax
// 0048332e  64892500000000       mov dword ptr fs:[0], esp
// 00483335  51                   push ecx
// 00483336  56                   push esi
// 00483337  8bf1                 mov esi, ecx
// 00483339  83beb401000000       cmp dword ptr [esi + 0x1b4], 0
// 00483340  7532                 jne 0x483374
// 00483342  6a14                 push 0x14
// 00483344  e8d7d52100           call 0x6a0920
// 00483349  83c404               add esp, 4
// 0048334c  89442404             mov dword ptr [esp + 4], eax
// 00483350  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00483358  85c0                 test eax, eax
// 0048335a  7410                 je 0x48336c
// 0048335c  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 00483362  51                   push ecx
// 00483363  8bc8                 mov ecx, eax
// 00483365  e8f6feffff           call 0x483260
// 0048336a  eb02                 jmp 0x48336e
// 0048336c  33c0                 xor eax, eax
// 0048336e  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 00483374  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00483378  5e                   pop esi
// 00483379  64890d00000000       mov dword ptr fs:[0], ecx
// 00483380  83c410               add esp, 0x10
// 00483383  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enableDirectInput@Win32Window@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

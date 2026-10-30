// roc 2009-12 00893480  unit: CXTPMenuBar::CControlMDIButton  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893480
//
// 00893480  56                   push esi
// 00893481  8bf1                 mov esi, ecx
// 00893483  e8083cf7ff           call 0x807090
// 00893488  50                   push eax
// 00893489  e83a310900           call 0x9265c8
// 0089348e  50                   push eax
// 0089348f  e8aa07f6ff           call 0x7f3c3e
// 00893494  83c408               add esp, 8
// 00893497  85c0                 test eax, eax
// 00893499  7414                 je 0x8934af
// 0089349b  83782000             cmp dword ptr [eax + 0x20], 0
// 0089349f  740e                 je 0x8934af
// 008934a1  8b10                 mov edx, dword ptr [eax]
// 008934a3  8bc8                 mov ecx, eax
// 008934a5  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 008934ab  6a00                 push 0
// 008934ad  ffd0                 call eax
// 008934af  c786c001000000000000 mov dword ptr [esi + 0x1c0], 0
// 008934b9  5e                   pop esi
// 008934ba  c3                   ret 
// copied from an identical function in another client (function ?SwitchActiveMenu@CXTPMenuBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp
// roc 2008-06 007206a0  unit: CXTPMenuBar::CControlMDIButton  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007206a0
//
// 007206a0  56                   push esi
// 007206a1  57                   push edi
// 007206a2  8bf1                 mov esi, ecx
// 007206a4  e82bb90900           call 0x7bbfd4
// 007206a9  50                   push eax
// 007206aa  8bce                 mov ecx, esi
// 007206ac  e80f73f9ff           call 0x6b79c0
// 007206b1  8bc8                 mov ecx, eax
// 007206b3  e83805f8ff           call 0x6a0bf0
// 007206b8  8bce                 mov ecx, esi
// 007206ba  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 007206c0  e8fb72f9ff           call 0x6b79c0
// 007206c5  8bf8                 mov edi, eax
// 007206c7  83c654               add esi, 0x54
// 007206ca  85ff                 test edi, edi
// 007206cc  7403                 je 0x7206d1
// 007206ce  8b4720               mov eax, dword ptr [edi + 0x20]
// 007206d1  56                   push esi
// 007206d2  50                   push eax
// 007206d3  e868c0ffff           call 0x71c740
// 007206d8  8bc8                 mov ecx, eax
// 007206da  e801c7ffff           call 0x71cde0
// 007206df  57                   push edi
// 007206e0  e8efb80900           call 0x7bbfd4
// 007206e5  50                   push eax
// 007206e6  e83b05f8ff           call 0x6a0c26
// 007206eb  83c408               add esp, 8
// 007206ee  85c0                 test eax, eax
// 007206f0  7414                 je 0x720706
// 007206f2  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 007206f8  56                   push esi
// 007206f9  50                   push eax
// 007206fa  e841c0ffff           call 0x71c740
// 007206ff  8bc8                 mov ecx, eax
// 00720701  e8dac6ffff           call 0x71cde0
// 00720706  5f                   pop edi
// 00720707  5e                   pop esi
// 00720708  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?SetupHook@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp

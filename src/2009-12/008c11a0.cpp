// roc 2009-12 008c11a0  unit: CXTPShadowsManager::CShadowWnd  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c11a0
//
// 008c11a0  e8ebffffff           call 0x8c1190
// 008c11a5  83f801               cmp eax, 1
// 008c11a8  7515                 jne 0x8c11bf
// 008c11aa  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 008c11b0  51                   push ecx
// 008c11b1  ff1520ca9800         call dword ptr [0x98ca20]
// 008c11b7  b801000000           mov eax, 1
// 008c11bc  c20c00               ret 0xc
// 008c11bf  e8ccffffff           call 0x8c1190
// 008c11c4  85c0                 test eax, eax
// 008c11c6  7515                 jne 0x8c11dd
// 008c11c8  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 008c11ce  51                   push ecx
// 008c11cf  ff1520ca9800         call dword ptr [0x98ca20]
// 008c11d5  b801000000           mov eax, 1
// 008c11da  c20c00               ret 0xc
// 008c11dd  e8aeffffff           call 0x8c1190
// 008c11e2  83f802               cmp eax, 2
// 008c11e5  7515                 jne 0x8c11fc
// 008c11e7  8b89d4000000         mov ecx, dword ptr [ecx + 0xd4]
// 008c11ed  51                   push ecx
// 008c11ee  ff1520ca9800         call dword ptr [0x98ca20]
// 008c11f4  b801000000           mov eax, 1
// 008c11f9  c20c00               ret 0xc
// 008c11fc  8b89c8000000         mov ecx, dword ptr [ecx + 0xc8]
// 008c1202  51                   push ecx
// 008c1203  ff1520ca9800         call dword ptr [0x98ca20]
// 008c1209  b801000000           mov eax, 1
// 008c120e  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSetCursor@CXTPImageEditorPicture@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp
// roc 2008-06 006c3680  unit: CXTPToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c3680
//
// 006c3680  e81ddefdff           call 0x6a14a2
// 006c3685  85c0                 test eax, eax
// 006c3687  7501                 jne 0x6c368a
// 006c3689  c3                   ret 
// 006c368a  56                   push esi
// 006c368b  57                   push edi
// 006c368c  ff15102e8000         call dword ptr [0x802e10]
// 006c3692  50                   push eax
// 006c3693  e846d5fdff           call 0x6a0bde
// 006c3698  8bf0                 mov esi, eax
// 006c369a  85f6                 test esi, esi
// 006c369c  7430                 je 0x6c36ce
// 006c369e  8b3d502d8000         mov edi, dword ptr [0x802d50]
// 006c36a4  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c36a7  50                   push eax
// 006c36a8  ffd7                 call edi
// 006c36aa  85c0                 test eax, eax
// 006c36ac  7420                 je 0x6c36ce
// 006c36ae  8bce                 mov ecx, esi
// 006c36b0  e8bfd2fdff           call 0x6a0974
// 006c36b5  8bf0                 mov esi, eax
// 006c36b7  56                   push esi
// 006c36b8  e8b58a0f00           call 0x7bc172
// 006c36bd  50                   push eax
// 006c36be  e863d5fdff           call 0x6a0c26
// 006c36c3  83c408               add esp, 8
// 006c36c6  85c0                 test eax, eax
// 006c36c8  7509                 jne 0x6c36d3
// 006c36ca  85f6                 test esi, esi
// 006c36cc  75d6                 jne 0x6c36a4
// 006c36ce  5f                   pop edi
// 006c36cf  33c0                 xor eax, eax
// 006c36d1  5e                   pop esi
// 006c36d2  c3                   ret 
// 006c36d3  5f                   pop edi
// 006c36d4  b801000000           mov eax, 1
// 006c36d9  5e                   pop esi
// 006c36da  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?IsFloatingFrameFocused@CXTPToolBar@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp

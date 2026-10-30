// roc 2009-12 0085a800  unit: CXTPStatusBar  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a800
//
// 0085a800  e86b31feff           call 0x83d970
// 0085a805  85c0                 test eax, eax
// 0085a807  7421                 je 0x85a82a
// 0085a809  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0085a80f  8bd0                 mov edx, eax
// 0085a811  81e200ff0000         and edx, 0xff00
// 0085a817  81fa00820000         cmp edx, 0x8200
// 0085a81d  750b                 jne 0x85a82a
// 0085a81f  257ff0ffff           and eax, 0xfffff07f
// 0085a824  898184000000         mov dword ptr [ecx + 0x84], eax
// 0085a82a  e983c10c00           jmp 0x9269b2
// copied from an identical function in another client (function ?PreCreateWindow@CXTPStatusBar@@MAEHAAUtagCREATESTRUCTA@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
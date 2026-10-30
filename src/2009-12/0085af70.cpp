// roc 2009-12 0085af70  unit: CXTPStatusBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085af70
//
// 0085af70  8b442404             mov eax, dword ptr [esp + 4]
// 0085af74  56                   push esi
// 0085af75  50                   push eax
// 0085af76  8bf1                 mov esi, ecx
// 0085af78  e897bb0c00           call 0x926b14
// 0085af7d  83f8ff               cmp eax, -1
// 0085af80  7506                 jne 0x85af88
// 0085af82  0bc0                 or eax, eax
// 0085af84  5e                   pop esi
// 0085af85  c20400               ret 4
// 0085af88  6a00                 push 0
// 0085af8a  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0085af90  51                   push ecx
// 0085af91  8bce                 mov ecx, esi
// 0085af93  e888fdffff           call 0x85ad20
// 0085af98  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085af9b  6a00                 push 0
// 0085af9d  6a14                 push 0x14
// 0085af9f  6808040000           push 0x408
// 0085afa4  52                   push edx
// 0085afa5  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0085afab  33c0                 xor eax, eax
// 0085afad  5e                   pop esi
// 0085afae  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTPStatusBar@@QAEHPAUtagCREATESTRUCTA@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
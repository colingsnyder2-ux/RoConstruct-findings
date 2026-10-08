// from server: 100% by auto
// roc 2007-08 0069ab50  unit: CXTPPropertyGridView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ab50
//
// 0069ab50  837c2408fc           cmp dword ptr [esp + 8], -4
// 0069ab55  56                   push esi
// 0069ab56  8bf1                 mov esi, ecx
// 0069ab58  7409                 je 0x69ab63
// 0069ab5a  e8df56f9ff           call 0x63023e
// 0069ab5f  5e                   pop esi
// 0069ab60  c20800               ret 8
// 0069ab63  68ac4e7c00           push 0x7c4eac
// 0069ab68  e887d80900           call 0x7383f4
// 0069ab6d  85c0                 test eax, eax
// 0069ab6f  7509                 jne 0x69ab7a
// 0069ab71  b805400080           mov eax, 0x80004005
// 0069ab76  5e                   pop esi
// 0069ab77  c20800               ret 8
// 0069ab7a  50                   push eax
// 0069ab7b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0069ab7f  50                   push eax
// 0069ab80  68ac4e7c00           push 0x7c4eac
// 0069ab85  8d4e54               lea ecx, [esi + 0x54]
// 0069ab88  e87373fdff           call 0x671f00
// 0069ab8d  5e                   pop esi
// 0069ab8e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnGetObject@CXTPDockingPaneManager@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp

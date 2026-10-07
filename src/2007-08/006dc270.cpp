// roc 2007-08 006dc270  unit: CXTPDockingPaneWindowSelect  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc270
//
// 006dc270  56                   push esi
// 006dc271  8b742408             mov esi, dword ptr [esp + 8]
// 006dc275  85f6                 test esi, esi
// 006dc277  57                   push edi
// 006dc278  8bf9                 mov edi, ecx
// 006dc27a  7d05                 jge 0x6dc281
// 006dc27c  e89f3cf5ff           call 0x62ff20
// 006dc281  3b7708               cmp esi, dword ptr [edi + 8]
// 006dc284  7c0b                 jl 0x6dc291
// 006dc286  6aff                 push -1
// 006dc288  8d4601               lea eax, [esi + 1]
// 006dc28b  50                   push eax
// 006dc28c  e87ffeffff           call 0x6dc110
// 006dc291  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006dc295  8b4704               mov eax, dword ptr [edi + 4]
// 006dc298  8b11                 mov edx, dword ptr [ecx]
// 006dc29a  8914f0               mov dword ptr [eax + esi*8], edx
// 006dc29d  8b4904               mov ecx, dword ptr [ecx + 4]
// 006dc2a0  5f                   pop edi
// 006dc2a1  894cf004             mov dword ptr [eax + esi*8 + 4], ecx
// 006dc2a5  5e                   pop esi
// 006dc2a6  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPTopLevelWndMsgNotifier.cpp (function ?SetAtGrow@?$CArray@UCLIENT_INFO@CXTPTopLevelWndMsgNotifier@@AAU12@@@QAEXHAAUCLIENT_INFO@CXTPTopLevelWndMsgNotifier@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPTopLevelWndMsgNotifier.cpp

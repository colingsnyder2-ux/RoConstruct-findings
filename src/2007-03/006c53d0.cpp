// roc 2007-03 006c53d0  unit: seg_006c0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c53d0
//
// 006c53d0  56                   push esi
// 006c53d1  8b742408             mov esi, dword ptr [esp + 8]
// 006c53d5  85f6                 test esi, esi
// 006c53d7  57                   push edi
// 006c53d8  8bf9                 mov edi, ecx
// 006c53da  7d05                 jge 0x6c53e1
// 006c53dc  e8cd8ff5ff           call 0x61e3ae
// 006c53e1  3b7708               cmp esi, dword ptr [edi + 8]
// 006c53e4  7c0b                 jl 0x6c53f1
// 006c53e6  6aff                 push -1
// 006c53e8  8d4601               lea eax, [esi + 1]
// 006c53eb  50                   push eax
// 006c53ec  e87ffeffff           call 0x6c5270
// 006c53f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c53f5  8b4704               mov eax, dword ptr [edi + 4]
// 006c53f8  8b11                 mov edx, dword ptr [ecx]
// 006c53fa  8914f0               mov dword ptr [eax + esi*8], edx
// 006c53fd  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c5400  5f                   pop edi
// 006c5401  894cf004             mov dword ptr [eax + esi*8 + 4], ecx
// 006c5405  5e                   pop esi
// 006c5406  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPTopLevelWndMsgNotifier.cpp (function ?SetAtGrow@?$CArray@UCLIENT_INFO@CXTPTopLevelWndMsgNotifier@@AAU12@@@QAEXHAAUCLIENT_INFO@CXTPTopLevelWndMsgNotifier@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPTopLevelWndMsgNotifier.cpp

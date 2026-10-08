// from server: 100% by auto
// roc 2008-06 00759070  unit: CXTPDockingPaneWindowSelect  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00759070
//
// 00759070  56                   push esi
// 00759071  8b742408             mov esi, dword ptr [esp + 8]
// 00759075  57                   push edi
// 00759076  8bf9                 mov edi, ecx
// 00759078  85f6                 test esi, esi
// 0075907a  7d05                 jge 0x759081
// 0075907c  e8c378f4ff           call 0x6a0944
// 00759081  3b7708               cmp esi, dword ptr [edi + 8]
// 00759084  7c0b                 jl 0x759091
// 00759086  6aff                 push -1
// 00759088  8d4601               lea eax, [esi + 1]
// 0075908b  50                   push eax
// 0075908c  e81f0df8ff           call 0x6d9db0
// 00759091  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00759095  8b4704               mov eax, dword ptr [edi + 4]
// 00759098  8b11                 mov edx, dword ptr [ecx]
// 0075909a  8914f0               mov dword ptr [eax + esi*8], edx
// 0075909d  8b4904               mov ecx, dword ptr [ecx + 4]
// 007590a0  5f                   pop edi
// 007590a1  894cf004             mov dword ptr [eax + esi*8 + 4], ecx
// 007590a5  5e                   pop esi
// 007590a6  c20800               ret 8
// library xtp-11.2.2/Source\Calendar\XTPTopLevelWndMsgNotifier.cpp (function ?SetAtGrow@?$CArray@UCLIENT_INFO@CXTPTopLevelWndMsgNotifier@@AAU12@@@QAEXHAAUCLIENT_INFO@CXTPTopLevelWndMsgNotifier@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPTopLevelWndMsgNotifier.cpp

// from server: 100% by auto
// roc 2011-06 008bd870  unit: CXTPDockingPaneWindowSelect  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bd870
//
// 008bd870  56                   push esi
// 008bd871  8b742408             mov esi, dword ptr [esp + 8]
// 008bd875  57                   push edi
// 008bd876  8bf9                 mov edi, ecx
// 008bd878  85f6                 test esi, esi
// 008bd87a  7d05                 jge 0x8bd881
// 008bd87c  e889caf4ff           call 0x80a30a
// 008bd881  3b7708               cmp esi, dword ptr [edi + 8]
// 008bd884  7c0b                 jl 0x8bd891
// 008bd886  6aff                 push -1
// 008bd888  8d4601               lea eax, [esi + 1]
// 008bd88b  50                   push eax
// 008bd88c  e87ffeffff           call 0x8bd710
// 008bd891  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008bd895  8b4704               mov eax, dword ptr [edi + 4]
// 008bd898  8b11                 mov edx, dword ptr [ecx]
// 008bd89a  8914f0               mov dword ptr [eax + esi*8], edx
// 008bd89d  8b4904               mov ecx, dword ptr [ecx + 4]
// 008bd8a0  5f                   pop edi
// 008bd8a1  894cf004             mov dword ptr [eax + esi*8 + 4], ecx
// 008bd8a5  5e                   pop esi
// 008bd8a6  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarMsgNotifier.cpp (function ?SetAtGrow@?$CArray@UCLIENT_INFO@CXTPCalendarMsgNotifier@@AAU12@@@QAEXHAAUCLIENT_INFO@CXTPCalendarMsgNotifier@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMsgNotifier.cpp

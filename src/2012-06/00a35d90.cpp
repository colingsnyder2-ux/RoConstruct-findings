// roc 2012-06 00a35d90  unit: CXTPDockingPaneWindowSelect  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a35d90
//
// 00a35d90  56                   push esi
// 00a35d91  8b742408             mov esi, dword ptr [esp + 8]
// 00a35d95  57                   push edi
// 00a35d96  8bf9                 mov edi, ecx
// 00a35d98  85f6                 test esi, esi
// 00a35d9a  7d05                 jge 0xa35da1
// 00a35d9c  e81fc6f4ff           call 0x9823c0
// 00a35da1  3b7708               cmp esi, dword ptr [edi + 8]
// 00a35da4  7c0b                 jl 0xa35db1
// 00a35da6  6aff                 push -1
// 00a35da8  8d4601               lea eax, [esi + 1]
// 00a35dab  50                   push eax
// 00a35dac  e87ffeffff           call 0xa35c30
// 00a35db1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a35db5  8b4704               mov eax, dword ptr [edi + 4]
// 00a35db8  8b11                 mov edx, dword ptr [ecx]
// 00a35dba  8914f0               mov dword ptr [eax + esi*8], edx
// 00a35dbd  8b4904               mov ecx, dword ptr [ecx + 4]
// 00a35dc0  5f                   pop edi
// 00a35dc1  894cf004             mov dword ptr [eax + esi*8 + 4], ecx
// 00a35dc5  5e                   pop esi
// 00a35dc6  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarMsgNotifier.cpp (function ?SetAtGrow@?$CArray@UCLIENT_INFO@CXTPCalendarMsgNotifier@@AAU12@@@QAEXHAAUCLIENT_INFO@CXTPCalendarMsgNotifier@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMsgNotifier.cpp

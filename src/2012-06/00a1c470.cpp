// from server: 100% by auto
// roc 2012-06 00a1c470  unit: CXTPMenuBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c470
//
// 00a1c470  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00a1c473  8b442404             mov eax, dword ptr [esp + 4]
// 00a1c477  895008               mov dword ptr [eax + 8], edx
// 00a1c47a  83410cff             add dword ptr [ecx + 0xc], -1
// 00a1c47e  894110               mov dword ptr [ecx + 0x10], eax
// 00a1c481  7505                 jne 0xa1c488
// 00a1c483  e82892a3ff           call 0x4556b0
// 00a1c488  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ?FreeAssoc@?$CMap@JJII@@IAEXPAVCAssoc@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp

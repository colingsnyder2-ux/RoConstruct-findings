// from server: 100% by auto
// roc 2012-06 0049e530  unit: CrashReporter  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e530
//
// 0049e530  8b442404             mov eax, dword ptr [esp + 4]
// 0049e534  8b5004               mov edx, dword ptr [eax + 4]
// 0049e537  56                   push esi
// 0049e538  8b30                 mov esi, dword ptr [eax]
// 0049e53a  57                   push edi
// 0049e53b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049e53f  57                   push edi
// 0049e540  8b780c               mov edi, dword ptr [eax + 0xc]
// 0049e543  8b4008               mov eax, dword ptr [eax + 8]
// 0049e546  2bfa                 sub edi, edx
// 0049e548  57                   push edi
// 0049e549  2bc6                 sub eax, esi
// 0049e54b  50                   push eax
// 0049e54c  52                   push edx
// 0049e54d  56                   push esi
// 0049e54e  e8873f4e00           call 0x9824da
// 0049e553  5f                   pop edi
// 0049e554  5e                   pop esi
// 0049e555  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ?MoveWindow@CWnd@@QAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp

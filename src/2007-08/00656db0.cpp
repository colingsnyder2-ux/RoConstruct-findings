// roc 2007-08 00656db0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656db0
//
// 00656db0  56                   push esi
// 00656db1  8b742408             mov esi, dword ptr [esp + 8]
// 00656db5  85f6                 test esi, esi
// 00656db7  57                   push edi
// 00656db8  8bf9                 mov edi, ecx
// 00656dba  7d05                 jge 0x656dc1
// 00656dbc  e85f91fdff           call 0x62ff20
// 00656dc1  3b7708               cmp esi, dword ptr [edi + 8]
// 00656dc4  7c0b                 jl 0x656dd1
// 00656dc6  6aff                 push -1
// 00656dc8  8d4601               lea eax, [esi + 1]
// 00656dcb  50                   push eax
// 00656dcc  e87ffeffff           call 0x656c50
// 00656dd1  8b5704               mov edx, dword ptr [edi + 4]
// 00656dd4  8d0c76               lea ecx, [esi + esi*2]
// 00656dd7  8d048a               lea eax, [edx + ecx*4]
// 00656dda  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00656dde  8b11                 mov edx, dword ptr [ecx]
// 00656de0  8910                 mov dword ptr [eax], edx
// 00656de2  8b5104               mov edx, dword ptr [ecx + 4]
// 00656de5  895004               mov dword ptr [eax + 4], edx
// 00656de8  8b4908               mov ecx, dword ptr [ecx + 8]
// 00656deb  5f                   pop edi
// 00656dec  894808               mov dword ptr [eax + 8], ecx
// 00656def  5e                   pop esi
// 00656df0  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarRecurrencePattern.cpp (function ?SetAtGrow@?$CArray@VCOleDateTime@ATL@@AAV12@@@QAEXHAAVCOleDateTime@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarRecurrencePattern.cpp

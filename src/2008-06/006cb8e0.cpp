// roc 2008-06 006cb8e0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb8e0
//
// 006cb8e0  56                   push esi
// 006cb8e1  8b742408             mov esi, dword ptr [esp + 8]
// 006cb8e5  57                   push edi
// 006cb8e6  8bf9                 mov edi, ecx
// 006cb8e8  85f6                 test esi, esi
// 006cb8ea  7d05                 jge 0x6cb8f1
// 006cb8ec  e85350fdff           call 0x6a0944
// 006cb8f1  3b7708               cmp esi, dword ptr [edi + 8]
// 006cb8f4  7c0b                 jl 0x6cb901
// 006cb8f6  6aff                 push -1
// 006cb8f8  8d4601               lea eax, [esi + 1]
// 006cb8fb  50                   push eax
// 006cb8fc  e87ffeffff           call 0x6cb780
// 006cb901  8b5704               mov edx, dword ptr [edi + 4]
// 006cb904  8d0c76               lea ecx, [esi + esi*2]
// 006cb907  8d048a               lea eax, [edx + ecx*4]
// 006cb90a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cb90e  8b11                 mov edx, dword ptr [ecx]
// 006cb910  8910                 mov dword ptr [eax], edx
// 006cb912  8b5104               mov edx, dword ptr [ecx + 4]
// 006cb915  895004               mov dword ptr [eax + 4], edx
// 006cb918  8b4908               mov ecx, dword ptr [ecx + 8]
// 006cb91b  5f                   pop edi
// 006cb91c  894808               mov dword ptr [eax + 8], ecx
// 006cb91f  5e                   pop esi
// 006cb920  c20800               ret 8
// library xtp-11.2.2/Source\Calendar\XTPCalendarRecurrencePattern.cpp (function ?SetAtGrow@?$CArray@VCOleDateTime@ATL@@AAV12@@@QAEXHAAVCOleDateTime@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarRecurrencePattern.cpp

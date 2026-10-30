// roc 2009-12 0082ae90  unit: PAVCXTPReportRecordItem::?$CArray  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ae90
//
// 0082ae90  6aff                 push -1
// 0082ae92  688abc9500           push 0x95bc8a
// 0082ae97  64a100000000         mov eax, dword ptr fs:[0]
// 0082ae9d  50                   push eax
// 0082ae9e  51                   push ecx
// 0082ae9f  a10052b600           mov eax, dword ptr [0xb65200]
// 0082aea4  33c4                 xor eax, esp
// 0082aea6  50                   push eax
// 0082aea7  8d442408             lea eax, [esp + 8]
// 0082aeab  64a300000000         mov dword ptr fs:[0], eax
// 0082aeb1  6a54                 push 0x54
// 0082aeb3  e8e807ffff           call 0x81b6a0
// 0082aeb8  89442404             mov dword ptr [esp + 4], eax
// 0082aebc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0082aec4  85c0                 test eax, eax
// 0082aec6  7417                 je 0x82aedf
// 0082aec8  8bc8                 mov ecx, eax
// 0082aeca  e801ffffff           call 0x82add0
// 0082aecf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082aed3  64890d00000000       mov dword ptr fs:[0], ecx
// 0082aeda  59                   pop ecx
// 0082aedb  83c410               add esp, 0x10
// 0082aede  c3                   ret 
// 0082aedf  33c0                 xor eax, eax
// 0082aee1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082aee5  64890d00000000       mov dword ptr fs:[0], ecx
// 0082aeec  59                   pop ecx
// 0082aeed  83c410               add esp, 0x10
// 0082aef0  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPReportRecord@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp
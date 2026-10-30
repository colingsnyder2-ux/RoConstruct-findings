// roc 2009-12 0082af80  unit: PAVCXTPReportRecordItem::?$CArray  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082af80
//
// 0082af80  6aff                 push -1
// 0082af82  681aac9500           push 0x95ac1a
// 0082af87  64a100000000         mov eax, dword ptr fs:[0]
// 0082af8d  50                   push eax
// 0082af8e  51                   push ecx
// 0082af8f  56                   push esi
// 0082af90  a10052b600           mov eax, dword ptr [0xb65200]
// 0082af95  33c4                 xor eax, esp
// 0082af97  50                   push eax
// 0082af98  8d44240c             lea eax, [esp + 0xc]
// 0082af9c  64a300000000         mov dword ptr fs:[0], eax
// 0082afa2  8bf1                 mov esi, ecx
// 0082afa4  837e4000             cmp dword ptr [esi + 0x40], 0
// 0082afa8  7526                 jne 0x82afd0
// 0082afaa  6a48                 push 0x48
// 0082afac  e8ef06ffff           call 0x81b6a0
// 0082afb1  89442408             mov dword ptr [esp + 8], eax
// 0082afb5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0082afbd  85c0                 test eax, eax
// 0082afbf  740a                 je 0x82afcb
// 0082afc1  56                   push esi
// 0082afc2  8bc8                 mov ecx, eax
// 0082afc4  e8f71e0000           call 0x82cec0
// 0082afc9  eb02                 jmp 0x82afcd
// 0082afcb  33c0                 xor eax, eax
// 0082afcd  894640               mov dword ptr [esi + 0x40], eax
// 0082afd0  8b4640               mov eax, dword ptr [esi + 0x40]
// 0082afd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082afd7  64890d00000000       mov dword ptr fs:[0], ecx
// 0082afde  59                   pop ecx
// 0082afdf  5e                   pop esi
// 0082afe0  83c410               add esp, 0x10
// 0082afe3  c3                   ret 
// copied from an identical function in another client (function ?GetChilds@CXTPReportRecord@@QAEPAVCXTPReportRecords@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp
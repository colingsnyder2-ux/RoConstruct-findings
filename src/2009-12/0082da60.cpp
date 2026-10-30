// roc 2009-12 0082da60  unit: PAVCXTPReportRow::?$CArray  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082da60
//
// 0082da60  6aff                 push -1
// 0082da62  6863bd9500           push 0x95bd63
// 0082da67  64a100000000         mov eax, dword ptr fs:[0]
// 0082da6d  50                   push eax
// 0082da6e  51                   push ecx
// 0082da6f  56                   push esi
// 0082da70  a10052b600           mov eax, dword ptr [0xb65200]
// 0082da75  33c4                 xor eax, esp
// 0082da77  50                   push eax
// 0082da78  8d44240c             lea eax, [esp + 0xc]
// 0082da7c  64a300000000         mov dword ptr fs:[0], eax
// 0082da82  8bf1                 mov esi, ecx
// 0082da84  89742408             mov dword ptr [esp + 8], esi
// 0082da88  c7068c629f00         mov dword ptr [esi], 0x9f628c
// 0082da8e  6a01                 push 1
// 0082da90  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0082da98  e803faffff           call 0x82d4a0
// 0082da9d  8d4e20               lea ecx, [esi + 0x20]
// 0082daa0  c644241400           mov byte ptr [esp + 0x14], 0
// 0082daa5  e896fdffff           call 0x82d840
// 0082daaa  8bce                 mov ecx, esi
// 0082daac  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0082dab4  e82969fcff           call 0x7f43e2
// 0082dab9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082dabd  64890d00000000       mov dword ptr fs:[0], ecx
// 0082dac4  59                   pop ecx
// 0082dac5  5e                   pop esi
// 0082dac6  83c410               add esp, 0x10
// 0082dac9  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportRows@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp
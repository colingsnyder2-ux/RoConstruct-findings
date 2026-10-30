// roc 2009-06 0044ffa0  unit: VCRobloxDoc::?$VerbBinder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044ffa0
//
// 0044ffa0  6aff                 push -1
// 0044ffa2  68f8148500           push 0x8514f8
// 0044ffa7  64a100000000         mov eax, dword ptr fs:[0]
// 0044ffad  50                   push eax
// 0044ffae  64892500000000       mov dword ptr fs:[0], esp
// 0044ffb5  51                   push ecx
// 0044ffb6  56                   push esi
// 0044ffb7  8bf1                 mov esi, ecx
// 0044ffb9  89742404             mov dword ptr [esp + 4], esi
// 0044ffbd  8d4e54               lea ecx, [esi + 0x54]
// 0044ffc0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044ffc8  e813a31900           call 0x5ea2e0
// 0044ffcd  8bce                 mov ecx, esi
// 0044ffcf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044ffd7  e8f28d2c00           call 0x718dce
// 0044ffdc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044ffe0  5e                   pop esi
// 0044ffe1  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ffe8  83c410               add esp, 0x10
// 0044ffeb  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportInplaceButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS- /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp
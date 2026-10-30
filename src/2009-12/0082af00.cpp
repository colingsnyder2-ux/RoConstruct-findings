// roc 2009-12 0082af00  unit: PAVCXTPReportRecordItem::?$CArray  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082af00
//
// 0082af00  6aff                 push -1
// 0082af02  6873b99500           push 0x95b973
// 0082af07  64a100000000         mov eax, dword ptr fs:[0]
// 0082af0d  50                   push eax
// 0082af0e  51                   push ecx
// 0082af0f  56                   push esi
// 0082af10  a10052b600           mov eax, dword ptr [0xb65200]
// 0082af15  33c4                 xor eax, esp
// 0082af17  50                   push eax
// 0082af18  8d44240c             lea eax, [esp + 0xc]
// 0082af1c  64a300000000         mov dword ptr fs:[0], eax
// 0082af22  8bf1                 mov esi, ecx
// 0082af24  89742408             mov dword ptr [esp + 8], esi
// 0082af28  c7068c599f00         mov dword ptr [esi], 0x9f598c
// 0082af2e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0082af36  e8d5feffff           call 0x82ae10
// 0082af3b  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0082af3e  85c9                 test ecx, ecx
// 0082af40  7405                 je 0x82af47
// 0082af42  e8958efcff           call 0x7f3ddc
// 0082af47  8d4e20               lea ecx, [esi + 0x20]
// 0082af4a  c644241400           mov byte ptr [esp + 0x14], 0
// 0082af4f  e83cfeffff           call 0x82ad90
// 0082af54  8bce                 mov ecx, esi
// 0082af56  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0082af5e  e87f94fcff           call 0x7f43e2
// 0082af63  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082af67  64890d00000000       mov dword ptr fs:[0], ecx
// 0082af6e  59                   pop ecx
// 0082af6f  5e                   pop esi
// 0082af70  83c410               add esp, 0x10
// 0082af73  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportRecord@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp
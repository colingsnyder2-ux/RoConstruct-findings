// roc 2009-12 0082cf00  unit: PAVCXTPReportRecord::?$CArray  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cf00
//
// 0082cf00  6aff                 push -1
// 0082cf02  6833bd9500           push 0x95bd33
// 0082cf07  64a100000000         mov eax, dword ptr fs:[0]
// 0082cf0d  50                   push eax
// 0082cf0e  51                   push ecx
// 0082cf0f  56                   push esi
// 0082cf10  a10052b600           mov eax, dword ptr [0xb65200]
// 0082cf15  33c4                 xor eax, esp
// 0082cf17  50                   push eax
// 0082cf18  8d44240c             lea eax, [esp + 0xc]
// 0082cf1c  64a300000000         mov dword ptr fs:[0], eax
// 0082cf22  8bf1                 mov esi, ecx
// 0082cf24  89742408             mov dword ptr [esp + 8], esi
// 0082cf28  c706cc619f00         mov dword ptr [esi], 0x9f61cc
// 0082cf2e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0082cf36  e815fcffff           call 0x82cb50
// 0082cf3b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0082cf3e  85c9                 test ecx, ecx
// 0082cf40  7405                 je 0x82cf47
// 0082cf42  e8956efcff           call 0x7f3ddc
// 0082cf47  8d4e20               lea ecx, [esi + 0x20]
// 0082cf4a  c644241400           mov byte ptr [esp + 0x14], 0
// 0082cf4f  e8ecfeffff           call 0x82ce40
// 0082cf54  8bce                 mov ecx, esi
// 0082cf56  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0082cf5e  e87f74fcff           call 0x7f43e2
// 0082cf63  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082cf67  64890d00000000       mov dword ptr fs:[0], ecx
// 0082cf6e  59                   pop ecx
// 0082cf6f  5e                   pop esi
// 0082cf70  83c410               add esp, 0x10
// 0082cf73  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportRecords@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp
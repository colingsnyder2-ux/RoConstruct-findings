// roc 2009-12 008a15d0  unit: CXTPReportInplaceList  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a15d0
//
// 008a15d0  6aff                 push -1
// 008a15d2  6838219600           push 0x962138
// 008a15d7  64a100000000         mov eax, dword ptr fs:[0]
// 008a15dd  50                   push eax
// 008a15de  51                   push ecx
// 008a15df  56                   push esi
// 008a15e0  a10052b600           mov eax, dword ptr [0xb65200]
// 008a15e5  33c4                 xor eax, esp
// 008a15e7  50                   push eax
// 008a15e8  8d44240c             lea eax, [esp + 0xc]
// 008a15ec  64a300000000         mov dword ptr fs:[0], eax
// 008a15f2  8bf1                 mov esi, ecx
// 008a15f4  89742408             mov dword ptr [esp + 8], esi
// 008a15f8  c706f853a000         mov dword ptr [esi], 0xa053f8
// 008a15fe  6a00                 push 0
// 008a1600  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008a1608  e8a3fcffff           call 0x8a12b0
// 008a160d  8bce                 mov ecx, esi
// 008a160f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008a1617  e8848af7ff           call 0x81a0a0
// 008a161c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a1620  64890d00000000       mov dword ptr fs:[0], ecx
// 008a1627  59                   pop ecx
// 008a1628  5e                   pop esi
// 008a1629  83c410               add esp, 0x10
// 008a162c  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportInplaceControl@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportInplaceControls.cpp
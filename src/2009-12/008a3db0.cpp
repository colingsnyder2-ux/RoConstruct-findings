// roc 2009-12 008a3db0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3db0
//
// 008a3db0  6aff                 push -1
// 008a3db2  6898249600           push 0x962498
// 008a3db7  64a100000000         mov eax, dword ptr fs:[0]
// 008a3dbd  50                   push eax
// 008a3dbe  51                   push ecx
// 008a3dbf  56                   push esi
// 008a3dc0  a10052b600           mov eax, dword ptr [0xb65200]
// 008a3dc5  33c4                 xor eax, esp
// 008a3dc7  50                   push eax
// 008a3dc8  8d44240c             lea eax, [esp + 0xc]
// 008a3dcc  64a300000000         mov dword ptr fs:[0], eax
// 008a3dd2  8bf1                 mov esi, ecx
// 008a3dd4  89742408             mov dword ptr [esp + 8], esi
// 008a3dd8  c7064c5ca000         mov dword ptr [esi], 0xa05c4c
// 008a3dde  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008a3de1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a3de9  85c9                 test ecx, ecx
// 008a3deb  7405                 je 0x8a3df2
// 008a3ded  e8eafff4ff           call 0x7f3ddc
// 008a3df2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a3df5  85c9                 test ecx, ecx
// 008a3df7  7405                 je 0x8a3dfe
// 008a3df9  e8defff4ff           call 0x7f3ddc
// 008a3dfe  8bce                 mov ecx, esi
// 008a3e00  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008a3e08  e8d505f5ff           call 0x7f43e2
// 008a3e0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a3e11  64890d00000000       mov dword ptr fs:[0], ecx
// 008a3e18  59                   pop ecx
// 008a3e19  5e                   pop esi
// 008a3e1a  83c410               add esp, 0x10
// 008a3e1d  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportRow@@UAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportRow.cpp
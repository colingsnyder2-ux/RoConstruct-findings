// roc 2009-12 00827e10  unit: CXTPReportColumn  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827e10
//
// 00827e10  6aff                 push -1
// 00827e12  68e3b79500           push 0x95b7e3
// 00827e17  64a100000000         mov eax, dword ptr fs:[0]
// 00827e1d  50                   push eax
// 00827e1e  51                   push ecx
// 00827e1f  56                   push esi
// 00827e20  a10052b600           mov eax, dword ptr [0xb65200]
// 00827e25  33c4                 xor eax, esp
// 00827e27  50                   push eax
// 00827e28  8d44240c             lea eax, [esp + 0xc]
// 00827e2c  64a300000000         mov dword ptr fs:[0], eax
// 00827e32  8bf1                 mov esi, ecx
// 00827e34  89742408             mov dword ptr [esp + 8], esi
// 00827e38  c706ec579f00         mov dword ptr [esi], 0x9f57ec
// 00827e3e  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00827e44  c744241405000000     mov dword ptr [esp + 0x14], 5
// 00827e4c  85c9                 test ecx, ecx
// 00827e4e  7405                 je 0x827e55
// 00827e50  e887bffcff           call 0x7f3ddc
// 00827e55  8d4e34               lea ecx, [esi + 0x34]
// 00827e58  c644241404           mov byte ptr [esp + 0x14], 4
// 00827e5d  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00827e63  e8c873beff           call 0x40f230
// 00827e68  8d4e30               lea ecx, [esi + 0x30]
// 00827e6b  ff15c0de9800         call dword ptr [0x98dec0]
// 00827e71  8d4e28               lea ecx, [esi + 0x28]
// 00827e74  ff15c0de9800         call dword ptr [0x98dec0]
// 00827e7a  8d4e24               lea ecx, [esi + 0x24]
// 00827e7d  ff15c0de9800         call dword ptr [0x98dec0]
// 00827e83  8d4e20               lea ecx, [esi + 0x20]
// 00827e86  ff15c0de9800         call dword ptr [0x98dec0]
// 00827e8c  8bce                 mov ecx, esi
// 00827e8e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00827e96  e847c5fcff           call 0x7f43e2
// 00827e9b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00827e9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00827ea6  59                   pop ecx
// 00827ea7  5e                   pop esi
// 00827ea8  83c410               add esp, 0x10
// 00827eab  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportColumn@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumn.cpp
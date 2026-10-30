// roc 2009-12 008280a0  unit: CXTPReportColumn  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008280a0
//
// 008280a0  6aff                 push -1
// 008280a2  68e3b79500           push 0x95b7e3
// 008280a7  64a100000000         mov eax, dword ptr fs:[0]
// 008280ad  50                   push eax
// 008280ae  51                   push ecx
// 008280af  56                   push esi
// 008280b0  a10052b600           mov eax, dword ptr [0xb65200]
// 008280b5  33c4                 xor eax, esp
// 008280b7  50                   push eax
// 008280b8  8d44240c             lea eax, [esp + 0xc]
// 008280bc  64a300000000         mov dword ptr fs:[0], eax
// 008280c2  8bf1                 mov esi, ecx
// 008280c4  89742408             mov dword ptr [esp + 8], esi
// 008280c8  e875e30f00           call 0x926442
// 008280cd  8d4e20               lea ecx, [esi + 0x20]
// 008280d0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008280d8  c706ec579f00         mov dword ptr [esi], 0x9f57ec
// 008280de  ff1574de9800         call dword ptr [0x98de74]
// 008280e4  8d4e24               lea ecx, [esi + 0x24]
// 008280e7  ff1574de9800         call dword ptr [0x98de74]
// 008280ed  8d4e28               lea ecx, [esi + 0x28]
// 008280f0  ff1574de9800         call dword ptr [0x98de74]
// 008280f6  8d4e30               lea ecx, [esi + 0x30]
// 008280f9  ff1574de9800         call dword ptr [0x98de74]
// 008280ff  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00828106  c7463498019b00       mov dword ptr [esi + 0x34], 0x9b0198
// 0082810d  8b442434             mov eax, dword ptr [esp + 0x34]
// 00828111  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00828115  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00828119  50                   push eax
// 0082811a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0082811e  51                   push ecx
// 0082811f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00828123  52                   push edx
// 00828124  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00828128  50                   push eax
// 00828129  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0082812d  51                   push ecx
// 0082812e  6856fd9900           push 0x99fd56
// 00828133  52                   push edx
// 00828134  50                   push eax
// 00828135  8bce                 mov ecx, esi
// 00828137  c644243405           mov byte ptr [esp + 0x34], 5
// 0082813c  e89ffbffff           call 0x827ce0
// 00828141  8bc6                 mov eax, esi
// 00828143  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00828147  64890d00000000       mov dword ptr fs:[0], ecx
// 0082814e  59                   pop ecx
// 0082814f  5e                   pop esi
// 00828150  83c410               add esp, 0x10
// 00828153  c21c00               ret 0x1c
// copied from an identical function in another client (function ??0CXTPReportColumn@@QAE@HPBDHHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumn.cpp
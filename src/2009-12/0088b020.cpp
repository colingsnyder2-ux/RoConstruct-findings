// roc 2009-12 0088b020  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b020
//
// 0088b020  6aff                 push -1
// 0088b022  68350d9600           push 0x960d35
// 0088b027  64a100000000         mov eax, dword ptr fs:[0]
// 0088b02d  50                   push eax
// 0088b02e  51                   push ecx
// 0088b02f  53                   push ebx
// 0088b030  56                   push esi
// 0088b031  57                   push edi
// 0088b032  a10052b600           mov eax, dword ptr [0xb65200]
// 0088b037  33c4                 xor eax, esp
// 0088b039  50                   push eax
// 0088b03a  8d442414             lea eax, [esp + 0x14]
// 0088b03e  64a300000000         mov dword ptr fs:[0], eax
// 0088b044  8bf1                 mov esi, ecx
// 0088b046  89742410             mov dword ptr [esp + 0x10], esi
// 0088b04a  e8d1d8f6ff           call 0x7f8920
// 0088b04f  33ff                 xor edi, edi
// 0088b051  8d8e8c010000         lea ecx, [esi + 0x18c]
// 0088b057  897c241c             mov dword ptr [esp + 0x1c], edi
// 0088b05b  c706942da000         mov dword ptr [esi], 0xa02d94
// 0088b061  c74620342da000       mov dword ptr [esi + 0x20], 0xa02d34
// 0088b068  ff1574de9800         call dword ptr [0x98de74]
// 0088b06e  8d8e94010000         lea ecx, [esi + 0x194]
// 0088b074  ff1574de9800         call dword ptr [0x98de74]
// 0088b07a  8d9e98010000         lea ebx, [esi + 0x198]
// 0088b080  8bcb                 mov ecx, ebx
// 0088b082  ff1574de9800         call dword ptr [0x98de74]
// 0088b088  8bce                 mov ecx, esi
// 0088b08a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0088b08f  e8b4b30900           call 0x926448
// 0088b094  6856fd9900           push 0x99fd56
// 0088b099  8bcb                 mov ecx, ebx
// 0088b09b  c786fc00000006000000 mov dword ptr [esi + 0xfc], 6
// 0088b0a5  c7866001000064000000 mov dword ptr [esi + 0x160], 0x64
// 0088b0af  89be80010000         mov dword ptr [esi + 0x180], edi
// 0088b0b5  89be78010000         mov dword ptr [esi + 0x178], edi
// 0088b0bb  ff155cde9800         call dword ptr [0x98de5c]
// 0088b0c1  89be74010000         mov dword ptr [esi + 0x174], edi
// 0088b0c7  89be7c010000         mov dword ptr [esi + 0x17c], edi
// 0088b0cd  89be84010000         mov dword ptr [esi + 0x184], edi
// 0088b0d3  89be88010000         mov dword ptr [esi + 0x188], edi
// 0088b0d9  89be90010000         mov dword ptr [esi + 0x190], edi
// 0088b0df  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 0088b0e5  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 0088b0eb  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 0088b0f5  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 0088b0fb  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 0088b101  8bc6                 mov eax, esi
// 0088b103  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088b107  64890d00000000       mov dword ptr fs:[0], ecx
// 0088b10e  59                   pop ecx
// 0088b10f  5f                   pop edi
// 0088b110  5e                   pop esi
// 0088b111  5b                   pop ebx
// 0088b112  83c410               add esp, 0x10
// 0088b115  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControlEdit@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp
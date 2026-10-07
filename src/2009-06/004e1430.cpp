// roc 2009-06 004e1430  unit: RBX::Network::IdSerializer  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e1430
//
// 004e1430  6aff                 push -1
// 004e1432  6868ba8500           push 0x85ba68
// 004e1437  64a100000000         mov eax, dword ptr fs:[0]
// 004e143d  50                   push eax
// 004e143e  64892500000000       mov dword ptr fs:[0], esp
// 004e1445  51                   push ecx
// 004e1446  53                   push ebx
// 004e1447  56                   push esi
// 004e1448  8bf1                 mov esi, ecx
// 004e144a  57                   push edi
// 004e144b  8974240c             mov dword ptr [esp + 0xc], esi
// 004e144f  33db                 xor ebx, ebx
// 004e1451  33ff                 xor edi, edi
// 004e1453  895c2418             mov dword ptr [esp + 0x18], ebx
// 004e1457  395e04               cmp dword ptr [esi + 4], ebx
// 004e145a  7625                 jbe 0x4e1481
// 004e145c  55                   push ebp
// 004e145d  8d4900               lea ecx, [ecx]
// 004e1460  8b06                 mov eax, dword ptr [esi]
// 004e1462  8b6cf804             mov ebp, dword ptr [eax + edi*8 + 4]
// 004e1466  3beb                 cmp ebp, ebx
// 004e1468  7410                 je 0x4e147a
// 004e146a  8bcd                 mov ecx, ebp
// 004e146c  e8bfc70100           call 0x4fdc30
// 004e1471  55                   push ebp
// 004e1472  e8bb752300           call 0x718a32
// 004e1477  83c404               add esp, 4
// 004e147a  47                   inc edi
// 004e147b  3b7e04               cmp edi, dword ptr [esi + 4]
// 004e147e  72e0                 jb 0x4e1460
// 004e1480  5d                   pop ebp
// 004e1481  885e14               mov byte ptr [esi + 0x14], bl
// 004e1484  395e08               cmp dword ptr [esi + 8], ebx
// 004e1487  7439                 je 0x4e14c2
// 004e1489  8b0e                 mov ecx, dword ptr [esi]
// 004e148b  51                   push ecx
// 004e148c  e84d782300           call 0x718cde
// 004e1491  83c404               add esp, 4
// 004e1494  895e08               mov dword ptr [esi + 8], ebx
// 004e1497  891e                 mov dword ptr [esi], ebx
// 004e1499  895e04               mov dword ptr [esi + 4], ebx
// 004e149c  3bdb                 cmp ebx, ebx
// 004e149e  7422                 je 0x4e14c2
// 004e14a0  8bd3                 mov edx, ebx
// 004e14a2  52                   push edx
// 004e14a3  e836782300           call 0x718cde
// 004e14a8  83c404               add esp, 4
// 004e14ab  895e08               mov dword ptr [esi + 8], ebx
// 004e14ae  891e                 mov dword ptr [esi], ebx
// 004e14b0  895e04               mov dword ptr [esi + 4], ebx
// 004e14b3  3bdb                 cmp ebx, ebx
// 004e14b5  760b                 jbe 0x4e14c2
// 004e14b7  8bc3                 mov eax, ebx
// 004e14b9  50                   push eax
// 004e14ba  e81f782300           call 0x718cde
// 004e14bf  83c404               add esp, 4
// 004e14c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e14c6  5f                   pop edi
// 004e14c7  5e                   pop esi
// 004e14c8  5b                   pop ebx
// 004e14c9  64890d00000000       mov dword ptr fs:[0], ecx
// 004e14d0  83c410               add esp, 0x10
// 004e14d3  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ??1StringCompressor@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

// roc 2009-06 004e1300  unit: RBX::Network::IdSerializer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e1300
//
// 004e1300  53                   push ebx
// 004e1301  56                   push esi
// 004e1302  8bf1                 mov esi, ecx
// 004e1304  33db                 xor ebx, ebx
// 004e1306  885e14               mov byte ptr [esi + 0x14], bl
// 004e1309  395e08               cmp dword ptr [esi + 8], ebx
// 004e130c  7439                 je 0x4e1347
// 004e130e  8b06                 mov eax, dword ptr [esi]
// 004e1310  50                   push eax
// 004e1311  e8c8792300           call 0x718cde
// 004e1316  83c404               add esp, 4
// 004e1319  895e08               mov dword ptr [esi + 8], ebx
// 004e131c  891e                 mov dword ptr [esi], ebx
// 004e131e  895e04               mov dword ptr [esi + 4], ebx
// 004e1321  3bdb                 cmp ebx, ebx
// 004e1323  7422                 je 0x4e1347
// 004e1325  8bcb                 mov ecx, ebx
// 004e1327  51                   push ecx
// 004e1328  e8b1792300           call 0x718cde
// 004e132d  83c404               add esp, 4
// 004e1330  895e08               mov dword ptr [esi + 8], ebx
// 004e1333  891e                 mov dword ptr [esi], ebx
// 004e1335  895e04               mov dword ptr [esi + 4], ebx
// 004e1338  3bdb                 cmp ebx, ebx
// 004e133a  760b                 jbe 0x4e1347
// 004e133c  8bd3                 mov edx, ebx
// 004e133e  52                   push edx
// 004e133f  e89a792300           call 0x718cde
// 004e1344  83c404               add esp, 4
// 004e1347  5e                   pop esi
// 004e1348  5b                   pop ebx
// 004e1349  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??1?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp

// roc 2010-06 004fe440  unit: RBX::Network::IdSerializer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe440
//
// 004fe440  53                   push ebx
// 004fe441  56                   push esi
// 004fe442  8bf1                 mov esi, ecx
// 004fe444  33db                 xor ebx, ebx
// 004fe446  885e14               mov byte ptr [esi + 0x14], bl
// 004fe449  395e08               cmp dword ptr [esi + 8], ebx
// 004fe44c  7439                 je 0x4fe487
// 004fe44e  8b06                 mov eax, dword ptr [esi]
// 004fe450  50                   push eax
// 004fe451  e8f0972a00           call 0x7a7c46
// 004fe456  83c404               add esp, 4
// 004fe459  895e08               mov dword ptr [esi + 8], ebx
// 004fe45c  891e                 mov dword ptr [esi], ebx
// 004fe45e  895e04               mov dword ptr [esi + 4], ebx
// 004fe461  3bdb                 cmp ebx, ebx
// 004fe463  7422                 je 0x4fe487
// 004fe465  8bcb                 mov ecx, ebx
// 004fe467  51                   push ecx
// 004fe468  e8d9972a00           call 0x7a7c46
// 004fe46d  83c404               add esp, 4
// 004fe470  895e08               mov dword ptr [esi + 8], ebx
// 004fe473  891e                 mov dword ptr [esi], ebx
// 004fe475  895e04               mov dword ptr [esi + 4], ebx
// 004fe478  3bdb                 cmp ebx, ebx
// 004fe47a  760b                 jbe 0x4fe487
// 004fe47c  8bd3                 mov edx, ebx
// 004fe47e  52                   push edx
// 004fe47f  e8c2972a00           call 0x7a7c46
// 004fe484  83c404               add esp, 4
// 004fe487  5e                   pop esi
// 004fe488  5b                   pop ebx
// 004fe489  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??1?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp

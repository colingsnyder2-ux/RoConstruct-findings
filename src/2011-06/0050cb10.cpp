// roc 2011-06 0050cb10  unit: RBX::Network::ServerReplicator  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050cb10
//
// 0050cb10  53                   push ebx
// 0050cb11  56                   push esi
// 0050cb12  8bf1                 mov esi, ecx
// 0050cb14  33db                 xor ebx, ebx
// 0050cb16  885e14               mov byte ptr [esi + 0x14], bl
// 0050cb19  395e08               cmp dword ptr [esi + 8], ebx
// 0050cb1c  7439                 je 0x50cb57
// 0050cb1e  8b06                 mov eax, dword ptr [esi]
// 0050cb20  50                   push eax
// 0050cb21  e8ded72f00           call 0x80a304
// 0050cb26  83c404               add esp, 4
// 0050cb29  895e08               mov dword ptr [esi + 8], ebx
// 0050cb2c  891e                 mov dword ptr [esi], ebx
// 0050cb2e  895e04               mov dword ptr [esi + 4], ebx
// 0050cb31  3bdb                 cmp ebx, ebx
// 0050cb33  7422                 je 0x50cb57
// 0050cb35  8bcb                 mov ecx, ebx
// 0050cb37  51                   push ecx
// 0050cb38  e8c7d72f00           call 0x80a304
// 0050cb3d  83c404               add esp, 4
// 0050cb40  895e08               mov dword ptr [esi + 8], ebx
// 0050cb43  891e                 mov dword ptr [esi], ebx
// 0050cb45  895e04               mov dword ptr [esi + 4], ebx
// 0050cb48  3bdb                 cmp ebx, ebx
// 0050cb4a  760b                 jbe 0x50cb57
// 0050cb4c  8bd3                 mov edx, ebx
// 0050cb4e  52                   push edx
// 0050cb4f  e8b0d72f00           call 0x80a304
// 0050cb54  83c404               add esp, 4
// 0050cb57  5e                   pop esi
// 0050cb58  5b                   pop ebx
// 0050cb59  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??1?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp

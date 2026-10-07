// roc 2011-06 00511a80  unit: RBX::Network::ClientReplicator  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00511a80
//
// 00511a80  56                   push esi
// 00511a81  8bf1                 mov esi, ecx
// 00511a83  8b4608               mov eax, dword ptr [esi + 8]
// 00511a86  394604               cmp dword ptr [esi + 4], eax
// 00511a89  7561                 jne 0x511aec
// 00511a8b  85c0                 test eax, eax
// 00511a8d  7509                 jne 0x511a98
// 00511a8f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00511a96  eb05                 jmp 0x511a9d
// 00511a98  03c0                 add eax, eax
// 00511a9a  894608               mov dword ptr [esi + 8], eax
// 00511a9d  8b4608               mov eax, dword ptr [esi + 8]
// 00511aa0  57                   push edi
// 00511aa1  85c0                 test eax, eax
// 00511aa3  7504                 jne 0x511aa9
// 00511aa5  33ff                 xor edi, edi
// 00511aa7  eb1b                 jmp 0x511ac4
// 00511aa9  33c9                 xor ecx, ecx
// 00511aab  ba04000000           mov edx, 4
// 00511ab0  f7e2                 mul edx
// 00511ab2  0f90c1               seto cl
// 00511ab5  f7d9                 neg ecx
// 00511ab7  0bc8                 or ecx, eax
// 00511ab9  51                   push ecx
// 00511aba  e881882f00           call 0x80a340
// 00511abf  83c404               add esp, 4
// 00511ac2  8bf8                 mov edi, eax
// 00511ac4  833e00               cmp dword ptr [esi], 0
// 00511ac7  7420                 je 0x511ae9
// 00511ac9  33c0                 xor eax, eax
// 00511acb  394604               cmp dword ptr [esi + 4], eax
// 00511ace  760e                 jbe 0x511ade
// 00511ad0  8b0e                 mov ecx, dword ptr [esi]
// 00511ad2  8b1481               mov edx, dword ptr [ecx + eax*4]
// 00511ad5  891487               mov dword ptr [edi + eax*4], edx
// 00511ad8  40                   inc eax
// 00511ad9  3b4604               cmp eax, dword ptr [esi + 4]
// 00511adc  72f2                 jb 0x511ad0
// 00511ade  8b06                 mov eax, dword ptr [esi]
// 00511ae0  50                   push eax
// 00511ae1  e81e882f00           call 0x80a304
// 00511ae6  83c404               add esp, 4
// 00511ae9  893e                 mov dword ptr [esi], edi
// 00511aeb  5f                   pop edi
// 00511aec  8b4e04               mov ecx, dword ptr [esi + 4]
// 00511aef  8b442408             mov eax, dword ptr [esp + 8]
// 00511af3  8b16                 mov edx, dword ptr [esi]
// 00511af5  8b00                 mov eax, dword ptr [eax]
// 00511af7  89048a               mov dword ptr [edx + ecx*4], eax
// 00511afa  ff4604               inc dword ptr [esi + 4]
// 00511afd  5e                   pop esi
// 00511afe  c20c00               ret 0xc
// library rbx2016-raknet/CloudCommon.cpp (function ?Insert@?$List@PAUCloudQueryRow@RakNet@@@DataStructures@@QAEXABQAUCloudQueryRow@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp

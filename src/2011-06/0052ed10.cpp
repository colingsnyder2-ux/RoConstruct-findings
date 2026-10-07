// roc 2011-06 0052ed10  unit: RBX::Network::ProfiledRakPeer  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052ed10
//
// 0052ed10  56                   push esi
// 0052ed11  8bf1                 mov esi, ecx
// 0052ed13  8b4608               mov eax, dword ptr [esi + 8]
// 0052ed16  85c0                 test eax, eax
// 0052ed18  7505                 jne 0x52ed1f
// 0052ed1a  b810000000           mov eax, 0x10
// 0052ed1f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052ed23  3bc1                 cmp eax, ecx
// 0052ed25  7306                 jae 0x52ed2d
// 0052ed27  03c0                 add eax, eax
// 0052ed29  3bc1                 cmp eax, ecx
// 0052ed2b  72fa                 jb 0x52ed27
// 0052ed2d  394608               cmp dword ptr [esi + 8], eax
// 0052ed30  734f                 jae 0x52ed81
// 0052ed32  57                   push edi
// 0052ed33  894608               mov dword ptr [esi + 8], eax
// 0052ed36  85c0                 test eax, eax
// 0052ed38  7504                 jne 0x52ed3e
// 0052ed3a  33ff                 xor edi, edi
// 0052ed3c  eb1b                 jmp 0x52ed59
// 0052ed3e  33c9                 xor ecx, ecx
// 0052ed40  ba04000000           mov edx, 4
// 0052ed45  f7e2                 mul edx
// 0052ed47  0f90c1               seto cl
// 0052ed4a  f7d9                 neg ecx
// 0052ed4c  0bc8                 or ecx, eax
// 0052ed4e  51                   push ecx
// 0052ed4f  e8ecb52d00           call 0x80a340
// 0052ed54  83c404               add esp, 4
// 0052ed57  8bf8                 mov edi, eax
// 0052ed59  833e00               cmp dword ptr [esi], 0
// 0052ed5c  7420                 je 0x52ed7e
// 0052ed5e  33c0                 xor eax, eax
// 0052ed60  394604               cmp dword ptr [esi + 4], eax
// 0052ed63  760e                 jbe 0x52ed73
// 0052ed65  8b0e                 mov ecx, dword ptr [esi]
// 0052ed67  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0052ed6a  891487               mov dword ptr [edi + eax*4], edx
// 0052ed6d  40                   inc eax
// 0052ed6e  3b4604               cmp eax, dword ptr [esi + 4]
// 0052ed71  72f2                 jb 0x52ed65
// 0052ed73  8b06                 mov eax, dword ptr [esi]
// 0052ed75  50                   push eax
// 0052ed76  e889b52d00           call 0x80a304
// 0052ed7b  83c404               add esp, 4
// 0052ed7e  893e                 mov dword ptr [esi], edi
// 0052ed80  5f                   pop edi
// 0052ed81  5e                   pop esi
// 0052ed82  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Preallocate@?$List@PAUInternalPacket@RakNet@@@DataStructures@@QAEXIPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp

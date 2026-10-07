// roc 2012-06 005bc690  unit: RakNet::RakPeer  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc690
//
// 005bc690  56                   push esi
// 005bc691  8bf1                 mov esi, ecx
// 005bc693  8b4630               mov eax, dword ptr [esi + 0x30]
// 005bc696  3b4634               cmp eax, dword ptr [esi + 0x34]
// 005bc699  7504                 jne 0x5bc69f
// 005bc69b  33c0                 xor eax, eax
// 005bc69d  5e                   pop esi
// 005bc69e  c3                   ret 
// 005bc69f  57                   push edi
// 005bc6a0  8d7e3c               lea edi, [esi + 0x3c]
// 005bc6a3  8bcf                 mov ecx, edi
// 005bc6a5  e8b6c8e5ff           call 0x418f60
// 005bc6aa  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005bc6ad  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 005bc6b0  7441                 je 0x5bc6f3
// 005bc6b2  ff4630               inc dword ptr [esi + 0x30]
// 005bc6b5  8b4630               mov eax, dword ptr [esi + 0x30]
// 005bc6b8  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005bc6bb  3bc1                 cmp eax, ecx
// 005bc6bd  7507                 jne 0x5bc6c6
// 005bc6bf  c7463000000000       mov dword ptr [esi + 0x30], 0
// 005bc6c6  8b4630               mov eax, dword ptr [esi + 0x30]
// 005bc6c9  85c0                 test eax, eax
// 005bc6cb  7513                 jne 0x5bc6e0
// 005bc6cd  8b562c               mov edx, dword ptr [esi + 0x2c]
// 005bc6d0  8b748afc             mov esi, dword ptr [edx + ecx*4 - 4]
// 005bc6d4  8bcf                 mov ecx, edi
// 005bc6d6  e895c8e5ff           call 0x418f70
// 005bc6db  5f                   pop edi
// 005bc6dc  8bc6                 mov eax, esi
// 005bc6de  5e                   pop esi
// 005bc6df  c3                   ret 
// 005bc6e0  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005bc6e3  8b7481fc             mov esi, dword ptr [ecx + eax*4 - 4]
// 005bc6e7  8bcf                 mov ecx, edi
// 005bc6e9  e882c8e5ff           call 0x418f70
// 005bc6ee  5f                   pop edi
// 005bc6ef  8bc6                 mov eax, esi
// 005bc6f1  5e                   pop esi
// 005bc6f2  c3                   ret 
// 005bc6f3  8bcf                 mov ecx, edi
// 005bc6f5  33f6                 xor esi, esi
// 005bc6f7  e874c8e5ff           call 0x418f70
// 005bc6fc  5f                   pop edi
// 005bc6fd  8bc6                 mov eax, esi
// 005bc6ff  5e                   pop esi
// 005bc700  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?PopInaccurate@?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAEPAUBufferedCommandStruct@RakPeer@RakNet@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp

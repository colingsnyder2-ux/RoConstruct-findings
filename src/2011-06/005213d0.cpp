// roc 2011-06 005213d0  unit: RBX::Network::ProfiledRakPeer  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005213d0
//
// 005213d0  56                   push esi
// 005213d1  8bf1                 mov esi, ecx
// 005213d3  8b4630               mov eax, dword ptr [esi + 0x30]
// 005213d6  3b4634               cmp eax, dword ptr [esi + 0x34]
// 005213d9  7504                 jne 0x5213df
// 005213db  33c0                 xor eax, eax
// 005213dd  5e                   pop esi
// 005213de  c3                   ret 
// 005213df  57                   push edi
// 005213e0  8d7e3c               lea edi, [esi + 0x3c]
// 005213e3  8bcf                 mov ecx, edi
// 005213e5  e8e6c40000           call 0x52d8d0
// 005213ea  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005213ed  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 005213f0  7441                 je 0x521433
// 005213f2  ff4630               inc dword ptr [esi + 0x30]
// 005213f5  8b4630               mov eax, dword ptr [esi + 0x30]
// 005213f8  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005213fb  3bc1                 cmp eax, ecx
// 005213fd  7507                 jne 0x521406
// 005213ff  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00521406  8b4630               mov eax, dword ptr [esi + 0x30]
// 00521409  85c0                 test eax, eax
// 0052140b  7513                 jne 0x521420
// 0052140d  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00521410  8b748afc             mov esi, dword ptr [edx + ecx*4 - 4]
// 00521414  8bcf                 mov ecx, edi
// 00521416  e88545efff           call 0x4159a0
// 0052141b  5f                   pop edi
// 0052141c  8bc6                 mov eax, esi
// 0052141e  5e                   pop esi
// 0052141f  c3                   ret 
// 00521420  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00521423  8b7481fc             mov esi, dword ptr [ecx + eax*4 - 4]
// 00521427  8bcf                 mov ecx, edi
// 00521429  e87245efff           call 0x4159a0
// 0052142e  5f                   pop edi
// 0052142f  8bc6                 mov eax, esi
// 00521431  5e                   pop esi
// 00521432  c3                   ret 
// 00521433  8bcf                 mov ecx, edi
// 00521435  33f6                 xor esi, esi
// 00521437  e86445efff           call 0x4159a0
// 0052143c  5f                   pop edi
// 0052143d  8bc6                 mov eax, esi
// 0052143f  5e                   pop esi
// 00521440  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?PopInaccurate@?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAEPAUBufferedCommandStruct@RakPeer@RakNet@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp

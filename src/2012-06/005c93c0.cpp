// roc 2012-06 005c93c0  unit: RBX::AdornRbxGfx  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c93c0
//
// 005c93c0  56                   push esi
// 005c93c1  8bf1                 mov esi, ecx
// 005c93c3  8d4e08               lea ecx, [esi + 8]
// 005c93c6  e86586f9ff           call 0x561a30
// 005c93cb  c706ffffffff         mov dword ptr [esi], 0xffffffff
// 005c93d1  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 005c93d8  8bc6                 mov eax, esi
// 005c93da  5e                   pop esi
// 005c93db  c3                   ret 
// library rbx2016-raknet/RakNetSocket.cpp (function ??0RakNetSocket@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetSocket.cpp

// roc 2008-06 004baa10  unit: RBX::Network::IdSerializer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004baa10
//
// 004baa10  56                   push esi
// 004baa11  8bf1                 mov esi, ecx
// 004baa13  e81843feff           call 0x49ed30
// 004baa18  33c0                 xor eax, eax
// 004baa1a  b101                 mov cl, 1
// 004baa1c  894604               mov dword ptr [esi + 4], eax
// 004baa1f  88460a               mov byte ptr [esi + 0xa], al
// 004baa22  88860a010000         mov byte ptr [esi + 0x10a], al
// 004baa28  c70624578200         mov dword ptr [esi], 0x825724
// 004baa2e  884e08               mov byte ptr [esi + 8], cl
// 004baa31  884e09               mov byte ptr [esi + 9], cl
// 004baa34  8bc6                 mov eax, esi
// 004baa36  5e                   pop esi
// 004baa37  c3                   ret 
// library rbxgs-raknet/PacketLogger.cpp (function ??0PacketLogger@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp

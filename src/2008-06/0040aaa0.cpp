// roc 2008-06 0040aaa0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040aaa0
//
// 0040aaa0  53                   push ebx
// 0040aaa1  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0040aaa7  56                   push esi
// 0040aaa8  8bf1                 mov esi, ecx
// 0040aaaa  8b4610               mov eax, dword ptr [esi + 0x10]
// 0040aaad  57                   push edi
// 0040aaae  85c0                 test eax, eax
// 0040aab0  7509                 jne 0x40aabb
// 0040aab2  ffd3                 call ebx
// 0040aab4  8b4610               mov eax, dword ptr [esi + 0x10]
// 0040aab7  85c0                 test eax, eax
// 0040aab9  7404                 je 0x40aabf
// 0040aabb  8b00                 mov eax, dword ptr [eax]
// 0040aabd  eb02                 jmp 0x40aac1
// 0040aabf  33c0                 xor eax, eax
// 0040aac1  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0040aac4  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 0040aac7  7502                 jne 0x40aacb
// 0040aac9  ffd3                 call ebx
// 0040aacb  8b5614               mov edx, dword ptr [esi + 0x14]
// 0040aace  8b02                 mov eax, dword ptr [edx]
// 0040aad0  894614               mov dword ptr [esi + 0x14], eax
// 0040aad3  8b06                 mov eax, dword ptr [esi]
// 0040aad5  85c0                 test eax, eax
// 0040aad7  7508                 jne 0x40aae1
// 0040aad9  ffd3                 call ebx
// 0040aadb  8b06                 mov eax, dword ptr [esi]
// 0040aadd  85c0                 test eax, eax
// 0040aadf  7404                 je 0x40aae5
// 0040aae1  8b00                 mov eax, dword ptr [eax]
// 0040aae3  eb02                 jmp 0x40aae7
// 0040aae5  33c0                 xor eax, eax
// 0040aae7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040aaea  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 0040aaed  7502                 jne 0x40aaf1
// 0040aaef  ffd3                 call ebx
// 0040aaf1  8b4604               mov eax, dword ptr [esi + 4]
// 0040aaf4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0040aaf7  8b782c               mov edi, dword ptr [eax + 0x2c]
// 0040aafa  83c018               add eax, 0x18
// 0040aafd  8b00                 mov eax, dword ptr [eax]
// 0040aaff  85c9                 test ecx, ecx
// 0040ab01  7404                 je 0x40ab07
// 0040ab03  3bc8                 cmp ecx, eax
// 0040ab05  7402                 je 0x40ab09
// 0040ab07  ffd3                 call ebx
// 0040ab09  397e14               cmp dword ptr [esi + 0x14], edi
// 0040ab0c  7511                 jne 0x40ab1f
// 0040ab0e  8bce                 mov ecx, esi
// 0040ab10  e84bf4ffff           call 0x409f60
// 0040ab15  5f                   pop edi
// 0040ab16  8bce                 mov ecx, esi
// 0040ab18  5e                   pop esi
// 0040ab19  5b                   pop ebx
// 0040ab1a  e9c1fdffff           jmp 0x40a8e0
// 0040ab1f  5f                   pop edi
// 0040ab20  5e                   pop esi
// 0040ab21  5b                   pop ebx
// 0040ab22  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?increment@named_slot_map_iterator@detail@signals@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp

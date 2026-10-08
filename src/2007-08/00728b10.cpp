// roc 2007-08 00728b10  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728b10
//
// 00728b10  53                   push ebx
// 00728b11  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 00728b17  56                   push esi
// 00728b18  8bf1                 mov esi, ecx
// 00728b1a  8b06                 mov eax, dword ptr [esi]
// 00728b1c  85c0                 test eax, eax
// 00728b1e  57                   push edi
// 00728b1f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00728b23  7404                 je 0x728b29
// 00728b25  3b07                 cmp eax, dword ptr [edi]
// 00728b27  7402                 je 0x728b2b
// 00728b29  ffd3                 call ebx
// 00728b2b  8b4604               mov eax, dword ptr [esi + 4]
// 00728b2e  3b4704               cmp eax, dword ptr [edi + 4]
// 00728b31  7536                 jne 0x728b69
// 00728b33  8b06                 mov eax, dword ptr [esi]
// 00728b35  85c0                 test eax, eax
// 00728b37  7405                 je 0x728b3e
// 00728b39  3b4608               cmp eax, dword ptr [esi + 8]
// 00728b3c  7402                 je 0x728b40
// 00728b3e  ffd3                 call ebx
// 00728b40  8b4e04               mov ecx, dword ptr [esi + 4]
// 00728b43  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 00728b46  7416                 je 0x728b5e
// 00728b48  8b4610               mov eax, dword ptr [esi + 0x10]
// 00728b4b  85c0                 test eax, eax
// 00728b4d  7405                 je 0x728b54
// 00728b4f  3b4710               cmp eax, dword ptr [edi + 0x10]
// 00728b52  7402                 je 0x728b56
// 00728b54  ffd3                 call ebx
// 00728b56  8b5614               mov edx, dword ptr [esi + 0x14]
// 00728b59  3b5714               cmp edx, dword ptr [edi + 0x14]
// 00728b5c  750b                 jne 0x728b69
// 00728b5e  5f                   pop edi
// 00728b5f  5e                   pop esi
// 00728b60  b801000000           mov eax, 1
// 00728b65  5b                   pop ebx
// 00728b66  c20400               ret 4
// 00728b69  5f                   pop edi
// 00728b6a  5e                   pop esi
// 00728b6b  33c0                 xor eax, eax
// 00728b6d  5b                   pop ebx
// 00728b6e  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?equal@named_slot_map_iterator@detail@signals@boost@@QBE_NABV1234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

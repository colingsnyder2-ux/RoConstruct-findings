// roc 2008-06 0040a8e0  unit: VAuthoringSettings::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a8e0
//
// 0040a8e0  56                   push esi
// 0040a8e1  57                   push edi
// 0040a8e2  8b3d90288000         mov edi, dword ptr [0x802890]
// 0040a8e8  8bf1                 mov esi, ecx
// 0040a8ea  8d9b00000000         lea ebx, [ebx]
// 0040a8f0  8b06                 mov eax, dword ptr [esi]
// 0040a8f2  85c0                 test eax, eax
// 0040a8f4  7405                 je 0x40a8fb
// 0040a8f6  3b4608               cmp eax, dword ptr [esi + 8]
// 0040a8f9  7402                 je 0x40a8fd
// 0040a8fb  ffd7                 call edi
// 0040a8fd  8b4604               mov eax, dword ptr [esi + 4]
// 0040a900  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0040a903  7430                 je 0x40a935
// 0040a905  8b06                 mov eax, dword ptr [esi]
// 0040a907  85c0                 test eax, eax
// 0040a909  7508                 jne 0x40a913
// 0040a90b  ffd7                 call edi
// 0040a90d  8b06                 mov eax, dword ptr [esi]
// 0040a90f  85c0                 test eax, eax
// 0040a911  7404                 je 0x40a917
// 0040a913  8b00                 mov eax, dword ptr [eax]
// 0040a915  eb02                 jmp 0x40a919
// 0040a917  33c0                 xor eax, eax
// 0040a919  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040a91c  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 0040a91f  7502                 jne 0x40a923
// 0040a921  ffd7                 call edi
// 0040a923  8b5604               mov edx, dword ptr [esi + 4]
// 0040a926  837a3000             cmp dword ptr [edx + 0x30], 0
// 0040a92a  7509                 jne 0x40a935
// 0040a92c  8bce                 mov ecx, esi
// 0040a92e  e82df6ffff           call 0x409f60
// 0040a933  ebbb                 jmp 0x40a8f0
// 0040a935  8b06                 mov eax, dword ptr [esi]
// 0040a937  85c0                 test eax, eax
// 0040a939  7405                 je 0x40a940
// 0040a93b  3b4608               cmp eax, dword ptr [esi + 8]
// 0040a93e  7402                 je 0x40a942
// 0040a940  ffd7                 call edi
// 0040a942  8b4604               mov eax, dword ptr [esi + 4]
// 0040a945  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0040a948  7435                 je 0x40a97f
// 0040a94a  8b06                 mov eax, dword ptr [esi]
// 0040a94c  85c0                 test eax, eax
// 0040a94e  7508                 jne 0x40a958
// 0040a950  ffd7                 call edi
// 0040a952  8b06                 mov eax, dword ptr [esi]
// 0040a954  85c0                 test eax, eax
// 0040a956  7404                 je 0x40a95c
// 0040a958  8b00                 mov eax, dword ptr [eax]
// 0040a95a  eb02                 jmp 0x40a95e
// 0040a95c  33c0                 xor eax, eax
// 0040a95e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040a961  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 0040a964  7502                 jne 0x40a968
// 0040a966  ffd7                 call edi
// 0040a968  8b4604               mov eax, dword ptr [esi + 4]
// 0040a96b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0040a96e  8b0a                 mov ecx, dword ptr [edx]
// 0040a970  83c018               add eax, 0x18
// 0040a973  8b00                 mov eax, dword ptr [eax]
// 0040a975  894610               mov dword ptr [esi + 0x10], eax
// 0040a978  894e14               mov dword ptr [esi + 0x14], ecx
// 0040a97b  c6461801             mov byte ptr [esi + 0x18], 1
// 0040a97f  5f                   pop edi
// 0040a980  5e                   pop esi
// 0040a981  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?init_next_group@named_slot_map_iterator@detail@signals@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp

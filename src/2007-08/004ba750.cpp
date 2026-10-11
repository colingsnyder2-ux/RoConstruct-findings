// roc 2007-08 004ba750  unit: RakPeer  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba750
//
// 004ba750  53                   push ebx
// 004ba751  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004ba755  56                   push esi
// 004ba756  57                   push edi
// 004ba757  8bf9                 mov edi, ecx
// 004ba759  8b97ac020000         mov edx, dword ptr [edi + 0x2ac]
// 004ba75f  8d8fa8020000         lea ecx, [edi + 0x2a8]
// 004ba765  33c0                 xor eax, eax
// 004ba767  85d2                 test edx, edx
// 004ba769  761a                 jbe 0x4ba785
// 004ba76b  8b31                 mov esi, dword ptr [ecx]
// 004ba76d  8d4900               lea ecx, [ecx]
// 004ba770  391e                 cmp dword ptr [esi], ebx
// 004ba772  740c                 je 0x4ba780
// 004ba774  83c001               add eax, 1
// 004ba777  83c604               add esi, 4
// 004ba77a  3bc2                 cmp eax, edx
// 004ba77c  72f2                 jb 0x4ba770
// 004ba77e  eb05                 jmp 0x4ba785
// 004ba780  83f8ff               cmp eax, -1
// 004ba783  7510                 jne 0x4ba795
// 004ba785  53                   push ebx
// 004ba786  e855ebffff           call 0x4b92e0
// 004ba78b  8b03                 mov eax, dword ptr [ebx]
// 004ba78d  8b5004               mov edx, dword ptr [eax + 4]
// 004ba790  57                   push edi
// 004ba791  8bcb                 mov ecx, ebx
// 004ba793  ffd2                 call edx
// 004ba795  5f                   pop edi
// 004ba796  5e                   pop esi
// 004ba797  5b                   pop ebx
// 004ba798  c20400               ret 4
// library openrbx-raknet/RakPeer.cpp (function ?AttachPlugin@RakPeer@@UAEXPAVPluginInterface@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp

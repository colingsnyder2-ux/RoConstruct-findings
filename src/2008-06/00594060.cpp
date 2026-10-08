// roc 2008-06 00594060  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594060
//
// 00594060  6aff                 push -1
// 00594062  68d8dd7c00           push 0x7cddd8
// 00594067  64a100000000         mov eax, dword ptr fs:[0]
// 0059406d  50                   push eax
// 0059406e  64892500000000       mov dword ptr fs:[0], esp
// 00594075  83ec08               sub esp, 8
// 00594078  56                   push esi
// 00594079  8bf1                 mov esi, ecx
// 0059407b  57                   push edi
// 0059407c  8b7e04               mov edi, dword ptr [esi + 4]
// 0059407f  8bcf                 mov ecx, edi
// 00594081  897c2408             mov dword ptr [esp + 8], edi
// 00594085  e8560c0000           call 0x594ce0
// 0059408a  c644240c01           mov byte ptr [esp + 0xc], 1
// 0059408f  33c9                 xor ecx, ecx
// 00594091  894c2418             mov dword ptr [esp + 0x18], ecx
// 00594095  394e0c               cmp dword ptr [esi + 0xc], ecx
// 00594098  742f                 je 0x5940c9
// 0059409a  8b4614               mov eax, dword ptr [esi + 0x14]
// 0059409d  3bc1                 cmp eax, ecx
// 0059409f  7406                 je 0x5940a7
// 005940a1  8b5610               mov edx, dword ptr [esi + 0x10]
// 005940a4  895010               mov dword ptr [eax + 0x10], edx
// 005940a7  8b4610               mov eax, dword ptr [esi + 0x10]
// 005940aa  3bc1                 cmp eax, ecx
// 005940ac  7406                 je 0x5940b4
// 005940ae  8b5614               mov edx, dword ptr [esi + 0x14]
// 005940b1  895014               mov dword ptr [eax + 0x14], edx
// 005940b4  8b460c               mov eax, dword ptr [esi + 0xc]
// 005940b7  3930                 cmp dword ptr [eax], esi
// 005940b9  7505                 jne 0x5940c0
// 005940bb  8b5614               mov edx, dword ptr [esi + 0x14]
// 005940be  8910                 mov dword ptr [eax], edx
// 005940c0  894e14               mov dword ptr [esi + 0x14], ecx
// 005940c3  894e10               mov dword ptr [esi + 0x10], ecx
// 005940c6  894e0c               mov dword ptr [esi + 0xc], ecx
// 005940c9  8b06                 mov eax, dword ptr [esi]
// 005940cb  8b10                 mov edx, dword ptr [eax]
// 005940cd  8bce                 mov ecx, esi
// 005940cf  ffd2                 call edx
// 005940d1  8bcf                 mov ecx, edi
// 005940d3  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005940db  e8200c0000           call 0x594d00
// 005940e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005940e4  5f                   pop edi
// 005940e5  5e                   pop esi
// 005940e6  64890d00000000       mov dword ptr fs:[0], ecx
// 005940ed  83c414               add esp, 0x14
// 005940f0  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?reset@ThreadRef@Lua@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

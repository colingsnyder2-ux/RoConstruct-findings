// roc 2012-06 005bd3b0  unit: RakNet::RakPeer  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bd3b0
//
// 005bd3b0  6aff                 push -1
// 005bd3b2  68a02aab00           push 0xab2aa0
// 005bd3b7  64a100000000         mov eax, dword ptr fs:[0]
// 005bd3bd  50                   push eax
// 005bd3be  64892500000000       mov dword ptr fs:[0], esp
// 005bd3c5  83ec18               sub esp, 0x18
// 005bd3c8  56                   push esi
// 005bd3c9  33f6                 xor esi, esi
// 005bd3cb  57                   push edi
// 005bd3cc  89742410             mov dword ptr [esp + 0x10], esi
// 005bd3d0  89742408             mov dword ptr [esp + 8], esi
// 005bd3d4  8974240c             mov dword ptr [esp + 0xc], esi
// 005bd3d8  89742428             mov dword ptr [esp + 0x28], esi
// 005bd3dc  8974241c             mov dword ptr [esp + 0x1c], esi
// 005bd3e0  89742414             mov dword ptr [esp + 0x14], esi
// 005bd3e4  89742418             mov dword ptr [esp + 0x18], esi
// 005bd3e8  8b01                 mov eax, dword ptr [ecx]
// 005bd3ea  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 005bd3f0  8d542414             lea edx, [esp + 0x14]
// 005bd3f4  52                   push edx
// 005bd3f5  8d54240c             lea edx, [esp + 0xc]
// 005bd3f9  52                   push edx
// 005bd3fa  c644243001           mov byte ptr [esp + 0x30], 1
// 005bd3ff  ffd0                 call eax
// 005bd401  0fb77c240c           movzx edi, word ptr [esp + 0xc]
// 005bd406  3974241c             cmp dword ptr [esp + 0x1c], esi
// 005bd40a  760d                 jbe 0x5bd419
// 005bd40c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bd410  51                   push ecx
// 005bd411  e8a44f3c00           call 0x9823ba
// 005bd416  83c404               add esp, 4
// 005bd419  39742410             cmp dword ptr [esp + 0x10], esi
// 005bd41d  760d                 jbe 0x5bd42c
// 005bd41f  8b542408             mov edx, dword ptr [esp + 8]
// 005bd423  52                   push edx
// 005bd424  e8914f3c00           call 0x9823ba
// 005bd429  83c404               add esp, 4
// 005bd42c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bd430  668bc7               mov ax, di
// 005bd433  5f                   pop edi
// 005bd434  5e                   pop esi
// 005bd435  64890d00000000       mov dword ptr fs:[0], ecx
// 005bd43c  83c424               add esp, 0x24
// 005bd43f  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?NumberOfConnections@RakPeer@RakNet@@UBEGXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp

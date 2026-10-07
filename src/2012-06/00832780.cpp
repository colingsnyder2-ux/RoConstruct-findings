// roc 2012-06 00832780  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00832780
//
// 00832780  8b442408             mov eax, dword ptr [esp + 8]
// 00832784  56                   push esi
// 00832785  8b742408             mov esi, dword ptr [esp + 8]
// 00832789  57                   push edi
// 0083278a  8bce                 mov ecx, esi
// 0083278c  bf01000000           mov edi, 1
// 00832791  e8aaf1ffff           call 0x831940
// 00832796  8b4808               mov ecx, dword ptr [eax + 8]
// 00832799  83e906               sub ecx, 6
// 0083279c  7436                 je 0x8327d4
// 0083279e  2bcf                 sub ecx, edi
// 008327a0  7425                 je 0x8327c7
// 008327a2  2bcf                 sub ecx, edi
// 008327a4  740b                 je 0x8327b1
// 008327a6  33ff                 xor edi, edi
// 008327a8  834608f0             add dword ptr [esi + 8], -0x10
// 008327ac  8bc7                 mov eax, edi
// 008327ae  5f                   pop edi
// 008327af  5e                   pop esi
// 008327b0  c3                   ret 
// 008327b1  8b08                 mov ecx, dword ptr [eax]
// 008327b3  8b5608               mov edx, dword ptr [esi + 8]
// 008327b6  8b52f0               mov edx, dword ptr [edx - 0x10]
// 008327b9  83c148               add ecx, 0x48
// 008327bc  8911                 mov dword ptr [ecx], edx
// 008327be  c7410805000000       mov dword ptr [ecx + 8], 5
// 008327c5  eb18                 jmp 0x8327df
// 008327c7  8b4e08               mov ecx, dword ptr [esi + 8]
// 008327ca  8b10                 mov edx, dword ptr [eax]
// 008327cc  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 008327cf  894a0c               mov dword ptr [edx + 0xc], ecx
// 008327d2  eb0b                 jmp 0x8327df
// 008327d4  8b5608               mov edx, dword ptr [esi + 8]
// 008327d7  8b08                 mov ecx, dword ptr [eax]
// 008327d9  8b52f0               mov edx, dword ptr [edx - 0x10]
// 008327dc  89510c               mov dword ptr [ecx + 0xc], edx
// 008327df  8b4e08               mov ecx, dword ptr [esi + 8]
// 008327e2  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 008327e5  f6410503             test byte ptr [ecx + 5], 3
// 008327e9  7413                 je 0x8327fe
// 008327eb  8b00                 mov eax, dword ptr [eax]
// 008327ed  f6400504             test byte ptr [eax + 5], 4
// 008327f1  740b                 je 0x8327fe
// 008327f3  51                   push ecx
// 008327f4  50                   push eax
// 008327f5  56                   push esi
// 008327f6  e8a50b1000           call 0x9333a0
// 008327fb  83c40c               add esp, 0xc
// 008327fe  834608f0             add dword ptr [esi + 8], -0x10
// 00832802  8bc7                 mov eax, edi
// 00832804  5f                   pop edi
// 00832805  5e                   pop esi
// 00832806  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_setfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c

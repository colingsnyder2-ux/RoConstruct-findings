// from server: 100% by auto
// roc 2007-08 004bf930  unit: RakPeer  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bf930
//
// 004bf930  6aff                 push -1
// 004bf932  681bb97400           push 0x74b91b
// 004bf937  64a100000000         mov eax, dword ptr fs:[0]
// 004bf93d  50                   push eax
// 004bf93e  81ec20010000         sub esp, 0x120
// 004bf944  a188518b00           mov eax, dword ptr [0x8b5188]
// 004bf949  33c4                 xor eax, esp
// 004bf94b  8984241c010000       mov dword ptr [esp + 0x11c], eax
// 004bf952  56                   push esi
// 004bf953  a188518b00           mov eax, dword ptr [0x8b5188]
// 004bf958  33c4                 xor eax, esp
// 004bf95a  50                   push eax
// 004bf95b  8d842428010000       lea eax, [esp + 0x128]
// 004bf962  64a300000000         mov dword ptr fs:[0], eax
// 004bf968  8b842438010000       mov eax, dword ptr [esp + 0x138]
// 004bf96f  6a00                 push 0
// 004bf971  6a04                 push 4
// 004bf973  8bf1                 mov esi, ecx
// 004bf975  50                   push eax
// 004bf976  8d4c241c             lea ecx, [esp + 0x1c]
// 004bf97a  e831fffdff           call 0x49f8b0
// 004bf97f  6a01                 push 1
// 004bf981  6a20                 push 0x20
// 004bf983  8d442410             lea eax, [esp + 0x10]
// 004bf987  50                   push eax
// 004bf988  8d4c241c             lea ecx, [esp + 0x1c]
// 004bf98c  c784243c01000000000000 mov dword ptr [esp + 0x13c], 0
// 004bf997  e80400feff           call 0x49f9a0
// 004bf99c  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 004bf9a3  8b94243c010000       mov edx, dword ptr [esp + 0x13c]
// 004bf9aa  51                   push ecx
// 004bf9ab  52                   push edx
// 004bf9ac  8bce                 mov ecx, esi
// 004bf9ae  e8bdd2ffff           call 0x4bcc70
// 004bf9b3  29442408             sub dword ptr [esp + 8], eax
// 004bf9b7  6a00                 push 0
// 004bf9b9  8d4c2414             lea ecx, [esp + 0x14]
// 004bf9bd  e84e02feff           call 0x49fc10
// 004bf9c2  8b442408             mov eax, dword ptr [esp + 8]
// 004bf9c6  6a01                 push 1
// 004bf9c8  6a20                 push 0x20
// 004bf9ca  8d4c2414             lea ecx, [esp + 0x14]
// 004bf9ce  51                   push ecx
// 004bf9cf  8d4c241c             lea ecx, [esp + 0x1c]
// 004bf9d3  89442418             mov dword ptr [esp + 0x18], eax
// 004bf9d7  e8b403feff           call 0x49fd90
// 004bf9dc  8d4c2410             lea ecx, [esp + 0x10]
// 004bf9e0  c7842430010000ffffffff mov dword ptr [esp + 0x130], 0xffffffff
// 004bf9eb  e840fffdff           call 0x49f930
// 004bf9f0  8b8c2428010000       mov ecx, dword ptr [esp + 0x128]
// 004bf9f7  64890d00000000       mov dword ptr fs:[0], ecx
// 004bf9fe  59                   pop ecx
// 004bf9ff  5e                   pop esi
// 004bfa00  8b8c241c010000       mov ecx, dword ptr [esp + 0x11c]
// 004bfa07  33cc                 xor ecx, esp
// 004bfa09  e810101700           call 0x630a1e
// 004bfa0e  81c42c010000         add esp, 0x12c
// 004bfa14  c20c00               ret 0xc

// from server: 45% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
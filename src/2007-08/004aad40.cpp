// roc 2007-08 004aad40  unit: RBX::Network::Peer  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aad40
//
// 004aad40  8b5104               mov edx, dword ptr [ecx + 4]
// 004aad43  8b4204               mov eax, dword ptr [edx + 4]
// 004aad46  83ec10               sub esp, 0x10
// 004aad49  80782500             cmp byte ptr [eax + 0x25], 0
// 004aad4d  56                   push esi
// 004aad4e  57                   push edi
// 004aad4f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004aad53  7517                 jne 0x4aad6c
// 004aad55  8b7704               mov esi, dword ptr [edi + 4]
// 004aad58  397010               cmp dword ptr [eax + 0x10], esi
// 004aad5b  7305                 jae 0x4aad62
// 004aad5d  8b4008               mov eax, dword ptr [eax + 8]
// 004aad60  eb04                 jmp 0x4aad66
// 004aad62  8bd0                 mov edx, eax
// 004aad64  8b00                 mov eax, dword ptr [eax]
// 004aad66  80782500             cmp byte ptr [eax + 0x25], 0
// 004aad6a  74ec                 je 0x4aad58
// 004aad6c  8b4104               mov eax, dword ptr [ecx + 4]
// 004aad6f  3bd0                 cmp edx, eax
// 004aad71  8954240c             mov dword ptr [esp + 0xc], edx
// 004aad75  894c2408             mov dword ptr [esp + 8], ecx
// 004aad79  740e                 je 0x4aad89
// 004aad7b  8b7704               mov esi, dword ptr [edi + 4]
// 004aad7e  3b7210               cmp esi, dword ptr [edx + 0x10]
// 004aad81  7206                 jb 0x4aad89
// 004aad83  8d4c2408             lea ecx, [esp + 8]
// 004aad87  eb0c                 jmp 0x4aad95
// 004aad89  894c2410             mov dword ptr [esp + 0x10], ecx
// 004aad8d  89442414             mov dword ptr [esp + 0x14], eax
// 004aad91  8d4c2410             lea ecx, [esp + 0x10]
// 004aad95  8b11                 mov edx, dword ptr [ecx]
// 004aad97  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004aad9b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004aad9e  5f                   pop edi
// 004aad9f  8910                 mov dword ptr [eax], edx
// 004aada1  894804               mov dword ptr [eax + 4], ecx
// 004aada4  5e                   pop esi
// 004aada5  83c410               add esp, 0x10
// 004aada8  c20800               ret 8
// library rbxgs-net/Replicator.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@U?$less@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@V?$allocator@U?$pair@$$CBV?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@@std@@@6@$0A@@std@@@std@@QAE?AViterator@12@ABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp

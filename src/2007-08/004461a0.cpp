// roc 2007-08 004461a0  unit: VCRenderSettings::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004461a0
//
// 004461a0  83ec08               sub esp, 8
// 004461a3  56                   push esi
// 004461a4  8bf1                 mov esi, ecx
// 004461a6  8b5604               mov edx, dword ptr [esi + 4]
// 004461a9  85d2                 test edx, edx
// 004461ab  57                   push edi
// 004461ac  7504                 jne 0x4461b2
// 004461ae  33c9                 xor ecx, ecx
// 004461b0  eb08                 jmp 0x4461ba
// 004461b2  8b4e08               mov ecx, dword ptr [esi + 8]
// 004461b5  2bca                 sub ecx, edx
// 004461b7  c1f902               sar ecx, 2
// 004461ba  85d2                 test edx, edx
// 004461bc  743d                 je 0x4461fb
// 004461be  8b460c               mov eax, dword ptr [esi + 0xc]
// 004461c1  2bc2                 sub eax, edx
// 004461c3  c1f802               sar eax, 2
// 004461c6  3bc8                 cmp ecx, eax
// 004461c8  7331                 jae 0x4461fb
// 004461ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004461ce  8b542414             mov edx, dword ptr [esp + 0x14]
// 004461d2  8b7e08               mov edi, dword ptr [esi + 8]
// 004461d5  c644240800           mov byte ptr [esp + 8], 0
// 004461da  8b442408             mov eax, dword ptr [esp + 8]
// 004461de  50                   push eax
// 004461df  51                   push ecx
// 004461e0  56                   push esi
// 004461e1  52                   push edx
// 004461e2  6a01                 push 1
// 004461e4  57                   push edi
// 004461e5  e8e6381300           call 0x579ad0
// 004461ea  83c418               add esp, 0x18
// 004461ed  83c704               add edi, 4
// 004461f0  897e08               mov dword ptr [esi + 8], edi
// 004461f3  5f                   pop edi
// 004461f4  5e                   pop esi
// 004461f5  83c408               add esp, 8
// 004461f8  c20400               ret 4
// 004461fb  8b7e08               mov edi, dword ptr [esi + 8]
// 004461fe  3bd7                 cmp edx, edi
// 00446200  7606                 jbe 0x446208
// 00446202  ff15d8e67700         call dword ptr [0x77e6d8]
// 00446208  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044620c  50                   push eax
// 0044620d  57                   push edi
// 0044620e  56                   push esi
// 0044620f  8d4c2414             lea ecx, [esp + 0x14]
// 00446213  51                   push ecx
// 00446214  8bce                 mov ecx, esi
// 00446216  e8f5feffff           call 0x446110
// 0044621b  5f                   pop edi
// 0044621c  5e                   pop esi
// 0044621d  83c408               add esp, 8
// 00446220  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?push_back@?$vector@W4CameraType@Camera@RBX@@V?$allocator@W4CameraType@Camera@RBX@@@std@@@std@@QAEXABW4CameraType@Camera@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

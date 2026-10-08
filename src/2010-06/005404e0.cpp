// roc 2010-06 005404e0  unit: RBX::AggregatingSceneManager  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005404e0
//
// 005404e0  55                   push ebp
// 005404e1  8bec                 mov ebp, esp
// 005404e3  6aff                 push -1
// 005404e5  6801fa9800           push 0x98fa01
// 005404ea  64a100000000         mov eax, dword ptr fs:[0]
// 005404f0  50                   push eax
// 005404f1  64892500000000       mov dword ptr fs:[0], esp
// 005404f8  83ec0c               sub esp, 0xc
// 005404fb  53                   push ebx
// 005404fc  56                   push esi
// 005404fd  57                   push edi
// 005404fe  8965f0               mov dword ptr [ebp - 0x10], esp
// 00540501  6a18                 push 0x18
// 00540503  e898742600           call 0x7a79a0
// 00540508  8bf0                 mov esi, eax
// 0054050a  83c404               add esp, 4
// 0054050d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00540510  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00540517  8975e8               mov dword ptr [ebp - 0x18], esi
// 0054051a  c645fc01             mov byte ptr [ebp - 4], 1
// 0054051e  85f6                 test esi, esi
// 00540520  7427                 je 0x540549
// 00540522  8b4508               mov eax, dword ptr [ebp + 8]
// 00540525  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00540528  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0054052b  8906                 mov dword ptr [esi], eax
// 0054052d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00540530  894e04               mov dword ptr [esi + 4], ecx
// 00540533  50                   push eax
// 00540534  8d4e0c               lea ecx, [esi + 0xc]
// 00540537  895608               mov dword ptr [esi + 8], edx
// 0054053a  e851faffff           call 0x53ff90
// 0054053f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 00540542  884e14               mov byte ptr [esi + 0x14], cl
// 00540545  c6461500             mov byte ptr [esi + 0x15], 0
// 00540549  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054054c  5f                   pop edi
// 0054054d  8bc6                 mov eax, esi
// 0054054f  5e                   pop esi
// 00540550  64890d00000000       mov dword ptr fs:[0], ecx
// 00540557  5b                   pop ebx
// 00540558  8be5                 mov esp, ebp
// 0054055a  5d                   pop ebp
// 0054055b  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@2@PAU342@00ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

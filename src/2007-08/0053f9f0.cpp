// roc 2007-08 0053f9f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053f9f0
//
// 0053f9f0  64a100000000         mov eax, dword ptr fs:[0]
// 0053f9f6  6aff                 push -1
// 0053f9f8  68fb4f7500           push 0x754ffb
// 0053f9fd  50                   push eax
// 0053f9fe  64892500000000       mov dword ptr fs:[0], esp
// 0053fa05  83ec08               sub esp, 8
// 0053fa08  53                   push ebx
// 0053fa09  56                   push esi
// 0053fa0a  8bf1                 mov esi, ecx
// 0053fa0c  33db                 xor ebx, ebx
// 0053fa0e  389ee4000000         cmp byte ptr [esi + 0xe4], bl
// 0053fa14  57                   push edi
// 0053fa15  0f84ac000000         je 0x53fac7
// 0053fa1b  e810d1feff           call 0x52cb30
// 0053fa20  8bf8                 mov edi, eax
// 0053fa22  8b06                 mov eax, dword ptr [esi]
// 0053fa24  8b5004               mov edx, dword ptr [eax + 4]
// 0053fa27  8bce                 mov ecx, esi
// 0053fa29  ffd2                 call edx
// 0053fa2b  3bc7                 cmp eax, edi
// 0053fa2d  0f8494000000         je 0x53fac7
// 0053fa33  6a20                 push 0x20
// 0053fa35  e8bc040f00           call 0x62fef6
// 0053fa3a  83c404               add esp, 4
// 0053fa3d  3bc3                 cmp eax, ebx
// 0053fa3f  741e                 je 0x53fa5f
// 0053fa41  8b0dbc228c00         mov ecx, dword ptr [0x8c22bc]
// 0053fa47  8918                 mov dword ptr [eax], ebx
// 0053fa49  895804               mov dword ptr [eax + 4], ebx
// 0053fa4c  895808               mov dword ptr [eax + 8], ebx
// 0053fa4f  89480c               mov dword ptr [eax + 0xc], ecx
// 0053fa52  895810               mov dword ptr [eax + 0x10], ebx
// 0053fa55  895818               mov dword ptr [eax + 0x18], ebx
// 0053fa58  89581c               mov dword ptr [eax + 0x1c], ebx
// 0053fa5b  8bf8                 mov edi, eax
// 0053fa5d  eb02                 jmp 0x53fa61
// 0053fa5f  33ff                 xor edi, edi
// 0053fa61  8b06                 mov eax, dword ptr [esi]
// 0053fa63  8b5004               mov edx, dword ptr [eax + 4]
// 0053fa66  8bce                 mov ecx, esi
// 0053fa68  ffd2                 call edx
// 0053fa6a  50                   push eax
// 0053fa6b  a1dc228c00           mov eax, dword ptr [0x8c22dc]
// 0053fa70  50                   push eax
// 0053fa71  8bcf                 mov ecx, edi
// 0053fa73  e8b8f2ffff           call 0x53ed30
// 0053fa78  83ec08               sub esp, 8
// 0053fa7b  8bcc                 mov ecx, esp
// 0053fa7d  89642414             mov dword ptr [esp + 0x14], esp
// 0053fa81  56                   push esi
// 0053fa82  e8a9dc0400           call 0x58d730
// 0053fa87  8b0d6c228c00         mov ecx, dword ptr [0x8c226c]
// 0053fa8d  51                   push ecx
// 0053fa8e  8bcf                 mov ecx, edi
// 0053fa90  e8bbfbffff           call 0x53f650
// 0053fa95  8b1568228c00         mov edx, dword ptr [0x8c2268]
// 0053fa9b  52                   push edx
// 0053fa9c  8bcf                 mov ecx, edi
// 0053fa9e  e84d28f5ff           call 0x4922f0
// 0053faa3  50                   push eax
// 0053faa4  8bce                 mov ecx, esi
// 0053faa6  e885feffff           call 0x53f930
// 0053faab  57                   push edi
// 0053faac  8bce                 mov ecx, esi
// 0053faae  e86decffff           call 0x53e720
// 0053fab3  8bc7                 mov eax, edi
// 0053fab5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053fab9  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fac0  5f                   pop edi
// 0053fac1  5e                   pop esi
// 0053fac2  5b                   pop ebx
// 0053fac3  83c414               add esp, 0x14
// 0053fac6  c3                   ret 
// 0053fac7  6a20                 push 0x20
// 0053fac9  e828040f00           call 0x62fef6
// 0053face  8bf8                 mov edi, eax
// 0053fad0  83c404               add esp, 4
// 0053fad3  897c240c             mov dword ptr [esp + 0xc], edi
// 0053fad7  3bfb                 cmp edi, ebx
// 0053fad9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053fadd  742e                 je 0x53fb0d
// 0053fadf  83ec08               sub esp, 8
// 0053fae2  8bcc                 mov ecx, esp
// 0053fae4  89642418             mov dword ptr [esp + 0x18], esp
// 0053fae8  56                   push esi
// 0053fae9  e842dc0400           call 0x58d730
// 0053faee  a1b8228c00           mov eax, dword ptr [0x8c22b8]
// 0053faf3  50                   push eax
// 0053faf4  8bcf                 mov ecx, edi
// 0053faf6  e885f1ffff           call 0x53ec80
// 0053fafb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053faff  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fb06  5f                   pop edi
// 0053fb07  5e                   pop esi
// 0053fb08  5b                   pop ebx
// 0053fb09  83c414               add esp, 0x14
// 0053fb0c  c3                   ret 
// 0053fb0d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053fb11  5f                   pop edi
// 0053fb12  5e                   pop esi
// 0053fb13  33c0                 xor eax, eax
// 0053fb15  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fb1c  5b                   pop ebx
// 0053fb1d  83c414               add esp, 0x14
// 0053fb20  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ?write@Instance@RBX@@UAEPAVXmlElement@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp

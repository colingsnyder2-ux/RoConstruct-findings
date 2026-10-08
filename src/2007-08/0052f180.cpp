// roc 2007-08 0052f180  unit: RBX::VRunService::?$FactoryProduct  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052f180
//
// 0052f180  6aff                 push -1
// 0052f182  6888af7500           push 0x75af88
// 0052f187  64a100000000         mov eax, dword ptr fs:[0]
// 0052f18d  50                   push eax
// 0052f18e  64892500000000       mov dword ptr fs:[0], esp
// 0052f195  83ec24               sub esp, 0x24
// 0052f198  53                   push ebx
// 0052f199  55                   push ebp
// 0052f19a  56                   push esi
// 0052f19b  57                   push edi
// 0052f19c  8bf9                 mov edi, ecx
// 0052f19e  897c2410             mov dword ptr [esp + 0x10], edi
// 0052f1a2  e879faffff           call 0x52ec20
// 0052f1a7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0052f1ab  51                   push ecx
// 0052f1ac  50                   push eax
// 0052f1ad  8bcf                 mov ecx, edi
// 0052f1af  e85c120400           call 0x570410
// 0052f1b4  8b542448             mov edx, dword ptr [esp + 0x48]
// 0052f1b8  6aff                 push -1
// 0052f1ba  52                   push edx
// 0052f1bb  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0052f1c3  c7070c4c7a00         mov dword ptr [edi], 0x7a4c0c
// 0052f1c9  e872d7ffff           call 0x52c940
// 0052f1ce  83c408               add esp, 8
// 0052f1d1  89442424             mov dword ptr [esp + 0x24], eax
// 0052f1d5  e8d6e60300           call 0x56d8b0
// 0052f1da  8d4c242c             lea ecx, [esp + 0x2c]
// 0052f1de  89442428             mov dword ptr [esp + 0x28], eax
// 0052f1e2  e8d9e10300           call 0x56d3c0
// 0052f1e7  8b6f1c               mov ebp, dword ptr [edi + 0x1c]
// 0052f1ea  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0052f1ed  8d7718               lea esi, [edi + 0x18]
// 0052f1f0  8d442424             lea eax, [esp + 0x24]
// 0052f1f4  50                   push eax
// 0052f1f5  51                   push ecx
// 0052f1f6  55                   push ebp
// 0052f1f7  8bce                 mov ecx, esi
// 0052f1f9  c644244801           mov byte ptr [esp + 0x48], 1
// 0052f1fe  e83d60eeff           call 0x415240
// 0052f203  6a01                 push 1
// 0052f205  8bce                 mov ecx, esi
// 0052f207  8bd8                 mov ebx, eax
// 0052f209  e86254eeff           call 0x414670
// 0052f20e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0052f212  895d04               mov dword ptr [ebp + 4], ebx
// 0052f215  8b4304               mov eax, dword ptr [ebx + 4]
// 0052f218  6aff                 push -1
// 0052f21a  52                   push edx
// 0052f21b  8918                 mov dword ptr [eax], ebx
// 0052f21d  e81ed7ffff           call 0x52c940
// 0052f222  83c408               add esp, 8
// 0052f225  89442414             mov dword ptr [esp + 0x14], eax
// 0052f229  e882e60300           call 0x56d8b0
// 0052f22e  8d4c241c             lea ecx, [esp + 0x1c]
// 0052f232  89442418             mov dword ptr [esp + 0x18], eax
// 0052f236  e885e10300           call 0x56d3c0
// 0052f23b  8b5e04               mov ebx, dword ptr [esi + 4]
// 0052f23e  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0052f241  8d442414             lea eax, [esp + 0x14]
// 0052f245  50                   push eax
// 0052f246  51                   push ecx
// 0052f247  53                   push ebx
// 0052f248  8bce                 mov ecx, esi
// 0052f24a  c644244802           mov byte ptr [esp + 0x48], 2
// 0052f24f  e8ec5feeff           call 0x415240
// 0052f254  6a01                 push 1
// 0052f256  8bce                 mov ecx, esi
// 0052f258  8be8                 mov ebp, eax
// 0052f25a  e81154eeff           call 0x414670
// 0052f25f  896b04               mov dword ptr [ebx + 4], ebp
// 0052f262  8b4504               mov eax, dword ptr [ebp + 4]
// 0052f265  8928                 mov dword ptr [eax], ebp
// 0052f267  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052f26b  85c9                 test ecx, ecx
// 0052f26d  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0052f272  7408                 je 0x52f27c
// 0052f274  8b11                 mov edx, dword ptr [ecx]
// 0052f276  8b02                 mov eax, dword ptr [edx]
// 0052f278  6a01                 push 1
// 0052f27a  ffd0                 call eax
// 0052f27c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052f280  85c9                 test ecx, ecx
// 0052f282  c644243c00           mov byte ptr [esp + 0x3c], 0
// 0052f287  7408                 je 0x52f291
// 0052f289  8b11                 mov edx, dword ptr [ecx]
// 0052f28b  8b02                 mov eax, dword ptr [edx]
// 0052f28d  6a01                 push 1
// 0052f28f  ffd0                 call eax
// 0052f291  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052f295  8bc7                 mov eax, edi
// 0052f297  5f                   pop edi
// 0052f298  5e                   pop esi
// 0052f299  5d                   pop ebp
// 0052f29a  5b                   pop ebx
// 0052f29b  64890d00000000       mov dword ptr fs:[0], ecx
// 0052f2a2  83c430               add esp, 0x30
// 0052f2a5  c20c00               ret 0xc
// library rbxgs/v8datamodel\Explosion.cpp (function ??0?$SignalDesc@VExplosion@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp

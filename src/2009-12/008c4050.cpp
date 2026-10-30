// roc 2009-12 008c4050  unit: CXTPImageEditorPicture  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4050
//
// 008c4050  6aff                 push -1
// 008c4052  6840429600           push 0x964240
// 008c4057  64a100000000         mov eax, dword ptr fs:[0]
// 008c405d  50                   push eax
// 008c405e  83ec44               sub esp, 0x44
// 008c4061  53                   push ebx
// 008c4062  56                   push esi
// 008c4063  57                   push edi
// 008c4064  a10052b600           mov eax, dword ptr [0xb65200]
// 008c4069  33c4                 xor eax, esp
// 008c406b  50                   push eax
// 008c406c  8d442454             lea eax, [esp + 0x54]
// 008c4070  64a300000000         mov dword ptr fs:[0], eax
// 008c4076  8bf1                 mov esi, ecx
// 008c4078  8d4c2430             lea ecx, [esp + 0x30]
// 008c407c  e837260600           call 0x9266b8
// 008c4081  33db                 xor ebx, ebx
// 008c4083  8d4c2430             lea ecx, [esp + 0x30]
// 008c4087  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008c408b  e822260600           call 0x9266b2
// 008c4090  8d4c2430             lea ecx, [esp + 0x30]
// 008c4094  85c0                 test eax, eax
// 008c4096  0f848e010000         je 0x8c422a
// 008c409c  53                   push ebx
// 008c409d  6a02                 push 2
// 008c409f  e85006f3ff           call 0x7f46f4
// 008c40a4  8d4c2430             lea ecx, [esp + 0x30]
// 008c40a8  85c0                 test eax, eax
// 008c40aa  0f847a010000         je 0x8c422a
// 008c40b0  53                   push ebx
// 008c40b1  8d442428             lea eax, [esp + 0x28]
// 008c40b5  50                   push eax
// 008c40b6  6a02                 push 2
// 008c40b8  e85d270600           call 0x92681a
// 008c40bd  85c0                 test eax, eax
// 008c40bf  0f8461010000         je 0x8c4226
// 008c40c5  395c2428             cmp dword ptr [esp + 0x28], ebx
// 008c40c9  0f8457010000         je 0x8c4226
// 008c40cf  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008c40d3  c7442418148aa000     mov dword ptr [esp + 0x18], 0xa08a14
// 008c40db  895c2420             mov dword ptr [esp + 0x20], ebx
// 008c40df  8d4c2430             lea ecx, [esp + 0x30]
// 008c40e3  c644245c01           mov byte ptr [esp + 0x5c], 1
// 008c40e8  e8492c0600           call 0x926d36
// 008c40ed  8d4c2440             lea ecx, [esp + 0x40]
// 008c40f1  51                   push ecx
// 008c40f2  8d4c2434             lea ecx, [esp + 0x34]
// 008c40f6  e8352c0600           call 0x926d30
// 008c40fb  85c0                 test eax, eax
// 008c40fd  7466                 je 0x8c4165
// 008c40ff  8b3d80ca9800         mov edi, dword ptr [0x98ca80]
// 008c4105  eb09                 jmp 0x8c4110
// 008c4107  8da42400000000       lea esp, [esp]
// 008c410e  8bff                 mov edi, edi
// 008c4110  0fb7542440           movzx edx, word ptr [esp + 0x40]
// 008c4115  68fe000000           push 0xfe
// 008c411a  6820beb900           push 0xb9be20
// 008c411f  52                   push edx
// 008c4120  ffd7                 call edi
// 008c4122  85c0                 test eax, eax
// 008c4124  742d                 je 0x8c4153
// 008c4126  6820beb900           push 0xb9be20
// 008c412b  8d4c2414             lea ecx, [esp + 0x14]
// 008c412f  ff15b8de9800         call dword ptr [0x98deb8]
// 008c4135  53                   push ebx
// 008c4136  68f891a000           push 0xa091f8
// 008c413b  8d4c2418             lea ecx, [esp + 0x18]
// 008c413f  ff1500d89800         call dword ptr [0x98d800]
// 008c4145  8d4c2410             lea ecx, [esp + 0x10]
// 008c4149  85c0                 test eax, eax
// 008c414b  7f63                 jg 0x8c41b0
// 008c414d  ff15c0de9800         call dword ptr [0x98dec0]
// 008c4153  8d442440             lea eax, [esp + 0x40]
// 008c4157  50                   push eax
// 008c4158  8d4c2434             lea ecx, [esp + 0x34]
// 008c415c  e8cf2b0600           call 0x926d30
// 008c4161  85c0                 test eax, eax
// 008c4163  75ab                 jne 0x8c4110
// 008c4165  e846c3f4ff           call 0x8104b0
// 008c416a  0fb70db4adb900       movzx ecx, word ptr [0xb9adb4]
// 008c4171  53                   push ebx
// 008c4172  51                   push ecx
// 008c4173  8d4c2438             lea ecx, [esp + 0x38]
// 008c4177  e87805f3ff           call 0x7f46f4
// 008c417c  89442420             mov dword ptr [esp + 0x20], eax
// 008c4180  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c4184  52                   push edx
// 008c4185  8d4c241c             lea ecx, [esp + 0x1c]
// 008c4189  e89cfcf2ff           call 0x7f3e2a
// 008c418e  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c4191  6a0c                 push 0xc
// 008c4193  894678               mov dword ptr [esi + 0x78], eax
// 008c4196  e8c5f6f2ff           call 0x7f3860
// 008c419b  83c404               add esp, 4
// 008c419e  3bc3                 cmp eax, ebx
// 008c41a0  741e                 je 0x8c41c0
// 008c41a2  895804               mov dword ptr [eax + 4], ebx
// 008c41a5  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c41ab  895808               mov dword ptr [eax + 8], ebx
// 008c41ae  eb12                 jmp 0x8c41c2
// 008c41b0  ff15c0de9800         call dword ptr [0x98dec0]
// 008c41b6  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008c41be  ebc0                 jmp 0x8c4180
// 008c41c0  33c0                 xor eax, eax
// 008c41c2  89467c               mov dword ptr [esi + 0x7c], eax
// 008c41c5  e806b8f6ff           call 0x82f9d0
// 008c41ca  6a0f                 push 0xf
// 008c41cc  8bc8                 mov ecx, eax
// 008c41ce  e82daff6ff           call 0x82f100
// 008c41d3  53                   push ebx
// 008c41d4  68fffeff00           push 0xfffeff
// 008c41d9  50                   push eax
// 008c41da  83ec08               sub esp, 8
// 008c41dd  8bc4                 mov eax, esp
// 008c41df  8918                 mov dword ptr [eax], ebx
// 008c41e1  895804               mov dword ptr [eax + 4], ebx
// 008c41e4  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c41e7  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c41ea  89642428             mov dword ptr [esp + 0x28], esp
// 008c41ee  51                   push ecx
// 008c41ef  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008c41f2  52                   push edx
// 008c41f3  8d442434             lea eax, [esp + 0x34]
// 008c41f7  50                   push eax
// 008c41f8  51                   push ecx
// 008c41f9  e8a2d8ffff           call 0x8c1aa0
// 008c41fe  83c424               add esp, 0x24
// 008c4201  8d4c2418             lea ecx, [esp + 0x18]
// 008c4205  e864230600           call 0x92656e
// 008c420a  8bce                 mov ecx, esi
// 008c420c  e8bff9ffff           call 0x8c3bd0
// 008c4211  8d4c2418             lea ecx, [esp + 0x18]
// 008c4215  885c245c             mov byte ptr [esp + 0x5c], bl
// 008c4219  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008c4221  e80ab0b4ff           call 0x40f230
// 008c4226  8d4c2430             lea ecx, [esp + 0x30]
// 008c422a  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008c4232  e863240600           call 0x92669a
// 008c4237  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008c423b  64890d00000000       mov dword ptr fs:[0], ecx
// 008c4242  59                   pop ecx
// 008c4243  5f                   pop edi
// 008c4244  5e                   pop esi
// 008c4245  5b                   pop ebx
// 008c4246  83c450               add esp, 0x50
// 008c4249  c3                   ret 
// copied from an identical function in another client (function ?Paste@CXTPImageEditorPicture@@QAEXXZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp
// roc 2009-12 008e32a0  unit: CXTShadowWnd  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e32a0
//
// 008e32a0  6aff                 push -1
// 008e32a2  68a25e9600           push 0x965ea2
// 008e32a7  64a100000000         mov eax, dword ptr fs:[0]
// 008e32ad  50                   push eax
// 008e32ae  83ec2c               sub esp, 0x2c
// 008e32b1  56                   push esi
// 008e32b2  57                   push edi
// 008e32b3  a10052b600           mov eax, dword ptr [0xb65200]
// 008e32b8  33c4                 xor eax, esp
// 008e32ba  50                   push eax
// 008e32bb  8d442438             lea eax, [esp + 0x38]
// 008e32bf  64a300000000         mov dword ptr fs:[0], eax
// 008e32c5  8bf1                 mov esi, ecx
// 008e32c7  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008e32ca  85c9                 test ecx, ecx
// 008e32cc  7410                 je 0x8e32de
// 008e32ce  8b01                 mov eax, dword ptr [ecx]
// 008e32d0  8b5004               mov edx, dword ptr [eax + 4]
// 008e32d3  6a01                 push 1
// 008e32d5  ffd2                 call edx
// 008e32d7  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 008e32de  56                   push esi
// 008e32df  8d4c2418             lea ecx, [esp + 0x18]
// 008e32e3  e8887ff6ff           call 0x84b270
// 008e32e8  6a00                 push 0
// 008e32ea  8d4c2428             lea ecx, [esp + 0x28]
// 008e32ee  e897310400           call 0x92648a
// 008e32f3  6a34                 push 0x34
// 008e32f5  c744244400000000     mov dword ptr [esp + 0x44], 0
// 008e32fd  e85e05f1ff           call 0x7f3860
// 008e3302  8bf8                 mov edi, eax
// 008e3304  83c404               add esp, 4
// 008e3307  897c240c             mov dword ptr [esp + 0xc], edi
// 008e330b  c644244001           mov byte ptr [esp + 0x40], 1
// 008e3310  85ff                 test edi, edi
// 008e3312  7425                 je 0x8e3339
// 008e3314  6a00                 push 0
// 008e3316  83ec20               sub esp, 0x20
// 008e3319  8bcc                 mov ecx, esp
// 008e331b  89642434             mov dword ptr [esp + 0x34], esp
// 008e331f  6aff                 push -1
// 008e3321  e8fac9f4ff           call 0x82fd20
// 008e3326  8d442438             lea eax, [esp + 0x38]
// 008e332a  50                   push eax
// 008e332b  8d4c244c             lea ecx, [esp + 0x4c]
// 008e332f  51                   push ecx
// 008e3330  8bcf                 mov ecx, edi
// 008e3332  e879080100           call 0x8f3bb0
// 008e3337  eb02                 jmp 0x8e333b
// 008e3339  33c0                 xor eax, eax
// 008e333b  8bc8                 mov ecx, eax
// 008e333d  c644244000           mov byte ptr [esp + 0x40], 0
// 008e3342  89467c               mov dword ptr [esi + 0x7c], eax
// 008e3345  e856080100           call 0x8f3ba0
// 008e334a  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008e334d  e8ae0a0100           call 0x8f3e00
// 008e3352  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e3356  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e335a  f7d8                 neg eax
// 008e335c  50                   push eax
// 008e335d  f7d9                 neg ecx
// 008e335f  51                   push ecx
// 008e3360  8d54241c             lea edx, [esp + 0x1c]
// 008e3364  52                   push edx
// 008e3365  ff156ccc9800         call dword ptr [0x98cc6c]
// 008e336b  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008e336e  8d442414             lea eax, [esp + 0x14]
// 008e3372  50                   push eax
// 008e3373  51                   push ecx
// 008e3374  8bce                 mov ecx, esi
// 008e3376  e835fdffff           call 0x8e30b0
// 008e337b  8d4c2424             lea ecx, [esp + 0x24]
// 008e337f  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 008e3387  e8f8300400           call 0x926484
// 008e338c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008e3390  64890d00000000       mov dword ptr fs:[0], ecx
// 008e3397  59                   pop ecx
// 008e3398  5f                   pop edi
// 008e3399  5e                   pop esi
// 008e339a  83c438               add esp, 0x38
// 008e339d  c3                   ret 
// copied from an identical function in another client (function ?CreatePseudoShadow@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp
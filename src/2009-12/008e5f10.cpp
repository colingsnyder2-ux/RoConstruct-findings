// roc 2009-12 008e5f10  unit: CXTCaptionButton  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5f10
//
// 008e5f10  6aff                 push -1
// 008e5f12  689a609600           push 0x96609a
// 008e5f17  64a100000000         mov eax, dword ptr fs:[0]
// 008e5f1d  50                   push eax
// 008e5f1e  83ec0c               sub esp, 0xc
// 008e5f21  56                   push esi
// 008e5f22  57                   push edi
// 008e5f23  a10052b600           mov eax, dword ptr [0xb65200]
// 008e5f28  33c4                 xor eax, esp
// 008e5f2a  50                   push eax
// 008e5f2b  8d442418             lea eax, [esp + 0x18]
// 008e5f2f  64a300000000         mov dword ptr fs:[0], eax
// 008e5f35  8bf9                 mov edi, ecx
// 008e5f37  837c242800           cmp dword ptr [esp + 0x28], 0
// 008e5f3c  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008e5f44  7507                 jne 0x8e5f4d
// 008e5f46  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 008e5f4b  7406                 je 0x8e5f53
// 008e5f4d  8d442428             lea eax, [esp + 0x28]
// 008e5f51  eb0e                 jmp 0x8e5f61
// 008e5f53  8d442410             lea eax, [esp + 0x10]
// 008e5f57  50                   push eax
// 008e5f58  8d4c2434             lea ecx, [esp + 0x34]
// 008e5f5c  e8af31f2ff           call 0x809110
// 008e5f61  8b08                 mov ecx, dword ptr [eax]
// 008e5f63  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e5f67  8b5004               mov edx, dword ptr [eax + 4]
// 008e5f6a  6858010000           push 0x158
// 008e5f6f  89542430             mov dword ptr [esp + 0x30], edx
// 008e5f73  e8e8d8f0ff           call 0x7f3860
// 008e5f78  83c404               add esp, 4
// 008e5f7b  8944240c             mov dword ptr [esp + 0xc], eax
// 008e5f7f  c644242002           mov byte ptr [esp + 0x20], 2
// 008e5f84  85c0                 test eax, eax
// 008e5f86  7419                 je 0x8e5fa1
// 008e5f88  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e5f8c  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e5f90  6a00                 push 0
// 008e5f92  51                   push ecx
// 008e5f93  52                   push edx
// 008e5f94  6a00                 push 0
// 008e5f96  8bc8                 mov ecx, eax
// 008e5f98  e82371f2ff           call 0x80d0c0
// 008e5f9d  8bf0                 mov esi, eax
// 008e5f9f  eb02                 jmp 0x8e5fa3
// 008e5fa1  33f6                 xor esi, esi
// 008e5fa3  83ec24               sub esp, 0x24
// 008e5fa6  8d442454             lea eax, [esp + 0x54]
// 008e5faa  8bcc                 mov ecx, esp
// 008e5fac  89642430             mov dword ptr [esp + 0x30], esp
// 008e5fb0  50                   push eax
// 008e5fb1  c644244801           mov byte ptr [esp + 0x48], 1
// 008e5fb6  e88548f2ff           call 0x80a840
// 008e5fbb  8bce                 mov ecx, esi
// 008e5fbd  e82e7df2ff           call 0x80dcf0
// 008e5fc2  8d4c2454             lea ecx, [esp + 0x54]
// 008e5fc6  e8d548f2ff           call 0x80a8a0
// 008e5fcb  85c0                 test eax, eax
// 008e5fcd  751a                 jne 0x8e5fe9
// 008e5fcf  83ec24               sub esp, 0x24
// 008e5fd2  8d542478             lea edx, [esp + 0x78]
// 008e5fd6  8bcc                 mov ecx, esp
// 008e5fd8  89642430             mov dword ptr [esp + 0x30], esp
// 008e5fdc  52                   push edx
// 008e5fdd  e85e48f2ff           call 0x80a840
// 008e5fe2  8bce                 mov ecx, esi
// 008e5fe4  e8a77df2ff           call 0x80dd90
// 008e5fe9  8b442478             mov eax, dword ptr [esp + 0x78]
// 008e5fed  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e5ff1  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e5ff5  50                   push eax
// 008e5ff6  56                   push esi
// 008e5ff7  51                   push ecx
// 008e5ff8  52                   push edx
// 008e5ff9  8bcf                 mov ecx, edi
// 008e5ffb  e8a0feffff           call 0x8e5ea0
// 008e6000  8d4c2430             lea ecx, [esp + 0x30]
// 008e6004  8bf0                 mov esi, eax
// 008e6006  c644242000           mov byte ptr [esp + 0x20], 0
// 008e600b  e8d06df2ff           call 0x80cde0
// 008e6010  8d4c2454             lea ecx, [esp + 0x54]
// 008e6014  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008e601c  e8bf6df2ff           call 0x80cde0
// 008e6021  8bc6                 mov eax, esi
// 008e6023  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e6027  64890d00000000       mov dword ptr fs:[0], ecx
// 008e602e  59                   pop ecx
// 008e602f  5f                   pop edi
// 008e6030  5e                   pop esi
// 008e6031  83c418               add esp, 0x18
// 008e6034  c25400               ret 0x54
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@VCXTPImageManagerIconHandle@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp
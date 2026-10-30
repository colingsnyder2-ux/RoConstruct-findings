// roc 2010-06 0081cef0  unit: CXTPPropertyGridView  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081cef0
//
// 0081cef0  6aff                 push -1
// 0081cef2  685b539b00           push 0x9b535b
// 0081cef7  64a100000000         mov eax, dword ptr fs:[0]
// 0081cefd  50                   push eax
// 0081cefe  83ec18               sub esp, 0x18
// 0081cf01  53                   push ebx
// 0081cf02  55                   push ebp
// 0081cf03  56                   push esi
// 0081cf04  57                   push edi
// 0081cf05  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0081cf0a  33c4                 xor eax, esp
// 0081cf0c  50                   push eax
// 0081cf0d  8d44242c             lea eax, [esp + 0x2c]
// 0081cf11  64a300000000         mov dword ptr fs:[0], eax
// 0081cf17  8bf1                 mov esi, ecx
// 0081cf19  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0081cf1d  8b442440             mov eax, dword ptr [esp + 0x40]
// 0081cf21  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0081cf25  57                   push edi
// 0081cf26  50                   push eax
// 0081cf27  51                   push ecx
// 0081cf28  8bce                 mov ecx, esi
// 0081cf2a  e80dabf8ff           call 0x7a7a3c
// 0081cf2f  83f8ff               cmp eax, -1
// 0081cf32  0f85cc000000         jne 0x81d004
// 0081cf38  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 0081cf3e  85c9                 test ecx, ecx
// 0081cf40  7476                 je 0x81cfb8
// 0081cf42  8d542444             lea edx, [esp + 0x44]
// 0081cf46  52                   push edx
// 0081cf47  e8a46cf9ff           call 0x7b3bf0
// 0081cf4c  8d4c2444             lea ecx, [esp + 0x44]
// 0081cf50  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0081cf58  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0081cf5e  8d4c2444             lea ecx, [esp + 0x44]
// 0081cf62  85c0                 test eax, eax
// 0081cf64  0f8491000000         je 0x81cffb
// 0081cf6a  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 0081cf70  8b5030               mov edx, dword ptr [eax + 0x30]
// 0081cf73  51                   push ecx
// 0081cf74  52                   push edx
// 0081cf75  8b5034               mov edx, dword ptr [eax + 0x34]
// 0081cf78  83c034               add eax, 0x34
// 0081cf7b  83ec10               sub esp, 0x10
// 0081cf7e  8bcc                 mov ecx, esp
// 0081cf80  8911                 mov dword ptr [ecx], edx
// 0081cf82  8b5004               mov edx, dword ptr [eax + 4]
// 0081cf85  895104               mov dword ptr [ecx + 4], edx
// 0081cf88  8b5008               mov edx, dword ptr [eax + 8]
// 0081cf8b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0081cf8e  895108               mov dword ptr [ecx + 8], edx
// 0081cf91  89410c               mov dword ptr [ecx + 0xc], eax
// 0081cf94  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0081cf97  51                   push ecx
// 0081cf98  57                   push edi
// 0081cf99  e87270ffff           call 0x814010
// 0081cf9e  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 0081cfa4  8b7230               mov esi, dword ptr [edx + 0x30]
// 0081cfa7  83c420               add esp, 0x20
// 0081cfaa  8d4c2444             lea ecx, [esp + 0x44]
// 0081cfae  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0081cfb4  8bc6                 mov eax, esi
// 0081cfb6  eb4c                 jmp 0x81d004
// 0081cfb8  8b442440             mov eax, dword ptr [esp + 0x40]
// 0081cfbc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0081cfc0  50                   push eax
// 0081cfc1  51                   push ecx
// 0081cfc2  8bce                 mov ecx, esi
// 0081cfc4  e8d7faffff           call 0x81caa0
// 0081cfc9  8bf8                 mov edi, eax
// 0081cfcb  85ff                 test edi, edi
// 0081cfcd  7432                 je 0x81d001
// 0081cfcf  8b9f88000000         mov ebx, dword ptr [edi + 0x88]
// 0081cfd5  8d542414             lea edx, [esp + 0x14]
// 0081cfd9  52                   push edx
// 0081cfda  8bcf                 mov ecx, edi
// 0081cfdc  e89fe8ffff           call 0x81b880
// 0081cfe1  8d4c2414             lea ecx, [esp + 0x14]
// 0081cfe5  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0081cfed  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0081cff3  85c0                 test eax, eax
// 0081cff5  7523                 jne 0x81d01a
// 0081cff7  8d4c2414             lea ecx, [esp + 0x14]
// 0081cffb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0081d001  83c8ff               or eax, 0xffffffff
// 0081d004  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081d008  64890d00000000       mov dword ptr fs:[0], ecx
// 0081d00f  59                   pop ecx
// 0081d010  5f                   pop edi
// 0081d011  5e                   pop esi
// 0081d012  5d                   pop ebp
// 0081d013  5b                   pop ebx
// 0081d014  83c424               add esp, 0x24
// 0081d017  c20c00               ret 0xc
// 0081d01a  8d442418             lea eax, [esp + 0x18]
// 0081d01e  50                   push eax
// 0081d01f  8bcf                 mov ecx, edi
// 0081d021  e80ab5ffff           call 0x818530
// 0081d026  8be8                 mov ebp, eax
// 0081d028  8d4c241c             lea ecx, [esp + 0x1c]
// 0081d02c  51                   push ecx
// 0081d02d  8bcf                 mov ecx, edi
// 0081d02f  c644243802           mov byte ptr [esp + 0x38], 2
// 0081d034  e877c3ffff           call 0x8193b0
// 0081d039  8bce                 mov ecx, esi
// 0081d03b  8bf8                 mov edi, eax
// 0081d03d  e8cee8ffff           call 0x81b910
// 0081d042  8b0f                 mov ecx, dword ptr [edi]
// 0081d044  50                   push eax
// 0081d045  55                   push ebp
// 0081d046  8d54241c             lea edx, [esp + 0x1c]
// 0081d04a  52                   push edx
// 0081d04b  8bc2                 mov eax, edx
// 0081d04d  8b5704               mov edx, dword ptr [edi + 4]
// 0081d050  50                   push eax
// 0081d051  53                   push ebx
// 0081d052  83ec10               sub esp, 0x10
// 0081d055  8bc4                 mov eax, esp
// 0081d057  8908                 mov dword ptr [eax], ecx
// 0081d059  8b4f08               mov ecx, dword ptr [edi + 8]
// 0081d05c  895004               mov dword ptr [eax + 4], edx
// 0081d05f  8b570c               mov edx, dword ptr [edi + 0xc]
// 0081d062  894808               mov dword ptr [eax + 8], ecx
// 0081d065  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0081d069  89500c               mov dword ptr [eax + 0xc], edx
// 0081d06c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081d06f  50                   push eax
// 0081d070  51                   push ecx
// 0081d071  e81a70ffff           call 0x814090
// 0081d076  83c42c               add esp, 0x2c
// 0081d079  8d4c2418             lea ecx, [esp + 0x18]
// 0081d07d  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0081d083  8d4c2414             lea ecx, [esp + 0x14]
// 0081d087  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0081d08d  8bc3                 mov eax, ebx
// 0081d08f  e970ffffff           jmp 0x81d004
// copied from an identical function in another client (function ?OnToolHitTest@CXTPPropertyGridView@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp
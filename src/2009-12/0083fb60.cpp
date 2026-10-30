// roc 2009-12 0083fb60  unit: CXTPCustomizeSheet  size: 501 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083fb60
//
// 0083fb60  6aff                 push -1
// 0083fb62  6821cc9500           push 0x95cc21
// 0083fb67  64a100000000         mov eax, dword ptr fs:[0]
// 0083fb6d  50                   push eax
// 0083fb6e  81ec9c0a0000         sub esp, 0xa9c
// 0083fb74  55                   push ebp
// 0083fb75  56                   push esi
// 0083fb76  57                   push edi
// 0083fb77  a10052b600           mov eax, dword ptr [0xb65200]
// 0083fb7c  33c4                 xor eax, esp
// 0083fb7e  50                   push eax
// 0083fb7f  8d8424ac0a0000       lea eax, [esp + 0xaac]
// 0083fb86  64a300000000         mov dword ptr fs:[0], eax
// 0083fb8c  8be9                 mov ebp, ecx
// 0083fb8e  8b85b8000000         mov eax, dword ptr [ebp + 0xb8]
// 0083fb94  8b7058               mov esi, dword ptr [eax + 0x58]
// 0083fb97  85f6                 test esi, esi
// 0083fb99  0f849d010000         je 0x83fd3c
// 0083fb9f  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0083fba5  85c0                 test eax, eax
// 0083fba7  752e                 jne 0x83fbd7
// 0083fba9  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0083fbaf  85c0                 test eax, eax
// 0083fbb1  7f24                 jg 0x83fbd7
// 0083fbb3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083fbb9  85c9                 test ecx, ecx
// 0083fbbb  740c                 je 0x83fbc9
// 0083fbbd  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0083fbc0  85c0                 test eax, eax
// 0083fbc2  7f13                 jg 0x83fbd7
// 0083fbc4  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0083fbc7  eb06                 jmp 0x83fbcf
// 0083fbc9  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0083fbcf  85c0                 test eax, eax
// 0083fbd1  0f8465010000         je 0x83fd3c
// 0083fbd7  8b16                 mov edx, dword ptr [esi]
// 0083fbd9  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0083fbdf  8d442410             lea eax, [esp + 0x10]
// 0083fbe3  50                   push eax
// 0083fbe4  8bce                 mov ecx, esi
// 0083fbe6  ffd2                 call edx
// 0083fbe8  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0083fbee  85c0                 test eax, eax
// 0083fbf0  7526                 jne 0x83fc18
// 0083fbf2  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0083fbf8  85c0                 test eax, eax
// 0083fbfa  7f1c                 jg 0x83fc18
// 0083fbfc  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083fc02  85c9                 test ecx, ecx
// 0083fc04  740c                 je 0x83fc12
// 0083fc06  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0083fc09  85c0                 test eax, eax
// 0083fc0b  7f0b                 jg 0x83fc18
// 0083fc0d  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0083fc10  eb06                 jmp 0x83fc18
// 0083fc12  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0083fc18  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083fc1c  51                   push ecx
// 0083fc1d  8b8db8000000         mov ecx, dword ptr [ebp + 0xb8]
// 0083fc23  50                   push eax
// 0083fc24  e8d74afdff           call 0x814700
// 0083fc29  8bc8                 mov ecx, eax
// 0083fc2b  e850fffcff           call 0x80fb80
// 0083fc30  6a01                 push 1
// 0083fc32  55                   push ebp
// 0083fc33  8d4c2448             lea ecx, [esp + 0x48]
// 0083fc37  8bf8                 mov edi, eax
// 0083fc39  e812350800           call 0x8c3150
// 0083fc3e  c78424b40a000000000000 mov dword ptr [esp + 0xab4], 0
// 0083fc49  85ff                 test edi, edi
// 0083fc4b  7413                 je 0x83fc60
// 0083fc4d  8bcf                 mov ecx, edi
// 0083fc4f  e8ec94fcff           call 0x809140
// 0083fc54  50                   push eax
// 0083fc55  8d4c2444             lea ecx, [esp + 0x44]
// 0083fc59  e842290800           call 0x8c25a0
// 0083fc5e  eb13                 jmp 0x83fc73
// 0083fc60  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083fc64  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083fc68  52                   push edx
// 0083fc69  50                   push eax
// 0083fc6a  8d4c2448             lea ecx, [esp + 0x48]
// 0083fc6e  e86d160800           call 0x8c12e0
// 0083fc73  8d4c2440             lea ecx, [esp + 0x40]
// 0083fc77  e8ac3dfbff           call 0x7f3a28
// 0083fc7c  83f801               cmp eax, 1
// 0083fc7f  0f85a3000000         jne 0x83fd28
// 0083fc85  8d4c241c             lea ecx, [esp + 0x1c]
// 0083fc89  e8a2abfcff           call 0x80a830
// 0083fc8e  8d4c241c             lea ecx, [esp + 0x1c]
// 0083fc92  51                   push ecx
// 0083fc93  8d4c2444             lea ecx, [esp + 0x44]
// 0083fc97  c68424b80a000001     mov byte ptr [esp + 0xab8], 1
// 0083fc9f  e8cc270800           call 0x8c2470
// 0083fca4  8d4c241c             lea ecx, [esp + 0x1c]
// 0083fca8  e8f3abfcff           call 0x80a8a0
// 0083fcad  85c0                 test eax, eax
// 0083fcaf  7566                 jne 0x83fd17
// 0083fcb1  83ec24               sub esp, 0x24
// 0083fcb4  8bcc                 mov ecx, esp
// 0083fcb6  8964243c             mov dword ptr [esp + 0x3c], esp
// 0083fcba  398690000000         cmp dword ptr [esi + 0x90], eax
// 0083fcc0  7534                 jne 0x83fcf6
// 0083fcc2  8d542440             lea edx, [esp + 0x40]
// 0083fcc6  52                   push edx
// 0083fcc7  e874abfcff           call 0x80a840
// 0083fccc  8b8db8000000         mov ecx, dword ptr [ebp + 0xb8]
// 0083fcd2  c68424d80a000002     mov byte ptr [esp + 0xad8], 2
// 0083fcda  e8214afdff           call 0x814700
// 0083fcdf  8bc8                 mov ecx, eax
// 0083fce1  c68424d80a000001     mov byte ptr [esp + 0xad8], 1
// 0083fce9  e8d2fdfcff           call 0x80fac0
// 0083fcee  898690000000         mov dword ptr [esi + 0x90], eax
// 0083fcf4  eb11                 jmp 0x83fd07
// 0083fcf6  8d442440             lea eax, [esp + 0x40]
// 0083fcfa  50                   push eax
// 0083fcfb  e840abfcff           call 0x80a840
// 0083fd00  8bcf                 mov ecx, edi
// 0083fd02  e8e9dffcff           call 0x80dcf0
// 0083fd07  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083fd0d  8b11                 mov edx, dword ptr [ecx]
// 0083fd0f  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 0083fd15  ffd0                 call eax
// 0083fd17  8d4c241c             lea ecx, [esp + 0x1c]
// 0083fd1b  c68424b40a000000     mov byte ptr [esp + 0xab4], 0
// 0083fd23  e8b8d0fcff           call 0x80cde0
// 0083fd28  8d4c2440             lea ecx, [esp + 0x40]
// 0083fd2c  c78424b40a0000ffffffff mov dword ptr [esp + 0xab4], 0xffffffff
// 0083fd37  e834ecffff           call 0x83e970
// 0083fd3c  8b8c24ac0a0000       mov ecx, dword ptr [esp + 0xaac]
// 0083fd43  64890d00000000       mov dword ptr fs:[0], ecx
// 0083fd4a  59                   pop ecx
// 0083fd4b  5f                   pop edi
// 0083fd4c  5e                   pop esi
// 0083fd4d  5d                   pop ebp
// 0083fd4e  81c4a80a0000         add esp, 0xaa8
// 0083fd54  c3                   ret 
// copied from an identical function in another client (function ?OnCustomizeEditImage@CXTPCustomizeSheet@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp
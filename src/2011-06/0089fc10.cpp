// roc 2011-06 0089fc10  unit: CXTPShortcutManager::CKeyHelper  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089fc10
//
// 0089fc10  6aff                 push -1
// 0089fc12  685984a000           push 0xa08459
// 0089fc17  64a100000000         mov eax, dword ptr fs:[0]
// 0089fc1d  50                   push eax
// 0089fc1e  56                   push esi
// 0089fc1f  57                   push edi
// 0089fc20  a12058c900           mov eax, dword ptr [0xc95820]
// 0089fc25  33c4                 xor eax, esp
// 0089fc27  50                   push eax
// 0089fc28  8d44240c             lea eax, [esp + 0xc]
// 0089fc2c  64a300000000         mov dword ptr fs:[0], eax
// 0089fc32  8bf1                 mov esi, ecx
// 0089fc34  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0089fc38  8bcf                 mov ecx, edi
// 0089fc3a  ff155c27a400         call dword ptr [0xa4275c]
// 0089fc40  8b4604               mov eax, dword ptr [esi + 4]
// 0089fc43  85c0                 test eax, eax
// 0089fc45  0f842a010000         je 0x89fd75
// 0089fc4b  6683780203           cmp word ptr [eax + 2], 3
// 0089fc50  7439                 je 0x89fc8b
// 0089fc52  f60008               test byte ptr [eax], 8
// 0089fc55  740c                 je 0x89fc63
// 0089fc57  6a00                 push 0
// 0089fc59  6a11                 push 0x11
// 0089fc5b  57                   push edi
// 0089fc5c  8bce                 mov ecx, esi
// 0089fc5e  e86dfaffff           call 0x89f6d0
// 0089fc63  8b4604               mov eax, dword ptr [esi + 4]
// 0089fc66  f60004               test byte ptr [eax], 4
// 0089fc69  740c                 je 0x89fc77
// 0089fc6b  6a00                 push 0
// 0089fc6d  6a10                 push 0x10
// 0089fc6f  57                   push edi
// 0089fc70  8bce                 mov ecx, esi
// 0089fc72  e859faffff           call 0x89f6d0
// 0089fc77  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089fc7a  f60110               test byte ptr [ecx], 0x10
// 0089fc7d  740c                 je 0x89fc8b
// 0089fc7f  6a00                 push 0
// 0089fc81  6a12                 push 0x12
// 0089fc83  57                   push edi
// 0089fc84  8bce                 mov ecx, esi
// 0089fc86  e845faffff           call 0x89f6d0
// 0089fc8b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089fc8e  0fb74102             movzx eax, word ptr [ecx + 2]
// 0089fc92  6685c0               test ax, ax
// 0089fc95  0f849c000000         je 0x89fd37
// 0089fc9b  8a11                 mov dl, byte ptr [ecx]
// 0089fc9d  f6c201               test dl, 1
// 0089fca0  7422                 je 0x89fcc4
// 0089fca2  0fb7d0               movzx edx, ax
// 0089fca5  6a01                 push 1
// 0089fca7  52                   push edx
// 0089fca8  57                   push edi
// 0089fca9  8bce                 mov ecx, esi
// 0089fcab  e820faffff           call 0x89f6d0
// 0089fcb0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089fcb4  64890d00000000       mov dword ptr fs:[0], ecx
// 0089fcbb  59                   pop ecx
// 0089fcbc  5f                   pop edi
// 0089fcbd  5e                   pop esi
// 0089fcbe  83c40c               add esp, 0xc
// 0089fcc1  c20400               ret 4
// 0089fcc4  6683f801             cmp ax, 1
// 0089fcc8  7240                 jb 0x89fd0a
// 0089fcca  6683f81a             cmp ax, 0x1a
// 0089fcce  773a                 ja 0x89fd0a
// 0089fcd0  80fa02               cmp dl, 2
// 0089fcd3  7535                 jne 0x89fd0a
// 0089fcd5  6a00                 push 0
// 0089fcd7  6a11                 push 0x11
// 0089fcd9  57                   push edi
// 0089fcda  8bce                 mov ecx, esi
// 0089fcdc  e8eff9ffff           call 0x89f6d0
// 0089fce1  8b4604               mov eax, dword ptr [esi + 4]
// 0089fce4  8a4802               mov cl, byte ptr [eax + 2]
// 0089fce7  80c140               add cl, 0x40
// 0089fcea  0fb6d1               movzx edx, cl
// 0089fced  52                   push edx
// 0089fcee  8bcf                 mov ecx, edi
// 0089fcf0  ff156828a400         call dword ptr [0xa42868]
// 0089fcf6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089fcfa  64890d00000000       mov dword ptr fs:[0], ecx
// 0089fd01  59                   pop ecx
// 0089fd02  5f                   pop edi
// 0089fd03  5e                   pop esi
// 0089fd04  83c40c               add esp, 0xc
// 0089fd07  c20400               ret 4
// 0089fd0a  6683f81b             cmp ax, 0x1b
// 0089fd0e  7465                 je 0x89fd75
// 0089fd10  6683f809             cmp ax, 9
// 0089fd14  745f                 je 0x89fd75
// 0089fd16  0fb64102             movzx eax, byte ptr [ecx + 2]
// 0089fd1a  50                   push eax
// 0089fd1b  8bcf                 mov ecx, edi
// 0089fd1d  ff156828a400         call dword ptr [0xa42868]
// 0089fd23  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089fd27  64890d00000000       mov dword ptr fs:[0], ecx
// 0089fd2e  59                   pop ecx
// 0089fd2f  5f                   pop edi
// 0089fd30  5e                   pop esi
// 0089fd31  83c40c               add esp, 0xc
// 0089fd34  c20400               ret 4
// 0089fd37  8bcf                 mov ecx, edi
// 0089fd39  ff15a826a400         call dword ptr [0xa426a8]
// 0089fd3f  85c0                 test eax, eax
// 0089fd41  7e32                 jle 0x89fd75
// 0089fd43  8bcf                 mov ecx, edi
// 0089fd45  ff15a826a400         call dword ptr [0xa426a8]
// 0089fd4b  48                   dec eax
// 0089fd4c  50                   push eax
// 0089fd4d  8d4c2420             lea ecx, [esp + 0x20]
// 0089fd51  51                   push ecx
// 0089fd52  8bcf                 mov ecx, edi
// 0089fd54  ff15601fa400         call dword ptr [0xa41f60]
// 0089fd5a  50                   push eax
// 0089fd5b  8bcf                 mov ecx, edi
// 0089fd5d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0089fd65  ff156425a400         call dword ptr [0xa42564]
// 0089fd6b  8d4c241c             lea ecx, [esp + 0x1c]
// 0089fd6f  ff15082ea400         call dword ptr [0xa42e08]
// 0089fd75  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089fd79  64890d00000000       mov dword ptr fs:[0], ecx
// 0089fd80  59                   pop ecx
// 0089fd81  5f                   pop edi
// 0089fd82  5e                   pop esi
// 0089fd83  83c40c               add esp, 0xc
// 0089fd86  c20400               ret 4
// copied from an identical function in another client (function ?Format@CKeyHelper@CXTPShortcutManager@@QBEXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp
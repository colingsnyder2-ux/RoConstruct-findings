// roc 2010-06 00842a50  unit: CXTPShortcutManager::CKeyHelper  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842a50
//
// 00842a50  6aff                 push -1
// 00842a52  6899e59a00           push 0x9ae599
// 00842a57  64a100000000         mov eax, dword ptr fs:[0]
// 00842a5d  50                   push eax
// 00842a5e  56                   push esi
// 00842a5f  57                   push edi
// 00842a60  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00842a65  33c4                 xor eax, esp
// 00842a67  50                   push eax
// 00842a68  8d44240c             lea eax, [esp + 0xc]
// 00842a6c  64a300000000         mov dword ptr fs:[0], eax
// 00842a72  8bf1                 mov esi, ecx
// 00842a74  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00842a78  8bcf                 mov ecx, edi
// 00842a7a  ff1588c69e00         call dword ptr [0x9ec688]
// 00842a80  8b4604               mov eax, dword ptr [esi + 4]
// 00842a83  85c0                 test eax, eax
// 00842a85  0f842a010000         je 0x842bb5
// 00842a8b  6683780203           cmp word ptr [eax + 2], 3
// 00842a90  7439                 je 0x842acb
// 00842a92  f60008               test byte ptr [eax], 8
// 00842a95  740c                 je 0x842aa3
// 00842a97  6a00                 push 0
// 00842a99  6a11                 push 0x11
// 00842a9b  57                   push edi
// 00842a9c  8bce                 mov ecx, esi
// 00842a9e  e86dfaffff           call 0x842510
// 00842aa3  8b4604               mov eax, dword ptr [esi + 4]
// 00842aa6  f60004               test byte ptr [eax], 4
// 00842aa9  740c                 je 0x842ab7
// 00842aab  6a00                 push 0
// 00842aad  6a10                 push 0x10
// 00842aaf  57                   push edi
// 00842ab0  8bce                 mov ecx, esi
// 00842ab2  e859faffff           call 0x842510
// 00842ab7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00842aba  f60110               test byte ptr [ecx], 0x10
// 00842abd  740c                 je 0x842acb
// 00842abf  6a00                 push 0
// 00842ac1  6a12                 push 0x12
// 00842ac3  57                   push edi
// 00842ac4  8bce                 mov ecx, esi
// 00842ac6  e845faffff           call 0x842510
// 00842acb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00842ace  0fb74102             movzx eax, word ptr [ecx + 2]
// 00842ad2  6685c0               test ax, ax
// 00842ad5  0f849c000000         je 0x842b77
// 00842adb  8a11                 mov dl, byte ptr [ecx]
// 00842add  f6c201               test dl, 1
// 00842ae0  7422                 je 0x842b04
// 00842ae2  0fb7d0               movzx edx, ax
// 00842ae5  6a01                 push 1
// 00842ae7  52                   push edx
// 00842ae8  57                   push edi
// 00842ae9  8bce                 mov ecx, esi
// 00842aeb  e820faffff           call 0x842510
// 00842af0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00842af4  64890d00000000       mov dword ptr fs:[0], ecx
// 00842afb  59                   pop ecx
// 00842afc  5f                   pop edi
// 00842afd  5e                   pop esi
// 00842afe  83c40c               add esp, 0xc
// 00842b01  c20400               ret 4
// 00842b04  6683f801             cmp ax, 1
// 00842b08  7240                 jb 0x842b4a
// 00842b0a  6683f81a             cmp ax, 0x1a
// 00842b0e  773a                 ja 0x842b4a
// 00842b10  80fa02               cmp dl, 2
// 00842b13  7535                 jne 0x842b4a
// 00842b15  6a00                 push 0
// 00842b17  6a11                 push 0x11
// 00842b19  57                   push edi
// 00842b1a  8bce                 mov ecx, esi
// 00842b1c  e8eff9ffff           call 0x842510
// 00842b21  8b4604               mov eax, dword ptr [esi + 4]
// 00842b24  8a4802               mov cl, byte ptr [eax + 2]
// 00842b27  80c140               add cl, 0x40
// 00842b2a  0fb6d1               movzx edx, cl
// 00842b2d  52                   push edx
// 00842b2e  8bcf                 mov ecx, edi
// 00842b30  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 00842b36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00842b3a  64890d00000000       mov dword ptr fs:[0], ecx
// 00842b41  59                   pop ecx
// 00842b42  5f                   pop edi
// 00842b43  5e                   pop esi
// 00842b44  83c40c               add esp, 0xc
// 00842b47  c20400               ret 4
// 00842b4a  6683f81b             cmp ax, 0x1b
// 00842b4e  7465                 je 0x842bb5
// 00842b50  6683f809             cmp ax, 9
// 00842b54  745f                 je 0x842bb5
// 00842b56  0fb64102             movzx eax, byte ptr [ecx + 2]
// 00842b5a  50                   push eax
// 00842b5b  8bcf                 mov ecx, edi
// 00842b5d  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 00842b63  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00842b67  64890d00000000       mov dword ptr fs:[0], ecx
// 00842b6e  59                   pop ecx
// 00842b6f  5f                   pop edi
// 00842b70  5e                   pop esi
// 00842b71  83c40c               add esp, 0xc
// 00842b74  c20400               ret 4
// 00842b77  8bcf                 mov ecx, edi
// 00842b79  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00842b7f  85c0                 test eax, eax
// 00842b81  7e32                 jle 0x842bb5
// 00842b83  8bcf                 mov ecx, edi
// 00842b85  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00842b8b  48                   dec eax
// 00842b8c  50                   push eax
// 00842b8d  8d4c2420             lea ecx, [esp + 0x20]
// 00842b91  51                   push ecx
// 00842b92  8bcf                 mov ecx, edi
// 00842b94  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 00842b9a  50                   push eax
// 00842b9b  8bcf                 mov ecx, edi
// 00842b9d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00842ba5  ff1580c59e00         call dword ptr [0x9ec580]
// 00842bab  8d4c241c             lea ecx, [esp + 0x1c]
// 00842baf  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00842bb5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00842bb9  64890d00000000       mov dword ptr fs:[0], ecx
// 00842bc0  59                   pop ecx
// 00842bc1  5f                   pop edi
// 00842bc2  5e                   pop esi
// 00842bc3  83c40c               add esp, 0xc
// 00842bc6  c20400               ret 4
// copied from an identical function in another client (function ?Format@CKeyHelper@CXTPShortcutManager@@QBEXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp
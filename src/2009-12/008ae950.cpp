// roc 2009-12 008ae950  unit: CXTPDockingPaneMiniWnd  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae950
//
// 008ae950  6aff                 push -1
// 008ae952  68c9ee9500           push 0x95eec9
// 008ae957  64a100000000         mov eax, dword ptr fs:[0]
// 008ae95d  50                   push eax
// 008ae95e  51                   push ecx
// 008ae95f  53                   push ebx
// 008ae960  55                   push ebp
// 008ae961  56                   push esi
// 008ae962  57                   push edi
// 008ae963  a10052b600           mov eax, dword ptr [0xb65200]
// 008ae968  33c4                 xor eax, esp
// 008ae96a  50                   push eax
// 008ae96b  8d442418             lea eax, [esp + 0x18]
// 008ae96f  64a300000000         mov dword ptr fs:[0], eax
// 008ae975  8bf9                 mov edi, ecx
// 008ae977  8d9ff8000000         lea ebx, [edi + 0xf8]
// 008ae97d  8bcb                 mov ecx, ebx
// 008ae97f  e8bc1e0000           call 0x8b0840
// 008ae984  8bb008010000         mov esi, dword ptr [eax + 0x108]
// 008ae98a  f7de                 neg esi
// 008ae98c  1bf6                 sbb esi, esi
// 008ae98e  81e600010000         and esi, 0x100
// 008ae994  8bcb                 mov ecx, ebx
// 008ae996  81ce0010cc80         or esi, 0x80cc1000
// 008ae99c  33ed                 xor ebp, ebp
// 008ae99e  e89d1e0000           call 0x8b0840
// 008ae9a3  8bc8                 mov ecx, eax
// 008ae9a5  e8369df8ff           call 0x8386e0
// 008ae9aa  85c0                 test eax, eax
// 008ae9ac  7405                 je 0x8ae9b3
// 008ae9ae  bd00004000           mov ebp, 0x400000
// 008ae9b3  8d442428             lea eax, [esp + 0x28]
// 008ae9b7  50                   push eax
// 008ae9b8  e803e70000           call 0x8bd0c0
// 008ae9bd  83c404               add esp, 4
// 008ae9c0  8bcb                 mov ecx, ebx
// 008ae9c2  e8791e0000           call 0x8b0840
// 008ae9c7  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 008ae9cd  6a00                 push 0
// 008ae9cf  50                   push eax
// 008ae9d0  8d4c2430             lea ecx, [esp + 0x30]
// 008ae9d4  51                   push ecx
// 008ae9d5  56                   push esi
// 008ae9d6  6856fd9900           push 0x99fd56
// 008ae9db  6864809f00           push 0x9f8064
// 008ae9e0  55                   push ebp
// 008ae9e1  8bcf                 mov ecx, edi
// 008ae9e3  e8ee820700           call 0x926cd6
// 008ae9e8  85c0                 test eax, eax
// 008ae9ea  0f84f5000000         je 0x8aeae5
// 008ae9f0  8b5720               mov edx, dword ptr [edi + 0x20]
// 008ae9f3  6a00                 push 0
// 008ae9f5  52                   push edx
// 008ae9f6  ff15f4cb9800         call dword ptr [0x98cbf4]
// 008ae9fc  50                   push eax
// 008ae9fd  e8e854f4ff           call 0x7f3eea
// 008aea02  8b1d78ca9800         mov ebx, dword ptr [0x98ca78]
// 008aea08  6a00                 push 0
// 008aea0a  8bf0                 mov esi, eax
// 008aea0c  8b4604               mov eax, dword ptr [esi + 4]
// 008aea0f  6820f00000           push 0xf020
// 008aea14  50                   push eax
// 008aea15  ffd3                 call ebx
// 008aea17  8b4e04               mov ecx, dword ptr [esi + 4]
// 008aea1a  6a00                 push 0
// 008aea1c  6830f00000           push 0xf030
// 008aea21  51                   push ecx
// 008aea22  ffd3                 call ebx
// 008aea24  8b5604               mov edx, dword ptr [esi + 4]
// 008aea27  6a00                 push 0
// 008aea29  6820f10000           push 0xf120
// 008aea2e  52                   push edx
// 008aea2f  ffd3                 call ebx
// 008aea31  8d4c2414             lea ecx, [esp + 0x14]
// 008aea35  ff1574de9800         call dword ptr [0x98de74]
// 008aea3b  6811f00000           push 0xf011
// 008aea40  8d4c2418             lea ecx, [esp + 0x18]
// 008aea44  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008aea4c  ff1560cf9800         call dword ptr [0x98cf60]
// 008aea52  85c0                 test eax, eax
// 008aea54  7429                 je 0x8aea7f
// 008aea56  8b4604               mov eax, dword ptr [esi + 4]
// 008aea59  6a00                 push 0
// 008aea5b  6860f00000           push 0xf060
// 008aea60  50                   push eax
// 008aea61  ffd3                 call ebx
// 008aea63  8d4c2414             lea ecx, [esp + 0x14]
// 008aea67  ff1580de9800         call dword ptr [0x98de80]
// 008aea6d  8b4e04               mov ecx, dword ptr [esi + 4]
// 008aea70  50                   push eax
// 008aea71  6860f00000           push 0xf060
// 008aea76  6a00                 push 0
// 008aea78  51                   push ecx
// 008aea79  ff157cca9800         call dword ptr [0x98ca7c]
// 008aea7f  8bcf                 mov ecx, edi
// 008aea81  c7873401000001000000 mov dword ptr [edi + 0x134], 1
// 008aea8b  e870fcffff           call 0x8ae700
// 008aea90  85c0                 test eax, eax
// 008aea92  7410                 je 0x8aeaa4
// 008aea94  6a20                 push 0x20
// 008aea96  6a00                 push 0
// 008aea98  6800008400           push 0x840000
// 008aea9d  8bcf                 mov ecx, edi
// 008aea9f  e83655f4ff           call 0x7f3fda
// 008aeaa4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008aeaa8  8b542434             mov edx, dword ptr [esp + 0x34]
// 008aeaac  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008aeab0  6814020000           push 0x214
// 008aeab5  2bd0                 sub edx, eax
// 008aeab7  52                   push edx
// 008aeab8  8b542438             mov edx, dword ptr [esp + 0x38]
// 008aeabc  2bd1                 sub edx, ecx
// 008aeabe  52                   push edx
// 008aeabf  50                   push eax
// 008aeac0  51                   push ecx
// 008aeac1  6a00                 push 0
// 008aeac3  8bcf                 mov ecx, edi
// 008aeac5  e86251f4ff           call 0x7f3c2c
// 008aeaca  8b07                 mov eax, dword ptr [edi]
// 008aeacc  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 008aead2  8bcf                 mov ecx, edi
// 008aead4  ffd2                 call edx
// 008aead6  8d4c2414             lea ecx, [esp + 0x14]
// 008aeada  ff15c0de9800         call dword ptr [0x98dec0]
// 008aeae0  b801000000           mov eax, 1
// 008aeae5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008aeae9  64890d00000000       mov dword ptr fs:[0], ecx
// 008aeaf0  59                   pop ecx
// 008aeaf1  5f                   pop edi
// 008aeaf2  5e                   pop esi
// 008aeaf3  5d                   pop ebp
// 008aeaf4  5b                   pop ebx
// 008aeaf5  83c410               add esp, 0x10
// 008aeaf8  c21000               ret 0x10
// copied from an identical function in another client (function ?Create@CXTPDockingPaneMiniWnd@@MAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\DockingPane\XTPDockingPaneMiniWnd.cpp
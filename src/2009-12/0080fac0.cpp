// roc 2009-12 0080fac0  unit: CXTPImageManagerIcon  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080fac0
//
// 0080fac0  6aff                 push -1
// 0080fac2  68e29e9500           push 0x959ee2
// 0080fac7  64a100000000         mov eax, dword ptr fs:[0]
// 0080facd  50                   push eax
// 0080face  83ec0c               sub esp, 0xc
// 0080fad1  56                   push esi
// 0080fad2  57                   push edi
// 0080fad3  a10052b600           mov eax, dword ptr [0xb65200]
// 0080fad8  33c4                 xor eax, esp
// 0080fada  50                   push eax
// 0080fadb  8d442418             lea eax, [esp + 0x18]
// 0080fadf  64a300000000         mov dword ptr fs:[0], eax
// 0080fae5  8bf1                 mov esi, ecx
// 0080fae7  8d442410             lea eax, [esp + 0x10]
// 0080faeb  33ff                 xor edi, edi
// 0080faed  50                   push eax
// 0080faee  8d4c242c             lea ecx, [esp + 0x2c]
// 0080faf2  897c2424             mov dword ptr [esp + 0x24], edi
// 0080faf6  e81596ffff           call 0x809110
// 0080fafb  ff4674               inc dword ptr [esi + 0x74]
// 0080fafe  6a44                 push 0x44
// 0080fb00  e85b3dfeff           call 0x7f3860
// 0080fb05  83c404               add esp, 4
// 0080fb08  8944240c             mov dword ptr [esp + 0xc], eax
// 0080fb0c  c644242001           mov byte ptr [esp + 0x20], 1
// 0080fb11  3bc7                 cmp eax, edi
// 0080fb13  740e                 je 0x80fb23
// 0080fb15  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0080fb18  56                   push esi
// 0080fb19  51                   push ecx
// 0080fb1a  8bc8                 mov ecx, eax
// 0080fb1c  e8dfcbffff           call 0x80c700
// 0080fb21  8bf8                 mov edi, eax
// 0080fb23  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080fb27  52                   push edx
// 0080fb28  83ec24               sub esp, 0x24
// 0080fb2b  8d442450             lea eax, [esp + 0x50]
// 0080fb2f  8bcc                 mov ecx, esp
// 0080fb31  89642434             mov dword ptr [esp + 0x34], esp
// 0080fb35  50                   push eax
// 0080fb36  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0080fb3b  e800adffff           call 0x80a840
// 0080fb40  8bcf                 mov ecx, edi
// 0080fb42  e899f4ffff           call 0x80efe0
// 0080fb47  8b4674               mov eax, dword ptr [esi + 0x74]
// 0080fb4a  50                   push eax
// 0080fb4b  8d4e28               lea ecx, [esi + 0x28]
// 0080fb4e  e82d460800           call 0x894180
// 0080fb53  8938                 mov dword ptr [eax], edi
// 0080fb55  8b7674               mov esi, dword ptr [esi + 0x74]
// 0080fb58  8d4c2428             lea ecx, [esp + 0x28]
// 0080fb5c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080fb64  e877d2ffff           call 0x80cde0
// 0080fb69  8bc6                 mov eax, esi
// 0080fb6b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080fb6f  64890d00000000       mov dword ptr fs:[0], ecx
// 0080fb76  59                   pop ecx
// 0080fb77  5f                   pop edi
// 0080fb78  5e                   pop esi
// 0080fb79  83c418               add esp, 0x18
// 0080fb7c  c22400               ret 0x24
// copied from an identical function in another client (function ?AddCustomIcon@CXTPImageManager@@QAEIVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
// from server: 100% by auto
// roc 2008-06 005953f0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005953f0
//
// 005953f0  83ec10               sub esp, 0x10
// 005953f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005953f7  53                   push ebx
// 005953f8  56                   push esi
// 005953f9  8bf1                 mov esi, ecx
// 005953fb  8b4804               mov ecx, dword ptr [eax + 4]
// 005953fe  894c240c             mov dword ptr [esp + 0xc], ecx
// 00595402  8b4808               mov ecx, dword ptr [eax + 8]
// 00595405  894c2410             mov dword ptr [esp + 0x10], ecx
// 00595409  85c9                 test ecx, ecx
// 0059540b  7410                 je 0x59541d
// 0059540d  83c104               add ecx, 4
// 00595410  ba01000000           mov edx, 1
// 00595415  f00fc111             lock xadd dword ptr [ecx], edx
// 00595419  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059541d  8a580c               mov bl, byte ptr [eax + 0xc]
// 00595420  8d4604               lea eax, [esi + 4]
// 00595423  8d54240c             lea edx, [esp + 0xc]
// 00595427  885c2414             mov byte ptr [esp + 0x14], bl
// 0059542b  3bd0                 cmp edx, eax
// 0059542d  740e                 je 0x59543d
// 0059542f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00595433  57                   push edi
// 00595434  8b38                 mov edi, dword ptr [eax]
// 00595436  897c2410             mov dword ptr [esp + 0x10], edi
// 0059543a  8910                 mov dword ptr [eax], edx
// 0059543c  5f                   pop edi
// 0059543d  8b5004               mov edx, dword ptr [eax + 4]
// 00595440  894804               mov dword ptr [eax + 4], ecx
// 00595443  8d460c               lea eax, [esi + 0xc]
// 00595446  8d4c2414             lea ecx, [esp + 0x14]
// 0059544a  89542410             mov dword ptr [esp + 0x10], edx
// 0059544e  3bc8                 cmp ecx, eax
// 00595450  740a                 je 0x59545c
// 00595452  8a10                 mov dl, byte ptr [eax]
// 00595454  8acb                 mov cl, bl
// 00595456  88542414             mov byte ptr [esp + 0x14], dl
// 0059545a  8808                 mov byte ptr [eax], cl
// 0059545c  8d4c2408             lea ecx, [esp + 8]
// 00595460  e80bffffff           call 0x595370
// 00595465  8bc6                 mov eax, esi
// 00595467  5e                   pop esi
// 00595468  5b                   pop ebx
// 00595469  83c410               add esp, 0x10
// 0059546c  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??4connection@signals@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp

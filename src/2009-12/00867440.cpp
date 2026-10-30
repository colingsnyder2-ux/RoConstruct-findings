// roc 2009-12 00867440  unit: CPropertyGridItemBrickColor  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00867440
//
// 00867440  6aff                 push -1
// 00867442  68f0f19500           push 0x95f1f0
// 00867447  64a100000000         mov eax, dword ptr fs:[0]
// 0086744d  50                   push eax
// 0086744e  83ec48               sub esp, 0x48
// 00867451  53                   push ebx
// 00867452  55                   push ebp
// 00867453  56                   push esi
// 00867454  57                   push edi
// 00867455  a10052b600           mov eax, dword ptr [0xb65200]
// 0086745a  33c4                 xor eax, esp
// 0086745c  50                   push eax
// 0086745d  8d44245c             lea eax, [esp + 0x5c]
// 00867461  64a300000000         mov dword ptr fs:[0], eax
// 00867467  8bf9                 mov edi, ecx
// 00867469  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0086746d  8b4608               mov eax, dword ptr [esi + 8]
// 00867470  50                   push eax
// 00867471  ff1524b19800         call dword ptr [0x98b124]
// 00867477  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0086747b  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0086747f  8d69fe               lea ebp, [ecx - 2]
// 00867482  83c112               add ecx, 0x12
// 00867485  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00867489  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0086748d  49                   dec ecx
// 0086748e  894c2430             mov dword ptr [esp + 0x30], ecx
// 00867492  8b4e04               mov ecx, dword ptr [esi + 4]
// 00867495  50                   push eax
// 00867496  51                   push ecx
// 00867497  8d4c2450             lea ecx, [esp + 0x50]
// 0086749b  43                   inc ebx
// 0086749c  e85f42feff           call 0x84b700
// 008674a1  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 008674a7  8b4604               mov eax, dword ptr [esi + 4]
// 008674aa  52                   push edx
// 008674ab  50                   push eax
// 008674ac  8d4c243c             lea ecx, [esp + 0x3c]
// 008674b0  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008674b8  e80343feff           call 0x84b7c0
// 008674bd  8b442430             mov eax, dword ptr [esp + 0x30]
// 008674c1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008674c5  8b5604               mov edx, dword ptr [esi + 4]
// 008674c8  50                   push eax
// 008674c9  51                   push ecx
// 008674ca  53                   push ebx
// 008674cb  55                   push ebp
// 008674cc  52                   push edx
// 008674cd  c644247801           mov byte ptr [esp + 0x78], 1
// 008674d2  ff15c0b09800         call dword ptr [0x98b0c0]
// 008674d8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008674dc  8b542478             mov edx, dword ptr [esp + 0x78]
// 008674e0  8b442470             mov eax, dword ptr [esp + 0x70]
// 008674e4  8b1e                 mov ebx, dword ptr [esi]
// 008674e6  894c2418             mov dword ptr [esp + 0x18], ecx
// 008674ea  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008674ee  89442414             mov dword ptr [esp + 0x14], eax
// 008674f2  8954241c             mov dword ptr [esp + 0x1c], edx
// 008674f6  6a24                 push 0x24
// 008674f8  8d542418             lea edx, [esp + 0x18]
// 008674fc  894c2424             mov dword ptr [esp + 0x24], ecx
// 00867500  83c019               add eax, 0x19
// 00867503  81c7a4000000         add edi, 0xa4
// 00867509  52                   push edx
// 0086750a  8bcf                 mov ecx, edi
// 0086750c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00867510  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00867516  50                   push eax
// 00867517  8bcf                 mov ecx, edi
// 00867519  ff1580de9800         call dword ptr [0x98de80]
// 0086751f  50                   push eax
// 00867520  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00867523  8bce                 mov ecx, esi
// 00867525  ffd0                 call eax
// 00867527  8d4c2434             lea ecx, [esp + 0x34]
// 0086752b  c644246400           mov byte ptr [esp + 0x64], 0
// 00867530  e81b43feff           call 0x84b850
// 00867535  8d4c2448             lea ecx, [esp + 0x48]
// 00867539  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00867541  e84a42feff           call 0x84b790
// 00867546  b801000000           mov eax, 1
// 0086754b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0086754f  64890d00000000       mov dword ptr fs:[0], ecx
// 00867556  59                   pop ecx
// 00867557  5f                   pop edi
// 00867558  5e                   pop esi
// 00867559  5d                   pop ebp
// 0086755a  5b                   pop ebx
// 0086755b  83c454               add esp, 0x54
// 0086755e  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDrawItemValue@CXTPPropertyGridItemColor@@MAEHAAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItemColor.cpp
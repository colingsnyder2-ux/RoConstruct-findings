// roc 2009-06 0078c440  unit: CPropertyGridItemBrickColor  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078c440
//
// 0078c440  6aff                 push -1
// 0078c442  68e0af8700           push 0x87afe0
// 0078c447  64a100000000         mov eax, dword ptr fs:[0]
// 0078c44d  50                   push eax
// 0078c44e  83ec48               sub esp, 0x48
// 0078c451  53                   push ebx
// 0078c452  55                   push ebp
// 0078c453  56                   push esi
// 0078c454  57                   push edi
// 0078c455  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0078c45a  33c4                 xor eax, esp
// 0078c45c  50                   push eax
// 0078c45d  8d44245c             lea eax, [esp + 0x5c]
// 0078c461  64a300000000         mov dword ptr fs:[0], eax
// 0078c467  8bf9                 mov edi, ecx
// 0078c469  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0078c46d  8b4608               mov eax, dword ptr [esi + 8]
// 0078c470  50                   push eax
// 0078c471  ff15e8e08900         call dword ptr [0x89e0e8]
// 0078c477  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0078c47b  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0078c47f  8d69fe               lea ebp, [ecx - 2]
// 0078c482  83c112               add ecx, 0x12
// 0078c485  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0078c489  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0078c48d  49                   dec ecx
// 0078c48e  894c2430             mov dword ptr [esp + 0x30], ecx
// 0078c492  8b4e04               mov ecx, dword ptr [esi + 4]
// 0078c495  50                   push eax
// 0078c496  51                   push ecx
// 0078c497  8d4c2450             lea ecx, [esp + 0x50]
// 0078c49b  43                   inc ebx
// 0078c49c  e85f44feff           call 0x770900
// 0078c4a1  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 0078c4a7  8b4604               mov eax, dword ptr [esi + 4]
// 0078c4aa  52                   push edx
// 0078c4ab  50                   push eax
// 0078c4ac  8d4c243c             lea ecx, [esp + 0x3c]
// 0078c4b0  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 0078c4b8  e80345feff           call 0x7709c0
// 0078c4bd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0078c4c1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0078c4c5  8b5604               mov edx, dword ptr [esi + 4]
// 0078c4c8  50                   push eax
// 0078c4c9  51                   push ecx
// 0078c4ca  53                   push ebx
// 0078c4cb  55                   push ebp
// 0078c4cc  52                   push edx
// 0078c4cd  c644247801           mov byte ptr [esp + 0x78], 1
// 0078c4d2  ff156ce18900         call dword ptr [0x89e16c]
// 0078c4d8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0078c4dc  8b542478             mov edx, dword ptr [esp + 0x78]
// 0078c4e0  8b442470             mov eax, dword ptr [esp + 0x70]
// 0078c4e4  8b1e                 mov ebx, dword ptr [esi]
// 0078c4e6  894c2418             mov dword ptr [esp + 0x18], ecx
// 0078c4ea  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0078c4ee  89442414             mov dword ptr [esp + 0x14], eax
// 0078c4f2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0078c4f6  6a24                 push 0x24
// 0078c4f8  8d542418             lea edx, [esp + 0x18]
// 0078c4fc  894c2424             mov dword ptr [esp + 0x24], ecx
// 0078c500  83c019               add eax, 0x19
// 0078c503  81c7a4000000         add edi, 0xa4
// 0078c509  52                   push edx
// 0078c50a  8bcf                 mov ecx, edi
// 0078c50c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0078c510  ff1554fb8900         call dword ptr [0x89fb54]
// 0078c516  50                   push eax
// 0078c517  8bcf                 mov ecx, edi
// 0078c519  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0078c51f  50                   push eax
// 0078c520  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0078c523  8bce                 mov ecx, esi
// 0078c525  ffd0                 call eax
// 0078c527  8d4c2434             lea ecx, [esp + 0x34]
// 0078c52b  c644246400           mov byte ptr [esp + 0x64], 0
// 0078c530  e81b45feff           call 0x770a50
// 0078c535  8d4c2448             lea ecx, [esp + 0x48]
// 0078c539  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0078c541  e84a44feff           call 0x770990
// 0078c546  b801000000           mov eax, 1
// 0078c54b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0078c54f  64890d00000000       mov dword ptr fs:[0], ecx
// 0078c556  59                   pop ecx
// 0078c557  5f                   pop edi
// 0078c558  5e                   pop esi
// 0078c559  5d                   pop ebp
// 0078c55a  5b                   pop ebx
// 0078c55b  83c454               add esp, 0x54
// 0078c55e  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDrawItemValue@CXTPPropertyGridItemColor@@MAEHAAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItemColor.cpp
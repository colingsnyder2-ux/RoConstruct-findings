// roc 2009-12 008ec060  unit: CXTPPopupBar  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec060
//
// 008ec060  6aff                 push -1
// 008ec062  68d1669600           push 0x9666d1
// 008ec067  64a100000000         mov eax, dword ptr fs:[0]
// 008ec06d  50                   push eax
// 008ec06e  83ec08               sub esp, 8
// 008ec071  53                   push ebx
// 008ec072  55                   push ebp
// 008ec073  56                   push esi
// 008ec074  57                   push edi
// 008ec075  a10052b600           mov eax, dword ptr [0xb65200]
// 008ec07a  33c4                 xor eax, esp
// 008ec07c  50                   push eax
// 008ec07d  8d44241c             lea eax, [esp + 0x1c]
// 008ec081  64a300000000         mov dword ptr fs:[0], eax
// 008ec087  8bf1                 mov esi, ecx
// 008ec089  89742414             mov dword ptr [esp + 0x14], esi
// 008ec08d  e83e53f2ff           call 0x8113d0
// 008ec092  33ed                 xor ebp, ebp
// 008ec094  8d8ee4010000         lea ecx, [esi + 0x1e4]
// 008ec09a  896c2424             mov dword ptr [esp + 0x24], ebp
// 008ec09e  c706ccd7a000         mov dword ptr [esi], 0xa0d7cc
// 008ec0a4  c74654bcd7a000       mov dword ptr [esi + 0x54], 0xa0d7bc
// 008ec0ab  c7465c5cd7a000       mov dword ptr [esi + 0x5c], 0xa0d75c
// 008ec0b2  ff1574de9800         call dword ptr [0x98de74]
// 008ec0b8  b803000000           mov eax, 3
// 008ec0bd  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 008ec0c3  8bc8                 mov ecx, eax
// 008ec0c5  8bd0                 mov edx, eax
// 008ec0c7  8bf8                 mov edi, eax
// 008ec0c9  898eac010000         mov dword ptr [esi + 0x1ac], ecx
// 008ec0cf  b8c8000000           mov eax, 0xc8
// 008ec0d4  8bc8                 mov ecx, eax
// 008ec0d6  8986d8010000         mov dword ptr [esi + 0x1d8], eax
// 008ec0dc  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 008ec0e2  b832000000           mov eax, 0x32
// 008ec0e7  bb01000000           mov ebx, 1
// 008ec0ec  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 008ec0f2  898ed4010000         mov dword ptr [esi + 0x1d4], ecx
// 008ec0f8  8bc8                 mov ecx, eax
// 008ec0fa  8996b0010000         mov dword ptr [esi + 0x1b0], edx
// 008ec100  685c020000           push 0x25c
// 008ec105  885c2428             mov byte ptr [esp + 0x28], bl
// 008ec109  89beb4010000         mov dword ptr [esi + 0x1b4], edi
// 008ec10f  899eb8010000         mov dword ptr [esi + 0x1b8], ebx
// 008ec115  899ec4010000         mov dword ptr [esi + 0x1c4], ebx
// 008ec11b  8986bc010000         mov dword ptr [esi + 0x1bc], eax
// 008ec121  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 008ec127  899ec8010000         mov dword ptr [esi + 0x1c8], ebx
// 008ec12d  89aee0010000         mov dword ptr [esi + 0x1e0], ebp
// 008ec133  e82877f0ff           call 0x7f3860
// 008ec138  8bf8                 mov edi, eax
// 008ec13a  83c404               add esp, 4
// 008ec13d  897c2418             mov dword ptr [esp + 0x18], edi
// 008ec141  c644242402           mov byte ptr [esp + 0x24], 2
// 008ec146  3bfd                 cmp edi, ebp
// 008ec148  7427                 je 0x8ec171
// 008ec14a  8bcf                 mov ecx, edi
// 008ec14c  e87f8cf5ff           call 0x844dd0
// 008ec151  c70744d5a000         mov dword ptr [edi], 0xa0d544
// 008ec157  c7475434d5a000       mov dword ptr [edi + 0x54], 0xa0d534
// 008ec15e  c7475cd4d4a000       mov dword ptr [edi + 0x5c], 0xa0d4d4
// 008ec165  c7879c01000002000000 mov dword ptr [edi + 0x19c], 2
// 008ec16f  eb02                 jmp 0x8ec173
// 008ec171  33ff                 xor edi, edi
// 008ec173  8bce                 mov ecx, esi
// 008ec175  885c2424             mov byte ptr [esp + 0x24], bl
// 008ec179  89bee8010000         mov dword ptr [esi + 0x1e8], edi
// 008ec17f  89aecc010000         mov dword ptr [esi + 0x1cc], ebp
// 008ec185  89ae38010000         mov dword ptr [esi + 0x138], ebp
// 008ec18b  89aeec010000         mov dword ptr [esi + 0x1ec], ebp
// 008ec191  e8b2a20300           call 0x926448
// 008ec196  8bc6                 mov eax, esi
// 008ec198  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ec19c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ec1a3  59                   pop ecx
// 008ec1a4  5f                   pop edi
// 008ec1a5  5e                   pop esi
// 008ec1a6  5d                   pop ebp
// 008ec1a7  5b                   pop ebx
// 008ec1a8  83c414               add esp, 0x14
// 008ec1ab  c3                   ret 
// copied from an identical function in another client (function ??0CXTPDialogBar@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source/CommandBars/XTPDialogBar.cpp
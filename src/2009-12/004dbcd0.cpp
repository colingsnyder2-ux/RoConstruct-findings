// roc 2009-12 004dbcd0  unit: G3D::Win32Window  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dbcd0
//
// 004dbcd0  6aff                 push -1
// 004dbcd2  68b43e9300           push 0x933eb4
// 004dbcd7  64a100000000         mov eax, dword ptr fs:[0]
// 004dbcdd  50                   push eax
// 004dbcde  64892500000000       mov dword ptr fs:[0], esp
// 004dbce5  51                   push ecx
// 004dbce6  53                   push ebx
// 004dbce7  56                   push esi
// 004dbce8  8bf1                 mov esi, ecx
// 004dbcea  33db                 xor ebx, ebx
// 004dbcec  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 004dbcf2  895e04               mov dword ptr [esi + 4], ebx
// 004dbcf5  89742408             mov dword ptr [esp + 8], esi
// 004dbcf9  895e08               mov dword ptr [esi + 8], ebx
// 004dbcfc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004dbd00  50                   push eax
// 004dbd01  8d4e10               lea ecx, [esi + 0x10]
// 004dbd04  895c2418             mov dword ptr [esp + 0x18], ebx
// 004dbd08  c706d4959b00         mov dword ptr [esi], 0x9b95d4
// 004dbd0e  ff15f0b69800         call dword ptr [0x98b6f0]
// 004dbd14  885e2c               mov byte ptr [esi + 0x2c], bl
// 004dbd17  c644241401           mov byte ptr [esp + 0x14], 1
// 004dbd1c  391d44d9b700         cmp dword ptr [0xb7d944], ebx
// 004dbd22  7446                 je 0x4dbd6a
// 004dbd24  a1e8dbb700           mov eax, dword ptr [0xb7dbe8]
// 004dbd29  3bc3                 cmp eax, ebx
// 004dbd2b  7521                 jne 0x4dbd4e
// 004dbd2d  53                   push ebx
// 004dbd2e  6a0a                 push 0xa
// 004dbd30  b9e4dbb700           mov ecx, 0xb7dbe4
// 004dbd35  e8a6b2ffff           call 0x4d6fe0
// 004dbd3a  8b0de4dbb700         mov ecx, dword ptr [0xb7dbe4]
// 004dbd40  51                   push ecx
// 004dbd41  6a0a                 push 0xa
// 004dbd43  ff1544d9b700         call dword ptr [0xb7d944]
// 004dbd49  a1e8dbb700           mov eax, dword ptr [0xb7dbe8]
// 004dbd4e  8b15e4dbb700         mov edx, dword ptr [0xb7dbe4]
// 004dbd54  57                   push edi
// 004dbd55  8b7c82fc             mov edi, dword ptr [edx + eax*4 - 4]
// 004dbd59  53                   push ebx
// 004dbd5a  48                   dec eax
// 004dbd5b  50                   push eax
// 004dbd5c  b9e4dbb700           mov ecx, 0xb7dbe4
// 004dbd61  e87ab2ffff           call 0x4d6fe0
// 004dbd66  897e0c               mov dword ptr [esi + 0xc], edi
// 004dbd69  5f                   pop edi
// 004dbd6a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004dbd6e  8bc6                 mov eax, esi
// 004dbd70  5e                   pop esi
// 004dbd71  5b                   pop ebx
// 004dbd72  64890d00000000       mov dword ptr fs:[0], ecx
// 004dbd79  83c410               add esp, 0x10
// 004dbd7c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??0Milestone@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp

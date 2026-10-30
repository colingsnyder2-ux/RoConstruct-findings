// roc 2009-12 008de540  unit: CXTColorLum  size: 613 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008de540
//
// 008de540  6aff                 push -1
// 008de542  68c0579600           push 0x9657c0
// 008de547  64a100000000         mov eax, dword ptr fs:[0]
// 008de54d  50                   push eax
// 008de54e  51                   push ecx
// 008de54f  53                   push ebx
// 008de550  56                   push esi
// 008de551  57                   push edi
// 008de552  a10052b600           mov eax, dword ptr [0xb65200]
// 008de557  33c4                 xor eax, esp
// 008de559  50                   push eax
// 008de55a  8d442414             lea eax, [esp + 0x14]
// 008de55e  64a300000000         mov dword ptr fs:[0], eax
// 008de564  8bf1                 mov esi, ecx
// 008de566  89742410             mov dword ptr [esp + 0x10], esi
// 008de56a  6a30                 push 0x30
// 008de56c  33ff                 xor edi, edi
// 008de56e  57                   push edi
// 008de56f  6861240000           push 0x2461
// 008de574  e873830400           call 0x9268ec
// 008de579  8d8e88000000         lea ecx, [esi + 0x88]
// 008de57f  897c241c             mov dword ptr [esp + 0x1c], edi
// 008de583  c70664b8a000         mov dword ptr [esi], 0xa0b864
// 008de589  e872f2ffff           call 0x8dd800
// 008de58e  8d8e08010000         lea ecx, [esi + 0x108]
// 008de594  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008de599  e862f8ffff           call 0x8dde00
// 008de59e  8d9e80010000         lea ebx, [esi + 0x180]
// 008de5a4  8bcb                 mov ecx, ebx
// 008de5a6  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008de5ab  e8985bf1ff           call 0x7f4148
// 008de5b0  c7038c939f00         mov dword ptr [ebx], 0x9f938c
// 008de5b6  8d9ed4010000         lea ebx, [esi + 0x1d4]
// 008de5bc  8bcb                 mov ecx, ebx
// 008de5be  c644241c03           mov byte ptr [esp + 0x1c], 3
// 008de5c3  e8805bf1ff           call 0x7f4148
// 008de5c8  c7038c939f00         mov dword ptr [ebx], 0x9f938c
// 008de5ce  8d9e28020000         lea ebx, [esi + 0x228]
// 008de5d4  8bcb                 mov ecx, ebx
// 008de5d6  c644241c04           mov byte ptr [esp + 0x1c], 4
// 008de5db  e8685bf1ff           call 0x7f4148
// 008de5e0  c7038c939f00         mov dword ptr [ebx], 0x9f938c
// 008de5e6  8d9e7c020000         lea ebx, [esi + 0x27c]
// 008de5ec  8bcb                 mov ecx, ebx
// 008de5ee  c644241c05           mov byte ptr [esp + 0x1c], 5
// 008de5f3  e8505bf1ff           call 0x7f4148
// 008de5f8  c7038c939f00         mov dword ptr [ebx], 0x9f938c
// 008de5fe  8d9ed0020000         lea ebx, [esi + 0x2d0]
// 008de604  8bcb                 mov ecx, ebx
// 008de606  c644241c06           mov byte ptr [esp + 0x1c], 6
// 008de60b  e8385bf1ff           call 0x7f4148
// 008de610  c7038c939f00         mov dword ptr [ebx], 0x9f938c
// 008de616  8d9e24030000         lea ebx, [esi + 0x324]
// 008de61c  8bcb                 mov ecx, ebx
// 008de61e  c644241c07           mov byte ptr [esp + 0x1c], 7
// 008de623  e8205bf1ff           call 0x7f4148
// 008de628  c7038c939f00         mov dword ptr [ebx], 0x9f938c
// 008de62e  8d9e78030000         lea ebx, [esi + 0x378]
// 008de634  8bcb                 mov ecx, ebx
// 008de636  c644241c08           mov byte ptr [esp + 0x1c], 8
// 008de63b  e8085bf1ff           call 0x7f4148
// 008de640  c703b4b5a000         mov dword ptr [ebx], 0xa0b5b4
// 008de646  8d9ecc030000         lea ebx, [esi + 0x3cc]
// 008de64c  8bcb                 mov ecx, ebx
// 008de64e  c644241c09           mov byte ptr [esp + 0x1c], 9
// 008de653  e8f05af1ff           call 0x7f4148
// 008de658  c703b4b5a000         mov dword ptr [ebx], 0xa0b5b4
// 008de65e  8d9e20040000         lea ebx, [esi + 0x420]
// 008de664  8bcb                 mov ecx, ebx
// 008de666  c644241c0a           mov byte ptr [esp + 0x1c], 0xa
// 008de66b  e8d85af1ff           call 0x7f4148
// 008de670  c703b4b5a000         mov dword ptr [ebx], 0xa0b5b4
// 008de676  8d9e74040000         lea ebx, [esi + 0x474]
// 008de67c  8bcb                 mov ecx, ebx
// 008de67e  c644241c0b           mov byte ptr [esp + 0x1c], 0xb
// 008de683  e8c05af1ff           call 0x7f4148
// 008de688  c703b4b5a000         mov dword ptr [ebx], 0xa0b5b4
// 008de68e  8d9ec8040000         lea ebx, [esi + 0x4c8]
// 008de694  8bcb                 mov ecx, ebx
// 008de696  c644241c0c           mov byte ptr [esp + 0x1c], 0xc
// 008de69b  e8a85af1ff           call 0x7f4148
// 008de6a0  c703b4b5a000         mov dword ptr [ebx], 0xa0b5b4
// 008de6a6  8d9e1c050000         lea ebx, [esi + 0x51c]
// 008de6ac  8bcb                 mov ecx, ebx
// 008de6ae  c644241c0d           mov byte ptr [esp + 0x1c], 0xd
// 008de6b3  e8905af1ff           call 0x7f4148
// 008de6b8  c703b4b5a000         mov dword ptr [ebx], 0xa0b5b4
// 008de6be  8d9e70050000         lea ebx, [esi + 0x570]
// 008de6c4  8bcb                 mov ecx, ebx
// 008de6c6  c644241c0e           mov byte ptr [esp + 0x1c], 0xe
// 008de6cb  e8785af1ff           call 0x7f4148
// 008de6d0  c703a4229f00         mov dword ptr [ebx], 0x9f22a4
// 008de6d6  8d9ec4050000         lea ebx, [esi + 0x5c4]
// 008de6dc  8bcb                 mov ecx, ebx
// 008de6de  c644241c0f           mov byte ptr [esp + 0x1c], 0xf
// 008de6e3  e8605af1ff           call 0x7f4148
// 008de6e8  c703a4229f00         mov dword ptr [ebx], 0x9f22a4
// 008de6ee  8d9e18060000         lea ebx, [esi + 0x618]
// 008de6f4  8bcb                 mov ecx, ebx
// 008de6f6  c644241c10           mov byte ptr [esp + 0x1c], 0x10
// 008de6fb  e8485af1ff           call 0x7f4148
// 008de700  c703a4229f00         mov dword ptr [ebx], 0x9f22a4
// 008de706  8d9e6c060000         lea ebx, [esi + 0x66c]
// 008de70c  8bcb                 mov ecx, ebx
// 008de70e  c644241c11           mov byte ptr [esp + 0x1c], 0x11
// 008de713  e8305af1ff           call 0x7f4148
// 008de718  c703a4229f00         mov dword ptr [ebx], 0x9f22a4
// 008de71e  8d9ec0060000         lea ebx, [esi + 0x6c0]
// 008de724  8bcb                 mov ecx, ebx
// 008de726  c644241c12           mov byte ptr [esp + 0x1c], 0x12
// 008de72b  e8185af1ff           call 0x7f4148
// 008de730  c703a4229f00         mov dword ptr [ebx], 0x9f22a4
// 008de736  8d9e14070000         lea ebx, [esi + 0x714]
// 008de73c  8bcb                 mov ecx, ebx
// 008de73e  c644241c13           mov byte ptr [esp + 0x1c], 0x13
// 008de743  e8005af1ff           call 0x7f4148
// 008de748  c703a4229f00         mov dword ptr [ebx], 0x9f22a4
// 008de74e  8bce                 mov ecx, esi
// 008de750  c644241c14           mov byte ptr [esp + 0x1c], 0x14
// 008de755  e8a2800400           call 0x9267fc
// 008de75a  83c004               add eax, 4
// 008de75d  8320df               and dword ptr [eax], 0xffffffdf
// 008de760  8b442424             mov eax, dword ptr [esp + 0x24]
// 008de764  898680070000         mov dword ptr [esi + 0x780], eax
// 008de76a  89be68070000         mov dword ptr [esi + 0x768], edi
// 008de770  89be6c070000         mov dword ptr [esi + 0x76c], edi
// 008de776  89be70070000         mov dword ptr [esi + 0x770], edi
// 008de77c  89be74070000         mov dword ptr [esi + 0x774], edi
// 008de782  89be78070000         mov dword ptr [esi + 0x778], edi
// 008de788  89be7c070000         mov dword ptr [esi + 0x77c], edi
// 008de78e  8bc6                 mov eax, esi
// 008de790  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008de794  64890d00000000       mov dword ptr fs:[0], ecx
// 008de79b  59                   pop ecx
// 008de79c  5f                   pop edi
// 008de79d  5e                   pop esi
// 008de79e  5b                   pop ebx
// 008de79f  83c410               add esp, 0x10
// 008de7a2  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageCustom@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp
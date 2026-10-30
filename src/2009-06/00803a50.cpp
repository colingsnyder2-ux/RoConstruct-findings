// roc 2009-06 00803a50  unit: CXTColorLum  size: 613 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00803a50
//
// 00803a50  6aff                 push -1
// 00803a52  6820168800           push 0x881620
// 00803a57  64a100000000         mov eax, dword ptr fs:[0]
// 00803a5d  50                   push eax
// 00803a5e  51                   push ecx
// 00803a5f  53                   push ebx
// 00803a60  56                   push esi
// 00803a61  57                   push edi
// 00803a62  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00803a67  33c4                 xor eax, esp
// 00803a69  50                   push eax
// 00803a6a  8d442414             lea eax, [esp + 0x14]
// 00803a6e  64a300000000         mov dword ptr fs:[0], eax
// 00803a74  8bf1                 mov esi, ecx
// 00803a76  89742410             mov dword ptr [esp + 0x10], esi
// 00803a7a  6a30                 push 0x30
// 00803a7c  33ff                 xor edi, edi
// 00803a7e  57                   push edi
// 00803a7f  6861240000           push 0x2461
// 00803a84  e8f7880400           call 0x84c380
// 00803a89  8d8e88000000         lea ecx, [esi + 0x88]
// 00803a8f  897c241c             mov dword ptr [esp + 0x1c], edi
// 00803a93  c706f4b39000         mov dword ptr [esi], 0x90b3f4
// 00803a99  e872f2ffff           call 0x802d10
// 00803a9e  8d8e08010000         lea ecx, [esi + 0x108]
// 00803aa4  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00803aa9  e862f8ffff           call 0x803310
// 00803aae  8d9e80010000         lea ebx, [esi + 0x180]
// 00803ab4  8bcb                 mov ecx, ebx
// 00803ab6  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00803abb  e86058f1ff           call 0x719320
// 00803ac0  c703e48e8f00         mov dword ptr [ebx], 0x8f8ee4
// 00803ac6  8d9ed4010000         lea ebx, [esi + 0x1d4]
// 00803acc  8bcb                 mov ecx, ebx
// 00803ace  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00803ad3  e84858f1ff           call 0x719320
// 00803ad8  c703e48e8f00         mov dword ptr [ebx], 0x8f8ee4
// 00803ade  8d9e28020000         lea ebx, [esi + 0x228]
// 00803ae4  8bcb                 mov ecx, ebx
// 00803ae6  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00803aeb  e83058f1ff           call 0x719320
// 00803af0  c703e48e8f00         mov dword ptr [ebx], 0x8f8ee4
// 00803af6  8d9e7c020000         lea ebx, [esi + 0x27c]
// 00803afc  8bcb                 mov ecx, ebx
// 00803afe  c644241c05           mov byte ptr [esp + 0x1c], 5
// 00803b03  e81858f1ff           call 0x719320
// 00803b08  c703e48e8f00         mov dword ptr [ebx], 0x8f8ee4
// 00803b0e  8d9ed0020000         lea ebx, [esi + 0x2d0]
// 00803b14  8bcb                 mov ecx, ebx
// 00803b16  c644241c06           mov byte ptr [esp + 0x1c], 6
// 00803b1b  e80058f1ff           call 0x719320
// 00803b20  c703e48e8f00         mov dword ptr [ebx], 0x8f8ee4
// 00803b26  8d9e24030000         lea ebx, [esi + 0x324]
// 00803b2c  8bcb                 mov ecx, ebx
// 00803b2e  c644241c07           mov byte ptr [esp + 0x1c], 7
// 00803b33  e8e857f1ff           call 0x719320
// 00803b38  c703e48e8f00         mov dword ptr [ebx], 0x8f8ee4
// 00803b3e  8d9e78030000         lea ebx, [esi + 0x378]
// 00803b44  8bcb                 mov ecx, ebx
// 00803b46  c644241c08           mov byte ptr [esp + 0x1c], 8
// 00803b4b  e8d057f1ff           call 0x719320
// 00803b50  c70344b19000         mov dword ptr [ebx], 0x90b144
// 00803b56  8d9ecc030000         lea ebx, [esi + 0x3cc]
// 00803b5c  8bcb                 mov ecx, ebx
// 00803b5e  c644241c09           mov byte ptr [esp + 0x1c], 9
// 00803b63  e8b857f1ff           call 0x719320
// 00803b68  c70344b19000         mov dword ptr [ebx], 0x90b144
// 00803b6e  8d9e20040000         lea ebx, [esi + 0x420]
// 00803b74  8bcb                 mov ecx, ebx
// 00803b76  c644241c0a           mov byte ptr [esp + 0x1c], 0xa
// 00803b7b  e8a057f1ff           call 0x719320
// 00803b80  c70344b19000         mov dword ptr [ebx], 0x90b144
// 00803b86  8d9e74040000         lea ebx, [esi + 0x474]
// 00803b8c  8bcb                 mov ecx, ebx
// 00803b8e  c644241c0b           mov byte ptr [esp + 0x1c], 0xb
// 00803b93  e88857f1ff           call 0x719320
// 00803b98  c70344b19000         mov dword ptr [ebx], 0x90b144
// 00803b9e  8d9ec8040000         lea ebx, [esi + 0x4c8]
// 00803ba4  8bcb                 mov ecx, ebx
// 00803ba6  c644241c0c           mov byte ptr [esp + 0x1c], 0xc
// 00803bab  e87057f1ff           call 0x719320
// 00803bb0  c70344b19000         mov dword ptr [ebx], 0x90b144
// 00803bb6  8d9e1c050000         lea ebx, [esi + 0x51c]
// 00803bbc  8bcb                 mov ecx, ebx
// 00803bbe  c644241c0d           mov byte ptr [esp + 0x1c], 0xd
// 00803bc3  e85857f1ff           call 0x719320
// 00803bc8  c70344b19000         mov dword ptr [ebx], 0x90b144
// 00803bce  8d9e70050000         lea ebx, [esi + 0x570]
// 00803bd4  8bcb                 mov ecx, ebx
// 00803bd6  c644241c0e           mov byte ptr [esp + 0x1c], 0xe
// 00803bdb  e84057f1ff           call 0x719320
// 00803be0  c703b41a8f00         mov dword ptr [ebx], 0x8f1ab4
// 00803be6  8d9ec4050000         lea ebx, [esi + 0x5c4]
// 00803bec  8bcb                 mov ecx, ebx
// 00803bee  c644241c0f           mov byte ptr [esp + 0x1c], 0xf
// 00803bf3  e82857f1ff           call 0x719320
// 00803bf8  c703b41a8f00         mov dword ptr [ebx], 0x8f1ab4
// 00803bfe  8d9e18060000         lea ebx, [esi + 0x618]
// 00803c04  8bcb                 mov ecx, ebx
// 00803c06  c644241c10           mov byte ptr [esp + 0x1c], 0x10
// 00803c0b  e81057f1ff           call 0x719320
// 00803c10  c703b41a8f00         mov dword ptr [ebx], 0x8f1ab4
// 00803c16  8d9e6c060000         lea ebx, [esi + 0x66c]
// 00803c1c  8bcb                 mov ecx, ebx
// 00803c1e  c644241c11           mov byte ptr [esp + 0x1c], 0x11
// 00803c23  e8f856f1ff           call 0x719320
// 00803c28  c703b41a8f00         mov dword ptr [ebx], 0x8f1ab4
// 00803c2e  8d9ec0060000         lea ebx, [esi + 0x6c0]
// 00803c34  8bcb                 mov ecx, ebx
// 00803c36  c644241c12           mov byte ptr [esp + 0x1c], 0x12
// 00803c3b  e8e056f1ff           call 0x719320
// 00803c40  c703b41a8f00         mov dword ptr [ebx], 0x8f1ab4
// 00803c46  8d9e14070000         lea ebx, [esi + 0x714]
// 00803c4c  8bcb                 mov ecx, ebx
// 00803c4e  c644241c13           mov byte ptr [esp + 0x1c], 0x13
// 00803c53  e8c856f1ff           call 0x719320
// 00803c58  c703b41a8f00         mov dword ptr [ebx], 0x8f1ab4
// 00803c5e  8bce                 mov ecx, esi
// 00803c60  c644241c14           mov byte ptr [esp + 0x1c], 0x14
// 00803c65  e826860400           call 0x84c290
// 00803c6a  83c004               add eax, 4
// 00803c6d  8320df               and dword ptr [eax], 0xffffffdf
// 00803c70  8b442424             mov eax, dword ptr [esp + 0x24]
// 00803c74  898680070000         mov dword ptr [esi + 0x780], eax
// 00803c7a  89be68070000         mov dword ptr [esi + 0x768], edi
// 00803c80  89be6c070000         mov dword ptr [esi + 0x76c], edi
// 00803c86  89be70070000         mov dword ptr [esi + 0x770], edi
// 00803c8c  89be74070000         mov dword ptr [esi + 0x774], edi
// 00803c92  89be78070000         mov dword ptr [esi + 0x778], edi
// 00803c98  89be7c070000         mov dword ptr [esi + 0x77c], edi
// 00803c9e  8bc6                 mov eax, esi
// 00803ca0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00803ca4  64890d00000000       mov dword ptr fs:[0], ecx
// 00803cab  59                   pop ecx
// 00803cac  5f                   pop edi
// 00803cad  5e                   pop esi
// 00803cae  5b                   pop ebx
// 00803caf  83c410               add esp, 0x10
// 00803cb2  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageCustom@@QAE@PAVCXTColorDialog@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp
// roc 2011-06 008eb3a0  unit: CXTColorLum  size: 613 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eb3a0
//
// 008eb3a0  6aff                 push -1
// 008eb3a2  6810e2a000           push 0xa0e210
// 008eb3a7  64a100000000         mov eax, dword ptr fs:[0]
// 008eb3ad  50                   push eax
// 008eb3ae  51                   push ecx
// 008eb3af  53                   push ebx
// 008eb3b0  56                   push esi
// 008eb3b1  57                   push edi
// 008eb3b2  a12058c900           mov eax, dword ptr [0xc95820]
// 008eb3b7  33c4                 xor eax, esp
// 008eb3b9  50                   push eax
// 008eb3ba  8d442414             lea eax, [esp + 0x14]
// 008eb3be  64a300000000         mov dword ptr fs:[0], eax
// 008eb3c4  8bf1                 mov esi, ecx
// 008eb3c6  89742410             mov dword ptr [esp + 0x10], esi
// 008eb3ca  6a30                 push 0x30
// 008eb3cc  33ff                 xor edi, edi
// 008eb3ce  57                   push edi
// 008eb3cf  6861240000           push 0x2461
// 008eb3d4  e8d7190e00           call 0x9ccdb0
// 008eb3d9  8d8e88000000         lea ecx, [esi + 0x88]
// 008eb3df  897c241c             mov dword ptr [esp + 0x1c], edi
// 008eb3e3  c7068496ad00         mov dword ptr [esi], 0xad9684
// 008eb3e9  e872f2ffff           call 0x8ea660
// 008eb3ee  8d8e08010000         lea ecx, [esi + 0x108]
// 008eb3f4  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008eb3f9  e832f8ffff           call 0x8eac30
// 008eb3fe  8d9e80010000         lea ebx, [esi + 0x180]
// 008eb404  8bcb                 mov ecx, ebx
// 008eb406  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008eb40b  e836f5f1ff           call 0x80a946
// 008eb410  c703ecf1ac00         mov dword ptr [ebx], 0xacf1ec
// 008eb416  8d9ed4010000         lea ebx, [esi + 0x1d4]
// 008eb41c  8bcb                 mov ecx, ebx
// 008eb41e  c644241c03           mov byte ptr [esp + 0x1c], 3
// 008eb423  e81ef5f1ff           call 0x80a946
// 008eb428  c703ecf1ac00         mov dword ptr [ebx], 0xacf1ec
// 008eb42e  8d9e28020000         lea ebx, [esi + 0x228]
// 008eb434  8bcb                 mov ecx, ebx
// 008eb436  c644241c04           mov byte ptr [esp + 0x1c], 4
// 008eb43b  e806f5f1ff           call 0x80a946
// 008eb440  c703ecf1ac00         mov dword ptr [ebx], 0xacf1ec
// 008eb446  8d9e7c020000         lea ebx, [esi + 0x27c]
// 008eb44c  8bcb                 mov ecx, ebx
// 008eb44e  c644241c05           mov byte ptr [esp + 0x1c], 5
// 008eb453  e8eef4f1ff           call 0x80a946
// 008eb458  c703ecf1ac00         mov dword ptr [ebx], 0xacf1ec
// 008eb45e  8d9ed0020000         lea ebx, [esi + 0x2d0]
// 008eb464  8bcb                 mov ecx, ebx
// 008eb466  c644241c06           mov byte ptr [esp + 0x1c], 6
// 008eb46b  e8d6f4f1ff           call 0x80a946
// 008eb470  c703ecf1ac00         mov dword ptr [ebx], 0xacf1ec
// 008eb476  8d9e24030000         lea ebx, [esi + 0x324]
// 008eb47c  8bcb                 mov ecx, ebx
// 008eb47e  c644241c07           mov byte ptr [esp + 0x1c], 7
// 008eb483  e8bef4f1ff           call 0x80a946
// 008eb488  c703ecf1ac00         mov dword ptr [ebx], 0xacf1ec
// 008eb48e  8d9e78030000         lea ebx, [esi + 0x378]
// 008eb494  8bcb                 mov ecx, ebx
// 008eb496  c644241c08           mov byte ptr [esp + 0x1c], 8
// 008eb49b  e8a6f4f1ff           call 0x80a946
// 008eb4a0  c703d493ad00         mov dword ptr [ebx], 0xad93d4
// 008eb4a6  8d9ecc030000         lea ebx, [esi + 0x3cc]
// 008eb4ac  8bcb                 mov ecx, ebx
// 008eb4ae  c644241c09           mov byte ptr [esp + 0x1c], 9
// 008eb4b3  e88ef4f1ff           call 0x80a946
// 008eb4b8  c703d493ad00         mov dword ptr [ebx], 0xad93d4
// 008eb4be  8d9e20040000         lea ebx, [esi + 0x420]
// 008eb4c4  8bcb                 mov ecx, ebx
// 008eb4c6  c644241c0a           mov byte ptr [esp + 0x1c], 0xa
// 008eb4cb  e876f4f1ff           call 0x80a946
// 008eb4d0  c703d493ad00         mov dword ptr [ebx], 0xad93d4
// 008eb4d6  8d9e74040000         lea ebx, [esi + 0x474]
// 008eb4dc  8bcb                 mov ecx, ebx
// 008eb4de  c644241c0b           mov byte ptr [esp + 0x1c], 0xb
// 008eb4e3  e85ef4f1ff           call 0x80a946
// 008eb4e8  c703d493ad00         mov dword ptr [ebx], 0xad93d4
// 008eb4ee  8d9ec8040000         lea ebx, [esi + 0x4c8]
// 008eb4f4  8bcb                 mov ecx, ebx
// 008eb4f6  c644241c0c           mov byte ptr [esp + 0x1c], 0xc
// 008eb4fb  e846f4f1ff           call 0x80a946
// 008eb500  c703d493ad00         mov dword ptr [ebx], 0xad93d4
// 008eb506  8d9e1c050000         lea ebx, [esi + 0x51c]
// 008eb50c  8bcb                 mov ecx, ebx
// 008eb50e  c644241c0d           mov byte ptr [esp + 0x1c], 0xd
// 008eb513  e82ef4f1ff           call 0x80a946
// 008eb518  c703d493ad00         mov dword ptr [ebx], 0xad93d4
// 008eb51e  8d9e70050000         lea ebx, [esi + 0x570]
// 008eb524  8bcb                 mov ecx, ebx
// 008eb526  c644241c0e           mov byte ptr [esp + 0x1c], 0xe
// 008eb52b  e816f4f1ff           call 0x80a946
// 008eb530  c7038423ac00         mov dword ptr [ebx], 0xac2384
// 008eb536  8d9ec4050000         lea ebx, [esi + 0x5c4]
// 008eb53c  8bcb                 mov ecx, ebx
// 008eb53e  c644241c0f           mov byte ptr [esp + 0x1c], 0xf
// 008eb543  e8fef3f1ff           call 0x80a946
// 008eb548  c7038423ac00         mov dword ptr [ebx], 0xac2384
// 008eb54e  8d9e18060000         lea ebx, [esi + 0x618]
// 008eb554  8bcb                 mov ecx, ebx
// 008eb556  c644241c10           mov byte ptr [esp + 0x1c], 0x10
// 008eb55b  e8e6f3f1ff           call 0x80a946
// 008eb560  c7038423ac00         mov dword ptr [ebx], 0xac2384
// 008eb566  8d9e6c060000         lea ebx, [esi + 0x66c]
// 008eb56c  8bcb                 mov ecx, ebx
// 008eb56e  c644241c11           mov byte ptr [esp + 0x1c], 0x11
// 008eb573  e8cef3f1ff           call 0x80a946
// 008eb578  c7038423ac00         mov dword ptr [ebx], 0xac2384
// 008eb57e  8d9ec0060000         lea ebx, [esi + 0x6c0]
// 008eb584  8bcb                 mov ecx, ebx
// 008eb586  c644241c12           mov byte ptr [esp + 0x1c], 0x12
// 008eb58b  e8b6f3f1ff           call 0x80a946
// 008eb590  c7038423ac00         mov dword ptr [ebx], 0xac2384
// 008eb596  8d9e14070000         lea ebx, [esi + 0x714]
// 008eb59c  8bcb                 mov ecx, ebx
// 008eb59e  c644241c13           mov byte ptr [esp + 0x1c], 0x13
// 008eb5a3  e89ef3f1ff           call 0x80a946
// 008eb5a8  c7038423ac00         mov dword ptr [ebx], 0xac2384
// 008eb5ae  8bce                 mov ecx, esi
// 008eb5b0  c644241c14           mov byte ptr [esp + 0x1c], 0x14
// 008eb5b5  e858160e00           call 0x9ccc12
// 008eb5ba  83c004               add eax, 4
// 008eb5bd  8320df               and dword ptr [eax], 0xffffffdf
// 008eb5c0  8b442424             mov eax, dword ptr [esp + 0x24]
// 008eb5c4  898680070000         mov dword ptr [esi + 0x780], eax
// 008eb5ca  89be68070000         mov dword ptr [esi + 0x768], edi
// 008eb5d0  89be6c070000         mov dword ptr [esi + 0x76c], edi
// 008eb5d6  89be70070000         mov dword ptr [esi + 0x770], edi
// 008eb5dc  89be74070000         mov dword ptr [esi + 0x774], edi
// 008eb5e2  89be78070000         mov dword ptr [esi + 0x778], edi
// 008eb5e8  89be7c070000         mov dword ptr [esi + 0x77c], edi
// 008eb5ee  8bc6                 mov eax, esi
// 008eb5f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008eb5f4  64890d00000000       mov dword ptr fs:[0], ecx
// 008eb5fb  59                   pop ecx
// 008eb5fc  5f                   pop edi
// 008eb5fd  5e                   pop esi
// 008eb5fe  5b                   pop ebx
// 008eb5ff  83c410               add esp, 0x10
// 008eb602  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageCustom@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp
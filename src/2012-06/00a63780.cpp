// roc 2012-06 00a63780  unit: CXTColorLum  size: 613 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a63780
//
// 00a63780  6aff                 push -1
// 00a63782  68407eae00           push 0xae7e40
// 00a63787  64a100000000         mov eax, dword ptr fs:[0]
// 00a6378d  50                   push eax
// 00a6378e  51                   push ecx
// 00a6378f  53                   push ebx
// 00a63790  56                   push esi
// 00a63791  57                   push edi
// 00a63792  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a63797  33c4                 xor eax, esp
// 00a63799  50                   push eax
// 00a6379a  8d442414             lea eax, [esp + 0x14]
// 00a6379e  64a300000000         mov dword ptr fs:[0], eax
// 00a637a4  8bf1                 mov esi, ecx
// 00a637a6  89742410             mov dword ptr [esp + 0x10], esi
// 00a637aa  6a30                 push 0x30
// 00a637ac  33ff                 xor edi, edi
// 00a637ae  57                   push edi
// 00a637af  6861240000           push 0x2461
// 00a637b4  e8a5650300           call 0xa99d5e
// 00a637b9  8d8e88000000         lea ecx, [esi + 0x88]
// 00a637bf  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a637c3  c7061c4dc200         mov dword ptr [esi], 0xc24d1c
// 00a637c9  e872f2ffff           call 0xa62a40
// 00a637ce  8d8e08010000         lea ecx, [esi + 0x108]
// 00a637d4  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00a637d9  e832f8ffff           call 0xa63010
// 00a637de  8d9e80010000         lea ebx, [esi + 0x180]
// 00a637e4  8bcb                 mov ecx, ebx
// 00a637e6  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00a637eb  e8d6f1f1ff           call 0x9829c6
// 00a637f0  c703a4a8c100         mov dword ptr [ebx], 0xc1a8a4
// 00a637f6  8d9ed4010000         lea ebx, [esi + 0x1d4]
// 00a637fc  8bcb                 mov ecx, ebx
// 00a637fe  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00a63803  e8bef1f1ff           call 0x9829c6
// 00a63808  c703a4a8c100         mov dword ptr [ebx], 0xc1a8a4
// 00a6380e  8d9e28020000         lea ebx, [esi + 0x228]
// 00a63814  8bcb                 mov ecx, ebx
// 00a63816  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00a6381b  e8a6f1f1ff           call 0x9829c6
// 00a63820  c703a4a8c100         mov dword ptr [ebx], 0xc1a8a4
// 00a63826  8d9e7c020000         lea ebx, [esi + 0x27c]
// 00a6382c  8bcb                 mov ecx, ebx
// 00a6382e  c644241c05           mov byte ptr [esp + 0x1c], 5
// 00a63833  e88ef1f1ff           call 0x9829c6
// 00a63838  c703a4a8c100         mov dword ptr [ebx], 0xc1a8a4
// 00a6383e  8d9ed0020000         lea ebx, [esi + 0x2d0]
// 00a63844  8bcb                 mov ecx, ebx
// 00a63846  c644241c06           mov byte ptr [esp + 0x1c], 6
// 00a6384b  e876f1f1ff           call 0x9829c6
// 00a63850  c703a4a8c100         mov dword ptr [ebx], 0xc1a8a4
// 00a63856  8d9e24030000         lea ebx, [esi + 0x324]
// 00a6385c  8bcb                 mov ecx, ebx
// 00a6385e  c644241c07           mov byte ptr [esp + 0x1c], 7
// 00a63863  e85ef1f1ff           call 0x9829c6
// 00a63868  c703a4a8c100         mov dword ptr [ebx], 0xc1a8a4
// 00a6386e  8d9e78030000         lea ebx, [esi + 0x378]
// 00a63874  8bcb                 mov ecx, ebx
// 00a63876  c644241c08           mov byte ptr [esp + 0x1c], 8
// 00a6387b  e846f1f1ff           call 0x9829c6
// 00a63880  c7036c4ac200         mov dword ptr [ebx], 0xc24a6c
// 00a63886  8d9ecc030000         lea ebx, [esi + 0x3cc]
// 00a6388c  8bcb                 mov ecx, ebx
// 00a6388e  c644241c09           mov byte ptr [esp + 0x1c], 9
// 00a63893  e82ef1f1ff           call 0x9829c6
// 00a63898  c7036c4ac200         mov dword ptr [ebx], 0xc24a6c
// 00a6389e  8d9e20040000         lea ebx, [esi + 0x420]
// 00a638a4  8bcb                 mov ecx, ebx
// 00a638a6  c644241c0a           mov byte ptr [esp + 0x1c], 0xa
// 00a638ab  e816f1f1ff           call 0x9829c6
// 00a638b0  c7036c4ac200         mov dword ptr [ebx], 0xc24a6c
// 00a638b6  8d9e74040000         lea ebx, [esi + 0x474]
// 00a638bc  8bcb                 mov ecx, ebx
// 00a638be  c644241c0b           mov byte ptr [esp + 0x1c], 0xb
// 00a638c3  e8fef0f1ff           call 0x9829c6
// 00a638c8  c7036c4ac200         mov dword ptr [ebx], 0xc24a6c
// 00a638ce  8d9ec8040000         lea ebx, [esi + 0x4c8]
// 00a638d4  8bcb                 mov ecx, ebx
// 00a638d6  c644241c0c           mov byte ptr [esp + 0x1c], 0xc
// 00a638db  e8e6f0f1ff           call 0x9829c6
// 00a638e0  c7036c4ac200         mov dword ptr [ebx], 0xc24a6c
// 00a638e6  8d9e1c050000         lea ebx, [esi + 0x51c]
// 00a638ec  8bcb                 mov ecx, ebx
// 00a638ee  c644241c0d           mov byte ptr [esp + 0x1c], 0xd
// 00a638f3  e8cef0f1ff           call 0x9829c6
// 00a638f8  c7036c4ac200         mov dword ptr [ebx], 0xc24a6c
// 00a638fe  8d9e70050000         lea ebx, [esi + 0x570]
// 00a63904  8bcb                 mov ecx, ebx
// 00a63906  c644241c0e           mov byte ptr [esp + 0x1c], 0xe
// 00a6390b  e8b6f0f1ff           call 0x9829c6
// 00a63910  c7036cdac000         mov dword ptr [ebx], 0xc0da6c
// 00a63916  8d9ec4050000         lea ebx, [esi + 0x5c4]
// 00a6391c  8bcb                 mov ecx, ebx
// 00a6391e  c644241c0f           mov byte ptr [esp + 0x1c], 0xf
// 00a63923  e89ef0f1ff           call 0x9829c6
// 00a63928  c7036cdac000         mov dword ptr [ebx], 0xc0da6c
// 00a6392e  8d9e18060000         lea ebx, [esi + 0x618]
// 00a63934  8bcb                 mov ecx, ebx
// 00a63936  c644241c10           mov byte ptr [esp + 0x1c], 0x10
// 00a6393b  e886f0f1ff           call 0x9829c6
// 00a63940  c7036cdac000         mov dword ptr [ebx], 0xc0da6c
// 00a63946  8d9e6c060000         lea ebx, [esi + 0x66c]
// 00a6394c  8bcb                 mov ecx, ebx
// 00a6394e  c644241c11           mov byte ptr [esp + 0x1c], 0x11
// 00a63953  e86ef0f1ff           call 0x9829c6
// 00a63958  c7036cdac000         mov dword ptr [ebx], 0xc0da6c
// 00a6395e  8d9ec0060000         lea ebx, [esi + 0x6c0]
// 00a63964  8bcb                 mov ecx, ebx
// 00a63966  c644241c12           mov byte ptr [esp + 0x1c], 0x12
// 00a6396b  e856f0f1ff           call 0x9829c6
// 00a63970  c7036cdac000         mov dword ptr [ebx], 0xc0da6c
// 00a63976  8d9e14070000         lea ebx, [esi + 0x714]
// 00a6397c  8bcb                 mov ecx, ebx
// 00a6397e  c644241c13           mov byte ptr [esp + 0x1c], 0x13
// 00a63983  e83ef0f1ff           call 0x9829c6
// 00a63988  c7036cdac000         mov dword ptr [ebx], 0xc0da6c
// 00a6398e  8bce                 mov ecx, esi
// 00a63990  c644241c14           mov byte ptr [esp + 0x1c], 0x14
// 00a63995  e826620300           call 0xa99bc0
// 00a6399a  83c004               add eax, 4
// 00a6399d  8320df               and dword ptr [eax], 0xffffffdf
// 00a639a0  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a639a4  898680070000         mov dword ptr [esi + 0x780], eax
// 00a639aa  89be68070000         mov dword ptr [esi + 0x768], edi
// 00a639b0  89be6c070000         mov dword ptr [esi + 0x76c], edi
// 00a639b6  89be70070000         mov dword ptr [esi + 0x770], edi
// 00a639bc  89be74070000         mov dword ptr [esi + 0x774], edi
// 00a639c2  89be78070000         mov dword ptr [esi + 0x778], edi
// 00a639c8  89be7c070000         mov dword ptr [esi + 0x77c], edi
// 00a639ce  8bc6                 mov eax, esi
// 00a639d0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a639d4  64890d00000000       mov dword ptr fs:[0], ecx
// 00a639db  59                   pop ecx
// 00a639dc  5f                   pop edi
// 00a639dd  5e                   pop esi
// 00a639de  5b                   pop ebx
// 00a639df  83c410               add esp, 0x10
// 00a639e2  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageCustom@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp
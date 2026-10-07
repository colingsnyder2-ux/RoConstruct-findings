// roc 2008-06 00772e60  unit: CXTPControlCustom  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772e60
//
// 00772e60  53                   push ebx
// 00772e61  56                   push esi
// 00772e62  57                   push edi
// 00772e63  8bf1                 mov esi, ecx
// 00772e65  8d442410             lea eax, [esp + 0x10]
// 00772e69  50                   push eax
// 00772e6a  8dbec0000000         lea edi, [esi + 0xc0]
// 00772e70  57                   push edi
// 00772e71  ff15682c8000         call dword ptr [0x802c68]
// 00772e77  85c0                 test eax, eax
// 00772e79  742e                 je 0x772ea9
// 00772e7b  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00772e81  85c9                 test ecx, ecx
// 00772e83  0f84d4000000         je 0x772f5d
// 00772e89  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00772e8f  85c0                 test eax, eax
// 00772e91  7504                 jne 0x772e97
// 00772e93  33db                 xor ebx, ebx
// 00772e95  eb03                 jmp 0x772e9a
// 00772e97  8b5820               mov ebx, dword ptr [eax + 0x20]
// 00772e9a  51                   push ecx
// 00772e9b  ff15f82d8000         call dword ptr [0x802df8]
// 00772ea1  3bc3                 cmp eax, ebx
// 00772ea3  0f84b4000000         je 0x772f5d
// 00772ea9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00772ead  8b542414             mov edx, dword ptr [esp + 0x14]
// 00772eb1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00772eb5  890f                 mov dword ptr [edi], ecx
// 00772eb7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00772ebb  895704               mov dword ptr [edi + 4], edx
// 00772ebe  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 00772ec4  894708               mov dword ptr [edi + 8], eax
// 00772ec7  52                   push edx
// 00772ec8  894f0c               mov dword ptr [edi + 0xc], ecx
// 00772ecb  e80eddf2ff           call 0x6a0bde
// 00772ed0  8bf8                 mov edi, eax
// 00772ed2  85ff                 test edi, edi
// 00772ed4  0f8483000000         je 0x772f5d
// 00772eda  8b4720               mov eax, dword ptr [edi + 0x20]
// 00772edd  85c0                 test eax, eax
// 00772edf  747c                 je 0x772f5d
// 00772ee1  50                   push eax
// 00772ee2  ff15502d8000         call dword ptr [0x802d50]
// 00772ee8  85c0                 test eax, eax
// 00772eea  7471                 je 0x772f5d
// 00772eec  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00772ef2  50                   push eax
// 00772ef3  8bcf                 mov ecx, edi
// 00772ef5  e816edf6ff           call 0x6e1c10
// 00772efa  6a00                 push 0
// 00772efc  6800000040           push 0x40000000
// 00772f01  6800000080           push 0x80000000
// 00772f06  8bcf                 mov ecx, edi
// 00772f08  e805dff2ff           call 0x6a0e12
// 00772f0d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00772f11  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00772f15  2b8e8c010000         sub ecx, dword ptr [esi + 0x18c]
// 00772f1b  039e84010000         add ebx, dword ptr [esi + 0x184]
// 00772f21  8b442418             mov eax, dword ptr [esp + 0x18]
// 00772f25  8b542410             mov edx, dword ptr [esp + 0x10]
// 00772f29  039680010000         add edx, dword ptr [esi + 0x180]
// 00772f2f  2b8688010000         sub eax, dword ptr [esi + 0x188]
// 00772f35  6a01                 push 1
// 00772f37  894c2420             mov dword ptr [esp + 0x20], ecx
// 00772f3b  2bcb                 sub ecx, ebx
// 00772f3d  51                   push ecx
// 00772f3e  89442420             mov dword ptr [esp + 0x20], eax
// 00772f42  2bc2                 sub eax, edx
// 00772f44  50                   push eax
// 00772f45  53                   push ebx
// 00772f46  52                   push edx
// 00772f47  8bcf                 mov ecx, edi
// 00772f49  89542424             mov dword ptr [esp + 0x24], edx
// 00772f4d  895c2428             mov dword ptr [esp + 0x28], ebx
// 00772f51  e8f6daf2ff           call 0x6a0a4c
// 00772f56  8bce                 mov ecx, esi
// 00772f58  e8c3fbffff           call 0x772b20
// 00772f5d  5f                   pop edi
// 00772f5e  5e                   pop esi
// 00772f5f  5b                   pop ebx
// 00772f60  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetRect@CXTPControlCustom@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp

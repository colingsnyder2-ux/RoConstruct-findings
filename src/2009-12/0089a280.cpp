// roc 2009-12 0089a280  unit: CXTPRibbonBar  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a280
//
// 0089a280  83ec14               sub esp, 0x14
// 0089a283  53                   push ebx
// 0089a284  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0089a288  56                   push esi
// 0089a289  8bf1                 mov esi, ecx
// 0089a28b  33c0                 xor eax, eax
// 0089a28d  3b9e7c020000         cmp ebx, dword ptr [esi + 0x27c]
// 0089a293  57                   push edi
// 0089a294  0f9dc0               setge al
// 0089a297  c7865802000000000000 mov dword ptr [esi + 0x258], 0
// 0089a2a1  8bf8                 mov edi, eax
// 0089a2a3  e8e8cdf6ff           call 0x807090
// 0089a2a8  50                   push eax
// 0089a2a9  8d4c2414             lea ecx, [esp + 0x14]
// 0089a2ad  e8be0ffbff           call 0x84b270
// 0089a2b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089a2b6  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0089a2ba  3b8e7c020000         cmp ecx, dword ptr [esi + 0x27c]
// 0089a2c0  7d02                 jge 0x89a2c4
// 0089a2c2  33ff                 xor edi, edi
// 0089a2c4  3bbe3c020000         cmp edi, dword ptr [esi + 0x23c]
// 0089a2ca  741c                 je 0x89a2e8
// 0089a2cc  8bce                 mov ecx, esi
// 0089a2ce  89be3c020000         mov dword ptr [esi + 0x23c], edi
// 0089a2d4  e8f7a9ffff           call 0x894cd0
// 0089a2d9  85c0                 test eax, eax
// 0089a2db  740b                 je 0x89a2e8
// 0089a2dd  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 0089a2e3  e8a8140500           call 0x8eb790
// 0089a2e8  85ff                 test edi, edi
// 0089a2ea  7512                 jne 0x89a2fe
// 0089a2ec  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089a2f0  897804               mov dword ptr [eax + 4], edi
// 0089a2f3  5f                   pop edi
// 0089a2f4  5e                   pop esi
// 0089a2f5  8918                 mov dword ptr [eax], ebx
// 0089a2f7  5b                   pop ebx
// 0089a2f8  83c414               add esp, 0x14
// 0089a2fb  c21000               ret 0x10
// 0089a2fe  8bce                 mov ecx, esi
// 0089a300  e8abbeffff           call 0x8961b0
// 0089a305  8b16                 mov edx, dword ptr [esi]
// 0089a307  8bd8                 mov ebx, eax
// 0089a309  8b822c020000         mov eax, dword ptr [edx + 0x22c]
// 0089a30f  8bce                 mov ecx, esi
// 0089a311  ffd0                 call eax
// 0089a313  8b16                 mov edx, dword ptr [esi]
// 0089a315  8b9228020000         mov edx, dword ptr [edx + 0x228]
// 0089a31b  8bce                 mov ecx, esi
// 0089a31d  8944240c             mov dword ptr [esp + 0xc], eax
// 0089a321  ffd2                 call edx
// 0089a323  8bf8                 mov edi, eax
// 0089a325  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089a329  03c3                 add eax, ebx
// 0089a32b  8bce                 mov ecx, esi
// 0089a32d  03f8                 add edi, eax
// 0089a32f  e8ccbcffff           call 0x896000
// 0089a334  8bd0                 mov edx, eax
// 0089a336  8bce                 mov ecx, esi
// 0089a338  89965c020000         mov dword ptr [esi + 0x25c], edx
// 0089a33e  e8ddb2ffff           call 0x895620
// 0089a343  8bd8                 mov ebx, eax
// 0089a345  85db                 test ebx, ebx
// 0089a347  7404                 je 0x89a34d
// 0089a349  8d7c1701             lea edi, [edi + edx + 1]
// 0089a34d  e80eabffff           call 0x894e60
// 0089a352  85c0                 test eax, eax
// 0089a354  7507                 jne 0x89a35d
// 0089a356  85db                 test ebx, ebx
// 0089a358  7503                 jne 0x89a35d
// 0089a35a  83c702               add edi, 2
// 0089a35d  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0089a361  83e340               and ebx, 0x40
// 0089a364  740b                 je 0x89a371
// 0089a366  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089a36a  57                   push edi
// 0089a36b  50                   push eax
// 0089a36c  e85ff3ffff           call 0x8996d0
// 0089a371  83be5802000000       cmp dword ptr [esi + 0x258], 0
// 0089a378  7411                 je 0x89a38b
// 0089a37a  8bce                 mov ecx, esi
// 0089a37c  e86fd4f6ff           call 0x8077f0
// 0089a381  c7865802000000000000 mov dword ptr [esi + 0x258], 0
// 0089a38b  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 0089a391  a801                 test al, 1
// 0089a393  741d                 je 0x89a3b2
// 0089a395  85db                 test ebx, ebx
// 0089a397  7419                 je 0x89a3b2
// 0089a399  8b16                 mov edx, dword ptr [esi]
// 0089a39b  83e0fe               and eax, 0xfffffffe
// 0089a39e  6a01                 push 1
// 0089a3a0  8986e8000000         mov dword ptr [esi + 0xe8], eax
// 0089a3a6  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0089a3ac  6a00                 push 0
// 0089a3ae  8bce                 mov ecx, esi
// 0089a3b0  ffd0                 call eax
// 0089a3b2  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089a3b6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089a3ba  897804               mov dword ptr [eax + 4], edi
// 0089a3bd  5f                   pop edi
// 0089a3be  5e                   pop esi
// 0089a3bf  8908                 mov dword ptr [eax], ecx
// 0089a3c1  5b                   pop ebx
// 0089a3c2  83c414               add esp, 0x14
// 0089a3c5  c21000               ret 0x10
// copied from an identical function in another client (function ?CalcDockingLayout@CXTPRibbonBar@@UAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp
// roc 2009-12 00812b60  unit: CXTPToolBar  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812b60
//
// 00812b60  83ec20               sub esp, 0x20
// 00812b63  56                   push esi
// 00812b64  8bf1                 mov esi, ecx
// 00812b66  85f6                 test esi, esi
// 00812b68  0f8403010000         je 0x812c71
// 00812b6e  837e2000             cmp dword ptr [esi + 0x20], 0
// 00812b72  0f84f9000000         je 0x812c71
// 00812b78  8b06                 mov eax, dword ptr [esi]
// 00812b7a  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00812b80  ffd2                 call edx
// 00812b82  85c0                 test eax, eax
// 00812b84  0f84e7000000         je 0x812c71
// 00812b8a  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 00812b91  0f85da000000         jne 0x812c71
// 00812b97  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 00812b9e  57                   push edi
// 00812b9f  c786a401000001000000 mov dword ptr [esi + 0x1a4], 1
// 00812ba9  8bce                 mov ecx, esi
// 00812bab  745a                 je 0x812c07
// 00812bad  e81e19ffff           call 0x8044d0
// 00812bb2  85c0                 test eax, eax
// 00812bb4  740e                 je 0x812bc4
// 00812bb6  6a00                 push 0
// 00812bb8  8bc8                 mov ecx, eax
// 00812bba  e8e11d0000           call 0x8149a0
// 00812bbf  e992000000           jmp 0x812c56
// 00812bc4  8bce                 mov ecx, esi
// 00812bc6  e8c544ffff           call 0x807090
// 00812bcb  8bf8                 mov edi, eax
// 00812bcd  57                   push edi
// 00812bce  8d4c240c             lea ecx, [esp + 0xc]
// 00812bd2  e8f9860300           call 0x84b2d0
// 00812bd7  85ff                 test edi, edi
// 00812bd9  747b                 je 0x812c56
// 00812bdb  8b442414             mov eax, dword ptr [esp + 0x14]
// 00812bdf  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00812be3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00812be7  2b542408             sub edx, dword ptr [esp + 8]
// 00812beb  0fb7c8               movzx ecx, ax
// 00812bee  0fb7c2               movzx eax, dx
// 00812bf1  c1e110               shl ecx, 0x10
// 00812bf4  0bc8                 or ecx, eax
// 00812bf6  51                   push ecx
// 00812bf7  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00812bfa  6a00                 push 0
// 00812bfc  6a05                 push 5
// 00812bfe  51                   push ecx
// 00812bff  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00812c05  eb4f                 jmp 0x812c56
// 00812c07  8b16                 mov edx, dword ptr [esi]
// 00812c09  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00812c0f  ffd0                 call eax
// 00812c11  85c0                 test eax, eax
// 00812c13  7441                 je 0x812c56
// 00812c15  8b16                 mov edx, dword ptr [esi]
// 00812c17  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 00812c1d  6a46                 push 0x46
// 00812c1f  6aff                 push -1
// 00812c21  8d442410             lea eax, [esp + 0x10]
// 00812c25  50                   push eax
// 00812c26  8bce                 mov ecx, esi
// 00812c28  ffd2                 call edx
// 00812c2a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00812c2d  8d442418             lea eax, [esp + 0x18]
// 00812c31  50                   push eax
// 00812c32  51                   push ecx
// 00812c33  ff1570cc9800         call dword ptr [0x98cc70]
// 00812c39  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00812c3d  8b442408             mov eax, dword ptr [esp + 8]
// 00812c41  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00812c45  6a01                 push 1
// 00812c47  52                   push edx
// 00812c48  8b542420             mov edx, dword ptr [esp + 0x20]
// 00812c4c  50                   push eax
// 00812c4d  51                   push ecx
// 00812c4e  52                   push edx
// 00812c4f  8bce                 mov ecx, esi
// 00812c51  e8dc0ffeff           call 0x7f3c32
// 00812c56  8b06                 mov eax, dword ptr [esi]
// 00812c58  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00812c5e  6a01                 push 1
// 00812c60  6a00                 push 0
// 00812c62  8bce                 mov ecx, esi
// 00812c64  ffd2                 call edx
// 00812c66  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 00812c70  5f                   pop edi
// 00812c71  5e                   pop esi
// 00812c72  83c420               add esp, 0x20
// 00812c75  c3                   ret 
// copied from an identical function in another client (function ?OnRecalcLayout@CXTPToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
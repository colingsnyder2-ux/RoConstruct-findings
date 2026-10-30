// roc 2011-06 008f8ce0  unit: CXTPDialogBar::CControlCaptionPopup  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8ce0
//
// 008f8ce0  6aff                 push -1
// 008f8ce2  6841f1a000           push 0xa0f141
// 008f8ce7  64a100000000         mov eax, dword ptr fs:[0]
// 008f8ced  50                   push eax
// 008f8cee  83ec38               sub esp, 0x38
// 008f8cf1  53                   push ebx
// 008f8cf2  55                   push ebp
// 008f8cf3  56                   push esi
// 008f8cf4  57                   push edi
// 008f8cf5  a12058c900           mov eax, dword ptr [0xc95820]
// 008f8cfa  33c4                 xor eax, esp
// 008f8cfc  50                   push eax
// 008f8cfd  8d44244c             lea eax, [esp + 0x4c]
// 008f8d01  64a300000000         mov dword ptr fs:[0], eax
// 008f8d07  8bf1                 mov esi, ecx
// 008f8d09  e8523af1ff           call 0x80c760
// 008f8d0e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008f8d12  89442414             mov dword ptr [esp + 0x14], eax
// 008f8d16  0598000000           add eax, 0x98
// 008f8d1b  50                   push eax
// 008f8d1c  57                   push edi
// 008f8d1d  8d4c2444             lea ecx, [esp + 0x44]
// 008f8d21  e8fa43f6ff           call 0x85d120
// 008f8d26  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008f8d2d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008f8d33  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 008f8d39  8baec0000000         mov ebp, dword ptr [esi + 0xc0]
// 008f8d3f  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 008f8d45  c744245400000000     mov dword ptr [esp + 0x54], 0
// 008f8d4d  89442434             mov dword ptr [esp + 0x34], eax
// 008f8d51  894c2438             mov dword ptr [esp + 0x38], ecx
// 008f8d55  7424                 je 0x8f8d7b
// 008f8d57  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f8d5b  8b11                 mov edx, dword ptr [ecx]
// 008f8d5d  8b4278               mov eax, dword ptr [edx + 0x78]
// 008f8d60  56                   push esi
// 008f8d61  57                   push edi
// 008f8d62  ffd0                 call eax
// 008f8d64  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008f8d6b  740e                 je 0x8f8d7b
// 008f8d6d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f8d71  8b11                 mov edx, dword ptr [ecx]
// 008f8d73  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008f8d76  56                   push esi
// 008f8d77  ffd0                 call eax
// 008f8d79  eb0e                 jmp 0x8f8d89
// 008f8d7b  e860c6f4ff           call 0x8453e0
// 008f8d80  6a12                 push 0x12
// 008f8d82  8bc8                 mov ecx, eax
// 008f8d84  e827bef4ff           call 0x844bb0
// 008f8d89  8b17                 mov edx, dword ptr [edi]
// 008f8d8b  50                   push eax
// 008f8d8c  8b4238               mov eax, dword ptr [edx + 0x38]
// 008f8d8f  8bcf                 mov ecx, edi
// 008f8d91  ffd0                 call eax
// 008f8d93  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008f8d99  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f8d9d  8b542438             mov edx, dword ptr [esp + 0x38]
// 008f8da1  f7d8                 neg eax
// 008f8da3  1bc0                 sbb eax, eax
// 008f8da5  83e00d               and eax, 0xd
// 008f8da8  83c002               add eax, 2
// 008f8dab  2bc8                 sub ecx, eax
// 008f8dad  8b06                 mov eax, dword ptr [esi]
// 008f8daf  894c2424             mov dword ptr [esp + 0x24], ecx
// 008f8db3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008f8db7  8d4c2418             lea ecx, [esp + 0x18]
// 008f8dbb  89542428             mov dword ptr [esp + 0x28], edx
// 008f8dbf  8b5058               mov edx, dword ptr [eax + 0x58]
// 008f8dc2  51                   push ecx
// 008f8dc3  83c502               add ebp, 2
// 008f8dc6  8bce                 mov ecx, esi
// 008f8dc8  895c2424             mov dword ptr [esp + 0x24], ebx
// 008f8dcc  896c2420             mov dword ptr [esp + 0x20], ebp
// 008f8dd0  ffd2                 call edx
// 008f8dd2  8be8                 mov ebp, eax
// 008f8dd4  8b07                 mov eax, dword ptr [edi]
// 008f8dd6  6a24                 push 0x24
// 008f8dd8  8d4c2420             lea ecx, [esp + 0x20]
// 008f8ddc  51                   push ecx
// 008f8ddd  8bcd                 mov ecx, ebp
// 008f8ddf  c644245c01           mov byte ptr [esp + 0x5c], 1
// 008f8de4  89442464             mov dword ptr [esp + 0x64], eax
// 008f8de8  ff15a826a400         call dword ptr [0xa426a8]
// 008f8dee  50                   push eax
// 008f8def  8bcd                 mov ecx, ebp
// 008f8df1  ff15c82da400         call dword ptr [0xa42dc8]
// 008f8df7  8b542468             mov edx, dword ptr [esp + 0x68]
// 008f8dfb  50                   push eax
// 008f8dfc  8b4270               mov eax, dword ptr [edx + 0x70]
// 008f8dff  8bcf                 mov ecx, edi
// 008f8e01  ffd0                 call eax
// 008f8e03  8d4c2418             lea ecx, [esp + 0x18]
// 008f8e07  c644245400           mov byte ptr [esp + 0x54], 0
// 008f8e0c  ff15082ea400         call dword ptr [0xa42e08]
// 008f8e12  8b4f08               mov ecx, dword ptr [edi + 8]
// 008f8e15  51                   push ecx
// 008f8e16  ff151c01a400         call dword ptr [0xa4011c]
// 008f8e1c  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008f8e23  8be8                 mov ebp, eax
// 008f8e25  7430                 je 0x8f8e57
// 008f8e27  8b442438             mov eax, dword ptr [esp + 0x38]
// 008f8e2b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f8e2f  2bc3                 sub eax, ebx
// 008f8e31  99                   cdq 
// 008f8e32  2bc2                 sub eax, edx
// 008f8e34  d1f8                 sar eax, 1
// 008f8e36  55                   push ebp
// 008f8e37  03c3                 add eax, ebx
// 008f8e39  8d5002               lea edx, [eax + 2]
// 008f8e3c  52                   push edx
// 008f8e3d  83c1f7               add ecx, -9
// 008f8e40  51                   push ecx
// 008f8e41  83c0fe               add eax, -2
// 008f8e44  50                   push eax
// 008f8e45  8d7104               lea esi, [ecx + 4]
// 008f8e48  56                   push esi
// 008f8e49  50                   push eax
// 008f8e4a  8d59fc               lea ebx, [ecx - 4]
// 008f8e4d  53                   push ebx
// 008f8e4e  57                   push edi
// 008f8e4f  e85c77f1ff           call 0x8105b0
// 008f8e54  83c420               add esp, 0x20
// 008f8e57  8d4c243c             lea ecx, [esp + 0x3c]
// 008f8e5b  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 008f8e63  e83843f6ff           call 0x85d1a0
// 008f8e68  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008f8e6c  64890d00000000       mov dword ptr fs:[0], ecx
// 008f8e73  59                   pop ecx
// 008f8e74  5f                   pop edi
// 008f8e75  5e                   pop esi
// 008f8e76  5d                   pop ebp
// 008f8e77  5b                   pop ebx
// 008f8e78  83c444               add esp, 0x44
// 008f8e7b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlCaptionPopup@CXTPDialogBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDialogBar.cpp
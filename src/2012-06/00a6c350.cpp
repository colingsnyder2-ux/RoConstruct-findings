// roc 2012-06 00a6c350  unit: CXTPScrollBase  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c350
//
// 00a6c350  51                   push ecx
// 00a6c351  53                   push ebx
// 00a6c352  8bd9                 mov ebx, ecx
// 00a6c354  56                   push esi
// 00a6c355  8b7360               mov esi, dword ptr [ebx + 0x60]
// 00a6c358  85f6                 test esi, esi
// 00a6c35a  0f84fc000000         je 0xa6c45c
// 00a6c360  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a6c364  85c0                 test eax, eax
// 00a6c366  740b                 je 0xa6c373
// 00a6c368  c1e808               shr eax, 8
// 00a6c36b  3c02                 cmp al, 2
// 00a6c36d  0f85e9000000         jne 0xa6c45c
// 00a6c373  8b5614               mov edx, dword ptr [esi + 0x14]
// 00a6c376  83fa02               cmp edx, 2
// 00a6c379  7405                 je 0xa6c380
// 00a6c37b  83fa03               cmp edx, 3
// 00a6c37e  7521                 jne 0xa6c3a1
// 00a6c380  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a6c383  83785800             cmp dword ptr [eax + 0x58], 0
// 00a6c387  8d4e04               lea ecx, [esi + 4]
// 00a6c38a  7403                 je 0xa6c38f
// 00a6c38c  83c104               add ecx, 4
// 00a6c38f  83fa02               cmp edx, 2
// 00a6c392  7508                 jne 0xa6c39c
// 00a6c394  8b4034               mov eax, dword ptr [eax + 0x34]
// 00a6c397  894108               mov dword ptr [ecx + 8], eax
// 00a6c39a  eb05                 jmp 0xa6c3a1
// 00a6c39c  8b5030               mov edx, dword ptr [eax + 0x30]
// 00a6c39f  8911                 mov dword ptr [ecx], edx
// 00a6c3a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a6c3a5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a6c3a9  55                   push ebp
// 00a6c3aa  50                   push eax
// 00a6c3ab  51                   push ecx
// 00a6c3ac  8d5604               lea edx, [esi + 4]
// 00a6c3af  52                   push edx
// 00a6c3b0  ff15483bb200         call dword ptr [0xb23b48]
// 00a6c3b6  8be8                 mov ebp, eax
// 00a6c3b8  33c0                 xor eax, eax
// 00a6c3ba  3b2e                 cmp ebp, dword ptr [esi]
// 00a6c3bc  0f95c0               setne al
// 00a6c3bf  8944240c             mov dword ptr [esp + 0xc], eax
// 00a6c3c3  85c0                 test eax, eax
// 00a6c3c5  740b                 je 0xa6c3d2
// 00a6c3c7  892e                 mov dword ptr [esi], ebp
// 00a6c3c9  8b03                 mov eax, dword ptr [ebx]
// 00a6c3cb  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00a6c3ce  8bcb                 mov ecx, ebx
// 00a6c3d0  ffd2                 call edx
// 00a6c3d2  57                   push edi
// 00a6c3d3  8b3d203cb200         mov edi, dword ptr [0xb23c20]
// 00a6c3d9  ffd7                 call edi
// 00a6c3db  8bc8                 mov ecx, eax
// 00a6c3dd  b8cdcccccc           mov eax, 0xcccccccd
// 00a6c3e2  f7e1                 mul ecx
// 00a6c3e4  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a6c3e8  c1ea03               shr edx, 3
// 00a6c3eb  2d00020000           sub eax, 0x200
// 00a6c3f0  7433                 je 0xa6c425
// 00a6c3f2  83e801               sub eax, 1
// 00a6c3f5  7415                 je 0xa6c40c
// 00a6c3f7  83e801               sub eax, 1
// 00a6c3fa  755e                 jne 0xa6c45a
// 00a6c3fc  50                   push eax
// 00a6c3fd  8bcb                 mov ecx, ebx
// 00a6c3ff  e81cfdffff           call 0xa6c120
// 00a6c404  5f                   pop edi
// 00a6c405  5d                   pop ebp
// 00a6c406  5e                   pop esi
// 00a6c407  5b                   pop ebx
// 00a6c408  59                   pop ecx
// 00a6c409  c20c00               ret 0xc
// 00a6c40c  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00a6c413  ffd7                 call edi
// 00a6c415  8bd0                 mov edx, eax
// 00a6c417  03d2                 add edx, edx
// 00a6c419  03d2                 add edx, edx
// 00a6c41b  b8cdcccccc           mov eax, 0xcccccccd
// 00a6c420  f7e2                 mul edx
// 00a6c422  c1ea02               shr edx, 2
// 00a6c425  85ed                 test ebp, ebp
// 00a6c427  7431                 je 0xa6c45a
// 00a6c429  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a6c42e  742a                 je 0xa6c45a
// 00a6c430  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00a6c433  6a00                 push 0
// 00a6c435  52                   push edx
// 00a6c436  89536c               mov dword ptr [ebx + 0x6c], edx
// 00a6c439  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00a6c43c  68315b0000           push 0x5b31
// 00a6c441  51                   push ecx
// 00a6c442  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a6c448  894618               mov dword ptr [esi + 0x18], eax
// 00a6c44b  8b13                 mov edx, dword ptr [ebx]
// 00a6c44d  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a6c450  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a6c453  6a00                 push 0
// 00a6c455  50                   push eax
// 00a6c456  8bcb                 mov ecx, ebx
// 00a6c458  ffd2                 call edx
// 00a6c45a  5f                   pop edi
// 00a6c45b  5d                   pop ebp
// 00a6c45c  5e                   pop esi
// 00a6c45d  5b                   pop ebx
// 00a6c45e  59                   pop ecx
// 00a6c45f  c20c00               ret 0xc
// copied from an identical function in another client (function ?TrackBox@CXTPScrollBase@@IAEXIVCPoint@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
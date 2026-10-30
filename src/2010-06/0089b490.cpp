// roc 2010-06 0089b490  unit: CXTPScrollBase  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089b490
//
// 0089b490  51                   push ecx
// 0089b491  53                   push ebx
// 0089b492  8bd9                 mov ebx, ecx
// 0089b494  56                   push esi
// 0089b495  8b7360               mov esi, dword ptr [ebx + 0x60]
// 0089b498  85f6                 test esi, esi
// 0089b49a  0f84fc000000         je 0x89b59c
// 0089b4a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089b4a4  85c0                 test eax, eax
// 0089b4a6  740b                 je 0x89b4b3
// 0089b4a8  c1e808               shr eax, 8
// 0089b4ab  3c02                 cmp al, 2
// 0089b4ad  0f85e9000000         jne 0x89b59c
// 0089b4b3  8b5614               mov edx, dword ptr [esi + 0x14]
// 0089b4b6  83fa02               cmp edx, 2
// 0089b4b9  7405                 je 0x89b4c0
// 0089b4bb  83fa03               cmp edx, 3
// 0089b4be  7521                 jne 0x89b4e1
// 0089b4c0  8b4634               mov eax, dword ptr [esi + 0x34]
// 0089b4c3  83785800             cmp dword ptr [eax + 0x58], 0
// 0089b4c7  8d4e04               lea ecx, [esi + 4]
// 0089b4ca  7403                 je 0x89b4cf
// 0089b4cc  83c104               add ecx, 4
// 0089b4cf  83fa02               cmp edx, 2
// 0089b4d2  7508                 jne 0x89b4dc
// 0089b4d4  8b4034               mov eax, dword ptr [eax + 0x34]
// 0089b4d7  894108               mov dword ptr [ecx + 8], eax
// 0089b4da  eb05                 jmp 0x89b4e1
// 0089b4dc  8b5030               mov edx, dword ptr [eax + 0x30]
// 0089b4df  8911                 mov dword ptr [ecx], edx
// 0089b4e1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089b4e5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089b4e9  55                   push ebp
// 0089b4ea  50                   push eax
// 0089b4eb  51                   push ecx
// 0089b4ec  8d5604               lea edx, [esi + 4]
// 0089b4ef  52                   push edx
// 0089b4f0  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0089b4f6  8be8                 mov ebp, eax
// 0089b4f8  33c0                 xor eax, eax
// 0089b4fa  3b2e                 cmp ebp, dword ptr [esi]
// 0089b4fc  0f95c0               setne al
// 0089b4ff  8944240c             mov dword ptr [esp + 0xc], eax
// 0089b503  85c0                 test eax, eax
// 0089b505  740b                 je 0x89b512
// 0089b507  892e                 mov dword ptr [esi], ebp
// 0089b509  8b03                 mov eax, dword ptr [ebx]
// 0089b50b  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0089b50e  8bcb                 mov ecx, ebx
// 0089b510  ffd2                 call edx
// 0089b512  57                   push edi
// 0089b513  8b3df4ba9e00         mov edi, dword ptr [0x9ebaf4]
// 0089b519  ffd7                 call edi
// 0089b51b  8bc8                 mov ecx, eax
// 0089b51d  b8cdcccccc           mov eax, 0xcccccccd
// 0089b522  f7e1                 mul ecx
// 0089b524  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089b528  c1ea03               shr edx, 3
// 0089b52b  2d00020000           sub eax, 0x200
// 0089b530  7433                 je 0x89b565
// 0089b532  83e801               sub eax, 1
// 0089b535  7415                 je 0x89b54c
// 0089b537  83e801               sub eax, 1
// 0089b53a  755e                 jne 0x89b59a
// 0089b53c  50                   push eax
// 0089b53d  8bcb                 mov ecx, ebx
// 0089b53f  e81cfdffff           call 0x89b260
// 0089b544  5f                   pop edi
// 0089b545  5d                   pop ebp
// 0089b546  5e                   pop esi
// 0089b547  5b                   pop ebx
// 0089b548  59                   pop ecx
// 0089b549  c20c00               ret 0xc
// 0089b54c  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0089b553  ffd7                 call edi
// 0089b555  8bd0                 mov edx, eax
// 0089b557  03d2                 add edx, edx
// 0089b559  03d2                 add edx, edx
// 0089b55b  b8cdcccccc           mov eax, 0xcccccccd
// 0089b560  f7e2                 mul edx
// 0089b562  c1ea02               shr edx, 2
// 0089b565  85ed                 test ebp, ebp
// 0089b567  7431                 je 0x89b59a
// 0089b569  837c241000           cmp dword ptr [esp + 0x10], 0
// 0089b56e  742a                 je 0x89b59a
// 0089b570  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0089b573  6a00                 push 0
// 0089b575  52                   push edx
// 0089b576  89536c               mov dword ptr [ebx + 0x6c], edx
// 0089b579  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0089b57c  68315b0000           push 0x5b31
// 0089b581  51                   push ecx
// 0089b582  ff1554bc9e00         call dword ptr [0x9ebc54]
// 0089b588  894618               mov dword ptr [esi + 0x18], eax
// 0089b58b  8b13                 mov edx, dword ptr [ebx]
// 0089b58d  8b4614               mov eax, dword ptr [esi + 0x14]
// 0089b590  8b5218               mov edx, dword ptr [edx + 0x18]
// 0089b593  6a00                 push 0
// 0089b595  50                   push eax
// 0089b596  8bcb                 mov ecx, ebx
// 0089b598  ffd2                 call edx
// 0089b59a  5f                   pop edi
// 0089b59b  5d                   pop ebp
// 0089b59c  5e                   pop esi
// 0089b59d  5b                   pop ebx
// 0089b59e  59                   pop ecx
// 0089b59f  c20c00               ret 0xc
// copied from an identical function in another client (function ?TrackBox@CXTPScrollBase@@IAEXIVCPoint@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
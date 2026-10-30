// roc 2009-12 008c6400  unit: CXTPPropertyGridInplaceButton  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6400
//
// 008c6400  83ec20               sub esp, 0x20
// 008c6403  56                   push esi
// 008c6404  8bf1                 mov esi, ecx
// 008c6406  837e5000             cmp dword ptr [esi + 0x50], 0
// 008c640a  0f8401010000         je 0x8c6511
// 008c6410  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008c6413  53                   push ebx
// 008c6414  55                   push ebp
// 008c6415  57                   push edi
// 008c6416  bf01000000           mov edi, 1
// 008c641b  897e20               mov dword ptr [esi + 0x20], edi
// 008c641e  e8dfd7f2ff           call 0x7f3c02
// 008c6423  8b4628               mov eax, dword ptr [esi + 0x28]
// 008c6426  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008c6429  8b2de8cb9800         mov ebp, dword ptr [0x98cbe8]
// 008c642f  6a00                 push 0
// 008c6431  6a00                 push 0
// 008c6433  51                   push ecx
// 008c6434  ffd5                 call ebp
// 008c6436  8b4628               mov eax, dword ptr [esi + 0x28]
// 008c6439  8b5020               mov edx, dword ptr [eax + 0x20]
// 008c643c  52                   push edx
// 008c643d  ff152ccc9800         call dword ptr [0x98cc2c]
// 008c6443  50                   push eax
// 008c6444  e8e1d6f2ff           call 0x7f3b2a
// 008c6449  8b1d5cca9800         mov ebx, dword ptr [0x98ca5c]
// 008c644f  897c2410             mov dword ptr [esp + 0x10], edi
// 008c6453  8b4628               mov eax, dword ptr [esi + 0x28]
// 008c6456  85c0                 test eax, eax
// 008c6458  7504                 jne 0x8c645e
// 008c645a  33ff                 xor edi, edi
// 008c645c  eb03                 jmp 0x8c6461
// 008c645e  8b7820               mov edi, dword ptr [eax + 0x20]
// 008c6461  ff1528cc9800         call dword ptr [0x98cc28]
// 008c6467  3bc7                 cmp eax, edi
// 008c6469  7573                 jne 0x8c64de
// 008c646b  6a00                 push 0
// 008c646d  6a00                 push 0
// 008c646f  6a00                 push 0
// 008c6471  8d442420             lea eax, [esp + 0x20]
// 008c6475  50                   push eax
// 008c6476  ff15b0ca9800         call dword ptr [0x98cab0]
// 008c647c  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6480  3d02020000           cmp eax, 0x202
// 008c6485  744c                 je 0x8c64d3
// 008c6487  3d00020000           cmp eax, 0x200
// 008c648c  7538                 jne 0x8c64c6
// 008c648e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008c6492  0fb7c8               movzx ecx, ax
// 008c6495  c1e810               shr eax, 0x10
// 008c6498  50                   push eax
// 008c6499  51                   push ecx
// 008c649a  8d4e34               lea ecx, [esi + 0x34]
// 008c649d  51                   push ecx
// 008c649e  ffd3                 call ebx
// 008c64a0  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008c64a3  f7d8                 neg eax
// 008c64a5  1bc0                 sbb eax, eax
// 008c64a7  23c6                 and eax, esi
// 008c64a9  398158010000         cmp dword ptr [ecx + 0x158], eax
// 008c64af  74a2                 je 0x8c6453
// 008c64b1  898158010000         mov dword ptr [ecx + 0x158], eax
// 008c64b7  8b5628               mov edx, dword ptr [esi + 0x28]
// 008c64ba  8b4220               mov eax, dword ptr [edx + 0x20]
// 008c64bd  6a00                 push 0
// 008c64bf  6a00                 push 0
// 008c64c1  50                   push eax
// 008c64c2  ffd5                 call ebp
// 008c64c4  eb8d                 jmp 0x8c6453
// 008c64c6  8d4c2414             lea ecx, [esp + 0x14]
// 008c64ca  51                   push ecx
// 008c64cb  ff1594ca9800         call dword ptr [0x98ca94]
// 008c64d1  eb80                 jmp 0x8c6453
// 008c64d3  8bce                 mov ecx, esi
// 008c64d5  e8c6fdffff           call 0x8c62a0
// 008c64da  8bf8                 mov edi, eax
// 008c64dc  eb04                 jmp 0x8c64e2
// 008c64de  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c64e2  c7462000000000       mov dword ptr [esi + 0x20], 0
// 008c64e9  ff1520cc9800         call dword ptr [0x98cc20]
// 008c64ef  8b5628               mov edx, dword ptr [esi + 0x28]
// 008c64f2  8b4220               mov eax, dword ptr [edx + 0x20]
// 008c64f5  6a00                 push 0
// 008c64f7  6a00                 push 0
// 008c64f9  50                   push eax
// 008c64fa  ffd5                 call ebp
// 008c64fc  85ff                 test edi, edi
// 008c64fe  5f                   pop edi
// 008c64ff  5d                   pop ebp
// 008c6500  5b                   pop ebx
// 008c6501  740e                 je 0x8c6511
// 008c6503  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008c6506  8b11                 mov edx, dword ptr [ecx]
// 008c6508  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008c650e  56                   push esi
// 008c650f  ffd0                 call eax
// 008c6511  5e                   pop esi
// 008c6512  83c420               add esp, 0x20
// 008c6515  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPPropertyGridInplaceButton@@UAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp
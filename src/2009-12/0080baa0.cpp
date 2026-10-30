// roc 2009-12 0080baa0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080baa0
//
// 0080baa0  6aff                 push -1
// 0080baa2  6860999500           push 0x959960
// 0080baa7  64a100000000         mov eax, dword ptr fs:[0]
// 0080baad  50                   push eax
// 0080baae  83ec14               sub esp, 0x14
// 0080bab1  56                   push esi
// 0080bab2  57                   push edi
// 0080bab3  a10052b600           mov eax, dword ptr [0xb65200]
// 0080bab8  33c4                 xor eax, esp
// 0080baba  50                   push eax
// 0080babb  8d442420             lea eax, [esp + 0x20]
// 0080babf  64a300000000         mov dword ptr fs:[0], eax
// 0080bac5  8b742430             mov esi, dword ptr [esp + 0x30]
// 0080bac9  68d83e9a00           push 0x9a3ed8
// 0080bace  56                   push esi
// 0080bacf  e80a87feff           call 0x7f41de
// 0080bad4  8bf8                 mov edi, eax
// 0080bad6  56                   push esi
// 0080bad7  57                   push edi
// 0080bad8  e8c3d4ffff           call 0x808fa0
// 0080badd  83c408               add esp, 8
// 0080bae0  85c0                 test eax, eax
// 0080bae2  747f                 je 0x80bb63
// 0080bae4  8d4c2414             lea ecx, [esp + 0x14]
// 0080bae8  e853400800           call 0x88fb40
// 0080baed  68d83e9a00           push 0x9a3ed8
// 0080baf2  56                   push esi
// 0080baf3  57                   push edi
// 0080baf4  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0080bafc  ff15ecb19800         call dword ptr [0x98b1ec]
// 0080bb02  50                   push eax
// 0080bb03  57                   push edi
// 0080bb04  8d4c241c             lea ecx, [esp + 0x1c]
// 0080bb08  e883450800           call 0x890090
// 0080bb0d  85c0                 test eax, eax
// 0080bb0f  752d                 jne 0x80bb3e
// 0080bb11  8d4c2414             lea ecx, [esp + 0x14]
// 0080bb15  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0080bb1d  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 0080bb25  e80637c0ff           call 0x40f230
// 0080bb2a  33c0                 xor eax, eax
// 0080bb2c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080bb30  64890d00000000       mov dword ptr fs:[0], ecx
// 0080bb37  59                   pop ecx
// 0080bb38  5f                   pop edi
// 0080bb39  5e                   pop esi
// 0080bb3a  83c420               add esp, 0x20
// 0080bb3d  c3                   ret 
// 0080bb3e  8b442434             mov eax, dword ptr [esp + 0x34]
// 0080bb42  85c0                 test eax, eax
// 0080bb44  7406                 je 0x80bb4c
// 0080bb46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080bb4a  8908                 mov dword ptr [eax], ecx
// 0080bb4c  8d4c2414             lea ecx, [esp + 0x14]
// 0080bb50  e819aa1100           call 0x92656e
// 0080bb55  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 0080bb5d  8d4c2414             lea ecx, [esp + 0x14]
// 0080bb61  eb62                 jmp 0x80bbc5
// 0080bb63  6a02                 push 2
// 0080bb65  56                   push esi
// 0080bb66  e87386feff           call 0x7f41de
// 0080bb6b  8bf8                 mov edi, eax
// 0080bb6d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080bb75  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080bb7d  56                   push esi
// 0080bb7e  57                   push edi
// 0080bb7f  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0080bb87  e8c4d4ffff           call 0x809050
// 0080bb8c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080bb90  83c408               add esp, 8
// 0080bb93  85c9                 test ecx, ecx
// 0080bb95  7402                 je 0x80bb99
// 0080bb97  8901                 mov dword ptr [ecx], eax
// 0080bb99  85c0                 test eax, eax
// 0080bb9b  740c                 je 0x80bba9
// 0080bb9d  56                   push esi
// 0080bb9e  57                   push edi
// 0080bb9f  e82ce8ffff           call 0x80a3d0
// 0080bba4  83c408               add esp, 8
// 0080bba7  eb10                 jmp 0x80bbb9
// 0080bba9  6a40                 push 0x40
// 0080bbab  6a00                 push 0
// 0080bbad  6a00                 push 0
// 0080bbaf  6a00                 push 0
// 0080bbb1  56                   push esi
// 0080bbb2  57                   push edi
// 0080bbb3  ff150ccb9800         call dword ptr [0x98cb0c]
// 0080bbb9  8d4c240c             lea ecx, [esp + 0xc]
// 0080bbbd  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080bbc5  8bf0                 mov esi, eax
// 0080bbc7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0080bbcf  e85c36c0ff           call 0x40f230
// 0080bbd4  8bc6                 mov eax, esi
// 0080bbd6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080bbda  64890d00000000       mov dword ptr fs:[0], ecx
// 0080bbe1  59                   pop ecx
// 0080bbe2  5f                   pop edi
// 0080bbe3  5e                   pop esi
// 0080bbe4  83c420               add esp, 0x20
// 0080bbe7  c3                   ret 
// copied from an identical function in another client (function ?LoadBitmapFromResource@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PBDPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
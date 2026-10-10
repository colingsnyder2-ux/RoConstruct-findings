// roc 2008-06 006e7b50  unit: CXTPToolBar::CControlButtonExpand  size: 527 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7b50
//
// 006e7b50  83ec10               sub esp, 0x10
// 006e7b53  53                   push ebx
// 006e7b54  56                   push esi
// 006e7b55  8bf1                 mov esi, ecx
// 006e7b57  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006e7b5d  83f8ff               cmp eax, -1
// 006e7b60  750f                 jne 0x6e7b71
// 006e7b62  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006e7b68  85c9                 test ecx, ecx
// 006e7b6a  7405                 je 0x6e7b71
// 006e7b6c  e84f3cfcff           call 0x6ab7c0
// 006e7b71  85c0                 test eax, eax
// 006e7b73  0f84de010000         je 0x6e7d57
// 006e7b79  8bce                 mov ecx, esi
// 006e7b7b  e84036fcff           call 0x6ab1c0
// 006e7b80  85c0                 test eax, eax
// 006e7b82  7423                 je 0x6e7ba7
// 006e7b84  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7b8a  85c9                 test ecx, ecx
// 006e7b8c  0f84c5010000         je 0x6e7d57
// 006e7b92  e879d2fcff           call 0x6b4e10
// 006e7b97  85c0                 test eax, eax
// 006e7b99  0f84b8010000         je 0x6e7d57
// 006e7b9f  56                   push esi
// 006e7ba0  8bc8                 mov ecx, eax
// 006e7ba2  e849bcfbff           call 0x6a37f0
// 006e7ba7  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 006e7bae  7424                 je 0x6e7bd4
// 006e7bb0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7bb6  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 006e7bbd  7415                 je 0x6e7bd4
// 006e7bbf  8b01                 mov eax, dword ptr [ecx]
// 006e7bc1  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 006e7bc7  6a00                 push 0
// 006e7bc9  6a00                 push 0
// 006e7bcb  6a00                 push 0
// 006e7bcd  ffd2                 call edx
// 006e7bcf  e962010000           jmp 0x6e7d36
// 006e7bd4  8bce                 mov ecx, esi
// 006e7bd6  e8e535fcff           call 0x6ab1c0
// 006e7bdb  85c0                 test eax, eax
// 006e7bdd  0f851c010000         jne 0x6e7cff
// 006e7be3  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 006e7bea  0f850f010000         jne 0x6e7cff
// 006e7bf0  8bce                 mov ecx, esi
// 006e7bf2  3944241c             cmp dword ptr [esp + 0x1c], eax
// 006e7bf6  743a                 je 0x6e7c32
// 006e7bf8  e88363d6ff           call 0x44df80
// 006e7bfd  83f804               cmp eax, 4
// 006e7c00  7414                 je 0x6e7c16
// 006e7c02  8b06                 mov eax, dword ptr [esi]
// 006e7c04  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006e7c0a  8bce                 mov ecx, esi
// 006e7c0c  ffd2                 call edx
// 006e7c0e  5e                   pop esi
// 006e7c0f  5b                   pop ebx
// 006e7c10  83c410               add esp, 0x10
// 006e7c13  c20c00               ret 0xc
// 006e7c16  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006e7c1c  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7c22  6a00                 push 0
// 006e7c24  50                   push eax
// 006e7c25  e8a6f2fcff           call 0x6b6ed0
// 006e7c2a  5e                   pop esi
// 006e7c2b  5b                   pop ebx
// 006e7c2c  83c410               add esp, 0x10
// 006e7c2f  c20c00               ret 0xc
// 006e7c32  e80936fcff           call 0x6ab240
// 006e7c37  8b10                 mov edx, dword ptr [eax]
// 006e7c39  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 006e7c3f  56                   push esi
// 006e7c40  8d4c240c             lea ecx, [esp + 0xc]
// 006e7c44  51                   push ecx
// 006e7c45  8bc8                 mov ecx, eax
// 006e7c47  ffd2                 call edx
// 006e7c49  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006e7c4f  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 006e7c56  8b1d2c2d8000         mov ebx, dword ptr [0x802d2c]
// 006e7c5c  7532                 jne 0x6e7c90
// 006e7c5e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e7c62  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e7c66  51                   push ecx
// 006e7c67  52                   push edx
// 006e7c68  8d442410             lea eax, [esp + 0x10]
// 006e7c6c  50                   push eax
// 006e7c6d  ffd3                 call ebx
// 006e7c6f  85c0                 test eax, eax
// 006e7c71  741d                 je 0x6e7c90
// 006e7c73  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7c79  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006e7c7c  685fb60100           push 0x1b65f
// 006e7c81  52                   push edx
// 006e7c82  ff151c2e8000         call dword ptr [0x802e1c]
// 006e7c88  5e                   pop esi
// 006e7c89  5b                   pop ebx
// 006e7c8a  83c410               add esp, 0x10
// 006e7c8d  c20c00               ret 0xc
// 006e7c90  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006e7c96  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 006e7c9d  7454                 je 0x6e7cf3
// 006e7c9f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e7ca3  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e7ca7  51                   push ecx
// 006e7ca8  52                   push edx
// 006e7ca9  8d442410             lea eax, [esp + 0x10]
// 006e7cad  50                   push eax
// 006e7cae  ffd3                 call ebx
// 006e7cb0  85c0                 test eax, eax
// 006e7cb2  743f                 je 0x6e7cf3
// 006e7cb4  8bce                 mov ecx, esi
// 006e7cb6  e8c562d6ff           call 0x44df80
// 006e7cbb  83f804               cmp eax, 4
// 006e7cbe  0f8493000000         je 0x6e7d57
// 006e7cc4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e7cc8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e7ccc  83ec10               sub esp, 0x10
// 006e7ccf  8bc4                 mov eax, esp
// 006e7cd1  8908                 mov dword ptr [eax], ecx
// 006e7cd3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006e7cd7  895004               mov dword ptr [eax + 4], edx
// 006e7cda  8b542424             mov edx, dword ptr [esp + 0x24]
// 006e7cde  894808               mov dword ptr [eax + 8], ecx
// 006e7ce1  8bce                 mov ecx, esi
// 006e7ce3  89500c               mov dword ptr [eax + 0xc], edx
// 006e7ce6  e86557fcff           call 0x6ad450
// 006e7ceb  5e                   pop esi
// 006e7cec  5b                   pop ebx
// 006e7ced  83c410               add esp, 0x10
// 006e7cf0  c20c00               ret 0xc
// 006e7cf3  8bce                 mov ecx, esi
// 006e7cf5  e88662d6ff           call 0x44df80
// 006e7cfa  83f803               cmp eax, 3
// 006e7cfd  7458                 je 0x6e7d57
// 006e7cff  8bce                 mov ecx, esi
// 006e7d01  e8ba34fcff           call 0x6ab1c0
// 006e7d06  85c0                 test eax, eax
// 006e7d08  7418                 je 0x6e7d22
// 006e7d0a  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006e7d10  85c9                 test ecx, ecx
// 006e7d12  740e                 je 0x6e7d22
// 006e7d14  8b01                 mov eax, dword ptr [ecx]
// 006e7d16  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 006e7d1c  ffd2                 call edx
// 006e7d1e  85c0                 test eax, eax
// 006e7d20  7414                 je 0x6e7d36
// 006e7d22  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006e7d28  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7d2e  6a00                 push 0
// 006e7d30  50                   push eax
// 006e7d31  e89af1fcff           call 0x6b6ed0
// 006e7d36  8bce                 mov ecx, esi
// 006e7d38  e88334fcff           call 0x6ab1c0
// 006e7d3d  85c0                 test eax, eax
// 006e7d3f  7416                 je 0x6e7d57
// 006e7d41  8b442424             mov eax, dword ptr [esp + 0x24]
// 006e7d45  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006e7d49  8b16                 mov edx, dword ptr [esi]
// 006e7d4b  8b9208010000         mov edx, dword ptr [edx + 0x108]
// 006e7d51  50                   push eax
// 006e7d52  51                   push ecx
// 006e7d53  8bce                 mov ecx, esi
// 006e7d55  ffd2                 call edx
// 006e7d57  5e                   pop esi
// 006e7d58  5b                   pop ebx
// 006e7d59  83c410               add esp, 0x10
// 006e7d5c  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?OnClick@CXTPControlPopup@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp

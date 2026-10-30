// roc 2011-06 0087ec50  unit: CSelectionCaption  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087ec50
//
// 0087ec50  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087ec54  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087ec58  83ec10               sub esp, 0x10
// 0087ec5b  55                   push ebp
// 0087ec5c  56                   push esi
// 0087ec5d  50                   push eax
// 0087ec5e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087ec62  8bf1                 mov esi, ecx
// 0087ec64  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087ec68  51                   push ecx
// 0087ec69  52                   push edx
// 0087ec6a  0d00000002           or eax, 0x2000000
// 0087ec6f  50                   push eax
// 0087ec70  33ed                 xor ebp, ebp
// 0087ec72  55                   push ebp
// 0087ec73  8bce                 mov ecx, esi
// 0087ec75  e886c3f8ff           call 0x80b000
// 0087ec7a  85c0                 test eax, eax
// 0087ec7c  7508                 jne 0x87ec86
// 0087ec7e  5e                   pop esi
// 0087ec7f  5d                   pop ebp
// 0087ec80  83c410               add esp, 0x10
// 0087ec83  c21800               ret 0x18
// 0087ec86  e86570ffff           call 0x875cf0
// 0087ec8b  05dc000000           add eax, 0xdc
// 0087ec90  7403                 je 0x87ec95
// 0087ec92  8b4004               mov eax, dword ptr [eax + 4]
// 0087ec95  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0087ec98  53                   push ebx
// 0087ec99  57                   push edi
// 0087ec9a  6a01                 push 1
// 0087ec9c  50                   push eax
// 0087ec9d  6a30                 push 0x30
// 0087ec9f  51                   push ecx
// 0087eca0  ff15c019a400         call dword ptr [0xa419c0]
// 0087eca6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087ecaa  8bc1                 mov eax, ecx
// 0087ecac  83e007               and eax, 7
// 0087ecaf  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 0087ecb5  f7d0                 not eax
// 0087ecb7  55                   push ebp
// 0087ecb8  23c1                 and eax, ecx
// 0087ecba  50                   push eax
// 0087ecbb  55                   push ebp
// 0087ecbc  8bce                 mov ecx, esi
// 0087ecbe  e841b9f8ff           call 0x80a604
// 0087ecc3  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087ecc7  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0087eccd  52                   push edx
// 0087ecce  8bcb                 mov ecx, ebx
// 0087ecd0  ff15a42da400         call dword ptr [0xa42da4]
// 0087ecd6  f686c800000004       test byte ptr [esi + 0xc8], 4
// 0087ecdd  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0087ece3  6a64                 push 0x64
// 0087ece5  8dbedc000000         lea edi, [esi + 0xdc]
// 0087eceb  8d4c2414             lea ecx, [esp + 0x14]
// 0087ecef  56                   push esi
// 0087ecf0  896c2418             mov dword ptr [esp + 0x18], ebp
// 0087ecf4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0087ecf8  896c2420             mov dword ptr [esp + 0x20], ebp
// 0087ecfc  896c2424             mov dword ptr [esp + 0x24], ebp
// 0087ed00  51                   push ecx
// 0087ed01  7472                 je 0x87ed75
// 0087ed03  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 0087ed09  684b0f0050           push 0x50000f4b
// 0087ed0e  55                   push ebp
// 0087ed0f  8bcf                 mov ecx, edi
// 0087ed11  ffd2                 call edx
// 0087ed13  85c0                 test eax, eax
// 0087ed15  750d                 jne 0x87ed24
// 0087ed17  5f                   pop edi
// 0087ed18  5b                   pop ebx
// 0087ed19  5e                   pop esi
// 0087ed1a  83c8ff               or eax, 0xffffffff
// 0087ed1d  5d                   pop ebp
// 0087ed1e  83c410               add esp, 0x10
// 0087ed21  c21800               ret 0x18
// 0087ed24  68ff00ff00           push 0xff00ff
// 0087ed29  6a01                 push 1
// 0087ed2b  6a10                 push 0x10
// 0087ed2d  6856240000           push 0x2456
// 0087ed32  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0087ed38  e8b9dc1400           call 0x9cc9f6
// 0087ed3d  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0087ed43  55                   push ebp
// 0087ed44  6a02                 push 2
// 0087ed46  50                   push eax
// 0087ed47  e8d0b5f8ff           call 0x80a31c
// 0087ed4c  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0087ed52  8b08                 mov ecx, dword ptr [eax]
// 0087ed54  e8c711faff           call 0x81ff20
// 0087ed59  8b1f                 mov ebx, dword ptr [edi]
// 0087ed5b  6a01                 push 1
// 0087ed5d  55                   push ebp
// 0087ed5e  b910000000           mov ecx, 0x10
// 0087ed63  8d51ff               lea edx, [ecx - 1]
// 0087ed66  50                   push eax
// 0087ed67  52                   push edx
// 0087ed68  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 0087ed6e  51                   push ecx
// 0087ed6f  8bcf                 mov ecx, edi
// 0087ed71  ffd2                 call edx
// 0087ed73  eb35                 jmp 0x87edaa
// 0087ed75  684b0c0000           push 0xc4b
// 0087ed7a  8bcb                 mov ecx, ebx
// 0087ed7c  89442448             mov dword ptr [esp + 0x48], eax
// 0087ed80  ff15c82da400         call dword ptr [0xa42dc8]
// 0087ed86  8b542448             mov edx, dword ptr [esp + 0x48]
// 0087ed8a  50                   push eax
// 0087ed8b  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0087ed91  8bcf                 mov ecx, edi
// 0087ed93  ffd0                 call eax
// 0087ed95  85c0                 test eax, eax
// 0087ed97  750a                 jne 0x87eda3
// 0087ed99  5f                   pop edi
// 0087ed9a  5b                   pop ebx
// 0087ed9b  5e                   pop esi
// 0087ed9c  5d                   pop ebp
// 0087ed9d  83c410               add esp, 0x10
// 0087eda0  c21800               ret 0x18
// 0087eda3  c6868100000001       mov byte ptr [esi + 0x81], 1
// 0087edaa  8b17                 mov edx, dword ptr [edi]
// 0087edac  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 0087edb2  55                   push ebp
// 0087edb3  55                   push ebp
// 0087edb4  8bcf                 mov ecx, edi
// 0087edb6  89b688010000         mov dword ptr [esi + 0x188], esi
// 0087edbc  ffd0                 call eax
// 0087edbe  6a23                 push 0x23
// 0087edc0  55                   push ebp
// 0087edc1  55                   push ebp
// 0087edc2  55                   push ebp
// 0087edc3  55                   push ebp
// 0087edc4  55                   push ebp
// 0087edc5  8bce                 mov ecx, esi
// 0087edc7  e85eb6f8ff           call 0x80a42a
// 0087edcc  5f                   pop edi
// 0087edcd  5b                   pop ebx
// 0087edce  5e                   pop esi
// 0087edcf  b801000000           mov eax, 1
// 0087edd4  5d                   pop ebp
// 0087edd5  83c410               add esp, 0x10
// 0087edd8  c21800               ret 0x18
// copied from an identical function in another client (function ?Create@CXTCaption@@UAEHPAVCWnd@@PBDKKABVCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp
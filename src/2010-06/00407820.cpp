// roc 2010-06 00407820  unit: VCApp::?$CComAggObject  size: 642 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00407820
//
// 00407820  55                   push ebp
// 00407821  8bec                 mov ebp, esp
// 00407823  81ec40090000         sub esp, 0x940
// 00407829  53                   push ebx
// 0040782a  33db                 xor ebx, ebx
// 0040782c  56                   push esi
// 0040782d  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00407830  57                   push edi
// 00407831  c745ec3805a000       mov dword ptr [ebp - 0x14], 0xa00538
// 00407838  895df0               mov dword ptr [ebp - 0x10], ebx
// 0040783b  895df4               mov dword ptr [ebp - 0xc], ebx
// 0040783e  895df8               mov dword ptr [ebp - 8], ebx
// 00407841  3bf3                 cmp esi, ebx
// 00407843  7423                 je 0x407868
// 00407845  8b06                 mov eax, dword ptr [esi]
// 00407847  3bc3                 cmp eax, ebx
// 00407849  741d                 je 0x407868
// 0040784b  eb03                 jmp 0x407850
// 0040784d  8d4900               lea ecx, [ecx]
// 00407850  8b4e04               mov ecx, dword ptr [esi + 4]
// 00407853  51                   push ecx
// 00407854  50                   push eax
// 00407855  8d55ec               lea edx, [ebp - 0x14]
// 00407858  52                   push edx
// 00407859  e822daffff           call 0x405280
// 0040785e  8b4608               mov eax, dword ptr [esi + 8]
// 00407861  83c608               add esi, 8
// 00407864  3bc3                 cmp eax, ebx
// 00407866  75e8                 jne 0x407850
// 00407868  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040786b  8b01                 mov eax, dword ptr [ecx]
// 0040786d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00407870  8d55ec               lea edx, [ebp - 0x14]
// 00407873  52                   push edx
// 00407874  ffd0                 call eax
// 00407876  8bf0                 mov esi, eax
// 00407878  3bf3                 cmp esi, ebx
// 0040787a  0f8c09020000         jl 0x407a89
// 00407880  8b3d5467c200         mov edi, dword ptr [0xc26754]
// 00407886  6804010000           push 0x104
// 0040788b  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00407891  51                   push ecx
// 00407892  57                   push edi
// 00407893  895d14               mov dword ptr [ebp + 0x14], ebx
// 00407896  ff156ca39e00         call dword ptr [0x9ea36c]
// 0040789c  3bc3                 cmp eax, ebx
// 0040789e  750a                 jne 0x4078aa
// 004078a0  e80bb4ffff           call 0x402cb0
// 004078a5  e9d5010000           jmp 0x407a7f
// 004078aa  3d04010000           cmp eax, 0x104
// 004078af  7524                 jne 0x4078d5
// 004078b1  8d4d14               lea ecx, [ebp + 0x14]
// 004078b4  e817c0ffff           call 0x4038d0
// 004078b9  8d4dec               lea ecx, [ebp - 0x14]
// 004078bc  e8afceffff           call 0x404770
// 004078c1  b87a000780           mov eax, 0x8007007a
// 004078c6  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004078cc  5f                   pop edi
// 004078cd  5e                   pop esi
// 004078ce  5b                   pop ebx
// 004078cf  8be5                 mov esp, ebp
// 004078d1  5d                   pop ebp
// 004078d2  c21000               ret 0x10
// 004078d5  8d95e8feffff         lea edx, [ebp - 0x118]
// 004078db  52                   push edx
// 004078dc  ff1588a39e00         call dword ptr [0x9ea388]
// 004078e2  40                   inc eax
// 004078e3  6a02                 push 2
// 004078e5  50                   push eax
// 004078e6  894508               mov dword ptr [ebp + 8], eax
// 004078e9  8d4508               lea eax, [ebp + 8]
// 004078ec  50                   push eax
// 004078ed  e8deb1ffff           call 0x402ad0
// 004078f2  83c40c               add esp, 0xc
// 004078f5  85c0                 test eax, eax
// 004078f7  7c44                 jl 0x40793d
// 004078f9  8b7508               mov esi, dword ptr [ebp + 8]
// 004078fc  81fe00040000         cmp esi, 0x400
// 00407902  7f18                 jg 0x40791c
// 00407904  56                   push esi
// 00407905  e846c2ffff           call 0x403b50
// 0040790a  83c404               add esp, 4
// 0040790d  84c0                 test al, al
// 0040790f  740b                 je 0x40791c
// 00407911  8bc6                 mov eax, esi
// 00407913  e868123a00           call 0x7a8b80
// 00407918  8bc4                 mov eax, esp
// 0040791a  eb09                 jmp 0x407925
// 0040791c  56                   push esi
// 0040791d  8d4d14               lea ecx, [ebp + 0x14]
// 00407920  e8cbc7ffff           call 0x4040f0
// 00407925  6a03                 push 3
// 00407927  d1ee                 shr esi, 1
// 00407929  56                   push esi
// 0040792a  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00407930  51                   push ecx
// 00407931  50                   push eax
// 00407932  e8e9b1ffff           call 0x402b20
// 00407937  8bf0                 mov esi, eax
// 00407939  3bf3                 cmp esi, ebx
// 0040793b  7524                 jne 0x407961
// 0040793d  8d4d14               lea ecx, [ebp + 0x14]
// 00407940  e88bbfffff           call 0x4038d0
// 00407945  8d4dec               lea ecx, [ebp - 0x14]
// 00407948  e823ceffff           call 0x404770
// 0040794d  b80e000780           mov eax, 0x8007000e
// 00407952  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00407958  5f                   pop edi
// 00407959  5e                   pop esi
// 0040795a  5b                   pop ebx
// 0040795b  8be5                 mov esp, ebp
// 0040795d  5d                   pop ebp
// 0040795e  c21000               ret 0x10
// 00407961  56                   push esi
// 00407962  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00407968  6808020000           push 0x208
// 0040796d  52                   push edx
// 0040796e  e85db4ffff           call 0x402dd0
// 00407973  83c40c               add esp, 0xc
// 00407976  3bfb                 cmp edi, ebx
// 00407978  7413                 je 0x40798d
// 0040797a  53                   push ebx
// 0040797b  ff158ca39e00         call dword ptr [0x9ea38c]
// 00407981  3bf8                 cmp edi, eax
// 00407983  7408                 je 0x40798d
// 00407985  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 0040798b  eb79                 jmp 0x407a06
// 0040798d  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 00407993  50                   push eax
// 00407994  8d8dd2faffff         lea ecx, [ebp - 0x52e]
// 0040799a  ba22000000           mov edx, 0x22
// 0040799f  680b020000           push 0x20b
// 004079a4  51                   push ecx
// 004079a5  668995d0faffff       mov word ptr [ebp - 0x530], dx
// 004079ac  e8efb1ffff           call 0x402ba0
// 004079b1  83c40c               add esp, 0xc
// 004079b4  84c0                 test al, al
// 004079b6  7524                 jne 0x4079dc
// 004079b8  8d4d14               lea ecx, [ebp + 0x14]
// 004079bb  e810bfffff           call 0x4038d0
// 004079c0  8d4dec               lea ecx, [ebp - 0x14]
// 004079c3  e8a8cdffff           call 0x404770
// 004079c8  b805400080           mov eax, 0x80004005
// 004079cd  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004079d3  5f                   pop edi
// 004079d4  5e                   pop esi
// 004079d5  5b                   pop ebx
// 004079d6  8be5                 mov esp, ebp
// 004079d8  5d                   pop ebp
// 004079d9  c21000               ret 0x10
// 004079dc  8d95d0faffff         lea edx, [ebp - 0x530]
// 004079e2  52                   push edx
// 004079e3  ff15a8a39e00         call dword ptr [0x9ea3a8]
// 004079e9  b922000000           mov ecx, 0x22
// 004079ee  33d2                 xor edx, edx
// 004079f0  66898c45d0faffff     mov word ptr [ebp + eax*2 - 0x530], cx
// 004079f8  66899445d2faffff     mov word ptr [ebp + eax*2 - 0x52e], dx
// 00407a00  8d85d0faffff         lea eax, [ebp - 0x530]
// 00407a06  50                   push eax
// 00407a07  681c08a000           push 0xa0081c
// 00407a0c  8d4dec               lea ecx, [ebp - 0x14]
// 00407a0f  51                   push ecx
// 00407a10  e86bd8ffff           call 0x405280
// 00407a15  8bf8                 mov edi, eax
// 00407a17  3bfb                 cmp edi, ebx
// 00407a19  7d21                 jge 0x407a3c
// 00407a1b  8d4d14               lea ecx, [ebp + 0x14]
// 00407a1e  e8adbeffff           call 0x4038d0
// 00407a23  8d4dec               lea ecx, [ebp - 0x14]
// 00407a26  e845cdffff           call 0x404770
// 00407a2b  8bc7                 mov eax, edi
// 00407a2d  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00407a33  5f                   pop edi
// 00407a34  5e                   pop esi
// 00407a35  5b                   pop ebx
// 00407a36  8be5                 mov esp, ebp
// 00407a38  5d                   pop ebp
// 00407a39  c21000               ret 0x10
// 00407a3c  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00407a42  52                   push edx
// 00407a43  680408a000           push 0xa00804
// 00407a48  8d45ec               lea eax, [ebp - 0x14]
// 00407a4b  50                   push eax
// 00407a4c  e82fd8ffff           call 0x405280
// 00407a51  8bf8                 mov edi, eax
// 00407a53  3bfb                 cmp edi, ebx
// 00407a55  7cc4                 jl 0x407a1b
// 00407a57  68f007a000           push 0xa007f0
// 00407a5c  395d10               cmp dword ptr [ebp + 0x10], ebx
// 00407a5f  7410                 je 0x407a71
// 00407a61  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00407a64  51                   push ecx
// 00407a65  56                   push esi
// 00407a66  8d55ec               lea edx, [ebp - 0x14]
// 00407a69  52                   push edx
// 00407a6a  e8b1fbffff           call 0x407620
// 00407a6f  eb0e                 jmp 0x407a7f
// 00407a71  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00407a74  50                   push eax
// 00407a75  56                   push esi
// 00407a76  8d4dec               lea ecx, [ebp - 0x14]
// 00407a79  51                   push ecx
// 00407a7a  e8a1fcffff           call 0x407720
// 00407a7f  8d4d14               lea ecx, [ebp + 0x14]
// 00407a82  8bf0                 mov esi, eax
// 00407a84  e847beffff           call 0x4038d0
// 00407a89  8d4dec               lea ecx, [ebp - 0x14]
// 00407a8c  e8dfccffff           call 0x404770
// 00407a91  8bc6                 mov eax, esi
// 00407a93  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00407a99  5f                   pop edi
// 00407a9a  5e                   pop esi
// 00407a9b  5b                   pop ebx
// 00407a9c  8be5                 mov esp, ebp
// 00407a9e  5d                   pop ebp
// 00407a9f  c21000               ret 0x10
// copied from an identical function in another client (function ?roc_update_registry_from_resource_s@@YGJPAVCAtlModule@ATL@@PB_WHPAU_ATL_REGMAP_ENTRY@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp
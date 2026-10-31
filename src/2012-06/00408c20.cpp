// roc 2012-06 00408c20  unit: VCApp::?$CComAggObject  size: 642 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00408c20
//
// 00408c20  55                   push ebp
// 00408c21  8bec                 mov ebp, esp
// 00408c23  81ec40090000         sub esp, 0x940
// 00408c29  53                   push ebx
// 00408c2a  33db                 xor ebx, ebx
// 00408c2c  56                   push esi
// 00408c2d  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00408c30  57                   push edi
// 00408c31  c745ec7838b400       mov dword ptr [ebp - 0x14], 0xb43878
// 00408c38  895df0               mov dword ptr [ebp - 0x10], ebx
// 00408c3b  895df4               mov dword ptr [ebp - 0xc], ebx
// 00408c3e  895df8               mov dword ptr [ebp - 8], ebx
// 00408c41  3bf3                 cmp esi, ebx
// 00408c43  7423                 je 0x408c68
// 00408c45  8b06                 mov eax, dword ptr [esi]
// 00408c47  3bc3                 cmp eax, ebx
// 00408c49  741d                 je 0x408c68
// 00408c4b  eb03                 jmp 0x408c50
// 00408c4d  8d4900               lea ecx, [ecx]
// 00408c50  8b4e04               mov ecx, dword ptr [esi + 4]
// 00408c53  51                   push ecx
// 00408c54  50                   push eax
// 00408c55  8d55ec               lea edx, [ebp - 0x14]
// 00408c58  52                   push edx
// 00408c59  e8e2d4ffff           call 0x406140
// 00408c5e  8b4608               mov eax, dword ptr [esi + 8]
// 00408c61  83c608               add esi, 8
// 00408c64  3bc3                 cmp eax, ebx
// 00408c66  75e8                 jne 0x408c50
// 00408c68  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00408c6b  8b01                 mov eax, dword ptr [ecx]
// 00408c6d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00408c70  8d55ec               lea edx, [ebp - 0x14]
// 00408c73  52                   push edx
// 00408c74  ffd0                 call eax
// 00408c76  8bf0                 mov esi, eax
// 00408c78  3bf3                 cmp esi, ebx
// 00408c7a  0f8c09020000         jl 0x408e89
// 00408c80  8b3d84a4e500         mov edi, dword ptr [0xe5a484]
// 00408c86  6804010000           push 0x104
// 00408c8b  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00408c91  51                   push ecx
// 00408c92  57                   push edi
// 00408c93  895d14               mov dword ptr [ebp + 0x14], ebx
// 00408c96  ff159021b200         call dword ptr [0xb22190]
// 00408c9c  3bc3                 cmp eax, ebx
// 00408c9e  750a                 jne 0x408caa
// 00408ca0  e8ebb5ffff           call 0x404290
// 00408ca5  e9d5010000           jmp 0x408e7f
// 00408caa  3d04010000           cmp eax, 0x104
// 00408caf  7524                 jne 0x408cd5
// 00408cb1  8d4d14               lea ecx, [ebp + 0x14]
// 00408cb4  e8a7bdffff           call 0x404a60
// 00408cb9  8d4dec               lea ecx, [ebp - 0x14]
// 00408cbc  e88fc7ffff           call 0x405450
// 00408cc1  b87a000780           mov eax, 0x8007007a
// 00408cc6  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00408ccc  5f                   pop edi
// 00408ccd  5e                   pop esi
// 00408cce  5b                   pop ebx
// 00408ccf  8be5                 mov esp, ebp
// 00408cd1  5d                   pop ebp
// 00408cd2  c21000               ret 0x10
// 00408cd5  8d95e8feffff         lea edx, [ebp - 0x118]
// 00408cdb  52                   push edx
// 00408cdc  ff15a821b200         call dword ptr [0xb221a8]
// 00408ce2  40                   inc eax
// 00408ce3  6a02                 push 2
// 00408ce5  50                   push eax
// 00408ce6  894508               mov dword ptr [ebp + 8], eax
// 00408ce9  8d4508               lea eax, [ebp + 8]
// 00408cec  50                   push eax
// 00408ced  e8beb3ffff           call 0x4040b0
// 00408cf2  83c40c               add esp, 0xc
// 00408cf5  85c0                 test eax, eax
// 00408cf7  7c44                 jl 0x408d3d
// 00408cf9  8b7508               mov esi, dword ptr [ebp + 8]
// 00408cfc  81fe00040000         cmp esi, 0x400
// 00408d02  7f18                 jg 0x408d1c
// 00408d04  56                   push esi
// 00408d05  e866c0ffff           call 0x404d70
// 00408d0a  83c404               add esp, 4
// 00408d0d  84c0                 test al, al
// 00408d0f  740b                 je 0x408d1c
// 00408d11  8bc6                 mov eax, esi
// 00408d13  e8f8a55700           call 0x983310
// 00408d18  8bc4                 mov eax, esp
// 00408d1a  eb09                 jmp 0x408d25
// 00408d1c  56                   push esi
// 00408d1d  8d4d14               lea ecx, [ebp + 0x14]
// 00408d20  e8fbc4ffff           call 0x405220
// 00408d25  6a03                 push 3
// 00408d27  d1ee                 shr esi, 1
// 00408d29  56                   push esi
// 00408d2a  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00408d30  51                   push ecx
// 00408d31  50                   push eax
// 00408d32  e8c9b3ffff           call 0x404100
// 00408d37  8bf0                 mov esi, eax
// 00408d39  3bf3                 cmp esi, ebx
// 00408d3b  7524                 jne 0x408d61
// 00408d3d  8d4d14               lea ecx, [ebp + 0x14]
// 00408d40  e81bbdffff           call 0x404a60
// 00408d45  8d4dec               lea ecx, [ebp - 0x14]
// 00408d48  e803c7ffff           call 0x405450
// 00408d4d  b80e000780           mov eax, 0x8007000e
// 00408d52  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00408d58  5f                   pop edi
// 00408d59  5e                   pop esi
// 00408d5a  5b                   pop ebx
// 00408d5b  8be5                 mov esp, ebp
// 00408d5d  5d                   pop ebp
// 00408d5e  c21000               ret 0x10
// 00408d61  56                   push esi
// 00408d62  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00408d68  6808020000           push 0x208
// 00408d6d  52                   push edx
// 00408d6e  e89db5ffff           call 0x404310
// 00408d73  83c40c               add esp, 0xc
// 00408d76  3bfb                 cmp edi, ebx
// 00408d78  7413                 je 0x408d8d
// 00408d7a  53                   push ebx
// 00408d7b  ff15ac21b200         call dword ptr [0xb221ac]
// 00408d81  3bf8                 cmp edi, eax
// 00408d83  7408                 je 0x408d8d
// 00408d85  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 00408d8b  eb79                 jmp 0x408e06
// 00408d8d  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 00408d93  50                   push eax
// 00408d94  8d8dd2faffff         lea ecx, [ebp - 0x52e]
// 00408d9a  ba22000000           mov edx, 0x22
// 00408d9f  680b020000           push 0x20b
// 00408da4  51                   push ecx
// 00408da5  668995d0faffff       mov word ptr [ebp - 0x530], dx
// 00408dac  e8cfb3ffff           call 0x404180
// 00408db1  83c40c               add esp, 0xc
// 00408db4  84c0                 test al, al
// 00408db6  7524                 jne 0x408ddc
// 00408db8  8d4d14               lea ecx, [ebp + 0x14]
// 00408dbb  e8a0bcffff           call 0x404a60
// 00408dc0  8d4dec               lea ecx, [ebp - 0x14]
// 00408dc3  e888c6ffff           call 0x405450
// 00408dc8  b805400080           mov eax, 0x80004005
// 00408dcd  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00408dd3  5f                   pop edi
// 00408dd4  5e                   pop esi
// 00408dd5  5b                   pop ebx
// 00408dd6  8be5                 mov esp, ebp
// 00408dd8  5d                   pop ebp
// 00408dd9  c21000               ret 0x10
// 00408ddc  8d95d0faffff         lea edx, [ebp - 0x530]
// 00408de2  52                   push edx
// 00408de3  ff15c421b200         call dword ptr [0xb221c4]
// 00408de9  b922000000           mov ecx, 0x22
// 00408dee  33d2                 xor edx, edx
// 00408df0  66898c45d0faffff     mov word ptr [ebp + eax*2 - 0x530], cx
// 00408df8  66899445d2faffff     mov word ptr [ebp + eax*2 - 0x52e], dx
// 00408e00  8d85d0faffff         lea eax, [ebp - 0x530]
// 00408e06  50                   push eax
// 00408e07  684c3bb400           push 0xb43b4c
// 00408e0c  8d4dec               lea ecx, [ebp - 0x14]
// 00408e0f  51                   push ecx
// 00408e10  e82bd3ffff           call 0x406140
// 00408e15  8bf8                 mov edi, eax
// 00408e17  3bfb                 cmp edi, ebx
// 00408e19  7d21                 jge 0x408e3c
// 00408e1b  8d4d14               lea ecx, [ebp + 0x14]
// 00408e1e  e83dbcffff           call 0x404a60
// 00408e23  8d4dec               lea ecx, [ebp - 0x14]
// 00408e26  e825c6ffff           call 0x405450
// 00408e2b  8bc7                 mov eax, edi
// 00408e2d  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00408e33  5f                   pop edi
// 00408e34  5e                   pop esi
// 00408e35  5b                   pop ebx
// 00408e36  8be5                 mov esp, ebp
// 00408e38  5d                   pop ebp
// 00408e39  c21000               ret 0x10
// 00408e3c  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00408e42  52                   push edx
// 00408e43  68343bb400           push 0xb43b34
// 00408e48  8d45ec               lea eax, [ebp - 0x14]
// 00408e4b  50                   push eax
// 00408e4c  e8efd2ffff           call 0x406140
// 00408e51  8bf8                 mov edi, eax
// 00408e53  3bfb                 cmp edi, ebx
// 00408e55  7cc4                 jl 0x408e1b
// 00408e57  68203bb400           push 0xb43b20
// 00408e5c  395d10               cmp dword ptr [ebp + 0x10], ebx
// 00408e5f  7410                 je 0x408e71
// 00408e61  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00408e64  51                   push ecx
// 00408e65  56                   push esi
// 00408e66  8d55ec               lea edx, [ebp - 0x14]
// 00408e69  52                   push edx
// 00408e6a  e8b1fbffff           call 0x408a20
// 00408e6f  eb0e                 jmp 0x408e7f
// 00408e71  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00408e74  50                   push eax
// 00408e75  56                   push esi
// 00408e76  8d4dec               lea ecx, [ebp - 0x14]
// 00408e79  51                   push ecx
// 00408e7a  e8a1fcffff           call 0x408b20
// 00408e7f  8d4d14               lea ecx, [ebp + 0x14]
// 00408e82  8bf0                 mov esi, eax
// 00408e84  e8d7bbffff           call 0x404a60
// 00408e89  8d4dec               lea ecx, [ebp - 0x14]
// 00408e8c  e8bfc5ffff           call 0x405450
// 00408e91  8bc6                 mov eax, esi
// 00408e93  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00408e99  5f                   pop edi
// 00408e9a  5e                   pop esi
// 00408e9b  5b                   pop ebx
// 00408e9c  8be5                 mov esp, ebp
// 00408e9e  5d                   pop ebp
// 00408e9f  c21000               ret 0x10
// copied from an identical function in another client (function ?roc_update_registry_from_resource_s@@YGJPAVCAtlModule@ATL@@PB_WHPAU_ATL_REGMAP_ENTRY@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp
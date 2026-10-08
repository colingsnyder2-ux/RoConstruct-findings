// roc 2012-06 00a68af0  unit: PAVCXTShadowWnd::?$CList  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68af0
//
// 00a68af0  83ec30               sub esp, 0x30
// 00a68af3  56                   push esi
// 00a68af4  8bf1                 mov esi, ecx
// 00a68af6  8b4668               mov eax, dword ptr [esi + 0x68]
// 00a68af9  57                   push edi
// 00a68afa  50                   push eax
// 00a68afb  e8669bf1ff           call 0x982666
// 00a68b00  837e6800             cmp dword ptr [esi + 0x68], 0
// 00a68b04  0f8455010000         je 0xa68c5f
// 00a68b0a  85c0                 test eax, eax
// 00a68b0c  0f844d010000         je 0xa68c5f
// 00a68b12  837e5800             cmp dword ptr [esi + 0x58], 0
// 00a68b16  0f8436010000         je 0xa68c52
// 00a68b1c  8b7e54               mov edi, dword ptr [esi + 0x54]
// 00a68b1f  50                   push eax
// 00a68b20  8d4c240c             lea ecx, [esp + 0xc]
// 00a68b24  e817c6f6ff           call 0x9d5140
// 00a68b29  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a68b2d  741e                 je 0xa68b4d
// 00a68b2f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a68b33  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a68b37  8d0c38               lea ecx, [eax + edi]
// 00a68b3a  51                   push ecx
// 00a68b3b  03d7                 add edx, edi
// 00a68b3d  52                   push edx
// 00a68b3e  50                   push eax
// 00a68b3f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a68b43  03c7                 add eax, edi
// 00a68b45  50                   push eax
// 00a68b46  8d4c2428             lea ecx, [esp + 0x28]
// 00a68b4a  51                   push ecx
// 00a68b4b  eb1a                 jmp 0xa68b67
// 00a68b4d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a68b51  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a68b55  52                   push edx
// 00a68b56  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a68b5a  8d0c38               lea ecx, [eax + edi]
// 00a68b5d  51                   push ecx
// 00a68b5e  03d7                 add edx, edi
// 00a68b60  52                   push edx
// 00a68b61  50                   push eax
// 00a68b62  8d442428             lea eax, [esp + 0x28]
// 00a68b66  50                   push eax
// 00a68b67  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a68b6d  56                   push esi
// 00a68b6e  8d4c242c             lea ecx, [esp + 0x2c]
// 00a68b72  e8c9c5f6ff           call 0x9d5140
// 00a68b77  8d4c2428             lea ecx, [esp + 0x28]
// 00a68b7b  51                   push ecx
// 00a68b7c  8d54241c             lea edx, [esp + 0x1c]
// 00a68b80  52                   push edx
// 00a68b81  ff15e03cb200         call dword ptr [0xb23ce0]
// 00a68b87  85c0                 test eax, eax
// 00a68b89  0f85d0000000         jne 0xa68c5f
// 00a68b8f  6a01                 push 1
// 00a68b91  8d44241c             lea eax, [esp + 0x1c]
// 00a68b95  50                   push eax
// 00a68b96  8bce                 mov ecx, esi
// 00a68b98  e89359a3ff           call 0x49e530
// 00a68b9d  e80effffff           call 0xa68ab0
// 00a68ba2  50                   push eax
// 00a68ba3  8bce                 mov ecx, esi
// 00a68ba5  e8c6faffff           call 0xa68670
// 00a68baa  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a68bad  6a00                 push 0
// 00a68baf  6a00                 push 0
// 00a68bb1  51                   push ecx
// 00a68bb2  ff15983cb200         call dword ptr [0xb23c98]
// 00a68bb8  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00a68bbb  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00a68bbe  83ec10               sub esp, 0x10
// 00a68bc1  8bc4                 mov eax, esp
// 00a68bc3  8910                 mov dword ptr [eax], edx
// 00a68bc5  8b5674               mov edx, dword ptr [esi + 0x74]
// 00a68bc8  894804               mov dword ptr [eax + 4], ecx
// 00a68bcb  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00a68bce  895008               mov dword ptr [eax + 8], edx
// 00a68bd1  89480c               mov dword ptr [eax + 0xc], ecx
// 00a68bd4  8bce                 mov ecx, esi
// 00a68bd6  e8e5f9ffff           call 0xa685c0
// 00a68bdb  837e6400             cmp dword ptr [esi + 0x64], 0
// 00a68bdf  747e                 je 0xa68c5f
// 00a68be1  e85ae0f7ff           call 0x9e6c40
// 00a68be6  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a68be9  f7da                 neg edx
// 00a68beb  1bd2                 sbb edx, edx
// 00a68bed  83e2fc               and edx, 0xfffffffc
// 00a68bf0  83c204               add edx, 4
// 00a68bf3  81ca93000000         or edx, 0x93
// 00a68bf9  52                   push edx
// 00a68bfa  6a00                 push 0
// 00a68bfc  6a00                 push 0
// 00a68bfe  6a00                 push 0
// 00a68c00  6a00                 push 0
// 00a68c02  6a00                 push 0
// 00a68c04  8bce                 mov ecx, esi
// 00a68c06  e8c998f1ff           call 0x9824d4
// 00a68c0b  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00a68c0e  85c9                 test ecx, ecx
// 00a68c10  7410                 je 0xa68c22
// 00a68c12  8b01                 mov eax, dword ptr [ecx]
// 00a68c14  8b5004               mov edx, dword ptr [eax + 4]
// 00a68c17  6a01                 push 1
// 00a68c19  ffd2                 call edx
// 00a68c1b  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 00a68c22  ff15f43bb200         call dword ptr [0xb23bf4]
// 00a68c28  50                   push eax
// 00a68c29  e8389af1ff           call 0x982666
// 00a68c2e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a68c31  6a00                 push 0
// 00a68c33  6a00                 push 0
// 00a68c35  50                   push eax
// 00a68c36  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a68c3c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a68c3f  6a00                 push 0
// 00a68c41  6a01                 push 1
// 00a68c43  6a01                 push 1
// 00a68c45  51                   push ecx
// 00a68c46  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a68c4c  5f                   pop edi
// 00a68c4d  5e                   pop esi
// 00a68c4e  83c430               add esp, 0x30
// 00a68c51  c3                   ret 
// 00a68c52  e859feffff           call 0xa68ab0
// 00a68c57  50                   push eax
// 00a68c58  8bce                 mov ecx, esi
// 00a68c5a  e811faffff           call 0xa68670
// 00a68c5f  5f                   pop edi
// 00a68c60  5e                   pop esi
// 00a68c61  83c430               add esp, 0x30
// 00a68c64  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnParentPosChanged@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

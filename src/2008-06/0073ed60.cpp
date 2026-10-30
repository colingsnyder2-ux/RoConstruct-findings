// from server: 100% by auto
// roc 2008-06 0073ed60  unit: XTPPaintThemes::CXTPOfficeTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073ed60
//
// 0073ed60  837c242400           cmp dword ptr [esp + 0x24], 0
// 0073ed65  56                   push esi
// 0073ed66  57                   push edi
// 0073ed67  8bf1                 mov esi, ecx
// 0073ed69  0f85b5000000         jne 0x73ee24
// 0073ed6f  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 0073ed76  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0073ed7a  7542                 jne 0x73edbe
// 0073ed7c  8bcf                 mov ecx, edi
// 0073ed7e  e8cdacf7ff           call 0x6b9a50
// 0073ed83  85c0                 test eax, eax
// 0073ed85  7537                 jne 0x73edbe
// 0073ed87  6a28                 push 0x28
// 0073ed89  8bce                 mov ecx, esi
// 0073ed8b  e8e0f2f6ff           call 0x6ae070
// 0073ed90  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073ed94  50                   push eax
// 0073ed95  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073ed99  50                   push eax
// 0073ed9a  51                   push ecx
// 0073ed9b  8bcf                 mov ecx, edi
// 0073ed9d  e8ceacf7ff           call 0x6b9a70
// 0073eda2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073eda6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073edaa  50                   push eax
// 0073edab  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073edaf  52                   push edx
// 0073edb0  50                   push eax
// 0073edb1  51                   push ecx
// 0073edb2  8bcf                 mov ecx, edi
// 0073edb4  e8372bf8ff           call 0x6c18f0
// 0073edb9  5f                   pop edi
// 0073edba  5e                   pop esi
// 0073edbb  c23000               ret 0x30
// 0073edbe  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0073edc5  742e                 je 0x73edf5
// 0073edc7  8bcf                 mov ecx, edi
// 0073edc9  e802c8f7ff           call 0x6bb5d0
// 0073edce  85c0                 test eax, eax
// 0073edd0  7523                 jne 0x73edf5
// 0073edd2  8b4640               mov eax, dword ptr [esi + 0x40]
// 0073edd5  83f8ff               cmp eax, -1
// 0073edd8  7505                 jne 0x73eddf
// 0073edda  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0073eddd  eb02                 jmp 0x73ede1
// 0073eddf  8bc8                 mov ecx, eax
// 0073ede1  8b4634               mov eax, dword ptr [esi + 0x34]
// 0073ede4  83f8ff               cmp eax, -1
// 0073ede7  7503                 jne 0x73edec
// 0073ede9  8b4630               mov eax, dword ptr [esi + 0x30]
// 0073edec  51                   push ecx
// 0073eded  50                   push eax
// 0073edee  8bcf                 mov ecx, edi
// 0073edf0  e85b01f8ff           call 0x6bef50
// 0073edf5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073edf9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073edfd  52                   push edx
// 0073edfe  50                   push eax
// 0073edff  6a01                 push 1
// 0073ee01  8bcf                 mov ecx, edi
// 0073ee03  e8681df8ff           call 0x6c0b70
// 0073ee08  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073ee0c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073ee10  50                   push eax
// 0073ee11  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073ee15  51                   push ecx
// 0073ee16  52                   push edx
// 0073ee17  50                   push eax
// 0073ee18  8bcf                 mov ecx, edi
// 0073ee1a  e8612af8ff           call 0x6c1880
// 0073ee1f  5f                   pop edi
// 0073ee20  5e                   pop esi
// 0073ee21  c23000               ret 0x30
// 0073ee24  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0073ee28  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073ee2c  83f902               cmp ecx, 2
// 0073ee2f  0f85b4000000         jne 0x73eee9
// 0073ee35  85c0                 test eax, eax
// 0073ee37  0f85ac000000         jne 0x73eee9
// 0073ee3d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0073ee41  8bcf                 mov ecx, edi
// 0073ee43  e808acf7ff           call 0x6b9a50
// 0073ee48  85c0                 test eax, eax
// 0073ee4a  7537                 jne 0x73ee83
// 0073ee4c  6a28                 push 0x28
// 0073ee4e  8bce                 mov ecx, esi
// 0073ee50  e81bf2f6ff           call 0x6ae070
// 0073ee55  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073ee59  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073ee5d  50                   push eax
// 0073ee5e  51                   push ecx
// 0073ee5f  52                   push edx
// 0073ee60  8bcf                 mov ecx, edi
// 0073ee62  e809acf7ff           call 0x6b9a70
// 0073ee67  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073ee6b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073ee6f  50                   push eax
// 0073ee70  8b442424             mov eax, dword ptr [esp + 0x24]
// 0073ee74  50                   push eax
// 0073ee75  51                   push ecx
// 0073ee76  52                   push edx
// 0073ee77  8bcf                 mov ecx, edi
// 0073ee79  e8722af8ff           call 0x6c18f0
// 0073ee7e  5f                   pop edi
// 0073ee7f  5e                   pop esi
// 0073ee80  c23000               ret 0x30
// 0073ee83  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0073ee8a  742e                 je 0x73eeba
// 0073ee8c  8bcf                 mov ecx, edi
// 0073ee8e  e83dc7f7ff           call 0x6bb5d0
// 0073ee93  85c0                 test eax, eax
// 0073ee95  7523                 jne 0x73eeba
// 0073ee97  8b4640               mov eax, dword ptr [esi + 0x40]
// 0073ee9a  83f8ff               cmp eax, -1
// 0073ee9d  7505                 jne 0x73eea4
// 0073ee9f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0073eea2  eb02                 jmp 0x73eea6
// 0073eea4  8bc8                 mov ecx, eax
// 0073eea6  8b4634               mov eax, dword ptr [esi + 0x34]
// 0073eea9  83f8ff               cmp eax, -1
// 0073eeac  7503                 jne 0x73eeb1
// 0073eeae  8b4630               mov eax, dword ptr [esi + 0x30]
// 0073eeb1  51                   push ecx
// 0073eeb2  50                   push eax
// 0073eeb3  8bcf                 mov ecx, edi
// 0073eeb5  e89600f8ff           call 0x6bef50
// 0073eeba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073eebe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073eec2  50                   push eax
// 0073eec3  51                   push ecx
// 0073eec4  6a01                 push 1
// 0073eec6  8bcf                 mov ecx, edi
// 0073eec8  e8a31cf8ff           call 0x6c0b70
// 0073eecd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073eed1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073eed5  50                   push eax
// 0073eed6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073eeda  52                   push edx
// 0073eedb  50                   push eax
// 0073eedc  51                   push ecx
// 0073eedd  8bcf                 mov ecx, edi
// 0073eedf  e89c29f8ff           call 0x6c1880
// 0073eee4  5f                   pop edi
// 0073eee5  5e                   pop esi
// 0073eee6  c23000               ret 0x30
// 0073eee9  837c243400           cmp dword ptr [esp + 0x34], 0
// 0073eeee  0f8547010000         jne 0x73f03b
// 0073eef4  85c9                 test ecx, ecx
// 0073eef6  0f8543010000         jne 0x73f03f
// 0073eefc  394c2424             cmp dword ptr [esp + 0x24], ecx
// 0073ef00  7544                 jne 0x73ef46
// 0073ef02  85c0                 test eax, eax
// 0073ef04  7549                 jne 0x73ef4f
// 0073ef06  398648010000         cmp dword ptr [esi + 0x148], eax
// 0073ef0c  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073ef10  8bce                 mov ecx, esi
// 0073ef12  7407                 je 0x73ef1b
// 0073ef14  e8071cf8ff           call 0x6c0b20
// 0073ef19  eb05                 jmp 0x73ef20
// 0073ef1b  e850abf7ff           call 0x6b9a70
// 0073ef20  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073ef24  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073ef28  52                   push edx
// 0073ef29  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073ef2d  51                   push ecx
// 0073ef2e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073ef32  50                   push eax
// 0073ef33  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073ef37  52                   push edx
// 0073ef38  50                   push eax
// 0073ef39  51                   push ecx
// 0073ef3a  8bce                 mov ecx, esi
// 0073ef3c  e83f29f8ff           call 0x6c1880
// 0073ef41  5f                   pop edi
// 0073ef42  5e                   pop esi
// 0073ef43  c23000               ret 0x30
// 0073ef46  85c0                 test eax, eax
// 0073ef48  740e                 je 0x73ef58
// 0073ef4a  e9bb000000           jmp 0x73f00a
// 0073ef4f  83f801               cmp eax, 1
// 0073ef52  0f85a5000000         jne 0x73effd
// 0073ef58  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0073ef5f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073ef63  746b                 je 0x73efd0
// 0073ef65  8bce                 mov ecx, esi
// 0073ef67  e8e41bf8ff           call 0x6c0b50
// 0073ef6c  8bc8                 mov ecx, eax
// 0073ef6e  e84dc3f7ff           call 0x6bb2c0
// 0073ef73  85c0                 test eax, eax
// 0073ef75  7559                 jne 0x73efd0
// 0073ef77  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073ef7b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073ef7f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0073ef83  53                   push ebx
// 0073ef84  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0073ef88  55                   push ebp
// 0073ef89  52                   push edx
// 0073ef8a  50                   push eax
// 0073ef8b  8bce                 mov ecx, esi
// 0073ef8d  47                   inc edi
// 0073ef8e  43                   inc ebx
// 0073ef8f  e8bc1bf8ff           call 0x6c0b50
// 0073ef94  50                   push eax
// 0073ef95  53                   push ebx
// 0073ef96  57                   push edi
// 0073ef97  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0073ef9b  57                   push edi
// 0073ef9c  8bce                 mov ecx, esi
// 0073ef9e  e8dd28f8ff           call 0x6c1880
// 0073efa3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073efa7  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073efab  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0073efaf  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0073efb3  51                   push ecx
// 0073efb4  52                   push edx
// 0073efb5  8bce                 mov ecx, esi
// 0073efb7  4b                   dec ebx
// 0073efb8  4d                   dec ebp
// 0073efb9  e8b2c5f7ff           call 0x6bb570
// 0073efbe  50                   push eax
// 0073efbf  55                   push ebp
// 0073efc0  53                   push ebx
// 0073efc1  57                   push edi
// 0073efc2  8bce                 mov ecx, esi
// 0073efc4  e8b728f8ff           call 0x6c1880
// 0073efc9  5d                   pop ebp
// 0073efca  5b                   pop ebx
// 0073efcb  5f                   pop edi
// 0073efcc  5e                   pop esi
// 0073efcd  c23000               ret 0x30
// 0073efd0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073efd4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073efd8  50                   push eax
// 0073efd9  51                   push ecx
// 0073efda  8bce                 mov ecx, esi
// 0073efdc  e88fc5f7ff           call 0x6bb570
// 0073efe1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073efe5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073efe9  50                   push eax
// 0073efea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073efee  52                   push edx
// 0073efef  50                   push eax
// 0073eff0  51                   push ecx
// 0073eff1  8bce                 mov ecx, esi
// 0073eff3  e88828f8ff           call 0x6c1880
// 0073eff8  5f                   pop edi
// 0073eff9  5e                   pop esi
// 0073effa  c23000               ret 0x30
// 0073effd  50                   push eax
// 0073effe  e85dbdf6ff           call 0x6aad60
// 0073f003  83c404               add esp, 4
// 0073f006  85c0                 test eax, eax
// 0073f008  746e                 je 0x73f078
// 0073f00a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073f00e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073f012  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073f016  52                   push edx
// 0073f017  50                   push eax
// 0073f018  8bce                 mov ecx, esi
// 0073f01a  e891c5f7ff           call 0x6bb5b0
// 0073f01f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073f023  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073f027  50                   push eax
// 0073f028  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073f02c  51                   push ecx
// 0073f02d  52                   push edx
// 0073f02e  50                   push eax
// 0073f02f  8bce                 mov ecx, esi
// 0073f031  e84a28f8ff           call 0x6c1880
// 0073f036  5f                   pop edi
// 0073f037  5e                   pop esi
// 0073f038  c23000               ret 0x30
// 0073f03b  85c9                 test ecx, ecx
// 0073f03d  740d                 je 0x73f04c
// 0073f03f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073f043  8bce                 mov ecx, esi
// 0073f045  e846c5f7ff           call 0x6bb590
// 0073f04a  eb0b                 jmp 0x73f057
// 0073f04c  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073f050  8bce                 mov ecx, esi
// 0073f052  e819aaf7ff           call 0x6b9a70
// 0073f057  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073f05b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073f05f  51                   push ecx
// 0073f060  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073f064  52                   push edx
// 0073f065  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073f069  50                   push eax
// 0073f06a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073f06e  50                   push eax
// 0073f06f  51                   push ecx
// 0073f070  52                   push edx
// 0073f071  8bce                 mov ecx, esi
// 0073f073  e80828f8ff           call 0x6c1880
// 0073f078  5f                   pop edi
// 0073f079  5e                   pop esi
// 0073f07a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawImage@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp

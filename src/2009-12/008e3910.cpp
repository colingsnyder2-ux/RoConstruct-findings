// roc 2009-12 008e3910  unit: PAVCXTShadowWnd::?$CList  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3910
//
// 008e3910  83ec30               sub esp, 0x30
// 008e3913  56                   push esi
// 008e3914  8bf1                 mov esi, ecx
// 008e3916  8b4668               mov eax, dword ptr [esi + 0x68]
// 008e3919  57                   push edi
// 008e391a  50                   push eax
// 008e391b  e80a02f1ff           call 0x7f3b2a
// 008e3920  837e6800             cmp dword ptr [esi + 0x68], 0
// 008e3924  0f8455010000         je 0x8e3a7f
// 008e392a  85c0                 test eax, eax
// 008e392c  0f844d010000         je 0x8e3a7f
// 008e3932  837e5800             cmp dword ptr [esi + 0x58], 0
// 008e3936  0f8436010000         je 0x8e3a72
// 008e393c  8b7e54               mov edi, dword ptr [esi + 0x54]
// 008e393f  50                   push eax
// 008e3940  8d4c240c             lea ecx, [esp + 0xc]
// 008e3944  e82779f6ff           call 0x84b270
// 008e3949  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008e394d  741e                 je 0x8e396d
// 008e394f  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e3953  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e3957  8d0c38               lea ecx, [eax + edi]
// 008e395a  51                   push ecx
// 008e395b  03d7                 add edx, edi
// 008e395d  52                   push edx
// 008e395e  50                   push eax
// 008e395f  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e3963  03c7                 add eax, edi
// 008e3965  50                   push eax
// 008e3966  8d4c2428             lea ecx, [esp + 0x28]
// 008e396a  51                   push ecx
// 008e396b  eb1a                 jmp 0x8e3987
// 008e396d  8b542414             mov edx, dword ptr [esp + 0x14]
// 008e3971  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e3975  52                   push edx
// 008e3976  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e397a  8d0c38               lea ecx, [eax + edi]
// 008e397d  51                   push ecx
// 008e397e  03d7                 add edx, edi
// 008e3980  52                   push edx
// 008e3981  50                   push eax
// 008e3982  8d442428             lea eax, [esp + 0x28]
// 008e3986  50                   push eax
// 008e3987  ff1538ca9800         call dword ptr [0x98ca38]
// 008e398d  56                   push esi
// 008e398e  8d4c242c             lea ecx, [esp + 0x2c]
// 008e3992  e8d978f6ff           call 0x84b270
// 008e3997  8d4c2428             lea ecx, [esp + 0x28]
// 008e399b  51                   push ecx
// 008e399c  8d54241c             lea edx, [esp + 0x1c]
// 008e39a0  52                   push edx
// 008e39a1  ff15bcca9800         call dword ptr [0x98cabc]
// 008e39a7  85c0                 test eax, eax
// 008e39a9  0f85d0000000         jne 0x8e3a7f
// 008e39af  6a01                 push 1
// 008e39b1  8d44241c             lea eax, [esp + 0x1c]
// 008e39b5  50                   push eax
// 008e39b6  8bce                 mov ecx, esi
// 008e39b8  e8437ab8ff           call 0x46b400
// 008e39bd  e80effffff           call 0x8e38d0
// 008e39c2  50                   push eax
// 008e39c3  8bce                 mov ecx, esi
// 008e39c5  e886faffff           call 0x8e3450
// 008e39ca  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e39cd  6a00                 push 0
// 008e39cf  6a00                 push 0
// 008e39d1  51                   push ecx
// 008e39d2  ff1554cb9800         call dword ptr [0x98cb54]
// 008e39d8  8b566c               mov edx, dword ptr [esi + 0x6c]
// 008e39db  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008e39de  83ec10               sub esp, 0x10
// 008e39e1  8bc4                 mov eax, esp
// 008e39e3  8910                 mov dword ptr [eax], edx
// 008e39e5  8b5674               mov edx, dword ptr [esi + 0x74]
// 008e39e8  894804               mov dword ptr [eax + 4], ecx
// 008e39eb  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008e39ee  895008               mov dword ptr [eax + 8], edx
// 008e39f1  89480c               mov dword ptr [eax + 0xc], ecx
// 008e39f4  8bce                 mov ecx, esi
// 008e39f6  e8a5f9ffff           call 0x8e33a0
// 008e39fb  837e6400             cmp dword ptr [esi + 0x64], 0
// 008e39ff  747e                 je 0x8e3a7f
// 008e3a01  e87a6bf7ff           call 0x85a580
// 008e3a06  8b5020               mov edx, dword ptr [eax + 0x20]
// 008e3a09  f7da                 neg edx
// 008e3a0b  1bd2                 sbb edx, edx
// 008e3a0d  83e2fc               and edx, 0xfffffffc
// 008e3a10  83c204               add edx, 4
// 008e3a13  81ca93000000         or edx, 0x93
// 008e3a19  52                   push edx
// 008e3a1a  6a00                 push 0
// 008e3a1c  6a00                 push 0
// 008e3a1e  6a00                 push 0
// 008e3a20  6a00                 push 0
// 008e3a22  6a00                 push 0
// 008e3a24  8bce                 mov ecx, esi
// 008e3a26  e80102f1ff           call 0x7f3c2c
// 008e3a2b  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008e3a2e  85c9                 test ecx, ecx
// 008e3a30  7410                 je 0x8e3a42
// 008e3a32  8b01                 mov eax, dword ptr [ecx]
// 008e3a34  8b5004               mov edx, dword ptr [eax + 4]
// 008e3a37  6a01                 push 1
// 008e3a39  ffd2                 call edx
// 008e3a3b  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 008e3a42  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008e3a48  50                   push eax
// 008e3a49  e8dc00f1ff           call 0x7f3b2a
// 008e3a4e  8b4020               mov eax, dword ptr [eax + 0x20]
// 008e3a51  6a00                 push 0
// 008e3a53  6a00                 push 0
// 008e3a55  50                   push eax
// 008e3a56  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e3a5c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e3a5f  6a00                 push 0
// 008e3a61  6a01                 push 1
// 008e3a63  6a01                 push 1
// 008e3a65  51                   push ecx
// 008e3a66  ff1558cc9800         call dword ptr [0x98cc58]
// 008e3a6c  5f                   pop edi
// 008e3a6d  5e                   pop esi
// 008e3a6e  83c430               add esp, 0x30
// 008e3a71  c3                   ret 
// 008e3a72  e859feffff           call 0x8e38d0
// 008e3a77  50                   push eax
// 008e3a78  8bce                 mov ecx, esi
// 008e3a7a  e8d1f9ffff           call 0x8e3450
// 008e3a7f  5f                   pop edi
// 008e3a80  5e                   pop esi
// 008e3a81  83c430               add esp, 0x30
// 008e3a84  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnParentPosChanged@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

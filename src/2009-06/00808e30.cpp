// roc 2009-06 00808e30  unit: CXTShadowHook  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808e30
//
// 00808e30  83ec30               sub esp, 0x30
// 00808e33  56                   push esi
// 00808e34  8bf1                 mov esi, ecx
// 00808e36  8b4668               mov eax, dword ptr [esi + 0x68]
// 00808e39  57                   push edi
// 00808e3a  50                   push eax
// 00808e3b  e8c2fef0ff           call 0x718d02
// 00808e40  837e6800             cmp dword ptr [esi + 0x68], 0
// 00808e44  0f8455010000         je 0x808f9f
// 00808e4a  85c0                 test eax, eax
// 00808e4c  0f844d010000         je 0x808f9f
// 00808e52  837e5800             cmp dword ptr [esi + 0x58], 0
// 00808e56  0f8436010000         je 0x808f92
// 00808e5c  8b7e54               mov edi, dword ptr [esi + 0x54]
// 00808e5f  50                   push eax
// 00808e60  8d4c240c             lea ecx, [esp + 0xc]
// 00808e64  e80776f6ff           call 0x770470
// 00808e69  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00808e6d  741e                 je 0x808e8d
// 00808e6f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00808e73  8b542410             mov edx, dword ptr [esp + 0x10]
// 00808e77  8d0c38               lea ecx, [eax + edi]
// 00808e7a  51                   push ecx
// 00808e7b  03d7                 add edx, edi
// 00808e7d  52                   push edx
// 00808e7e  50                   push eax
// 00808e7f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00808e83  03c7                 add eax, edi
// 00808e85  50                   push eax
// 00808e86  8d4c2428             lea ecx, [esp + 0x28]
// 00808e8a  51                   push ecx
// 00808e8b  eb1a                 jmp 0x808ea7
// 00808e8d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00808e91  8b442410             mov eax, dword ptr [esp + 0x10]
// 00808e95  52                   push edx
// 00808e96  8b542410             mov edx, dword ptr [esp + 0x10]
// 00808e9a  8d0c38               lea ecx, [eax + edi]
// 00808e9d  51                   push ecx
// 00808e9e  03d7                 add edx, edi
// 00808ea0  52                   push edx
// 00808ea1  50                   push eax
// 00808ea2  8d442428             lea eax, [esp + 0x28]
// 00808ea6  50                   push eax
// 00808ea7  ff15a4ed8900         call dword ptr [0x89eda4]
// 00808ead  56                   push esi
// 00808eae  8d4c242c             lea ecx, [esp + 0x2c]
// 00808eb2  e8b975f6ff           call 0x770470
// 00808eb7  8d4c2428             lea ecx, [esp + 0x28]
// 00808ebb  51                   push ecx
// 00808ebc  8d54241c             lea edx, [esp + 0x1c]
// 00808ec0  52                   push edx
// 00808ec1  ff15acee8900         call dword ptr [0x89eeac]
// 00808ec7  85c0                 test eax, eax
// 00808ec9  0f85d0000000         jne 0x808f9f
// 00808ecf  6a01                 push 1
// 00808ed1  8d44241c             lea eax, [esp + 0x1c]
// 00808ed5  50                   push eax
// 00808ed6  8bce                 mov ecx, esi
// 00808ed8  e87399c5ff           call 0x462850
// 00808edd  e80effffff           call 0x808df0
// 00808ee2  50                   push eax
// 00808ee3  8bce                 mov ecx, esi
// 00808ee5  e886faffff           call 0x808970
// 00808eea  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00808eed  6a00                 push 0
// 00808eef  6a00                 push 0
// 00808ef1  51                   push ecx
// 00808ef2  ff1584ec8900         call dword ptr [0x89ec84]
// 00808ef8  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00808efb  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00808efe  83ec10               sub esp, 0x10
// 00808f01  8bc4                 mov eax, esp
// 00808f03  8910                 mov dword ptr [eax], edx
// 00808f05  8b5674               mov edx, dword ptr [esi + 0x74]
// 00808f08  894804               mov dword ptr [eax + 4], ecx
// 00808f0b  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00808f0e  895008               mov dword ptr [eax + 8], edx
// 00808f11  89480c               mov dword ptr [eax + 0xc], ecx
// 00808f14  8bce                 mov ecx, esi
// 00808f16  e8a5f9ffff           call 0x8088c0
// 00808f1b  837e6400             cmp dword ptr [esi + 0x64], 0
// 00808f1f  747e                 je 0x808f9f
// 00808f21  e89a65f7ff           call 0x77f4c0
// 00808f26  8b5020               mov edx, dword ptr [eax + 0x20]
// 00808f29  f7da                 neg edx
// 00808f2b  1bd2                 sbb edx, edx
// 00808f2d  83e2fc               and edx, 0xfffffffc
// 00808f30  83c204               add edx, 4
// 00808f33  81ca93000000         or edx, 0x93
// 00808f39  52                   push edx
// 00808f3a  6a00                 push 0
// 00808f3c  6a00                 push 0
// 00808f3e  6a00                 push 0
// 00808f40  6a00                 push 0
// 00808f42  6a00                 push 0
// 00808f44  8bce                 mov ecx, esi
// 00808f46  e8b9fef0ff           call 0x718e04
// 00808f4b  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00808f4e  85c9                 test ecx, ecx
// 00808f50  7410                 je 0x808f62
// 00808f52  8b01                 mov eax, dword ptr [ecx]
// 00808f54  8b5004               mov edx, dword ptr [eax + 4]
// 00808f57  6a01                 push 1
// 00808f59  ffd2                 call edx
// 00808f5b  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 00808f62  ff15e8ec8900         call dword ptr [0x89ece8]
// 00808f68  50                   push eax
// 00808f69  e894fdf0ff           call 0x718d02
// 00808f6e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00808f71  6a00                 push 0
// 00808f73  6a00                 push 0
// 00808f75  50                   push eax
// 00808f76  ff157cee8900         call dword ptr [0x89ee7c]
// 00808f7c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00808f7f  6a00                 push 0
// 00808f81  6a01                 push 1
// 00808f83  6a01                 push 1
// 00808f85  51                   push ecx
// 00808f86  ff150cee8900         call dword ptr [0x89ee0c]
// 00808f8c  5f                   pop edi
// 00808f8d  5e                   pop esi
// 00808f8e  83c430               add esp, 0x30
// 00808f91  c3                   ret 
// 00808f92  e859feffff           call 0x808df0
// 00808f97  50                   push eax
// 00808f98  8bce                 mov ecx, esi
// 00808f9a  e8d1f9ffff           call 0x808970
// 00808f9f  5f                   pop edi
// 00808fa0  5e                   pop esi
// 00808fa1  83c430               add esp, 0x30
// 00808fa4  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnParentPosChanged@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

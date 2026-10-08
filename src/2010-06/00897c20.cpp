// roc 2010-06 00897c20  unit: CXTShadowHook  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897c20
//
// 00897c20  83ec30               sub esp, 0x30
// 00897c23  56                   push esi
// 00897c24  8bf1                 mov esi, ecx
// 00897c26  8b4668               mov eax, dword ptr [esi + 0x68]
// 00897c29  57                   push edi
// 00897c2a  50                   push eax
// 00897c2b  e83a00f1ff           call 0x7a7c6a
// 00897c30  837e6800             cmp dword ptr [esi + 0x68], 0
// 00897c34  0f8455010000         je 0x897d8f
// 00897c3a  85c0                 test eax, eax
// 00897c3c  0f844d010000         je 0x897d8f
// 00897c42  837e5800             cmp dword ptr [esi + 0x58], 0
// 00897c46  0f8436010000         je 0x897d82
// 00897c4c  8b7e54               mov edi, dword ptr [esi + 0x54]
// 00897c4f  50                   push eax
// 00897c50  8d4c240c             lea ecx, [esp + 0xc]
// 00897c54  e85776f6ff           call 0x7ff2b0
// 00897c59  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00897c5d  741e                 je 0x897c7d
// 00897c5f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00897c63  8b542410             mov edx, dword ptr [esp + 0x10]
// 00897c67  8d0c38               lea ecx, [eax + edi]
// 00897c6a  51                   push ecx
// 00897c6b  03d7                 add edx, edi
// 00897c6d  52                   push edx
// 00897c6e  50                   push eax
// 00897c6f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00897c73  03c7                 add eax, edi
// 00897c75  50                   push eax
// 00897c76  8d4c2428             lea ecx, [esp + 0x28]
// 00897c7a  51                   push ecx
// 00897c7b  eb1a                 jmp 0x897c97
// 00897c7d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00897c81  8b442410             mov eax, dword ptr [esp + 0x10]
// 00897c85  52                   push edx
// 00897c86  8b542410             mov edx, dword ptr [esp + 0x10]
// 00897c8a  8d0c38               lea ecx, [eax + edi]
// 00897c8d  51                   push ecx
// 00897c8e  03d7                 add edx, edi
// 00897c90  52                   push edx
// 00897c91  50                   push eax
// 00897c92  8d442428             lea eax, [esp + 0x28]
// 00897c96  50                   push eax
// 00897c97  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 00897c9d  56                   push esi
// 00897c9e  8d4c242c             lea ecx, [esp + 0x2c]
// 00897ca2  e80976f6ff           call 0x7ff2b0
// 00897ca7  8d4c2428             lea ecx, [esp + 0x28]
// 00897cab  51                   push ecx
// 00897cac  8d54241c             lea edx, [esp + 0x1c]
// 00897cb0  52                   push edx
// 00897cb1  ff1518ba9e00         call dword ptr [0x9eba18]
// 00897cb7  85c0                 test eax, eax
// 00897cb9  0f85d0000000         jne 0x897d8f
// 00897cbf  6a01                 push 1
// 00897cc1  8d44241c             lea eax, [esp + 0x1c]
// 00897cc5  50                   push eax
// 00897cc6  8bce                 mov ecx, esi
// 00897cc8  e83372bdff           call 0x46ef00
// 00897ccd  e80effffff           call 0x897be0
// 00897cd2  50                   push eax
// 00897cd3  8bce                 mov ecx, esi
// 00897cd5  e846faffff           call 0x897720
// 00897cda  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00897cdd  6a00                 push 0
// 00897cdf  6a00                 push 0
// 00897ce1  51                   push ecx
// 00897ce2  ff150cba9e00         call dword ptr [0x9eba0c]
// 00897ce8  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00897ceb  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00897cee  83ec10               sub esp, 0x10
// 00897cf1  8bc4                 mov eax, esp
// 00897cf3  8910                 mov dword ptr [eax], edx
// 00897cf5  8b5674               mov edx, dword ptr [esi + 0x74]
// 00897cf8  894804               mov dword ptr [eax + 4], ecx
// 00897cfb  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00897cfe  895008               mov dword ptr [eax + 8], edx
// 00897d01  89480c               mov dword ptr [eax + 0xc], ecx
// 00897d04  8bce                 mov ecx, esi
// 00897d06  e865f9ffff           call 0x897670
// 00897d0b  837e6400             cmp dword ptr [esi + 0x64], 0
// 00897d0f  747e                 je 0x897d8f
// 00897d11  e8fa67f7ff           call 0x80e510
// 00897d16  8b5020               mov edx, dword ptr [eax + 0x20]
// 00897d19  f7da                 neg edx
// 00897d1b  1bd2                 sbb edx, edx
// 00897d1d  83e2fc               and edx, 0xfffffffc
// 00897d20  83c204               add edx, 4
// 00897d23  81ca93000000         or edx, 0x93
// 00897d29  52                   push edx
// 00897d2a  6a00                 push 0
// 00897d2c  6a00                 push 0
// 00897d2e  6a00                 push 0
// 00897d30  6a00                 push 0
// 00897d32  6a00                 push 0
// 00897d34  8bce                 mov ecx, esi
// 00897d36  e83100f1ff           call 0x7a7d6c
// 00897d3b  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00897d3e  85c9                 test ecx, ecx
// 00897d40  7410                 je 0x897d52
// 00897d42  8b01                 mov eax, dword ptr [ecx]
// 00897d44  8b5004               mov edx, dword ptr [eax + 4]
// 00897d47  6a01                 push 1
// 00897d49  ffd2                 call edx
// 00897d4b  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 00897d52  ff1574ba9e00         call dword ptr [0x9eba74]
// 00897d58  50                   push eax
// 00897d59  e80cfff0ff           call 0x7a7c6a
// 00897d5e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00897d61  6a00                 push 0
// 00897d63  6a00                 push 0
// 00897d65  50                   push eax
// 00897d66  ff1578ba9e00         call dword ptr [0x9eba78]
// 00897d6c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00897d6f  6a00                 push 0
// 00897d71  6a01                 push 1
// 00897d73  6a01                 push 1
// 00897d75  51                   push ecx
// 00897d76  ff1554bc9e00         call dword ptr [0x9ebc54]
// 00897d7c  5f                   pop edi
// 00897d7d  5e                   pop esi
// 00897d7e  83c430               add esp, 0x30
// 00897d81  c3                   ret 
// 00897d82  e859feffff           call 0x897be0
// 00897d87  50                   push eax
// 00897d88  8bce                 mov ecx, esi
// 00897d8a  e891f9ffff           call 0x897720
// 00897d8f  5f                   pop edi
// 00897d90  5e                   pop esi
// 00897d91  83c430               add esp, 0x30
// 00897d94  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnParentPosChanged@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

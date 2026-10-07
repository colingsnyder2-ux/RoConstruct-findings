// roc 2007-08 00712f00  unit: PAVCXTShadowWnd::?$CList  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712f00
//
// 00712f00  83ec30               sub esp, 0x30
// 00712f03  56                   push esi
// 00712f04  8bf1                 mov esi, ecx
// 00712f06  8b4668               mov eax, dword ptr [esi + 0x68]
// 00712f09  57                   push edi
// 00712f0a  50                   push eax
// 00712f0b  e8b0d2f1ff           call 0x6301c0
// 00712f10  837e6800             cmp dword ptr [esi + 0x68], 0
// 00712f14  0f8455010000         je 0x71306f
// 00712f1a  85c0                 test eax, eax
// 00712f1c  0f844d010000         je 0x71306f
// 00712f22  837e5800             cmp dword ptr [esi + 0x58], 0
// 00712f26  0f8436010000         je 0x713062
// 00712f2c  8b7e54               mov edi, dword ptr [esi + 0x54]
// 00712f2f  50                   push eax
// 00712f30  8d4c240c             lea ecx, [esp + 0xc]
// 00712f34  e867d0f6ff           call 0x67ffa0
// 00712f39  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00712f3d  741e                 je 0x712f5d
// 00712f3f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00712f43  8b542410             mov edx, dword ptr [esp + 0x10]
// 00712f47  8d0c38               lea ecx, [eax + edi]
// 00712f4a  51                   push ecx
// 00712f4b  03d7                 add edx, edi
// 00712f4d  52                   push edx
// 00712f4e  50                   push eax
// 00712f4f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00712f53  03c7                 add eax, edi
// 00712f55  50                   push eax
// 00712f56  8d4c2428             lea ecx, [esp + 0x28]
// 00712f5a  51                   push ecx
// 00712f5b  eb1a                 jmp 0x712f77
// 00712f5d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00712f61  8b442410             mov eax, dword ptr [esp + 0x10]
// 00712f65  52                   push edx
// 00712f66  8b542410             mov edx, dword ptr [esp + 0x10]
// 00712f6a  8d0c38               lea ecx, [eax + edi]
// 00712f6d  51                   push ecx
// 00712f6e  03d7                 add edx, edi
// 00712f70  52                   push edx
// 00712f71  50                   push eax
// 00712f72  8d442428             lea eax, [esp + 0x28]
// 00712f76  50                   push eax
// 00712f77  ff1578ed7700         call dword ptr [0x77ed78]
// 00712f7d  56                   push esi
// 00712f7e  8d4c242c             lea ecx, [esp + 0x2c]
// 00712f82  e819d0f6ff           call 0x67ffa0
// 00712f87  8d4c2428             lea ecx, [esp + 0x28]
// 00712f8b  51                   push ecx
// 00712f8c  8d54241c             lea edx, [esp + 0x1c]
// 00712f90  52                   push edx
// 00712f91  ff1528ee7700         call dword ptr [0x77ee28]
// 00712f97  85c0                 test eax, eax
// 00712f99  0f85d0000000         jne 0x71306f
// 00712f9f  6a01                 push 1
// 00712fa1  8d44241c             lea eax, [esp + 0x1c]
// 00712fa5  50                   push eax
// 00712fa6  8bce                 mov ecx, esi
// 00712fa8  e8d3aad4ff           call 0x45da80
// 00712fad  e80effffff           call 0x712ec0
// 00712fb2  50                   push eax
// 00712fb3  8bce                 mov ecx, esi
// 00712fb5  e8c6faffff           call 0x712a80
// 00712fba  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00712fbd  6a00                 push 0
// 00712fbf  6a00                 push 0
// 00712fc1  51                   push ecx
// 00712fc2  ff1580ec7700         call dword ptr [0x77ec80]
// 00712fc8  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00712fcb  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00712fce  83ec10               sub esp, 0x10
// 00712fd1  8bc4                 mov eax, esp
// 00712fd3  8910                 mov dword ptr [eax], edx
// 00712fd5  8b5674               mov edx, dword ptr [esi + 0x74]
// 00712fd8  894804               mov dword ptr [eax + 4], ecx
// 00712fdb  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00712fde  895008               mov dword ptr [eax + 8], edx
// 00712fe1  89480c               mov dword ptr [eax + 0xc], ecx
// 00712fe4  8bce                 mov ecx, esi
// 00712fe6  e8e5f9ffff           call 0x7129d0
// 00712feb  837e6400             cmp dword ptr [esi + 0x64], 0
// 00712fef  747e                 je 0x71306f
// 00712ff1  e8aaeff7ff           call 0x691fa0
// 00712ff6  8b5020               mov edx, dword ptr [eax + 0x20]
// 00712ff9  f7da                 neg edx
// 00712ffb  1bd2                 sbb edx, edx
// 00712ffd  83e2fc               and edx, 0xfffffffc
// 00713000  83c204               add edx, 4
// 00713003  81ca93000000         or edx, 0x93
// 00713009  52                   push edx
// 0071300a  6a00                 push 0
// 0071300c  6a00                 push 0
// 0071300e  6a00                 push 0
// 00713010  6a00                 push 0
// 00713012  6a00                 push 0
// 00713014  8bce                 mov ecx, esi
// 00713016  e813d0f1ff           call 0x63002e
// 0071301b  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0071301e  85c9                 test ecx, ecx
// 00713020  7410                 je 0x713032
// 00713022  8b01                 mov eax, dword ptr [ecx]
// 00713024  8b5004               mov edx, dword ptr [eax + 4]
// 00713027  6a01                 push 1
// 00713029  ffd2                 call edx
// 0071302b  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 00713032  ff154cee7700         call dword ptr [0x77ee4c]
// 00713038  50                   push eax
// 00713039  e882d1f1ff           call 0x6301c0
// 0071303e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00713041  6a00                 push 0
// 00713043  6a00                 push 0
// 00713045  50                   push eax
// 00713046  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071304c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0071304f  6a00                 push 0
// 00713051  6a01                 push 1
// 00713053  6a01                 push 1
// 00713055  51                   push ecx
// 00713056  ff15eced7700         call dword ptr [0x77edec]
// 0071305c  5f                   pop edi
// 0071305d  5e                   pop esi
// 0071305e  83c430               add esp, 0x30
// 00713061  c3                   ret 
// 00713062  e859feffff           call 0x712ec0
// 00713067  50                   push eax
// 00713068  8bce                 mov ecx, esi
// 0071306a  e811faffff           call 0x712a80
// 0071306f  5f                   pop edi
// 00713070  5e                   pop esi
// 00713071  83c430               add esp, 0x30
// 00713074  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?OnParentPosChanged@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp

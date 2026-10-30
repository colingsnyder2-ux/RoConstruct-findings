// roc 2009-12 0080cad0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 435 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080cad0
//
// 0080cad0  6aff                 push -1
// 0080cad2  68189b9500           push 0x959b18
// 0080cad7  64a100000000         mov eax, dword ptr fs:[0]
// 0080cadd  50                   push eax
// 0080cade  83ec34               sub esp, 0x34
// 0080cae1  53                   push ebx
// 0080cae2  55                   push ebp
// 0080cae3  56                   push esi
// 0080cae4  57                   push edi
// 0080cae5  a10052b600           mov eax, dword ptr [0xb65200]
// 0080caea  33c4                 xor eax, esp
// 0080caec  50                   push eax
// 0080caed  8d442448             lea eax, [esp + 0x48]
// 0080caf1  64a300000000         mov dword ptr fs:[0], eax
// 0080caf7  8bf1                 mov esi, ecx
// 0080caf9  8d4658               lea eax, [esi + 0x58]
// 0080cafc  50                   push eax
// 0080cafd  8d4c2420             lea ecx, [esp + 0x20]
// 0080cb01  e80af90200           call 0x83c410
// 0080cb06  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0080cb0a  33ff                 xor edi, edi
// 0080cb0c  897c2450             mov dword ptr [esp + 0x50], edi
// 0080cb10  e8abf6ffff           call 0x80c1c0
// 0080cb15  8b5628               mov edx, dword ptr [esi + 0x28]
// 0080cb18  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080cb1b  8d4c2414             lea ecx, [esp + 0x14]
// 0080cb1f  51                   push ecx
// 0080cb20  52                   push edx
// 0080cb21  50                   push eax
// 0080cb22  57                   push edi
// 0080cb23  897c2424             mov dword ptr [esp + 0x24], edi
// 0080cb27  e814c0ffff           call 0x808b40
// 0080cb2c  83c410               add esp, 0x10
// 0080cb2f  89442418             mov dword ptr [esp + 0x18], eax
// 0080cb33  3bc7                 cmp eax, edi
// 0080cb35  0f8421010000         je 0x80cc5c
// 0080cb3b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0080cb3f  3bdf                 cmp ebx, edi
// 0080cb41  0f8415010000         je 0x80cc5c
// 0080cb47  397e28               cmp dword ptr [esi + 0x28], edi
// 0080cb4a  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 0080cb4e  7e38                 jle 0x80cb88
// 0080cb50  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080cb53  03c0                 add eax, eax
// 0080cb55  03c0                 add eax, eax
// 0080cb57  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0080cb5a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0080cb5d  0fafcf               imul ecx, edi
// 0080cb60  034d04               add ecx, dword ptr [ebp + 4]
// 0080cb63  50                   push eax
// 0080cb64  8d0c8a               lea ecx, [edx + ecx*4]
// 0080cb67  51                   push ecx
// 0080cb68  53                   push ebx
// 0080cb69  e87881feff           call 0x7f4ce6
// 0080cb6e  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080cb71  03c0                 add eax, eax
// 0080cb73  03c0                 add eax, eax
// 0080cb75  47                   inc edi
// 0080cb76  83c40c               add esp, 0xc
// 0080cb79  03d8                 add ebx, eax
// 0080cb7b  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0080cb7e  7cd7                 jl 0x80cb57
// 0080cb80  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0080cb84  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080cb88  837d0000             cmp dword ptr [ebp], 0
// 0080cb8c  740f                 je 0x80cb9d
// 0080cb8e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0080cb92  894104               mov dword ptr [ecx + 4], eax
// 0080cb95  895908               mov dword ptr [ecx + 8], ebx
// 0080cb98  e9b8000000           jmp 0x80cc55
// 0080cb9d  8b4628               mov eax, dword ptr [esi + 0x28]
// 0080cba0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0080cba3  6a00                 push 0
// 0080cba5  6a01                 push 1
// 0080cba7  6a01                 push 1
// 0080cba9  50                   push eax
// 0080cbaa  51                   push ecx
// 0080cbab  ff1578b19800         call dword ptr [0x98b178]
// 0080cbb1  8bd8                 mov ebx, eax
// 0080cbb3  53                   push ebx
// 0080cbb4  6a00                 push 0
// 0080cbb6  8d4c243c             lea ecx, [esp + 0x3c]
// 0080cbba  e851ed0300           call 0x84b910
// 0080cbbf  8b5604               mov edx, dword ptr [esi + 4]
// 0080cbc2  8d7e08               lea edi, [esi + 8]
// 0080cbc5  52                   push edx
// 0080cbc6  8bcf                 mov ecx, edi
// 0080cbc8  e8c3d2ffff           call 0x809e90
// 0080cbcd  8b4628               mov eax, dword ptr [esi + 0x28]
// 0080cbd0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0080cbd3  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0080cbd6  33f6                 xor esi, esi
// 0080cbd8  3bfe                 cmp edi, esi
// 0080cbda  7504                 jne 0x80cbe0
// 0080cbdc  33d2                 xor edx, edx
// 0080cbde  eb03                 jmp 0x80cbe3
// 0080cbe0  8b5704               mov edx, dword ptr [edi + 4]
// 0080cbe3  682000cc00           push 0xcc0020
// 0080cbe8  56                   push esi
// 0080cbe9  55                   push ebp
// 0080cbea  52                   push edx
// 0080cbeb  50                   push eax
// 0080cbec  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0080cbf0  51                   push ecx
// 0080cbf1  56                   push esi
// 0080cbf2  56                   push esi
// 0080cbf3  50                   push eax
// 0080cbf4  ff1548b19800         call dword ptr [0x98b148]
// 0080cbfa  8b4710               mov eax, dword ptr [edi + 0x10]
// 0080cbfd  3bc6                 cmp eax, esi
// 0080cbff  740e                 je 0x80cc0f
// 0080cc01  8b4f04               mov ecx, dword ptr [edi + 4]
// 0080cc04  50                   push eax
// 0080cc05  51                   push ecx
// 0080cc06  ff154cb19800         call dword ptr [0x98b14c]
// 0080cc0c  897710               mov dword ptr [edi + 0x10], esi
// 0080cc0f  8d4c2434             lea ecx, [esp + 0x34]
// 0080cc13  e878ed0300           call 0x84b990
// 0080cc18  89742424             mov dword ptr [esp + 0x24], esi
// 0080cc1c  89742428             mov dword ptr [esp + 0x28], esi
// 0080cc20  8b742418             mov esi, dword ptr [esp + 0x18]
// 0080cc24  8d4c2420             lea ecx, [esp + 0x20]
// 0080cc28  51                   push ecx
// 0080cc29  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0080cc31  89742434             mov dword ptr [esp + 0x34], esi
// 0080cc35  895c2430             mov dword ptr [esp + 0x30], ebx
// 0080cc39  ff1584ca9800         call dword ptr [0x98ca84]
// 0080cc3f  8b542458             mov edx, dword ptr [esp + 0x58]
// 0080cc43  56                   push esi
// 0080cc44  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 0080cc4a  8902                 mov dword ptr [edx], eax
// 0080cc4c  ffd6                 call esi
// 0080cc4e  53                   push ebx
// 0080cc4f  ffd6                 call esi
// 0080cc51  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0080cc55  c7410c01000000       mov dword ptr [ecx + 0xc], 1
// 0080cc5c  8d4c241c             lea ecx, [esp + 0x1c]
// 0080cc60  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0080cc68  e8c3f70200           call 0x83c430
// 0080cc6d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0080cc71  64890d00000000       mov dword ptr fs:[0], ecx
// 0080cc78  59                   pop ecx
// 0080cc79  5f                   pop edi
// 0080cc7a  5e                   pop esi
// 0080cc7b  5d                   pop ebp
// 0080cc7c  5b                   pop ebx
// 0080cc7d  83c440               add esp, 0x40
// 0080cc80  c20800               ret 8
// copied from an identical function in another client (function ?CreateIcon@CXTPImageManagerResource@@QAEXAAVCXTPImageManagerIconHandle@@PAUXTP_IMAGERESOURCE_INFO@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
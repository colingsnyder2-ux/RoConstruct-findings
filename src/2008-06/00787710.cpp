// roc 2008-06 00787710  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787710
//
// 00787710  83ec10               sub esp, 0x10
// 00787713  56                   push esi
// 00787714  8bf1                 mov esi, ecx
// 00787716  8b4620               mov eax, dword ptr [esi + 0x20]
// 00787719  57                   push edi
// 0078771a  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 00787720  50                   push eax
// 00787721  ffd7                 call edi
// 00787723  50                   push eax
// 00787724  e8b594f1ff           call 0x6a0bde
// 00787729  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0078772c  51                   push ecx
// 0078772d  ffd7                 call edi
// 0078772f  50                   push eax
// 00787730  e8a994f1ff           call 0x6a0bde
// 00787735  85c0                 test eax, eax
// 00787737  0f84d2000000         je 0x78780f
// 0078773d  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00787740  398824010000         cmp dword ptr [eax + 0x124], ecx
// 00787746  0f85c3000000         jne 0x78780f
// 0078774c  81f9ffffff00         cmp ecx, 0xffffff
// 00787752  756c                 jne 0x7877c0
// 00787754  53                   push ebx
// 00787755  55                   push ebp
// 00787756  56                   push esi
// 00787757  8d4c2414             lea ecx, [esp + 0x14]
// 0078775b  e8d003f7ff           call 0x6f7b30
// 00787760  8b442418             mov eax, dword ptr [esp + 0x18]
// 00787764  2b442410             sub eax, dword ptr [esp + 0x10]
// 00787768  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0078776c  8b7e68               mov edi, dword ptr [esi + 0x68]
// 0078776f  8b5e6c               mov ebx, dword ptr [esi + 0x6c]
// 00787772  83e80e               sub eax, 0xe
// 00787775  99                   cdq 
// 00787776  2bc2                 sub eax, edx
// 00787778  d1f8                 sar eax, 1
// 0078777a  55                   push ebp
// 0078777b  8bce                 mov ecx, esi
// 0078777d  894668               mov dword ptr [esi + 0x68], eax
// 00787780  c7466c4d000000       mov dword ptr [esi + 0x6c], 0x4d
// 00787787  e854f3ffff           call 0x786ae0
// 0078778c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00787790  2b442410             sub eax, dword ptr [esp + 0x10]
// 00787794  55                   push ebp
// 00787795  2db6000000           sub eax, 0xb6
// 0078779a  99                   cdq 
// 0078779b  2bc2                 sub eax, edx
// 0078779d  d1f8                 sar eax, 1
// 0078779f  8bce                 mov ecx, esi
// 007877a1  894668               mov dword ptr [esi + 0x68], eax
// 007877a4  c7466cae000000       mov dword ptr [esi + 0x6c], 0xae
// 007877ab  e870e6ffff           call 0x785e20
// 007877b0  5d                   pop ebp
// 007877b1  895e6c               mov dword ptr [esi + 0x6c], ebx
// 007877b4  5b                   pop ebx
// 007877b5  897e68               mov dword ptr [esi + 0x68], edi
// 007877b8  5f                   pop edi
// 007877b9  5e                   pop esi
// 007877ba  83c410               add esp, 0x10
// 007877bd  c20400               ret 4
// 007877c0  85c9                 test ecx, ecx
// 007877c2  7514                 jne 0x7877d8
// 007877c4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007877c8  52                   push edx
// 007877c9  8bce                 mov ecx, esi
// 007877cb  e850e6ffff           call 0x785e20
// 007877d0  5f                   pop edi
// 007877d1  5e                   pop esi
// 007877d2  83c410               add esp, 0x10
// 007877d5  c20400               ret 4
// 007877d8  8b06                 mov eax, dword ptr [esi]
// 007877da  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007877e0  51                   push ecx
// 007877e1  8bce                 mov ecx, esi
// 007877e3  ffd2                 call edx
// 007877e5  84c0                 test al, al
// 007877e7  7426                 je 0x78780f
// 007877e9  837e6400             cmp dword ptr [esi + 0x64], 0
// 007877ed  7414                 je 0x787803
// 007877ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007877f3  50                   push eax
// 007877f4  8bce                 mov ecx, esi
// 007877f6  e8e5f2ffff           call 0x786ae0
// 007877fb  5f                   pop edi
// 007877fc  5e                   pop esi
// 007877fd  83c410               add esp, 0x10
// 00787800  c20400               ret 4
// 00787803  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00787807  51                   push ecx
// 00787808  8bce                 mov ecx, esi
// 0078780a  e811e6ffff           call 0x785e20
// 0078780f  5f                   pop edi
// 00787810  5e                   pop esi
// 00787811  83c410               add esp, 0x10
// 00787814  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPageStandard.cpp (function ?SelectColorCell@CXTColorHex@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPageStandard.cpp

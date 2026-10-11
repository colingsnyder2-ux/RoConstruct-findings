// roc 2007-08 004bda70  unit: RakPeer  size: 677 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bda70
//
// 004bda70  55                   push ebp
// 004bda71  8bec                 mov ebp, esp
// 004bda73  83ec68               sub esp, 0x68
// 004bda76  53                   push ebx
// 004bda77  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004bda7a  56                   push esi
// 004bda7b  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004bda7e  33c0                 xor eax, eax
// 004bda80  57                   push edi
// 004bda81  8945dc               mov dword ptr [ebp - 0x24], eax
// 004bda84  8945e0               mov dword ptr [ebp - 0x20], eax
// 004bda87  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004bda8a  8d4598               lea eax, [ebp - 0x68]
// 004bda8d  50                   push eax
// 004bda8e  8d4db8               lea ecx, [ebp - 0x48]
// 004bda91  51                   push ecx
// 004bda92  53                   push ebx
// 004bda93  56                   push esi
// 004bda94  c745d801000000       mov dword ptr [ebp - 0x28], 1
// 004bda9b  e8e0dfffff           call 0x4bba80
// 004bdaa0  8b16                 mov edx, dword ptr [esi]
// 004bdaa2  8b4604               mov eax, dword ptr [esi + 4]
// 004bdaa5  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bdaa8  8955e8               mov dword ptr [ebp - 0x18], edx
// 004bdaab  8b560c               mov edx, dword ptr [esi + 0xc]
// 004bdaae  8945ec               mov dword ptr [ebp - 0x14], eax
// 004bdab1  894df0               mov dword ptr [ebp - 0x10], ecx
// 004bdab4  8d45b8               lea eax, [ebp - 0x48]
// 004bdab7  8d4de8               lea ecx, [ebp - 0x18]
// 004bdaba  83c410               add esp, 0x10
// 004bdabd  8955f4               mov dword ptr [ebp - 0xc], edx
// 004bdac0  8945f8               mov dword ptr [ebp - 8], eax
// 004bdac3  894dfc               mov dword ptr [ebp - 4], ecx
// 004bdac6  c7450800000000       mov dword ptr [ebp + 8], 0
// 004bdacd  8b75f8               mov esi, dword ptr [ebp - 8]
// 004bdad0  8b7dfc               mov edi, dword ptr [ebp - 4]
// 004bdad3  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004bdad6  8b06                 mov eax, dword ptr [esi]
// 004bdad8  33d2                 xor edx, edx
// 004bdada  2907                 sub dword ptr [edi], eax
// 004bdadc  8b4604               mov eax, dword ptr [esi + 4]
// 004bdadf  194704               sbb dword ptr [edi + 4], eax
// 004bdae2  8b4608               mov eax, dword ptr [esi + 8]
// 004bdae5  194708               sbb dword ptr [edi + 8], eax
// 004bdae8  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bdaeb  19470c               sbb dword ptr [edi + 0xc], eax
// 004bdaee  e322                 jecxz 0x4bdb12
// 004bdaf0  42                   inc edx
// 004bdaf1  42                   inc edx
// 004bdaf2  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bdaf5  1904d7               sbb dword ptr [edi + edx*8], eax
// 004bdaf8  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bdafc  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004bdb00  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bdb04  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004bdb08  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bdb0c  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004bdb10  e2de                 loop 0x4bdaf0
// 004bdb12  8b13                 mov edx, dword ptr [ebx]
// 004bdb14  8b4304               mov eax, dword ptr [ebx + 4]
// 004bdb17  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004bdb1a  8955c8               mov dword ptr [ebp - 0x38], edx
// 004bdb1d  8b530c               mov edx, dword ptr [ebx + 0xc]
// 004bdb20  8945cc               mov dword ptr [ebp - 0x34], eax
// 004bdb23  894dd0               mov dword ptr [ebp - 0x30], ecx
// 004bdb26  8955d4               mov dword ptr [ebp - 0x2c], edx
// 004bdb29  8da42400000000       lea esp, [esp]
// 004bdb30  8d45c8               lea eax, [ebp - 0x38]
// 004bdb33  50                   push eax
// 004bdb34  8d4db8               lea ecx, [ebp - 0x48]
// 004bdb37  51                   push ecx
// 004bdb38  8d5598               lea edx, [ebp - 0x68]
// 004bdb3b  52                   push edx
// 004bdb3c  50                   push eax
// 004bdb3d  e83edfffff           call 0x4bba80
// 004bdb42  83c410               add esp, 0x10
// 004bdb45  33c0                 xor eax, eax
// 004bdb47  837c85c800           cmp dword ptr [ebp + eax*4 - 0x38], 0
// 004bdb4c  7529                 jne 0x4bdb77
// 004bdb4e  83c001               add eax, 1
// 004bdb51  83f804               cmp eax, 4
// 004bdb54  72f1                 jb 0x4bdb47
// 004bdb56  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004bdb59  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004bdb5c  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004bdb5f  8908                 mov dword ptr [eax], ecx
// 004bdb61  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004bdb64  895004               mov dword ptr [eax + 4], edx
// 004bdb67  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 004bdb6a  5f                   pop edi
// 004bdb6b  5e                   pop esi
// 004bdb6c  894808               mov dword ptr [eax + 8], ecx
// 004bdb6f  89500c               mov dword ptr [eax + 0xc], edx
// 004bdb72  5b                   pop ebx
// 004bdb73  8be5                 mov esp, ebp
// 004bdb75  5d                   pop ebp
// 004bdb76  c3                   ret 
// 004bdb77  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004bdb7a  8d4da8               lea ecx, [ebp - 0x58]
// 004bdb7d  51                   push ecx
// 004bdb7e  56                   push esi
// 004bdb7f  8d55d8               lea edx, [ebp - 0x28]
// 004bdb82  52                   push edx
// 004bdb83  8d45b8               lea eax, [ebp - 0x48]
// 004bdb86  50                   push eax
// 004bdb87  8d4de8               lea ecx, [ebp - 0x18]
// 004bdb8a  51                   push ecx
// 004bdb8b  e8b0e1ffff           call 0x4bbd40
// 004bdb90  8d5598               lea edx, [ebp - 0x68]
// 004bdb93  52                   push edx
// 004bdb94  8d45b8               lea eax, [ebp - 0x48]
// 004bdb97  50                   push eax
// 004bdb98  8d4dc8               lea ecx, [ebp - 0x38]
// 004bdb9b  51                   push ecx
// 004bdb9c  52                   push edx
// 004bdb9d  e8dedeffff           call 0x4bba80
// 004bdba2  83c424               add esp, 0x24
// 004bdba5  33c0                 xor eax, eax
// 004bdba7  837c859800           cmp dword ptr [ebp + eax*4 - 0x68], 0
// 004bdbac  7529                 jne 0x4bdbd7
// 004bdbae  83c001               add eax, 1
// 004bdbb1  83f804               cmp eax, 4
// 004bdbb4  72f1                 jb 0x4bdba7
// 004bdbb6  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004bdbb9  8b4da8               mov ecx, dword ptr [ebp - 0x58]
// 004bdbbc  8b55ac               mov edx, dword ptr [ebp - 0x54]
// 004bdbbf  8908                 mov dword ptr [eax], ecx
// 004bdbc1  8b4db0               mov ecx, dword ptr [ebp - 0x50]
// 004bdbc4  895004               mov dword ptr [eax + 4], edx
// 004bdbc7  8b55b4               mov edx, dword ptr [ebp - 0x4c]
// 004bdbca  5f                   pop edi
// 004bdbcb  5e                   pop esi
// 004bdbcc  894808               mov dword ptr [eax + 8], ecx
// 004bdbcf  89500c               mov dword ptr [eax + 0xc], edx
// 004bdbd2  5b                   pop ebx
// 004bdbd3  8be5                 mov esp, ebp
// 004bdbd5  5d                   pop ebp
// 004bdbd6  c3                   ret 
// 004bdbd7  8d45d8               lea eax, [ebp - 0x28]
// 004bdbda  50                   push eax
// 004bdbdb  56                   push esi
// 004bdbdc  8d4de8               lea ecx, [ebp - 0x18]
// 004bdbdf  51                   push ecx
// 004bdbe0  8d55b8               lea edx, [ebp - 0x48]
// 004bdbe3  52                   push edx
// 004bdbe4  8d45a8               lea eax, [ebp - 0x58]
// 004bdbe7  50                   push eax
// 004bdbe8  e853e1ffff           call 0x4bbd40
// 004bdbed  8d4dc8               lea ecx, [ebp - 0x38]
// 004bdbf0  51                   push ecx
// 004bdbf1  8d55b8               lea edx, [ebp - 0x48]
// 004bdbf4  52                   push edx
// 004bdbf5  8d4598               lea eax, [ebp - 0x68]
// 004bdbf8  50                   push eax
// 004bdbf9  51                   push ecx
// 004bdbfa  e881deffff           call 0x4bba80
// 004bdbff  83c424               add esp, 0x24
// 004bdc02  33c0                 xor eax, eax
// 004bdc04  837c85c800           cmp dword ptr [ebp + eax*4 - 0x38], 0
// 004bdc09  7529                 jne 0x4bdc34
// 004bdc0b  83c001               add eax, 1
// 004bdc0e  83f804               cmp eax, 4
// 004bdc11  72f1                 jb 0x4bdc04
// 004bdc13  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004bdc16  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 004bdc19  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 004bdc1c  8908                 mov dword ptr [eax], ecx
// 004bdc1e  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004bdc21  895004               mov dword ptr [eax + 4], edx
// 004bdc24  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 004bdc27  5f                   pop edi
// 004bdc28  5e                   pop esi
// 004bdc29  894808               mov dword ptr [eax + 8], ecx
// 004bdc2c  89500c               mov dword ptr [eax + 0xc], edx
// 004bdc2f  5b                   pop ebx
// 004bdc30  8be5                 mov esp, ebp
// 004bdc32  5d                   pop ebp
// 004bdc33  c3                   ret 
// 004bdc34  8d55e8               lea edx, [ebp - 0x18]
// 004bdc37  52                   push edx
// 004bdc38  56                   push esi
// 004bdc39  8d45a8               lea eax, [ebp - 0x58]
// 004bdc3c  50                   push eax
// 004bdc3d  8d4db8               lea ecx, [ebp - 0x48]
// 004bdc40  51                   push ecx
// 004bdc41  8d55d8               lea edx, [ebp - 0x28]
// 004bdc44  52                   push edx
// 004bdc45  e8f6e0ffff           call 0x4bbd40
// 004bdc4a  8d4598               lea eax, [ebp - 0x68]
// 004bdc4d  50                   push eax
// 004bdc4e  8d4db8               lea ecx, [ebp - 0x48]
// 004bdc51  51                   push ecx
// 004bdc52  8d55c8               lea edx, [ebp - 0x38]
// 004bdc55  52                   push edx
// 004bdc56  50                   push eax
// 004bdc57  e824deffff           call 0x4bba80
// 004bdc5c  83c424               add esp, 0x24
// 004bdc5f  33c0                 xor eax, eax
// 004bdc61  837c859800           cmp dword ptr [ebp + eax*4 - 0x68], 0
// 004bdc66  750d                 jne 0x4bdc75
// 004bdc68  83c001               add eax, 1
// 004bdc6b  83f804               cmp eax, 4
// 004bdc6e  72f1                 jb 0x4bdc61
// 004bdc70  e9e1feffff           jmp 0x4bdb56
// 004bdc75  8d4da8               lea ecx, [ebp - 0x58]
// 004bdc78  51                   push ecx
// 004bdc79  56                   push esi
// 004bdc7a  8d55d8               lea edx, [ebp - 0x28]
// 004bdc7d  52                   push edx
// 004bdc7e  8d45b8               lea eax, [ebp - 0x48]
// 004bdc81  50                   push eax
// 004bdc82  8d4de8               lea ecx, [ebp - 0x18]
// 004bdc85  51                   push ecx
// 004bdc86  e8b5e0ffff           call 0x4bbd40
// 004bdc8b  8d55c8               lea edx, [ebp - 0x38]
// 004bdc8e  52                   push edx
// 004bdc8f  8d45b8               lea eax, [ebp - 0x48]
// 004bdc92  50                   push eax
// 004bdc93  8d4d98               lea ecx, [ebp - 0x68]
// 004bdc96  51                   push ecx
// 004bdc97  52                   push edx
// 004bdc98  e8e3ddffff           call 0x4bba80
// 004bdc9d  83c424               add esp, 0x24
// 004bdca0  33c0                 xor eax, eax
// 004bdca2  837c85c800           cmp dword ptr [ebp + eax*4 - 0x38], 0
// 004bdca7  750d                 jne 0x4bdcb6
// 004bdca9  83c001               add eax, 1
// 004bdcac  83f804               cmp eax, 4
// 004bdcaf  72f1                 jb 0x4bdca2
// 004bdcb1  e900ffffff           jmp 0x4bdbb6
// 004bdcb6  8d45d8               lea eax, [ebp - 0x28]
// 004bdcb9  50                   push eax
// 004bdcba  56                   push esi
// 004bdcbb  8d4de8               lea ecx, [ebp - 0x18]
// 004bdcbe  51                   push ecx
// 004bdcbf  8d55b8               lea edx, [ebp - 0x48]
// 004bdcc2  52                   push edx
// 004bdcc3  8d45a8               lea eax, [ebp - 0x58]
// 004bdcc6  50                   push eax
// 004bdcc7  e874e0ffff           call 0x4bbd40
// 004bdccc  8d4d98               lea ecx, [ebp - 0x68]
// 004bdccf  51                   push ecx
// 004bdcd0  8d55b8               lea edx, [ebp - 0x48]
// 004bdcd3  52                   push edx
// 004bdcd4  8d45c8               lea eax, [ebp - 0x38]
// 004bdcd7  50                   push eax
// 004bdcd8  51                   push ecx
// 004bdcd9  e8a2ddffff           call 0x4bba80
// 004bdcde  83c424               add esp, 0x24
// 004bdce1  33c0                 xor eax, eax
// 004bdce3  837c859800           cmp dword ptr [ebp + eax*4 - 0x68], 0
// 004bdce8  750d                 jne 0x4bdcf7
// 004bdcea  83c001               add eax, 1
// 004bdced  83f804               cmp eax, 4
// 004bdcf0  72f1                 jb 0x4bdce3
// 004bdcf2  e91cffffff           jmp 0x4bdc13
// 004bdcf7  8d55e8               lea edx, [ebp - 0x18]
// 004bdcfa  52                   push edx
// 004bdcfb  56                   push esi
// 004bdcfc  8d45a8               lea eax, [ebp - 0x58]
// 004bdcff  50                   push eax
// 004bdd00  8d4db8               lea ecx, [ebp - 0x48]
// 004bdd03  51                   push ecx
// 004bdd04  8d55d8               lea edx, [ebp - 0x28]
// 004bdd07  52                   push edx
// 004bdd08  e833e0ffff           call 0x4bbd40
// 004bdd0d  83c414               add esp, 0x14
// 004bdd10  e91bfeffff           jmp 0x4bdb30
// library openrbx-raknet/RakPeer.cpp (function ??$computeModularInverse@$$BY03I@big@@YAXAAY03I00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp

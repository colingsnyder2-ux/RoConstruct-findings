// roc 2012-06 0059cac0  unit: VAuthoringSettings::?$FactoryProduct  size: 608 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059cac0
//
// 0059cac0  53                   push ebx
// 0059cac1  55                   push ebp
// 0059cac2  56                   push esi
// 0059cac3  57                   push edi
// 0059cac4  8bf1                 mov esi, ecx
// 0059cac6  6880000000           push 0x80
// 0059cacb  33db                 xor ebx, ebx
// 0059cacd  8d86a8090000         lea eax, [esi + 0x9a8]
// 0059cad3  53                   push ebx
// 0059cad4  50                   push eax
// 0059cad5  e89a683e00           call 0x983374
// 0059cada  6880000000           push 0x80
// 0059cadf  8d8e280a0000         lea ecx, [esi + 0xa28]
// 0059cae5  53                   push ebx
// 0059cae6  51                   push ecx
// 0059cae7  e888683e00           call 0x983374
// 0059caec  6880000000           push 0x80
// 0059caf1  8d96a80a0000         lea edx, [esi + 0xaa8]
// 0059caf7  53                   push ebx
// 0059caf8  52                   push edx
// 0059caf9  e876683e00           call 0x983374
// 0059cafe  6880000000           push 0x80
// 0059cb03  8d86280b0000         lea eax, [esi + 0xb28]
// 0059cb09  53                   push ebx
// 0059cb0a  50                   push eax
// 0059cb0b  e864683e00           call 0x983374
// 0059cb10  68e0000000           push 0xe0
// 0059cb15  8d8ec8080000         lea ecx, [esi + 0x8c8]
// 0059cb1b  53                   push ebx
// 0059cb1c  51                   push ecx
// 0059cb1d  e852683e00           call 0x983374
// 0059cb22  6880000000           push 0x80
// 0059cb27  8d96a80d0000         lea edx, [esi + 0xda8]
// 0059cb2d  53                   push ebx
// 0059cb2e  52                   push edx
// 0059cb2f  e840683e00           call 0x983374
// 0059cb34  83c448               add esp, 0x48
// 0059cb37  e884be0100           call 0x5b89c0
// 0059cb3c  898638090000         mov dword ptr [esi + 0x938], eax
// 0059cb42  89963c090000         mov dword ptr [esi + 0x93c], edx
// 0059cb48  899e900e0000         mov dword ptr [esi + 0xe90], ebx
// 0059cb4e  899e940e0000         mov dword ptr [esi + 0xe94], ebx
// 0059cb54  899e800e0000         mov dword ptr [esi + 0xe80], ebx
// 0059cb5a  899e840e0000         mov dword ptr [esi + 0xe84], ebx
// 0059cb60  33c0                 xor eax, eax
// 0059cb62  668986be080000       mov word ptr [esi + 0x8be], ax
// 0059cb69  899eb4080000         mov dword ptr [esi + 0x8b4], ebx
// 0059cb6f  889eb7080000         mov byte ptr [esi + 0x8b7], bl
// 0059cb75  899eb8080000         mov dword ptr [esi + 0x8b8], ebx
// 0059cb7b  889ebb080000         mov byte ptr [esi + 0x8bb], bl
// 0059cb81  899e380f0000         mov dword ptr [esi + 0xf38], ebx
// 0059cb87  899e3c0f0000         mov dword ptr [esi + 0xf3c], ebx
// 0059cb8d  899e6c080000         mov dword ptr [esi + 0x86c], ebx
// 0059cb93  e828be0100           call 0x5b89c0
// 0059cb98  8986400e0000         mov dword ptr [esi + 0xe40], eax
// 0059cb9e  8996440e0000         mov dword ptr [esi + 0xe44], edx
// 0059cba4  889e780e0000         mov byte ptr [esi + 0xe78], bl
// 0059cbaa  899e680e0000         mov dword ptr [esi + 0xe68], ebx
// 0059cbb0  899e6c0e0000         mov dword ptr [esi + 0xe6c], ebx
// 0059cbb6  895e18               mov dword ptr [esi + 0x18], ebx
// 0059cbb9  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0059cbbc  899e60100000         mov dword ptr [esi + 0x1060], ebx
// 0059cbc2  899e64100000         mov dword ptr [esi + 0x1064], ebx
// 0059cbc8  c7864c0f00000f000000 mov dword ptr [esi + 0xf4c], 0xf
// 0059cbd2  899e700e0000         mov dword ptr [esi + 0xe70], ebx
// 0059cbd8  899e740e0000         mov dword ptr [esi + 0xe74], ebx
// 0059cbde  889ebd080000         mov byte ptr [esi + 0x8bd], bl
// 0059cbe4  889ebc080000         mov byte ptr [esi + 0x8bc], bl
// 0059cbea  899e300f0000         mov dword ptr [esi + 0xf30], ebx
// 0059cbf0  899e340f0000         mov dword ptr [esi + 0xf34], ebx
// 0059cbf6  e8d5bd0100           call 0x5b89d0
// 0059cbfb  898670080000         mov dword ptr [esi + 0x870], eax
// 0059cc01  899e90090000         mov dword ptr [esi + 0x990], ebx
// 0059cc07  899e98090000         mov dword ptr [esi + 0x998], ebx
// 0059cc0d  899e9c090000         mov dword ptr [esi + 0x99c], ebx
// 0059cc13  899e380e0000         mov dword ptr [esi + 0xe38], ebx
// 0059cc19  889e3b0e0000         mov byte ptr [esi + 0xe3b], bl
// 0059cc1f  c6863c0e000001       mov byte ptr [esi + 0xe3c], 1
// 0059cc26  899e880e0000         mov dword ptr [esi + 0xe88], ebx
// 0059cc2c  c786480e000030570500 mov dword ptr [esi + 0xe48], 0x55730
// 0059cc36  899e4c0e0000         mov dword ptr [esi + 0xe4c], ebx
// 0059cc3c  8b8e400e0000         mov ecx, dword ptr [esi + 0xe40]
// 0059cc42  d9ee                 fldz 
// 0059cc44  8b96440e0000         mov edx, dword ptr [esi + 0xe44]
// 0059cc4a  dd96280f0000         fst qword ptr [esi + 0xf28]
// 0059cc50  898e500e0000         mov dword ptr [esi + 0xe50], ecx
// 0059cc56  889e600e0000         mov byte ptr [esi + 0xe60], bl
// 0059cc5c  899e580e0000         mov dword ptr [esi + 0xe58], ebx
// 0059cc62  899e5c0e0000         mov dword ptr [esi + 0xe5c], ebx
// 0059cc68  8996540e0000         mov dword ptr [esi + 0xe54], edx
// 0059cc6e  899ee00e0000         mov dword ptr [esi + 0xee0], ebx
// 0059cc74  899e68080000         mov dword ptr [esi + 0x868], ebx
// 0059cc7a  895e50               mov dword ptr [esi + 0x50], ebx
// 0059cc7d  885e53               mov byte ptr [esi + 0x53], bl
// 0059cc80  33c9                 xor ecx, ecx
// 0059cc82  8dbe88080000         lea edi, [esi + 0x888]
// 0059cc88  b801000000           mov eax, 1
// 0059cc8d  d3e0                 shl eax, cl
// 0059cc8f  83c708               add edi, 8
// 0059cc92  40                   inc eax
// 0059cc93  0fafc1               imul eax, ecx
// 0059cc96  99                   cdq 
// 0059cc97  8947f8               mov dword ptr [edi - 8], eax
// 0059cc9a  8957fc               mov dword ptr [edi - 4], edx
// 0059cc9d  41                   inc ecx
// 0059cc9e  83f904               cmp ecx, 4
// 0059cca1  7ce5                 jl 0x59cc88
// 0059cca3  8d8e70090000         lea ecx, [esi + 0x970]
// 0059cca9  8d8660090000         lea eax, [esi + 0x960]
// 0059ccaf  ba04000000           mov edx, 4
// 0059ccb4  8918                 mov dword ptr [eax], ebx
// 0059ccb6  dd11                 fst qword ptr [ecx]
// 0059ccb8  83c004               add eax, 4
// 0059ccbb  83c108               add ecx, 8
// 0059ccbe  83ea01               sub edx, 1
// 0059ccc1  75f1                 jne 0x59ccb4
// 0059ccc3  ddd8                 fstp st(0)
// 0059ccc5  81c69c0f0000         add esi, 0xf9c
// 0059cccb  8d6a07               lea ebp, [edx + 7]
// 0059ccce  8bff                 mov edi, edi
// 0059ccd0  895eec               mov dword ptr [esi - 0x14], ebx
// 0059ccd3  895ef0               mov dword ptr [esi - 0x10], ebx
// 0059ccd6  895ee4               mov dword ptr [esi - 0x1c], ebx
// 0059ccd9  895ee8               mov dword ptr [esi - 0x18], ebx
// 0059ccdc  8b06                 mov eax, dword ptr [esi]
// 0059ccde  3bc3                 cmp eax, ebx
// 0059cce0  7431                 je 0x59cd13
// 0059cce2  83f820               cmp eax, 0x20
// 0059cce5  7626                 jbe 0x59cd0d
// 0059cce7  8b46f4               mov eax, dword ptr [esi - 0xc]
// 0059ccea  3bc3                 cmp eax, ebx
// 0059ccec  741d                 je 0x59cd0b
// 0059ccee  8b48fc               mov ecx, dword ptr [eax - 4]
// 0059ccf1  8d78fc               lea edi, [eax - 4]
// 0059ccf4  6890a75900           push 0x59a790
// 0059ccf9  51                   push ecx
// 0059ccfa  6a10                 push 0x10
// 0059ccfc  50                   push eax
// 0059ccfd  e86e653e00           call 0x983270
// 0059cd02  57                   push edi
// 0059cd03  e8b2563e00           call 0x9823ba
// 0059cd08  83c404               add esp, 4
// 0059cd0b  891e                 mov dword ptr [esi], ebx
// 0059cd0d  895ef8               mov dword ptr [esi - 8], ebx
// 0059cd10  895efc               mov dword ptr [esi - 4], ebx
// 0059cd13  83c620               add esi, 0x20
// 0059cd16  83ed01               sub ebp, 1
// 0059cd19  75b5                 jne 0x59ccd0
// 0059cd1b  5f                   pop edi
// 0059cd1c  5e                   pop esi
// 0059cd1d  5d                   pop ebp
// 0059cd1e  5b                   pop ebx
// 0059cd1f  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?InitializeVariables@ReliabilityLayer@RakNet@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp

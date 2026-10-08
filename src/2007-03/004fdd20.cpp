// roc 2007-03 004fdd20  unit: seg_004f0000  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fdd20
//
// 004fdd20  51                   push ecx
// 004fdd21  80794800             cmp byte ptr [ecx + 0x48], 0
// 004fdd25  890c24               mov dword ptr [esp], ecx
// 004fdd28  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fdd2c  0f84e6000000         je 0x4fde18
// 004fdd32  56                   push esi
// 004fdd33  57                   push edi
// 004fdd34  68ac497800           push 0x7849ac
// 004fdd39  ff15f0e67700         call dword ptr [0x77e6f0]
// 004fdd3f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fdd43  8b4714               mov eax, dword ptr [edi + 0x14]
// 004fdd46  33f6                 xor esi, esi
// 004fdd48  85c0                 test eax, eax
// 004fdd4a  0f86c2000000         jbe 0x4fde12
// 004fdd50  3bf0                 cmp esi, eax
// 004fdd52  53                   push ebx
// 004fdd53  55                   push ebp
// 004fdd54  8d5f04               lea ebx, [edi + 4]
// 004fdd57  bd01000000           mov ebp, 1
// 004fdd5c  7606                 jbe 0x4fdd64
// 004fdd5e  ff1544e97700         call dword ptr [0x77e944]
// 004fdd64  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004fdd68  7204                 jb 0x4fdd6e
// 004fdd6a  8b03                 mov eax, dword ptr [ebx]
// 004fdd6c  eb02                 jmp 0x4fdd70
// 004fdd6e  8bc3                 mov eax, ebx
// 004fdd70  803c300a             cmp byte ptr [eax + esi], 0xa
// 004fdd74  7514                 jne 0x4fdd8a
// 004fdd76  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fdd7a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004fdd7e  83c054               add eax, 0x54
// 004fdd81  50                   push eax
// 004fdd82  ff1540e77700         call dword ptr [0x77e740]
// 004fdd88  eb75                 jmp 0x4fddff
// 004fdd8a  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004fdd8d  7606                 jbe 0x4fdd95
// 004fdd8f  ff1544e97700         call dword ptr [0x77e944]
// 004fdd95  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004fdd98  83f910               cmp ecx, 0x10
// 004fdd9b  7204                 jb 0x4fdda1
// 004fdd9d  8b03                 mov eax, dword ptr [ebx]
// 004fdd9f  eb02                 jmp 0x4fdda3
// 004fdda1  8bc3                 mov eax, ebx
// 004fdda3  803c300d             cmp byte ptr [eax + esi], 0xd
// 004fdda7  7530                 jne 0x4fddd9
// 004fdda9  3b6f14               cmp ebp, dword ptr [edi + 0x14]
// 004fddac  732b                 jae 0x4fddd9
// 004fddae  83f910               cmp ecx, 0x10
// 004fddb1  7204                 jb 0x4fddb7
// 004fddb3  8b03                 mov eax, dword ptr [ebx]
// 004fddb5  eb02                 jmp 0x4fddb9
// 004fddb7  8bc3                 mov eax, ebx
// 004fddb9  803c280a             cmp byte ptr [eax + ebp], 0xa
// 004fddbd  751a                 jne 0x4fddd9
// 004fddbf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fddc3  83c154               add ecx, 0x54
// 004fddc6  51                   push ecx
// 004fddc7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004fddcb  ff1540e77700         call dword ptr [0x77e740]
// 004fddd1  83c601               add esi, 1
// 004fddd4  83c501               add ebp, 1
// 004fddd7  eb26                 jmp 0x4fddff
// 004fddd9  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004fdddc  7606                 jbe 0x4fdde4
// 004fddde  ff1544e97700         call dword ptr [0x77e944]
// 004fdde4  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004fdde8  7204                 jb 0x4fddee
// 004fddea  8b03                 mov eax, dword ptr [ebx]
// 004fddec  eb02                 jmp 0x4fddf0
// 004fddee  8bc3                 mov eax, ebx
// 004fddf0  0fb61430             movzx edx, byte ptr [eax + esi]
// 004fddf4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004fddf8  52                   push edx
// 004fddf9  ff1520e67700         call dword ptr [0x77e620]
// 004fddff  8b4714               mov eax, dword ptr [edi + 0x14]
// 004fde02  83c601               add esi, 1
// 004fde05  83c501               add ebp, 1
// 004fde08  3bf0                 cmp esi, eax
// 004fde0a  0f8254ffffff         jb 0x4fdd64
// 004fde10  5d                   pop ebp
// 004fde11  5b                   pop ebx
// 004fde12  5f                   pop edi
// 004fde13  5e                   pop esi
// 004fde14  59                   pop ecx
// 004fde15  c20800               ret 8
// 004fde18  8b442408             mov eax, dword ptr [esp + 8]
// 004fde1c  50                   push eax
// 004fde1d  ff154ce77700         call dword ptr [0x77e74c]
// 004fde23  59                   pop ecx
// 004fde24  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?convertNewlines@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp

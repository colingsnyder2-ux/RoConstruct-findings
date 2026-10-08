// roc 2007-03 004fdfb0  unit: seg_004f0000  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fdfb0
//
// 004fdfb0  51                   push ecx
// 004fdfb1  53                   push ebx
// 004fdfb2  55                   push ebp
// 004fdfb3  56                   push esi
// 004fdfb4  57                   push edi
// 004fdfb5  8bf9                 mov edi, ecx
// 004fdfb7  803f00               cmp byte ptr [edi], 0
// 004fdfba  bd01000000           mov ebp, 1
// 004fdfbf  746d                 je 0x4fe02e
// 004fdfc1  33db                 xor ebx, ebx
// 004fdfc3  395f50               cmp dword ptr [edi + 0x50], ebx
// 004fdfc6  7e5d                 jle 0x4fe025
// 004fdfc8  8d7728               lea esi, [edi + 0x28]
// 004fdfcb  eb03                 jmp 0x4fdfd0
// 004fdfcd  8d4900               lea ecx, [ecx]
// 004fdfd0  8b4604               mov eax, dword ptr [esi + 4]
// 004fdfd3  3b4608               cmp eax, dword ptr [esi + 8]
// 004fdfd6  8b0e                 mov ecx, dword ptr [esi]
// 004fdfd8  7d0c                 jge 0x4fdfe6
// 004fdfda  03c8                 add ecx, eax
// 004fdfdc  7403                 je 0x4fdfe1
// 004fdfde  c60120               mov byte ptr [ecx], 0x20
// 004fdfe1  016e04               add dword ptr [esi + 4], ebp
// 004fdfe4  eb38                 jmp 0x4fe01e
// 004fdfe6  8d542413             lea edx, [esp + 0x13]
// 004fdfea  3bd1                 cmp edx, ecx
// 004fdfec  7219                 jb 0x4fe007
// 004fdfee  03c8                 add ecx, eax
// 004fdff0  3bd1                 cmp edx, ecx
// 004fdff2  7313                 jae 0x4fe007
// 004fdff4  8d442413             lea eax, [esp + 0x13]
// 004fdff8  50                   push eax
// 004fdff9  8bce                 mov ecx, esi
// 004fdffb  c644241720           mov byte ptr [esp + 0x17], 0x20
// 004fe000  e83bffffff           call 0x4fdf40
// 004fe005  eb17                 jmp 0x4fe01e
// 004fe007  6a00                 push 0
// 004fe009  83c001               add eax, 1
// 004fe00c  50                   push eax
// 004fe00d  8bce                 mov ecx, esi
// 004fe00f  e81cfeffff           call 0x4fde30
// 004fe014  8b0e                 mov ecx, dword ptr [esi]
// 004fe016  8b5604               mov edx, dword ptr [esi + 4]
// 004fe019  c64411ff20           mov byte ptr [ecx + edx - 1], 0x20
// 004fe01e  03dd                 add ebx, ebp
// 004fe020  3b5f50               cmp ebx, dword ptr [edi + 0x50]
// 004fe023  7cab                 jl 0x4fdfd0
// 004fe025  8b4750               mov eax, dword ptr [edi + 0x50]
// 004fe028  c60700               mov byte ptr [edi], 0
// 004fe02b  894704               mov dword ptr [edi + 4], eax
// 004fe02e  8b472c               mov eax, dword ptr [edi + 0x2c]
// 004fe031  3b4730               cmp eax, dword ptr [edi + 0x30]
// 004fe034  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 004fe037  8d7728               lea esi, [edi + 0x28]
// 004fe03a  7d0f                 jge 0x4fe04b
// 004fe03c  03c8                 add ecx, eax
// 004fe03e  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 004fe042  7402                 je 0x4fe046
// 004fe044  8819                 mov byte ptr [ecx], bl
// 004fe046  016e04               add dword ptr [esi + 4], ebp
// 004fe049  eb3e                 jmp 0x4fe089
// 004fe04b  8d542418             lea edx, [esp + 0x18]
// 004fe04f  3bd1                 cmp edx, ecx
// 004fe051  721c                 jb 0x4fe06f
// 004fe053  03c8                 add ecx, eax
// 004fe055  3bd1                 cmp edx, ecx
// 004fe057  7316                 jae 0x4fe06f
// 004fe059  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 004fe05d  8d442418             lea eax, [esp + 0x18]
// 004fe061  50                   push eax
// 004fe062  8bce                 mov ecx, esi
// 004fe064  885c241c             mov byte ptr [esp + 0x1c], bl
// 004fe068  e8d3feffff           call 0x4fdf40
// 004fe06d  eb1a                 jmp 0x4fe089
// 004fe06f  6a00                 push 0
// 004fe071  83c001               add eax, 1
// 004fe074  50                   push eax
// 004fe075  8bce                 mov ecx, esi
// 004fe077  e8b4fdffff           call 0x4fde30
// 004fe07c  8b0e                 mov ecx, dword ptr [esi]
// 004fe07e  8b5604               mov edx, dword ptr [esi + 4]
// 004fe081  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 004fe085  885c11ff             mov byte ptr [ecx + edx - 1], bl
// 004fe089  80fb0d               cmp bl, 0xd
// 004fe08c  7403                 je 0x4fe091
// 004fe08e  016f04               add dword ptr [edi + 4], ebp
// 004fe091  80fb22               cmp bl, 0x22
// 004fe094  750a                 jne 0x4fe0a0
// 004fe096  807f0800             cmp byte ptr [edi + 8], 0
// 004fe09a  0f94c0               sete al
// 004fe09d  884708               mov byte ptr [edi + 8], al
// 004fe0a0  80fb0a               cmp bl, 0xa
// 004fe0a3  0f94c0               sete al
// 004fe0a6  84c0                 test al, al
// 004fe0a8  8807                 mov byte ptr [edi], al
// 004fe0aa  7407                 je 0x4fe0b3
// 004fe0ac  c7470400000000       mov dword ptr [edi + 4], 0
// 004fe0b3  5f                   pop edi
// 004fe0b4  5e                   pop esi
// 004fe0b5  5d                   pop ebp
// 004fe0b6  5b                   pop ebx
// 004fe0b7  59                   pop ecx
// 004fe0b8  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?indentAppend@TextOutput@G3D@@AAEXD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp

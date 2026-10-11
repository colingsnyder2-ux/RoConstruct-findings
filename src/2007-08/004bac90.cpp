// from server: 100% by auto
// roc 2007-08 004bac90  unit: RakPeer  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bac90
//
// 004bac90  53                   push ebx
// 004bac91  56                   push esi
// 004bac92  8bf1                 mov esi, ecx
// 004bac94  8b4608               mov eax, dword ptr [esi + 8]
// 004bac97  394604               cmp dword ptr [esi + 4], eax
// 004bac9a  57                   push edi
// 004bac9b  7573                 jne 0x4bad10
// 004bac9d  85c0                 test eax, eax
// 004bac9f  7509                 jne 0x4bacaa
// 004baca1  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004baca8  eb05                 jmp 0x4bacaf
// 004bacaa  03c0                 add eax, eax
// 004bacac  894608               mov dword ptr [esi + 8], eax
// 004bacaf  8b4608               mov eax, dword ptr [esi + 8]
// 004bacb2  33c9                 xor ecx, ecx
// 004bacb4  ba0c000000           mov edx, 0xc
// 004bacb9  f7e2                 mul edx
// 004bacbb  0f90c1               seto cl
// 004bacbe  f7d9                 neg ecx
// 004bacc0  0bc8                 or ecx, eax
// 004bacc2  51                   push ecx
// 004bacc3  e82e521700           call 0x62fef6
// 004bacc8  33d2                 xor edx, edx
// 004bacca  83c404               add esp, 4
// 004baccd  395604               cmp dword ptr [esi + 4], edx
// 004bacd0  8bd8                 mov ebx, eax
// 004bacd2  762f                 jbe 0x4bad03
// 004bacd4  bff8ffffff           mov edi, 0xfffffff8
// 004bacd9  8d4b08               lea ecx, [ebx + 8]
// 004bacdc  2bfb                 sub edi, ebx
// 004bacde  55                   push ebp
// 004bacdf  90                   nop 
// 004bace0  8d040f               lea eax, [edi + ecx]
// 004bace3  0306                 add eax, dword ptr [esi]
// 004bace5  83c201               add edx, 1
// 004bace8  8b28                 mov ebp, dword ptr [eax]
// 004bacea  8969f8               mov dword ptr [ecx - 8], ebp
// 004baced  668b6804             mov bp, word ptr [eax + 4]
// 004bacf1  668969fc             mov word ptr [ecx - 4], bp
// 004bacf5  8b4008               mov eax, dword ptr [eax + 8]
// 004bacf8  8901                 mov dword ptr [ecx], eax
// 004bacfa  83c10c               add ecx, 0xc
// 004bacfd  3b5604               cmp edx, dword ptr [esi + 4]
// 004bad00  72de                 jb 0x4bace0
// 004bad02  5d                   pop ebp
// 004bad03  8b0e                 mov ecx, dword ptr [esi]
// 004bad05  51                   push ecx
// 004bad06  e8574f1700           call 0x62fc62
// 004bad0b  83c404               add esp, 4
// 004bad0e  891e                 mov dword ptr [esi], ebx
// 004bad10  8b4604               mov eax, dword ptr [esi + 4]
// 004bad13  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004bad17  3bc7                 cmp eax, edi
// 004bad19  742b                 je 0x4bad46
// 004bad1b  8d0c40               lea ecx, [eax + eax*2]
// 004bad1e  03c9                 add ecx, ecx
// 004bad20  03c9                 add ecx, ecx
// 004bad22  2bc7                 sub eax, edi
// 004bad24  8bd0                 mov edx, eax
// 004bad26  8b06                 mov eax, dword ptr [esi]
// 004bad28  8b5c08f4             mov ebx, dword ptr [eax + ecx - 0xc]
// 004bad2c  03c1                 add eax, ecx
// 004bad2e  8918                 mov dword ptr [eax], ebx
// 004bad30  668b58f8             mov bx, word ptr [eax - 8]
// 004bad34  66895804             mov word ptr [eax + 4], bx
// 004bad38  8b58fc               mov ebx, dword ptr [eax - 4]
// 004bad3b  83e90c               sub ecx, 0xc
// 004bad3e  83ea01               sub edx, 1
// 004bad41  895808               mov dword ptr [eax + 8], ebx
// 004bad44  75e0                 jne 0x4bad26
// 004bad46  8b16                 mov edx, dword ptr [esi]
// 004bad48  8d0c7f               lea ecx, [edi + edi*2]
// 004bad4b  8d048a               lea eax, [edx + ecx*4]
// 004bad4e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bad52  668b542414           mov dx, word ptr [esp + 0x14]
// 004bad57  8908                 mov dword ptr [eax], ecx
// 004bad59  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004bad5d  5f                   pop edi
// 004bad5e  66895004             mov word ptr [eax + 4], dx
// 004bad62  894808               mov dword ptr [eax + 8], ecx
// 004bad65  83460401             add dword ptr [esi + 4], 1
// 004bad69  5e                   pop esi
// 004bad6a  5b                   pop ebx
// 004bad6b  c21000               ret 0x10

// from server: 73% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LogCommandParser.cpp
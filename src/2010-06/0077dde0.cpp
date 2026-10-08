// from server: 100% by auto
// roc 2010-06 0077dde0  unit: RBX::PartDropTool  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077dde0
//
// 0077dde0  53                   push ebx
// 0077dde1  55                   push ebp
// 0077dde2  56                   push esi
// 0077dde3  57                   push edi
// 0077dde4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0077dde8  8bc7                 mov eax, edi
// 0077ddea  c1e805               shr eax, 5
// 0077dded  40                   inc eax
// 0077ddee  8bdf                 mov ebx, edi
// 0077ddf0  8bcf                 mov ecx, edi
// 0077ddf2  3bf8                 cmp edi, eax
// 0077ddf4  7229                 jb 0x77de1f
// 0077ddf6  eb08                 jmp 0x77de00
// 0077ddf8  8da42400000000       lea esp, [esp]
// 0077ddff  90                   nop 
// 0077de00  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077de04  0fb6540aff           movzx edx, byte ptr [edx + ecx - 1]
// 0077de09  8bf3                 mov esi, ebx
// 0077de0b  c1e605               shl esi, 5
// 0077de0e  03d6                 add edx, esi
// 0077de10  8bf3                 mov esi, ebx
// 0077de12  c1ee02               shr esi, 2
// 0077de15  03d6                 add edx, esi
// 0077de17  2bc8                 sub ecx, eax
// 0077de19  33da                 xor ebx, edx
// 0077de1b  3bc8                 cmp ecx, eax
// 0077de1d  73e1                 jae 0x77de00
// 0077de1f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077de23  8b4010               mov eax, dword ptr [eax + 0x10]
// 0077de26  8b4808               mov ecx, dword ptr [eax + 8]
// 0077de29  8b10                 mov edx, dword ptr [eax]
// 0077de2b  49                   dec ecx
// 0077de2c  23cb                 and ecx, ebx
// 0077de2e  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 0077de31  85ed                 test ebp, ebp
// 0077de33  7452                 je 0x77de87
// 0077de35  397d0c               cmp dword ptr [ebp + 0xc], edi
// 0077de38  7546                 jne 0x77de80
// 0077de3a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0077de3e  8bcf                 mov ecx, edi
// 0077de40  8d5510               lea edx, [ebp + 0x10]
// 0077de43  83ff04               cmp edi, 4
// 0077de46  7214                 jb 0x77de5c
// 0077de48  8b06                 mov eax, dword ptr [esi]
// 0077de4a  3b02                 cmp eax, dword ptr [edx]
// 0077de4c  7532                 jne 0x77de80
// 0077de4e  83e904               sub ecx, 4
// 0077de51  83c204               add edx, 4
// 0077de54  83c604               add esi, 4
// 0077de57  83f904               cmp ecx, 4
// 0077de5a  73ec                 jae 0x77de48
// 0077de5c  85c9                 test ecx, ecx
// 0077de5e  743e                 je 0x77de9e
// 0077de60  8a02                 mov al, byte ptr [edx]
// 0077de62  3a06                 cmp al, byte ptr [esi]
// 0077de64  751a                 jne 0x77de80
// 0077de66  83f901               cmp ecx, 1
// 0077de69  7633                 jbe 0x77de9e
// 0077de6b  8a4201               mov al, byte ptr [edx + 1]
// 0077de6e  3a4601               cmp al, byte ptr [esi + 1]
// 0077de71  750d                 jne 0x77de80
// 0077de73  83f902               cmp ecx, 2
// 0077de76  7626                 jbe 0x77de9e
// 0077de78  8a4a02               mov cl, byte ptr [edx + 2]
// 0077de7b  3a4e02               cmp cl, byte ptr [esi + 2]
// 0077de7e  741e                 je 0x77de9e
// 0077de80  8b6d00               mov ebp, dword ptr [ebp]
// 0077de83  85ed                 test ebp, ebp
// 0077de85  75ae                 jne 0x77de35
// 0077de87  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077de8b  53                   push ebx
// 0077de8c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0077de90  52                   push edx
// 0077de91  e8aafeffff           call 0x77dd40
// 0077de96  83c408               add esp, 8
// 0077de99  5f                   pop edi
// 0077de9a  5e                   pop esi
// 0077de9b  5d                   pop ebp
// 0077de9c  5b                   pop ebx
// 0077de9d  c3                   ret 
// 0077de9e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0077dea2  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 0077dea5  0fb65114             movzx edx, byte ptr [ecx + 0x14]
// 0077dea9  8a4505               mov al, byte ptr [ebp + 5]
// 0077deac  0fb6c8               movzx ecx, al
// 0077deaf  f7d2                 not edx
// 0077deb1  83e103               and ecx, 3
// 0077deb4  84d1                 test cl, dl
// 0077deb6  7405                 je 0x77debd
// 0077deb8  3403                 xor al, 3
// 0077deba  884505               mov byte ptr [ebp + 5], al
// 0077debd  5f                   pop edi
// 0077debe  5e                   pop esi
// 0077debf  8bc5                 mov eax, ebp
// 0077dec1  5d                   pop ebp
// 0077dec2  5b                   pop ebx
// 0077dec3  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newlstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c

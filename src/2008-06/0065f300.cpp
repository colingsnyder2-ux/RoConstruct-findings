// from server: 100% by auto
// roc 2008-06 0065f300  unit: seg_00650000  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f300
//
// 0065f300  53                   push ebx
// 0065f301  55                   push ebp
// 0065f302  56                   push esi
// 0065f303  57                   push edi
// 0065f304  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0065f308  8bc7                 mov eax, edi
// 0065f30a  c1e805               shr eax, 5
// 0065f30d  40                   inc eax
// 0065f30e  8bdf                 mov ebx, edi
// 0065f310  8bcf                 mov ecx, edi
// 0065f312  3bf8                 cmp edi, eax
// 0065f314  7229                 jb 0x65f33f
// 0065f316  eb08                 jmp 0x65f320
// 0065f318  8da42400000000       lea esp, [esp]
// 0065f31f  90                   nop 
// 0065f320  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065f324  0fb6540aff           movzx edx, byte ptr [edx + ecx - 1]
// 0065f329  8bf3                 mov esi, ebx
// 0065f32b  c1e605               shl esi, 5
// 0065f32e  03d6                 add edx, esi
// 0065f330  8bf3                 mov esi, ebx
// 0065f332  c1ee02               shr esi, 2
// 0065f335  03d6                 add edx, esi
// 0065f337  2bc8                 sub ecx, eax
// 0065f339  33da                 xor ebx, edx
// 0065f33b  3bc8                 cmp ecx, eax
// 0065f33d  73e1                 jae 0x65f320
// 0065f33f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065f343  8b4010               mov eax, dword ptr [eax + 0x10]
// 0065f346  8b4808               mov ecx, dword ptr [eax + 8]
// 0065f349  8b10                 mov edx, dword ptr [eax]
// 0065f34b  49                   dec ecx
// 0065f34c  23cb                 and ecx, ebx
// 0065f34e  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 0065f351  85ed                 test ebp, ebp
// 0065f353  7452                 je 0x65f3a7
// 0065f355  397d0c               cmp dword ptr [ebp + 0xc], edi
// 0065f358  7546                 jne 0x65f3a0
// 0065f35a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065f35e  8bcf                 mov ecx, edi
// 0065f360  8d5510               lea edx, [ebp + 0x10]
// 0065f363  83ff04               cmp edi, 4
// 0065f366  7214                 jb 0x65f37c
// 0065f368  8b06                 mov eax, dword ptr [esi]
// 0065f36a  3b02                 cmp eax, dword ptr [edx]
// 0065f36c  7532                 jne 0x65f3a0
// 0065f36e  83e904               sub ecx, 4
// 0065f371  83c204               add edx, 4
// 0065f374  83c604               add esi, 4
// 0065f377  83f904               cmp ecx, 4
// 0065f37a  73ec                 jae 0x65f368
// 0065f37c  85c9                 test ecx, ecx
// 0065f37e  743e                 je 0x65f3be
// 0065f380  8a02                 mov al, byte ptr [edx]
// 0065f382  3a06                 cmp al, byte ptr [esi]
// 0065f384  751a                 jne 0x65f3a0
// 0065f386  83f901               cmp ecx, 1
// 0065f389  7633                 jbe 0x65f3be
// 0065f38b  8a4201               mov al, byte ptr [edx + 1]
// 0065f38e  3a4601               cmp al, byte ptr [esi + 1]
// 0065f391  750d                 jne 0x65f3a0
// 0065f393  83f902               cmp ecx, 2
// 0065f396  7626                 jbe 0x65f3be
// 0065f398  8a4a02               mov cl, byte ptr [edx + 2]
// 0065f39b  3a4e02               cmp cl, byte ptr [esi + 2]
// 0065f39e  741e                 je 0x65f3be
// 0065f3a0  8b6d00               mov ebp, dword ptr [ebp]
// 0065f3a3  85ed                 test ebp, ebp
// 0065f3a5  75ae                 jne 0x65f355
// 0065f3a7  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065f3ab  53                   push ebx
// 0065f3ac  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0065f3b0  52                   push edx
// 0065f3b1  e8aafeffff           call 0x65f260
// 0065f3b6  83c408               add esp, 8
// 0065f3b9  5f                   pop edi
// 0065f3ba  5e                   pop esi
// 0065f3bb  5d                   pop ebp
// 0065f3bc  5b                   pop ebx
// 0065f3bd  c3                   ret 
// 0065f3be  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065f3c2  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 0065f3c5  0fb65114             movzx edx, byte ptr [ecx + 0x14]
// 0065f3c9  8a4505               mov al, byte ptr [ebp + 5]
// 0065f3cc  0fb6c8               movzx ecx, al
// 0065f3cf  f7d2                 not edx
// 0065f3d1  83e103               and ecx, 3
// 0065f3d4  84d1                 test cl, dl
// 0065f3d6  7405                 je 0x65f3dd
// 0065f3d8  3403                 xor al, 3
// 0065f3da  884505               mov byte ptr [ebp + 5], al
// 0065f3dd  5f                   pop edi
// 0065f3de  5e                   pop esi
// 0065f3df  8bc5                 mov eax, ebp
// 0065f3e1  5d                   pop ebp
// 0065f3e2  5b                   pop ebx
// 0065f3e3  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newlstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c

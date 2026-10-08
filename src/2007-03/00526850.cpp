// roc 2007-03 00526850  unit: seg_00520000  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526850
//
// 00526850  51                   push ecx
// 00526851  53                   push ebx
// 00526852  55                   push ebp
// 00526853  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00526857  8bd8                 mov ebx, eax
// 00526859  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052685d  56                   push esi
// 0052685e  0fbf30               movsx esi, word ptr [eax]
// 00526861  2b74241c             sub esi, dword ptr [esp + 0x1c]
// 00526865  57                   push edi
// 00526866  8bc6                 mov eax, esi
// 00526868  7905                 jns 0x52686f
// 0052686a  f7d8                 neg eax
// 0052686c  83ee01               sub esi, 1
// 0052686f  33ff                 xor edi, edi
// 00526871  85c0                 test eax, eax
// 00526873  7425                 je 0x52689a
// 00526875  83c701               add edi, 1
// 00526878  d1f8                 sar eax, 1
// 0052687a  75f9                 jne 0x526875
// 0052687c  83ff0b               cmp edi, 0xb
// 0052687f  7e19                 jle 0x52689a
// 00526881  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00526884  8b11                 mov edx, dword ptr [ecx]
// 00526886  c7421406000000       mov dword ptr [edx + 0x14], 6
// 0052688d  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00526890  8b08                 mov ecx, dword ptr [eax]
// 00526892  8b11                 mov edx, dword ptr [ecx]
// 00526894  50                   push eax
// 00526895  ffd2                 call edx
// 00526897  83c404               add esp, 4
// 0052689a  8b0cbb               mov ecx, dword ptr [ebx + edi*4]
// 0052689d  0fbe841f00040000     movsx eax, byte ptr [edi + ebx + 0x400]
// 005268a5  51                   push ecx
// 005268a6  8bcd                 mov ecx, ebp
// 005268a8  e8c3feffff           call 0x526770
// 005268ad  83c404               add esp, 4
// 005268b0  84c0                 test al, al
// 005268b2  7508                 jne 0x5268bc
// 005268b4  5f                   pop edi
// 005268b5  5e                   pop esi
// 005268b6  5d                   pop ebp
// 005268b7  32c0                 xor al, al
// 005268b9  5b                   pop ebx
// 005268ba  59                   pop ecx
// 005268bb  c3                   ret 
// 005268bc  85ff                 test edi, edi
// 005268be  7411                 je 0x5268d1
// 005268c0  56                   push esi
// 005268c1  8bc7                 mov eax, edi
// 005268c3  8bcd                 mov ecx, ebp
// 005268c5  e8a6feffff           call 0x526770
// 005268ca  83c404               add esp, 4
// 005268cd  84c0                 test al, al
// 005268cf  74e3                 je 0x5268b4
// 005268d1  b8242c7a00           mov eax, 0x7a2c24
// 005268d6  33f6                 xor esi, esi
// 005268d8  89442410             mov dword ptr [esp + 0x10], eax
// 005268dc  8d642400             lea esp, [esp]
// 005268e0  8b10                 mov edx, dword ptr [eax]
// 005268e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005268e6  0fbf3c51             movsx edi, word ptr [ecx + edx*2]
// 005268ea  85ff                 test edi, edi
// 005268ec  7508                 jne 0x5268f6
// 005268ee  83c601               add esi, 1
// 005268f1  e9b5000000           jmp 0x5269ab
// 005268f6  83fe0f               cmp esi, 0xf
// 005268f9  7e2d                 jle 0x526928
// 005268fb  eb03                 jmp 0x526900
// 005268fd  8d4900               lea ecx, [ecx]
// 00526900  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00526904  8b91c0030000         mov edx, dword ptr [ecx + 0x3c0]
// 0052690a  0fbe81f0040000       movsx eax, byte ptr [ecx + 0x4f0]
// 00526911  52                   push edx
// 00526912  8bcd                 mov ecx, ebp
// 00526914  e857feffff           call 0x526770
// 00526919  83c404               add esp, 4
// 0052691c  84c0                 test al, al
// 0052691e  7494                 je 0x5268b4
// 00526920  83ee10               sub esi, 0x10
// 00526923  83fe0f               cmp esi, 0xf
// 00526926  7fd8                 jg 0x526900
// 00526928  85ff                 test edi, edi
// 0052692a  897c2420             mov dword ptr [esp + 0x20], edi
// 0052692e  7d07                 jge 0x526937
// 00526930  f7df                 neg edi
// 00526932  836c242001           sub dword ptr [esp + 0x20], 1
// 00526937  d1ff                 sar edi, 1
// 00526939  bb01000000           mov ebx, 1
// 0052693e  7425                 je 0x526965
// 00526940  83c301               add ebx, 1
// 00526943  d1ff                 sar edi, 1
// 00526945  75f9                 jne 0x526940
// 00526947  83fb0a               cmp ebx, 0xa
// 0052694a  7e19                 jle 0x526965
// 0052694c  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0052694f  8b08                 mov ecx, dword ptr [eax]
// 00526951  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00526958  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0052695b  8b10                 mov edx, dword ptr [eax]
// 0052695d  50                   push eax
// 0052695e  8b02                 mov eax, dword ptr [edx]
// 00526960  ffd0                 call eax
// 00526962  83c404               add esp, 4
// 00526965  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00526969  c1e604               shl esi, 4
// 0052696c  03f3                 add esi, ebx
// 0052696e  0fbe840e00040000     movsx eax, byte ptr [esi + ecx + 0x400]
// 00526976  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00526979  51                   push ecx
// 0052697a  8bcd                 mov ecx, ebp
// 0052697c  e8effdffff           call 0x526770
// 00526981  83c404               add esp, 4
// 00526984  84c0                 test al, al
// 00526986  0f8428ffffff         je 0x5268b4
// 0052698c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00526990  52                   push edx
// 00526991  8bc3                 mov eax, ebx
// 00526993  8bcd                 mov ecx, ebp
// 00526995  e8d6fdffff           call 0x526770
// 0052699a  83c404               add esp, 4
// 0052699d  84c0                 test al, al
// 0052699f  0f840fffffff         je 0x5268b4
// 005269a5  8b442410             mov eax, dword ptr [esp + 0x10]
// 005269a9  33f6                 xor esi, esi
// 005269ab  83c004               add eax, 4
// 005269ae  3d202d7a00           cmp eax, 0x7a2d20
// 005269b3  89442410             mov dword ptr [esp + 0x10], eax
// 005269b7  0f8c23ffffff         jl 0x5268e0
// 005269bd  85f6                 test esi, esi
// 005269bf  7e20                 jle 0x5269e1
// 005269c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005269c5  0fbe8100040000       movsx eax, byte ptr [ecx + 0x400]
// 005269cc  8b09                 mov ecx, dword ptr [ecx]
// 005269ce  51                   push ecx
// 005269cf  8bcd                 mov ecx, ebp
// 005269d1  e89afdffff           call 0x526770
// 005269d6  83c404               add esp, 4
// 005269d9  84c0                 test al, al
// 005269db  0f84d3feffff         je 0x5268b4
// 005269e1  5f                   pop edi
// 005269e2  5e                   pop esi
// 005269e3  5d                   pop ebp
// 005269e4  b001                 mov al, 1
// 005269e6  5b                   pop ebx
// 005269e7  59                   pop ecx
// 005269e8  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_one_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jchuff.c

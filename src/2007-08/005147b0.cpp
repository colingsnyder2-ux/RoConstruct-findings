// roc 2007-08 005147b0  unit: G3D::_internal::DialogTemplate  size: 495 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005147b0
//
// 005147b0  83ec08               sub esp, 8
// 005147b3  53                   push ebx
// 005147b4  57                   push edi
// 005147b5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005147b9  85ff                 test edi, edi
// 005147bb  0f84d6010000         je 0x514997
// 005147c1  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005147c5  85db                 test ebx, ebx
// 005147c7  0f84ca010000         je 0x514997
// 005147cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005147d1  85c9                 test ecx, ecx
// 005147d3  0f84be010000         je 0x514997
// 005147d9  8b4330               mov eax, dword ptr [ebx + 0x30]
// 005147dc  55                   push ebp
// 005147dd  56                   push esi
// 005147de  8b7334               mov esi, dword ptr [ebx + 0x34]
// 005147e1  03c1                 add eax, ecx
// 005147e3  3bc6                 cmp eax, esi
// 005147e5  7e7a                 jle 0x514861
// 005147e7  8b6b38               mov ebp, dword ptr [ebx + 0x38]
// 005147ea  85ed                 test ebp, ebp
// 005147ec  7448                 je 0x514836
// 005147ee  83c008               add eax, 8
// 005147f1  894334               mov dword ptr [ebx + 0x34], eax
// 005147f4  c1e004               shl eax, 4
// 005147f7  50                   push eax
// 005147f8  57                   push edi
// 005147f9  e802a50000           call 0x51ed00
// 005147fe  83c408               add esp, 8
// 00514801  85c0                 test eax, eax
// 00514803  894338               mov dword ptr [ebx + 0x38], eax
// 00514806  7517                 jne 0x51481f
// 00514808  55                   push ebp
// 00514809  57                   push edi
// 0051480a  e8c1a40000           call 0x51ecd0
// 0051480f  83c408               add esp, 8
// 00514812  5e                   pop esi
// 00514813  5d                   pop ebp
// 00514814  5f                   pop edi
// 00514815  b801000000           mov eax, 1
// 0051481a  5b                   pop ebx
// 0051481b  83c408               add esp, 8
// 0051481e  c3                   ret 
// 0051481f  c1e604               shl esi, 4
// 00514822  56                   push esi
// 00514823  55                   push ebp
// 00514824  50                   push eax
// 00514825  e822c51100           call 0x630d4c
// 0051482a  55                   push ebp
// 0051482b  57                   push edi
// 0051482c  e89fa40000           call 0x51ecd0
// 00514831  83c414               add esp, 0x14
// 00514834  eb2b                 jmp 0x514861
// 00514836  83c108               add ecx, 8
// 00514839  894b34               mov dword ptr [ebx + 0x34], ecx
// 0051483c  c1e104               shl ecx, 4
// 0051483f  51                   push ecx
// 00514840  57                   push edi
// 00514841  c7433000000000       mov dword ptr [ebx + 0x30], 0
// 00514848  e8b3a40000           call 0x51ed00
// 0051484d  83c408               add esp, 8
// 00514850  85c0                 test eax, eax
// 00514852  894338               mov dword ptr [ebx + 0x38], eax
// 00514855  74bb                 je 0x514812
// 00514857  818bb800000000400000 or dword ptr [ebx + 0xb8], 0x4000
// 00514861  837c242800           cmp dword ptr [esp + 0x28], 0
// 00514866  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0051486e  0f8e19010000         jle 0x51498d
// 00514874  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00514878  83c708               add edi, 8
// 0051487b  897c2410             mov dword ptr [esp + 0x10], edi
// 0051487f  90                   nop 
// 00514880  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00514883  8b47fc               mov eax, dword ptr [edi - 4]
// 00514886  c1e604               shl esi, 4
// 00514889  037338               add esi, dword ptr [ebx + 0x38]
// 0051488c  85c0                 test eax, eax
// 0051488e  0f84dd000000         je 0x514971
// 00514894  8d5001               lea edx, [eax + 1]
// 00514897  8a08                 mov cl, byte ptr [eax]
// 00514899  83c001               add eax, 1
// 0051489c  84c9                 test cl, cl
// 0051489e  75f7                 jne 0x514897
// 005148a0  8b4ff8               mov ecx, dword ptr [edi - 8]
// 005148a3  2bc2                 sub eax, edx
// 005148a5  85c9                 test ecx, ecx
// 005148a7  8be8                 mov ebp, eax
// 005148a9  0f8fb0000000         jg 0x51495f
// 005148af  8b3f                 mov edi, dword ptr [edi]
// 005148b1  85ff                 test edi, edi
// 005148b3  741a                 je 0x5148cf
// 005148b5  803f00               cmp byte ptr [edi], 0
// 005148b8  7415                 je 0x5148cf
// 005148ba  8d5701               lea edx, [edi + 1]
// 005148bd  8d4900               lea ecx, [ecx]
// 005148c0  8a07                 mov al, byte ptr [edi]
// 005148c2  83c701               add edi, 1
// 005148c5  84c0                 test al, al
// 005148c7  75f7                 jne 0x5148c0
// 005148c9  2bfa                 sub edi, edx
// 005148cb  890e                 mov dword ptr [esi], ecx
// 005148cd  eb08                 jmp 0x5148d7
// 005148cf  33ff                 xor edi, edi
// 005148d1  c706ffffffff         mov dword ptr [esi], 0xffffffff
// 005148d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005148db  8d542f04             lea edx, [edi + ebp + 4]
// 005148df  52                   push edx
// 005148e0  50                   push eax
// 005148e1  e81aa40000           call 0x51ed00
// 005148e6  83c408               add esp, 8
// 005148e9  85c0                 test eax, eax
// 005148eb  894604               mov dword ptr [esi + 4], eax
// 005148ee  0f841effffff         je 0x514812
// 005148f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005148f8  8b51fc               mov edx, dword ptr [ecx - 4]
// 005148fb  55                   push ebp
// 005148fc  52                   push edx
// 005148fd  50                   push eax
// 005148fe  e849c41100           call 0x630d4c
// 00514903  8b4604               mov eax, dword ptr [esi + 4]
// 00514906  c6042800             mov byte ptr [eax + ebp], 0
// 0051490a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051490d  83c40c               add esp, 0xc
// 00514910  85ff                 test edi, edi
// 00514912  8d442901             lea eax, [ecx + ebp + 1]
// 00514916  894608               mov dword ptr [esi + 8], eax
// 00514919  7411                 je 0x51492c
// 0051491b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051491f  8b0a                 mov ecx, dword ptr [edx]
// 00514921  57                   push edi
// 00514922  51                   push ecx
// 00514923  50                   push eax
// 00514924  e823c41100           call 0x630d4c
// 00514929  83c40c               add esp, 0xc
// 0051492c  8b5608               mov edx, dword ptr [esi + 8]
// 0051492f  c6041700             mov byte ptr [edi + edx], 0
// 00514933  897e0c               mov dword ptr [esi + 0xc], edi
// 00514936  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00514939  8b0e                 mov ecx, dword ptr [esi]
// 0051493b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051493f  c1e004               shl eax, 4
// 00514942  034338               add eax, dword ptr [ebx + 0x38]
// 00514945  8908                 mov dword ptr [eax], ecx
// 00514947  8b5604               mov edx, dword ptr [esi + 4]
// 0051494a  895004               mov dword ptr [eax + 4], edx
// 0051494d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00514950  894808               mov dword ptr [eax + 8], ecx
// 00514953  8b560c               mov edx, dword ptr [esi + 0xc]
// 00514956  89500c               mov dword ptr [eax + 0xc], edx
// 00514959  83433001             add dword ptr [ebx + 0x30], 1
// 0051495d  eb12                 jmp 0x514971
// 0051495f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00514963  68cc147a00           push 0x7a14cc
// 00514968  50                   push eax
// 00514969  e822a00000           call 0x51e990
// 0051496e  83c408               add esp, 8
// 00514971  8b442414             mov eax, dword ptr [esp + 0x14]
// 00514975  83c001               add eax, 1
// 00514978  83c710               add edi, 0x10
// 0051497b  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0051497f  89442414             mov dword ptr [esp + 0x14], eax
// 00514983  897c2410             mov dword ptr [esp + 0x10], edi
// 00514987  0f8cf3feffff         jl 0x514880
// 0051498d  5e                   pop esi
// 0051498e  5d                   pop ebp
// 0051498f  5f                   pop edi
// 00514990  33c0                 xor eax, eax
// 00514992  5b                   pop ebx
// 00514993  83c408               add esp, 8
// 00514996  c3                   ret 
// 00514997  5f                   pop edi
// 00514998  33c0                 xor eax, eax
// 0051499a  5b                   pop ebx
// 0051499b  83c408               add esp, 8
// 0051499e  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_text_2)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c

// roc 2010-06 007807e0  unit: seg_00780000  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007807e0
//
// 007807e0  83ec34               sub esp, 0x34
// 007807e3  55                   push ebp
// 007807e4  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 007807e7  56                   push esi
// 007807e8  57                   push edi
// 007807e9  55                   push ebp
// 007807ea  e801ec0000           call 0x78f3f0
// 007807ef  c644242a01           mov byte ptr [esp + 0x2a], 1
// 007807f4  89442410             mov dword ptr [esp + 0x10], eax
// 007807f8  83c8ff               or eax, 0xffffffff
// 007807fb  89442424             mov dword ptr [esp + 0x24], eax
// 007807ff  8a4d32               mov cl, byte ptr [ebp + 0x32]
// 00780802  884c2428             mov byte ptr [esp + 0x28], cl
// 00780806  c644242900           mov byte ptr [esp + 0x29], 0
// 0078080b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0078080e  89542420             mov dword ptr [esp + 0x20], edx
// 00780812  8d4c2420             lea ecx, [esp + 0x20]
// 00780816  894d14               mov dword ptr [ebp + 0x14], ecx
// 00780819  89442418             mov dword ptr [esp + 0x18], eax
// 0078081d  c644241e00           mov byte ptr [esp + 0x1e], 0
// 00780822  8a5532               mov dl, byte ptr [ebp + 0x32]
// 00780825  8854241c             mov byte ptr [esp + 0x1c], dl
// 00780829  c644241d00           mov byte ptr [esp + 0x1d], 0
// 0078082e  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00780831  8d4c2414             lea ecx, [esp + 0x14]
// 00780835  89442414             mov dword ptr [esp + 0x14], eax
// 00780839  53                   push ebx
// 0078083a  894d14               mov dword ptr [ebp + 0x14], ecx
// 0078083d  e83e310000           call 0x783980
// 00780842  53                   push ebx
// 00780843  e8a80f0000           call 0x7817f0
// 00780848  8b442450             mov eax, dword ptr [esp + 0x50]
// 0078084c  6810010000           push 0x110
// 00780851  bf14010000           mov edi, 0x114
// 00780856  8bf3                 mov esi, ebx
// 00780858  e8d3e2ffff           call 0x77eb30
// 0078085d  6a00                 push 0
// 0078085f  8d54243c             lea edx, [esp + 0x3c]
// 00780863  52                   push edx
// 00780864  53                   push ebx
// 00780865  e896faffff           call 0x780300
// 0078086a  83c41c               add esp, 0x1c
// 0078086d  837c242801           cmp dword ptr [esp + 0x28], 1
// 00780872  7508                 jne 0x78087c
// 00780874  c744242803000000     mov dword ptr [esp + 0x28], 3
// 0078087c  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0078087f  8d442428             lea eax, [esp + 0x28]
// 00780883  50                   push eax
// 00780884  51                   push ecx
// 00780885  e806fd0000           call 0x790590
// 0078088a  83c408               add esp, 8
// 0078088d  807c241900           cmp byte ptr [esp + 0x19], 0
// 00780892  7517                 jne 0x7808ab
// 00780894  8bf5                 mov esi, ebp
// 00780896  e895e7ffff           call 0x77f030
// 0078089b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078089f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007808a3  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 007808a6  52                   push edx
// 007808a7  50                   push eax
// 007808a8  51                   push ecx
// 007808a9  eb32                 jmp 0x7808dd
// 007808ab  8bc3                 mov eax, ebx
// 007808ad  e89efdffff           call 0x780650
// 007808b2  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007808b6  8b4330               mov eax, dword ptr [ebx + 0x30]
// 007808b9  52                   push edx
// 007808ba  50                   push eax
// 007808bb  e800f50000           call 0x78fdc0
// 007808c0  83c408               add esp, 8
// 007808c3  8bf5                 mov esi, ebp
// 007808c5  e866e7ffff           call 0x77f030
// 007808ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007808ce  51                   push ecx
// 007808cf  55                   push ebp
// 007808d0  e81bf40000           call 0x78fcf0
// 007808d5  8b5330               mov edx, dword ptr [ebx + 0x30]
// 007808d8  83c404               add esp, 4
// 007808db  50                   push eax
// 007808dc  52                   push edx
// 007808dd  e8ce030100           call 0x790cb0
// 007808e2  8b7514               mov esi, dword ptr [ebp + 0x14]
// 007808e5  8b06                 mov eax, dword ptr [esi]
// 007808e7  894514               mov dword ptr [ebp + 0x14], eax
// 007808ea  0fb65608             movzx edx, byte ptr [esi + 8]
// 007808ee  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007808f1  83c40c               add esp, 0xc
// 007808f4  e807e4ffff           call 0x77ed00
// 007808f9  807e0900             cmp byte ptr [esi + 9], 0
// 007808fd  7414                 je 0x780913
// 007808ff  0fb64e08             movzx ecx, byte ptr [esi + 8]
// 00780903  6a00                 push 0
// 00780905  6a00                 push 0
// 00780907  51                   push ecx
// 00780908  6a23                 push 0x23
// 0078090a  55                   push ebp
// 0078090b  e850f20000           call 0x78fb60
// 00780910  83c414               add esp, 0x14
// 00780913  0fb65532             movzx edx, byte ptr [ebp + 0x32]
// 00780917  895524               mov dword ptr [ebp + 0x24], edx
// 0078091a  8b4604               mov eax, dword ptr [esi + 4]
// 0078091d  50                   push eax
// 0078091e  55                   push ebp
// 0078091f  e89cf40000           call 0x78fdc0
// 00780924  83c408               add esp, 8
// 00780927  5f                   pop edi
// 00780928  5e                   pop esi
// 00780929  5d                   pop ebp
// 0078092a  83c434               add esp, 0x34
// 0078092d  c3                   ret 
// library lua-5.1.4/lparser.c (function _repeatstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

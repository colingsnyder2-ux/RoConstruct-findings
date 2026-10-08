// from server: 100% by auto
// roc 2007-08 006157d0  unit: seg_00610000  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006157d0
//
// 006157d0  83ec34               sub esp, 0x34
// 006157d3  55                   push ebp
// 006157d4  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 006157d7  56                   push esi
// 006157d8  57                   push edi
// 006157d9  55                   push ebp
// 006157da  e8012e0100           call 0x6285e0
// 006157df  c644242a01           mov byte ptr [esp + 0x2a], 1
// 006157e4  89442410             mov dword ptr [esp + 0x10], eax
// 006157e8  83c8ff               or eax, 0xffffffff
// 006157eb  89442424             mov dword ptr [esp + 0x24], eax
// 006157ef  8a4d32               mov cl, byte ptr [ebp + 0x32]
// 006157f2  884c2428             mov byte ptr [esp + 0x28], cl
// 006157f6  c644242900           mov byte ptr [esp + 0x29], 0
// 006157fb  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006157fe  89542420             mov dword ptr [esp + 0x20], edx
// 00615802  8d4c2420             lea ecx, [esp + 0x20]
// 00615806  894d14               mov dword ptr [ebp + 0x14], ecx
// 00615809  89442418             mov dword ptr [esp + 0x18], eax
// 0061580d  c644241e00           mov byte ptr [esp + 0x1e], 0
// 00615812  8a5532               mov dl, byte ptr [ebp + 0x32]
// 00615815  8854241c             mov byte ptr [esp + 0x1c], dl
// 00615819  c644241d00           mov byte ptr [esp + 0x1d], 0
// 0061581e  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00615821  8d4c2414             lea ecx, [esp + 0x14]
// 00615825  89442414             mov dword ptr [esp + 0x14], eax
// 00615829  53                   push ebx
// 0061582a  894d14               mov dword ptr [ebp + 0x14], ecx
// 0061582d  e8be310000           call 0x6189f0
// 00615832  53                   push ebx
// 00615833  e8b80f0000           call 0x6167f0
// 00615838  8b442450             mov eax, dword ptr [esp + 0x50]
// 0061583c  6810010000           push 0x110
// 00615841  bf14010000           mov edi, 0x114
// 00615846  8bf3                 mov esi, ebx
// 00615848  e8d3e2ffff           call 0x613b20
// 0061584d  6a00                 push 0
// 0061584f  8d54243c             lea edx, [esp + 0x3c]
// 00615853  52                   push edx
// 00615854  53                   push ebx
// 00615855  e8c6faffff           call 0x615320
// 0061585a  83c41c               add esp, 0x1c
// 0061585d  837c242801           cmp dword ptr [esp + 0x28], 1
// 00615862  7508                 jne 0x61586c
// 00615864  c744242803000000     mov dword ptr [esp + 0x28], 3
// 0061586c  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0061586f  8d442428             lea eax, [esp + 0x28]
// 00615873  50                   push eax
// 00615874  51                   push ecx
// 00615875  e8363f0100           call 0x6297b0
// 0061587a  83c408               add esp, 8
// 0061587d  807c241900           cmp byte ptr [esp + 0x19], 0
// 00615882  7517                 jne 0x61589b
// 00615884  8bf5                 mov esi, ebp
// 00615886  e8b5e7ffff           call 0x614040
// 0061588b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0061588f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00615893  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00615896  52                   push edx
// 00615897  50                   push eax
// 00615898  51                   push ecx
// 00615899  eb32                 jmp 0x6158cd
// 0061589b  8bc3                 mov eax, ebx
// 0061589d  e89efdffff           call 0x615640
// 006158a2  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006158a6  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006158a9  52                   push edx
// 006158aa  50                   push eax
// 006158ab  e830370100           call 0x628fe0
// 006158b0  83c408               add esp, 8
// 006158b3  8bf5                 mov esi, ebp
// 006158b5  e886e7ffff           call 0x614040
// 006158ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006158be  51                   push ecx
// 006158bf  55                   push ebp
// 006158c0  e84b360100           call 0x628f10
// 006158c5  8b5330               mov edx, dword ptr [ebx + 0x30]
// 006158c8  83c404               add esp, 4
// 006158cb  50                   push eax
// 006158cc  52                   push edx
// 006158cd  e88e450100           call 0x629e60
// 006158d2  8b7514               mov esi, dword ptr [ebp + 0x14]
// 006158d5  8b06                 mov eax, dword ptr [esi]
// 006158d7  894514               mov dword ptr [ebp + 0x14], eax
// 006158da  0fb65608             movzx edx, byte ptr [esi + 8]
// 006158de  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006158e1  83c40c               add esp, 0xc
// 006158e4  e817e4ffff           call 0x613d00
// 006158e9  807e0900             cmp byte ptr [esi + 9], 0
// 006158ed  7414                 je 0x615903
// 006158ef  0fb64e08             movzx ecx, byte ptr [esi + 8]
// 006158f3  6a00                 push 0
// 006158f5  6a00                 push 0
// 006158f7  51                   push ecx
// 006158f8  6a23                 push 0x23
// 006158fa  55                   push ebp
// 006158fb  e880340100           call 0x628d80
// 00615900  83c414               add esp, 0x14
// 00615903  0fb65532             movzx edx, byte ptr [ebp + 0x32]
// 00615907  895524               mov dword ptr [ebp + 0x24], edx
// 0061590a  8b4604               mov eax, dword ptr [esi + 4]
// 0061590d  50                   push eax
// 0061590e  55                   push ebp
// 0061590f  e8cc360100           call 0x628fe0
// 00615914  83c408               add esp, 8
// 00615917  5f                   pop edi
// 00615918  5e                   pop esi
// 00615919  5d                   pop ebp
// 0061591a  83c434               add esp, 0x34
// 0061591d  c3                   ret 
// library lua-5.1.4/lparser.c (function _repeatstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

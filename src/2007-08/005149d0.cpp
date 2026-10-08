// from server: 100% by auto
// roc 2007-08 005149d0  unit: G3D::_internal::DialogTemplate  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005149d0
//
// 005149d0  57                   push edi
// 005149d1  8b7c2408             mov edi, dword ptr [esp + 8]
// 005149d5  85ff                 test edi, edi
// 005149d7  0f8480000000         je 0x514a5d
// 005149dd  56                   push esi
// 005149de  8b742410             mov esi, dword ptr [esp + 0x10]
// 005149e2  85f6                 test esi, esi
// 005149e4  7476                 je 0x514a5c
// 005149e6  53                   push ebx
// 005149e7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005149eb  55                   push ebp
// 005149ec  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005149f0  85ed                 test ebp, ebp
// 005149f2  743a                 je 0x514a2e
// 005149f4  6a00                 push 0
// 005149f6  6800200000           push 0x2000
// 005149fb  56                   push esi
// 005149fc  57                   push edi
// 005149fd  e86e050000           call 0x514f70
// 00514a02  6800010000           push 0x100
// 00514a07  57                   push edi
// 00514a08  e873a20000           call 0x51ec80
// 00514a0d  89464c               mov dword ptr [esi + 0x4c], eax
// 00514a10  53                   push ebx
// 00514a11  898788010000         mov dword ptr [edi + 0x188], eax
// 00514a17  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00514a1a  55                   push ebp
// 00514a1b  50                   push eax
// 00514a1c  e82bc31100           call 0x630d4c
// 00514a21  83c424               add esp, 0x24
// 00514a24  818eb800000000200000 or dword ptr [esi + 0xb8], 0x2000
// 00514a2e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00514a32  85c0                 test eax, eax
// 00514a34  741c                 je 0x514a52
// 00514a36  85db                 test ebx, ebx
// 00514a38  8b08                 mov ecx, dword ptr [eax]
// 00514a3a  894e50               mov dword ptr [esi + 0x50], ecx
// 00514a3d  8b5004               mov edx, dword ptr [eax + 4]
// 00514a40  895654               mov dword ptr [esi + 0x54], edx
// 00514a43  668b4008             mov ax, word ptr [eax + 8]
// 00514a47  66894658             mov word ptr [esi + 0x58], ax
// 00514a4b  7505                 jne 0x514a52
// 00514a4d  bb01000000           mov ebx, 1
// 00514a52  834e0810             or dword ptr [esi + 8], 0x10
// 00514a56  5d                   pop ebp
// 00514a57  66895e16             mov word ptr [esi + 0x16], bx
// 00514a5b  5b                   pop ebx
// 00514a5c  5e                   pop esi
// 00514a5d  5f                   pop edi
// 00514a5e  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tRNS)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c

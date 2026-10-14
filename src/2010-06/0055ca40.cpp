// roc 2010-06 0055ca40  unit: G3D::GCamera  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ca40
//
// 0055ca40  6aff                 push -1
// 0055ca42  68c1159900           push 0x9915c1
// 0055ca47  64a100000000         mov eax, dword ptr fs:[0]
// 0055ca4d  50                   push eax
// 0055ca4e  64892500000000       mov dword ptr fs:[0], esp
// 0055ca55  83ec20               sub esp, 0x20
// 0055ca58  8b442438             mov eax, dword ptr [esp + 0x38]
// 0055ca5c  8b542430             mov edx, dword ptr [esp + 0x30]
// 0055ca60  56                   push esi
// 0055ca61  8bf1                 mov esi, ecx
// 0055ca63  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0055ca67  50                   push eax
// 0055ca68  51                   push ecx
// 0055ca69  52                   push edx
// 0055ca6a  8bce                 mov ecx, esi
// 0055ca6c  89742410             mov dword ptr [esp + 0x10], esi
// 0055ca70  e80bffffff           call 0x55c980
// 0055ca75  8b442444             mov eax, dword ptr [esp + 0x44]
// 0055ca79  8b542440             mov edx, dword ptr [esp + 0x40]
// 0055ca7d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0055ca85  c706040ba200         mov dword ptr [esi], 0xa20b04
// 0055ca8b  895644               mov dword ptr [esi + 0x44], edx
// 0055ca8e  894648               mov dword ptr [esi + 0x48], eax
// 0055ca91  83f803               cmp eax, 3
// 0055ca94  7723                 ja 0x55cab9
// 0055ca96  ff248534cb5500       jmp dword ptr [eax*4 + 0x55cb34]
// 0055ca9d  b9c40aa200           mov ecx, 0xa20ac4
// 0055caa2  eb1a                 jmp 0x55cabe
// 0055caa4  b9b40aa200           mov ecx, 0xa20ab4
// 0055caa9  eb13                 jmp 0x55cabe
// 0055caab  b9a40aa200           mov ecx, 0xa20aa4
// 0055cab0  eb0c                 jmp 0x55cabe
// 0055cab2  b9980aa200           mov ecx, 0xa20a98
// 0055cab7  eb05                 jmp 0x55cabe
// 0055cab9  b908b9a100           mov ecx, 0xa1b908
// 0055cabe  83fa03               cmp edx, 3
// 0055cac1  7723                 ja 0x55cae6
// 0055cac3  ff249544cb5500       jmp dword ptr [edx*4 + 0x55cb44]
// 0055caca  b8c40aa200           mov eax, 0xa20ac4
// 0055cacf  eb1a                 jmp 0x55caeb
// 0055cad1  b8b40aa200           mov eax, 0xa20ab4
// 0055cad6  eb13                 jmp 0x55caeb
// 0055cad8  b8a40aa200           mov eax, 0xa20aa4
// 0055cadd  eb0c                 jmp 0x55caeb
// 0055cadf  b8980aa200           mov eax, 0xa20a98
// 0055cae4  eb05                 jmp 0x55caeb
// 0055cae6  b808b9a100           mov eax, 0xa1b908
// 0055caeb  51                   push ecx
// 0055caec  50                   push eax
// 0055caed  8d442410             lea eax, [esp + 0x10]
// 0055caf1  68d40aa200           push 0xa20ad4
// 0055caf6  50                   push eax
// 0055caf7  e8b4a9ffff           call 0x5574b0
// 0055cafc  83c410               add esp, 0x10
// 0055caff  50                   push eax
// 0055cb00  8d4e28               lea ecx, [esi + 0x28]
// 0055cb03  c644243001           mov byte ptr [esp + 0x30], 1
// 0055cb08  ff1518a49e00         call dword ptr [0x9ea418]
// 0055cb0e  8d4c2408             lea ecx, [esp + 8]
// 0055cb12  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0055cb17  ff1500a49e00         call dword ptr [0x9ea400]
// 0055cb1d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055cb21  8bc6                 mov eax, esi
// 0055cb23  5e                   pop esi
// 0055cb24  64890d00000000       mov dword ptr fs:[0], ecx
// 0055cb2b  83c42c               add esp, 0x2c
// 0055cb2e  c21400               ret 0x14
// 0055cb31  8d4900               lea ecx, [ecx]
// 0055cb34  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 0055cb35  ca5500               retf 0x55
// 0055cb38  9d                   popfd 
// 0055cb39  ca5500               retf 0x55
// 0055cb3c  ab                   stosd dword ptr es:[edi], eax
// 0055cb3d  ca5500               retf 0x55
// 0055cb40  b2ca                 mov dl, 0xca
// 0055cb42  55                   push ebp
// 0055cb43  00d1                 add cl, dl
// 0055cb45  ca5500               retf 0x55
// 0055cb48  caca55               retf 0x55ca
// 0055cb4b  00d8                 add al, bl
// 0055cb4d  ca5500               retf 0x55
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHW4Type@Token@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp

// from server: 100% by auto
// roc 2008-06 006227d0  unit: lua_exception  size: 743 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006227d0
//
// 006227d0  83ec28               sub esp, 0x28
// 006227d3  53                   push ebx
// 006227d4  56                   push esi
// 006227d5  8b742434             mov esi, dword ptr [esp + 0x34]
// 006227d9  57                   push edi
// 006227da  8b7e08               mov edi, dword ptr [esi + 8]
// 006227dd  6a00                 push 0
// 006227df  6816b78000           push 0x80b716
// 006227e4  bb01000000           mov ebx, 1
// 006227e9  56                   push esi
// 006227ea  895c2424             mov dword ptr [esp + 0x24], ebx
// 006227ee  e80dcb0300           call 0x65f300
// 006227f3  8907                 mov dword ptr [edi], eax
// 006227f5  c7470804000000       mov dword ptr [edi + 8], 4
// 006227fc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006227ff  2b4608               sub eax, dword ptr [esi + 8]
// 00622802  83c40c               add esp, 0xc
// 00622805  83f810               cmp eax, 0x10
// 00622808  7f0a                 jg 0x622814
// 0062280a  53                   push ebx
// 0062280b  56                   push esi
// 0062280c  e83ff3ffff           call 0x621b50
// 00622811  83c408               add esp, 8
// 00622814  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00622818  83460810             add dword ptr [esi + 8], 0x10
// 0062281c  55                   push ebp
// 0062281d  6a25                 push 0x25
// 0062281f  57                   push edi
// 00622820  ff151c278000         call dword ptr [0x80271c]
// 00622826  83c408               add esp, 8
// 00622829  89442418             mov dword ptr [esp + 0x18], eax
// 0062282d  85c0                 test eax, eax
// 0062282f  0f84a2010000         je 0x6229d7
// 00622835  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00622839  8d69fc               lea ebp, [ecx - 4]
// 0062283c  83c1f8               add ecx, -8
// 0062283f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00622843  eb04                 jmp 0x622849
// 00622845  8b442418             mov eax, dword ptr [esp + 0x18]
// 00622849  8b5e08               mov ebx, dword ptr [esi + 8]
// 0062284c  2bc7                 sub eax, edi
// 0062284e  50                   push eax
// 0062284f  57                   push edi
// 00622850  56                   push esi
// 00622851  e8aaca0300           call 0x65f300
// 00622856  8903                 mov dword ptr [ebx], eax
// 00622858  c7430804000000       mov dword ptr [ebx + 8], 4
// 0062285f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00622862  2b4e08               sub ecx, dword ptr [esi + 8]
// 00622865  bb10000000           mov ebx, 0x10
// 0062286a  83c40c               add esp, 0xc
// 0062286d  3bcb                 cmp ecx, ebx
// 0062286f  7f0b                 jg 0x62287c
// 00622871  6a01                 push 1
// 00622873  56                   push esi
// 00622874  e8d7f2ffff           call 0x621b50
// 00622879  83c408               add esp, 8
// 0062287c  015e08               add dword ptr [esi + 8], ebx
// 0062287f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00622883  8a4201               mov al, byte ptr [edx + 1]
// 00622886  8b7e08               mov edi, dword ptr [esi + 8]
// 00622889  0fbec8               movsx ecx, al
// 0062288c  83c1db               add ecx, -0x25
// 0062288f  83f94e               cmp ecx, 0x4e
// 00622892  0f87c9000000         ja 0x622961
// 00622898  0fb689682a6200       movzx ecx, byte ptr [ecx + 0x622a68]
// 0062289f  ff248d4c2a6200       jmp dword ptr [ecx*4 + 0x622a4c]
// 006228a6  8b5504               mov edx, dword ptr [ebp + 4]
// 006228a9  8344241404           add dword ptr [esp + 0x14], 4
// 006228ae  83c504               add ebp, 4
// 006228b1  85d2                 test edx, edx
// 006228b3  7505                 jne 0x6228ba
// 006228b5  ba98498400           mov edx, 0x844998
// 006228ba  e8c1feffff           call 0x622780
// 006228bf  e9eb000000           jmp 0x6229af
// 006228c4  8a5504               mov dl, byte ptr [ebp + 4]
// 006228c7  8344241404           add dword ptr [esp + 0x14], 4
// 006228cc  83c504               add ebp, 4
// 006228cf  8854243c             mov byte ptr [esp + 0x3c], dl
// 006228d3  8d54243c             lea edx, [esp + 0x3c]
// 006228d7  c644243d00           mov byte ptr [esp + 0x3d], 0
// 006228dc  e89ffeffff           call 0x622780
// 006228e1  e9c9000000           jmp 0x6229af
// 006228e6  db4504               fild dword ptr [ebp + 4]
// 006228e9  8344241404           add dword ptr [esp + 0x14], 4
// 006228ee  83c504               add ebp, 4
// 006228f1  c7470803000000       mov dword ptr [edi + 8], 3
// 006228f8  dd1f                 fstp qword ptr [edi]
// 006228fa  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006228fd  2b4608               sub eax, dword ptr [esi + 8]
// 00622900  3bc3                 cmp eax, ebx
// 00622902  e998000000           jmp 0x62299f
// 00622907  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062290b  dd4008               fld qword ptr [eax + 8]
// 0062290e  83c008               add eax, 8
// 00622911  dd1f                 fstp qword ptr [edi]
// 00622913  c7470803000000       mov dword ptr [edi + 8], 3
// 0062291a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0062291d  2b4e08               sub ecx, dword ptr [esi + 8]
// 00622920  83c508               add ebp, 8
// 00622923  89442414             mov dword ptr [esp + 0x14], eax
// 00622927  3bcb                 cmp ecx, ebx
// 00622929  eb74                 jmp 0x62299f
// 0062292b  8b5504               mov edx, dword ptr [ebp + 4]
// 0062292e  8344241404           add dword ptr [esp + 0x14], 4
// 00622933  83c504               add ebp, 4
// 00622936  52                   push edx
// 00622937  8d442424             lea eax, [esp + 0x24]
// 0062293b  6894498400           push 0x844994
// 00622940  50                   push eax
// 00622941  ff1530288000         call dword ptr [0x802830]
// 00622947  83c40c               add esp, 0xc
// 0062294a  8d542420             lea edx, [esp + 0x20]
// 0062294e  e82dfeffff           call 0x622780
// 00622953  eb5a                 jmp 0x6229af
// 00622955  ba90498400           mov edx, 0x844990
// 0062295a  e821feffff           call 0x622780
// 0062295f  eb4e                 jmp 0x6229af
// 00622961  88442411             mov byte ptr [esp + 0x11], al
// 00622965  8d442410             lea eax, [esp + 0x10]
// 00622969  c644241025           mov byte ptr [esp + 0x10], 0x25
// 0062296e  c644241200           mov byte ptr [esp + 0x12], 0
// 00622973  8d5001               lea edx, [eax + 1]
// 00622976  8a08                 mov cl, byte ptr [eax]
// 00622978  40                   inc eax
// 00622979  84c9                 test cl, cl
// 0062297b  75f9                 jne 0x622976
// 0062297d  2bc2                 sub eax, edx
// 0062297f  50                   push eax
// 00622980  8d4c2414             lea ecx, [esp + 0x14]
// 00622984  51                   push ecx
// 00622985  56                   push esi
// 00622986  e875c90300           call 0x65f300
// 0062298b  8907                 mov dword ptr [edi], eax
// 0062298d  c7470804000000       mov dword ptr [edi + 8], 4
// 00622994  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00622997  2b5608               sub edx, dword ptr [esi + 8]
// 0062299a  83c40c               add esp, 0xc
// 0062299d  3bd3                 cmp edx, ebx
// 0062299f  7f0b                 jg 0x6229ac
// 006229a1  6a01                 push 1
// 006229a3  56                   push esi
// 006229a4  e8a7f1ffff           call 0x621b50
// 006229a9  83c408               add esp, 8
// 006229ac  015e08               add dword ptr [esi + 8], ebx
// 006229af  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006229b3  8344241c02           add dword ptr [esp + 0x1c], 2
// 006229b8  83c702               add edi, 2
// 006229bb  6a25                 push 0x25
// 006229bd  57                   push edi
// 006229be  ff151c278000         call dword ptr [0x80271c]
// 006229c4  83c408               add esp, 8
// 006229c7  89442418             mov dword ptr [esp + 0x18], eax
// 006229cb  85c0                 test eax, eax
// 006229cd  0f8572feffff         jne 0x622845
// 006229d3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006229d7  8b6e08               mov ebp, dword ptr [esi + 8]
// 006229da  8bc7                 mov eax, edi
// 006229dc  8d5001               lea edx, [eax + 1]
// 006229df  90                   nop 
// 006229e0  8a08                 mov cl, byte ptr [eax]
// 006229e2  40                   inc eax
// 006229e3  84c9                 test cl, cl
// 006229e5  75f9                 jne 0x6229e0
// 006229e7  2bc2                 sub eax, edx
// 006229e9  50                   push eax
// 006229ea  57                   push edi
// 006229eb  56                   push esi
// 006229ec  e80fc90300           call 0x65f300
// 006229f1  894500               mov dword ptr [ebp], eax
// 006229f4  c7450804000000       mov dword ptr [ebp + 8], 4
// 006229fb  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006229fe  2b4608               sub eax, dword ptr [esi + 8]
// 00622a01  83c40c               add esp, 0xc
// 00622a04  83f810               cmp eax, 0x10
// 00622a07  5d                   pop ebp
// 00622a08  7f0b                 jg 0x622a15
// 00622a0a  6a01                 push 1
// 00622a0c  56                   push esi
// 00622a0d  e83ef1ffff           call 0x621b50
// 00622a12  83c408               add esp, 8
// 00622a15  83460810             add dword ptr [esi + 8], 0x10
// 00622a19  8b4608               mov eax, dword ptr [esi + 8]
// 00622a1c  2b460c               sub eax, dword ptr [esi + 0xc]
// 00622a1f  8d4b01               lea ecx, [ebx + 1]
// 00622a22  c1f804               sar eax, 4
// 00622a25  48                   dec eax
// 00622a26  50                   push eax
// 00622a27  51                   push ecx
// 00622a28  56                   push esi
// 00622a29  e842a40300           call 0x65ce70
// 00622a2e  f7db                 neg ebx
// 00622a30  c1e304               shl ebx, 4
// 00622a33  015e08               add dword ptr [esi + 8], ebx
// 00622a36  8b7608               mov esi, dword ptr [esi + 8]
// 00622a39  8b46f0               mov eax, dword ptr [esi - 0x10]
// 00622a3c  83c40c               add esp, 0xc
// 00622a3f  5f                   pop edi
// 00622a40  5e                   pop esi
// 00622a41  83c010               add eax, 0x10
// 00622a44  5b                   pop ebx
// 00622a45  83c428               add esp, 0x28
// 00622a48  c3                   ret 
// 00622a49  8d4900               lea ecx, [ecx]
// 00622a4c  55                   push ebp
// 00622a4d  296200               sub dword ptr [edx], esp
// 00622a50  c428                 les ebp, ptr [eax]
// 00622a52  6200                 bound eax, qword ptr [eax]
// 00622a54  e628                 out 0x28, al
// 00622a56  6200                 bound eax, qword ptr [eax]
// 00622a58  07                   pop es
// 00622a59  296200               sub dword ptr [edx], esp
// 00622a5c  2b29                 sub ebp, dword ptr [ecx]
// 00622a5e  6200                 bound eax, qword ptr [eax]
// 00622a60  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 00622a61  286200               sub byte ptr [edx], ah
// 00622a64  61                   popal 
// 00622a65  296200               sub dword ptr [edx], esp
// 00622a68  0006                 add byte ptr [esi], al
// 00622a6a  06                   push es
// 00622a6b  06                   push es
// 00622a6c  06                   push es
// 00622a6d  06                   push es
// 00622a6e  06                   push es
// 00622a6f  06                   push es
// 00622a70  06                   push es
// 00622a71  06                   push es
// 00622a72  06                   push es
// 00622a73  06                   push es
// 00622a74  06                   push es
// 00622a75  06                   push es
// 00622a76  06                   push es
// 00622a77  06                   push es
// 00622a78  06                   push es
// 00622a79  06                   push es
// 00622a7a  06                   push es
// 00622a7b  06                   push es
// 00622a7c  06                   push es
// 00622a7d  06                   push es
// 00622a7e  06                   push es
// 00622a7f  06                   push es
// 00622a80  06                   push es
// 00622a81  06                   push es
// 00622a82  06                   push es
// 00622a83  06                   push es
// 00622a84  06                   push es
// 00622a85  06                   push es
// 00622a86  06                   push es
// 00622a87  06                   push es
// 00622a88  06                   push es
// 00622a89  06                   push es
// 00622a8a  06                   push es
// 00622a8b  06                   push es
// 00622a8c  06                   push es
// 00622a8d  06                   push es
// 00622a8e  06                   push es
// 00622a8f  06                   push es
// 00622a90  06                   push es
// 00622a91  06                   push es
// 00622a92  06                   push es
// 00622a93  06                   push es
// 00622a94  06                   push es
// 00622a95  06                   push es
// 00622a96  06                   push es
// 00622a97  06                   push es
// 00622a98  06                   push es
// 00622a99  06                   push es
// 00622a9a  06                   push es
// 00622a9b  06                   push es
// 00622a9c  06                   push es
// 00622a9d  06                   push es
// 00622a9e  06                   push es
// 00622a9f  06                   push es
// 00622aa0  06                   push es
// 00622aa1  06                   push es
// 00622aa2  06                   push es
// 00622aa3  06                   push es
// 00622aa4  06                   push es
// 00622aa5  06                   push es
// 00622aa6  0102                 add dword ptr [edx], eax
// 00622aa8  06                   push es
// 00622aa9  0306                 add eax, dword ptr [esi]
// 00622aab  06                   push es
// 00622aac  06                   push es
// 00622aad  06                   push es
// 00622aae  06                   push es
// 00622aaf  06                   push es
// 00622ab0  06                   push es
// 00622ab1  06                   push es
// 00622ab2  06                   push es
// 00622ab3  0406                 add al, 6
// 00622ab5  06                   push es
// library lua-5.1.4-dll/lobject.c (function _luaO_pushvfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lobject.c

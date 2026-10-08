// roc 2007-03 00497f40  unit: seg_00490000  size: 425 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497f40
//
// 00497f40  53                   push ebx
// 00497f41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00497f45  c1fb03               sar ebx, 3
// 00497f48  83eb01               sub ebx, 1
// 00497f4b  807c241000           cmp byte ptr [esp + 0x10], 0
// 00497f50  55                   push ebp
// 00497f51  0f95c2               setne dl
// 00497f54  80ea01               sub dl, 1
// 00497f57  56                   push esi
// 00497f58  57                   push edi
// 00497f59  8bf1                 mov esi, ecx
// 00497f5b  81e2ff000000         and edx, 0xff
// 00497f61  85db                 test ebx, ebx
// 00497f63  88542418             mov byte ptr [esp + 0x18], dl
// 00497f67  0f8eb0000000         jle 0x49801d
// 00497f6d  8d4900               lea ecx, [ecx]
// 00497f70  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00497f74  38143b               cmp byte ptr [ebx + edi], dl
// 00497f77  0f85ce000000         jne 0x49804b
// 00497f7d  8b06                 mov eax, dword ptr [esi]
// 00497f7f  8d7801               lea edi, [eax + 1]
// 00497f82  85ff                 test edi, edi
// 00497f84  7e5e                 jle 0x497fe4
// 00497f86  8b4e04               mov ecx, dword ptr [esi + 4]
// 00497f89  83e901               sub ecx, 1
// 00497f8c  8d6fff               lea ebp, [edi - 1]
// 00497f8f  83e1f8               and ecx, 0xfffffff8
// 00497f92  83e5f8               and ebp, 0xfffffff8
// 00497f95  3bcd                 cmp ecx, ebp
// 00497f97  7d4b                 jge 0x497fe4
// 00497f99  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497f9c  8d7c0002             lea edi, [eax + eax + 2]
// 00497fa0  8d4707               lea eax, [edi + 7]
// 00497fa3  8d6e11               lea ebp, [esi + 0x11]
// 00497fa6  c1f803               sar eax, 3
// 00497fa9  3bcd                 cmp ecx, ebp
// 00497fab  7526                 jne 0x497fd3
// 00497fad  3d00010000           cmp eax, 0x100
// 00497fb2  7e30                 jle 0x497fe4
// 00497fb4  50                   push eax
// 00497fb5  e8446f1800           call 0x61eefe
// 00497fba  8b5604               mov edx, dword ptr [esi + 4]
// 00497fbd  83c207               add edx, 7
// 00497fc0  c1fa03               sar edx, 3
// 00497fc3  52                   push edx
// 00497fc4  55                   push ebp
// 00497fc5  50                   push eax
// 00497fc6  89460c               mov dword ptr [esi + 0xc], eax
// 00497fc9  e814721800           call 0x61f1e2
// 00497fce  83c410               add esp, 0x10
// 00497fd1  eb0d                 jmp 0x497fe0
// 00497fd3  50                   push eax
// 00497fd4  51                   push ecx
// 00497fd5  e802721800           call 0x61f1dc
// 00497fda  83c408               add esp, 8
// 00497fdd  89460c               mov dword ptr [esi + 0xc], eax
// 00497fe0  8a542418             mov dl, byte ptr [esp + 0x18]
// 00497fe4  3b7e04               cmp edi, dword ptr [esi + 4]
// 00497fe7  7e03                 jle 0x497fec
// 00497fe9  897e04               mov dword ptr [esi + 4], edi
// 00497fec  8b06                 mov eax, dword ptr [esi]
// 00497fee  8bc8                 mov ecx, eax
// 00497ff0  c1f803               sar eax, 3
// 00497ff3  83e107               and ecx, 7
// 00497ff6  7509                 jne 0x498001
// 00497ff8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497ffb  c6040880             mov byte ptr [eax + ecx], 0x80
// 00497fff  eb0e                 jmp 0x49800f
// 00498001  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00498004  03f8                 add edi, eax
// 00498006  b880000000           mov eax, 0x80
// 0049800b  d3f8                 sar eax, cl
// 0049800d  0807                 or byte ptr [edi], al
// 0049800f  830601               add dword ptr [esi], 1
// 00498012  83eb01               sub ebx, 1
// 00498015  85db                 test ebx, ebx
// 00498017  0f8f53ffffff         jg 0x497f70
// 0049801d  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 00498022  7449                 je 0x49806d
// 00498024  8b542414             mov edx, dword ptr [esp + 0x14]
// 00498028  03da                 add ebx, edx
// 0049802a  f603f0               test byte ptr [ebx], 0xf0
// 0049802d  744f                 je 0x49807e
// 0049802f  6a00                 push 0
// 00498031  8bce                 mov ecx, esi
// 00498033  e818feffff           call 0x497e50
// 00498038  6a01                 push 1
// 0049803a  6a08                 push 8
// 0049803c  53                   push ebx
// 0049803d  8bce                 mov ecx, esi
// 0049803f  e86cfdffff           call 0x497db0
// 00498044  5f                   pop edi
// 00498045  5e                   pop esi
// 00498046  5d                   pop ebp
// 00498047  5b                   pop ebx
// 00498048  c20c00               ret 0xc
// 0049804b  6a00                 push 0
// 0049804d  8bce                 mov ecx, esi
// 0049804f  e8fcfdffff           call 0x497e50
// 00498054  6a01                 push 1
// 00498056  8d0cdd08000000       lea ecx, [ebx*8 + 8]
// 0049805d  51                   push ecx
// 0049805e  57                   push edi
// 0049805f  8bce                 mov ecx, esi
// 00498061  e84afdffff           call 0x497db0
// 00498066  5f                   pop edi
// 00498067  5e                   pop esi
// 00498068  5d                   pop ebp
// 00498069  5b                   pop ebx
// 0049806a  c20c00               ret 0xc
// 0049806d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00498071  8a0c03               mov cl, byte ptr [ebx + eax]
// 00498074  03d8                 add ebx, eax
// 00498076  80e1f0               and cl, 0xf0
// 00498079  80f9f0               cmp cl, 0xf0
// 0049807c  75b1                 jne 0x49802f
// 0049807e  6a01                 push 1
// 00498080  8bce                 mov ecx, esi
// 00498082  e8c9fdffff           call 0x497e50
// 00498087  6a04                 push 4
// 00498089  8bce                 mov ecx, esi
// 0049808b  e8a0faffff           call 0x497b30
// 00498090  8b0e                 mov ecx, dword ptr [esi]
// 00498092  8a13                 mov dl, byte ptr [ebx]
// 00498094  8bc1                 mov eax, ecx
// 00498096  83e007               and eax, 7
// 00498099  c0e204               shl dl, 4
// 0049809c  c1f903               sar ecx, 3
// 0049809f  85c0                 test eax, eax
// 004980a1  7510                 jne 0x4980b3
// 004980a3  8b460c               mov eax, dword ptr [esi + 0xc]
// 004980a6  5f                   pop edi
// 004980a7  881401               mov byte ptr [ecx + eax], dl
// 004980aa  830604               add dword ptr [esi], 4
// 004980ad  5e                   pop esi
// 004980ae  5d                   pop ebp
// 004980af  5b                   pop ebx
// 004980b0  c20c00               ret 0xc
// 004980b3  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004980b6  03f9                 add edi, ecx
// 004980b8  8ac8                 mov cl, al
// 004980ba  8ada                 mov bl, dl
// 004980bc  d2eb                 shr bl, cl
// 004980be  b908000000           mov ecx, 8
// 004980c3  2bc8                 sub ecx, eax
// 004980c5  081f                 or byte ptr [edi], bl
// 004980c7  83f908               cmp ecx, 8
// 004980ca  7d13                 jge 0x4980df
// 004980cc  83f904               cmp ecx, 4
// 004980cf  7d0e                 jge 0x4980df
// 004980d1  8b460c               mov eax, dword ptr [esi + 0xc]
// 004980d4  d2e2                 shl dl, cl
// 004980d6  8b0e                 mov ecx, dword ptr [esi]
// 004980d8  c1f903               sar ecx, 3
// 004980db  88540101             mov byte ptr [ecx + eax + 1], dl
// 004980df  830604               add dword ptr [esi], 4
// 004980e2  5f                   pop edi
// 004980e3  5e                   pop esi
// 004980e4  5d                   pop ebp
// 004980e5  5b                   pop ebx
// 004980e6  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?WriteCompressed@BitStream@RakNet@@AAEXPBEH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp

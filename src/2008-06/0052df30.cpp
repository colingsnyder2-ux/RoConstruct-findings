// roc 2008-06 0052df30  unit: seg_00520000  size: 583 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052df30
//
// 0052df30  83ec10               sub esp, 0x10
// 0052df33  53                   push ebx
// 0052df34  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0052df38  8b4368               mov eax, dword ptr [ebx + 0x68]
// 0052df3b  a801                 test al, 1
// 0052df3d  7550                 jne 0x52df8f
// 0052df3f  6894c38200           push 0x82c394
// 0052df44  53                   push ebx
// 0052df45  e866baffff           call 0x5299b0
// 0052df4a  83c408               add esp, 8
// 0052df4d  55                   push ebp
// 0052df4e  57                   push edi
// 0052df4f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052df53  8d4f01               lea ecx, [edi + 1]
// 0052df56  51                   push ecx
// 0052df57  53                   push ebx
// 0052df58  e843c5ffff           call 0x52a4a0
// 0052df5d  8be8                 mov ebp, eax
// 0052df5f  57                   push edi
// 0052df60  55                   push ebp
// 0052df61  53                   push ebx
// 0052df62  e8496bffff           call 0x524ab0
// 0052df67  57                   push edi
// 0052df68  55                   push ebp
// 0052df69  53                   push ebx
// 0052df6a  e811fefeff           call 0x51dd80
// 0052df6f  6a00                 push 0
// 0052df71  53                   push ebx
// 0052df72  e869efffff           call 0x52cee0
// 0052df77  83c428               add esp, 0x28
// 0052df7a  85c0                 test eax, eax
// 0052df7c  7433                 je 0x52dfb1
// 0052df7e  55                   push ebp
// 0052df7f  53                   push ebx
// 0052df80  e87bc5ffff           call 0x52a500
// 0052df85  83c408               add esp, 8
// 0052df88  5f                   pop edi
// 0052df89  5d                   pop ebp
// 0052df8a  5b                   pop ebx
// 0052df8b  83c410               add esp, 0x10
// 0052df8e  c3                   ret 
// 0052df8f  a804                 test al, 4
// 0052df91  74ba                 je 0x52df4d
// 0052df93  687cc38200           push 0x82c37c
// 0052df98  53                   push ebx
// 0052df99  e8b2baffff           call 0x529a50
// 0052df9e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052dfa2  50                   push eax
// 0052dfa3  53                   push ebx
// 0052dfa4  e837efffff           call 0x52cee0
// 0052dfa9  83c410               add esp, 0x10
// 0052dfac  5b                   pop ebx
// 0052dfad  83c410               add esp, 0x10
// 0052dfb0  c3                   ret 
// 0052dfb1  8d042f               lea eax, [edi + ebp]
// 0052dfb4  c60000               mov byte ptr [eax], 0
// 0052dfb7  807d0000             cmp byte ptr [ebp], 0
// 0052dfbb  56                   push esi
// 0052dfbc  8bf5                 mov esi, ebp
// 0052dfbe  7406                 je 0x52dfc6
// 0052dfc0  46                   inc esi
// 0052dfc1  803e00               cmp byte ptr [esi], 0
// 0052dfc4  75fa                 jne 0x52dfc0
// 0052dfc6  46                   inc esi
// 0052dfc7  3bf0                 cmp esi, eax
// 0052dfc9  761d                 jbe 0x52dfe8
// 0052dfcb  55                   push ebp
// 0052dfcc  53                   push ebx
// 0052dfcd  e82ec5ffff           call 0x52a500
// 0052dfd2  6864c38200           push 0x82c364
// 0052dfd7  53                   push ebx
// 0052dfd8  e873baffff           call 0x529a50
// 0052dfdd  83c410               add esp, 0x10
// 0052dfe0  5e                   pop esi
// 0052dfe1  5f                   pop edi
// 0052dfe2  5d                   pop ebp
// 0052dfe3  5b                   pop ebx
// 0052dfe4  83c410               add esp, 0x10
// 0052dfe7  c3                   ret 
// 0052dfe8  8a06                 mov al, byte ptr [esi]
// 0052dfea  33c9                 xor ecx, ecx
// 0052dfec  46                   inc esi
// 0052dfed  3c08                 cmp al, 8
// 0052dfef  88442414             mov byte ptr [esp + 0x14], al
// 0052dff3  0f95c1               setne cl
// 0052dff6  8bc5                 mov eax, ebp
// 0052dff8  2bc6                 sub eax, esi
// 0052dffa  03c7                 add eax, edi
// 0052dffc  99                   cdq 
// 0052dffd  8d0c8d06000000       lea ecx, [ecx*4 + 6]
// 0052e004  f7f9                 idiv ecx
// 0052e006  85d2                 test edx, edx
// 0052e008  741d                 je 0x52e027
// 0052e00a  55                   push ebp
// 0052e00b  53                   push ebx
// 0052e00c  e8efc4ffff           call 0x52a500
// 0052e011  6848c38200           push 0x82c348
// 0052e016  53                   push ebx
// 0052e017  e834baffff           call 0x529a50
// 0052e01c  83c410               add esp, 0x10
// 0052e01f  5e                   pop esi
// 0052e020  5f                   pop edi
// 0052e021  5d                   pop ebp
// 0052e022  5b                   pop ebx
// 0052e023  83c410               add esp, 0x10
// 0052e026  c3                   ret 
// 0052e027  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052e02b  3d99999919           cmp eax, 0x19999999
// 0052e030  7616                 jbe 0x52e048
// 0052e032  6834c38200           push 0x82c334
// 0052e037  53                   push ebx
// 0052e038  e813baffff           call 0x529a50
// 0052e03d  83c408               add esp, 8
// 0052e040  5e                   pop esi
// 0052e041  5f                   pop edi
// 0052e042  5d                   pop ebp
// 0052e043  5b                   pop ebx
// 0052e044  83c410               add esp, 0x10
// 0052e047  c3                   ret 
// 0052e048  8d1480               lea edx, [eax + eax*4]
// 0052e04b  03d2                 add edx, edx
// 0052e04d  52                   push edx
// 0052e04e  53                   push ebx
// 0052e04f  e8dcc4ffff           call 0x52a530
// 0052e054  83c408               add esp, 8
// 0052e057  89442418             mov dword ptr [esp + 0x18], eax
// 0052e05b  85c0                 test eax, eax
// 0052e05d  7516                 jne 0x52e075
// 0052e05f  6810c38200           push 0x82c310
// 0052e064  53                   push ebx
// 0052e065  e8e6b9ffff           call 0x529a50
// 0052e06a  83c408               add esp, 8
// 0052e06d  5e                   pop esi
// 0052e06e  5f                   pop edi
// 0052e06f  5d                   pop ebp
// 0052e070  5b                   pop ebx
// 0052e071  83c410               add esp, 0x10
// 0052e074  c3                   ret 
// 0052e075  33c9                 xor ecx, ecx
// 0052e077  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 0052e07b  0f8ec3000000         jle 0x52e144
// 0052e081  33d2                 xor edx, edx
// 0052e083  eb04                 jmp 0x52e089
// 0052e085  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052e089  0fb63e               movzx edi, byte ptr [esi]
// 0052e08c  03c2                 add eax, edx
// 0052e08e  807c241408           cmp byte ptr [esp + 0x14], 8
// 0052e093  751a                 jne 0x52e0af
// 0052e095  46                   inc esi
// 0052e096  668938               mov word ptr [eax], di
// 0052e099  0fb63e               movzx edi, byte ptr [esi]
// 0052e09c  46                   inc esi
// 0052e09d  66897802             mov word ptr [eax + 2], di
// 0052e0a1  0fb63e               movzx edi, byte ptr [esi]
// 0052e0a4  46                   inc esi
// 0052e0a5  66897804             mov word ptr [eax + 4], di
// 0052e0a9  0fb63e               movzx edi, byte ptr [esi]
// 0052e0ac  46                   inc esi
// 0052e0ad  eb63                 jmp 0x52e112
// 0052e0af  bb00010000           mov ebx, 0x100
// 0052e0b4  660faffb             imul di, bx
// 0052e0b8  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0052e0bc  6603fb               add di, bx
// 0052e0bf  668938               mov word ptr [eax], di
// 0052e0c2  0fb67e02             movzx edi, byte ptr [esi + 2]
// 0052e0c6  83c602               add esi, 2
// 0052e0c9  bb00010000           mov ebx, 0x100
// 0052e0ce  660faffb             imul di, bx
// 0052e0d2  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0052e0d6  6603fb               add di, bx
// 0052e0d9  66897802             mov word ptr [eax + 2], di
// 0052e0dd  0fb67e02             movzx edi, byte ptr [esi + 2]
// 0052e0e1  83c602               add esi, 2
// 0052e0e4  bb00010000           mov ebx, 0x100
// 0052e0e9  660faffb             imul di, bx
// 0052e0ed  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0052e0f1  6603fb               add di, bx
// 0052e0f4  66897804             mov word ptr [eax + 4], di
// 0052e0f8  0fb67e02             movzx edi, byte ptr [esi + 2]
// 0052e0fc  83c602               add esi, 2
// 0052e0ff  bb00010000           mov ebx, 0x100
// 0052e104  660faffb             imul di, bx
// 0052e108  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0052e10c  6603fb               add di, bx
// 0052e10f  83c602               add esi, 2
// 0052e112  66897806             mov word ptr [eax + 6], di
// 0052e116  660fb63e             movzx di, byte ptr [esi]
// 0052e11a  bb00010000           mov ebx, 0x100
// 0052e11f  660faffb             imul di, bx
// 0052e123  660fb65e01           movzx bx, byte ptr [esi + 1]
// 0052e128  6603fb               add di, bx
// 0052e12b  41                   inc ecx
// 0052e12c  66897808             mov word ptr [eax + 8], di
// 0052e130  83c602               add esi, 2
// 0052e133  83c20a               add edx, 0xa
// 0052e136  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 0052e13a  0f8c45ffffff         jl 0x52e085
// 0052e140  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052e144  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052e148  6a01                 push 1
// 0052e14a  8d442414             lea eax, [esp + 0x14]
// 0052e14e  50                   push eax
// 0052e14f  51                   push ecx
// 0052e150  53                   push ebx
// 0052e151  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052e155  e8e6f6feff           call 0x51d840
// 0052e15a  55                   push ebp
// 0052e15b  53                   push ebx
// 0052e15c  e89fc3ffff           call 0x52a500
// 0052e161  8b542430             mov edx, dword ptr [esp + 0x30]
// 0052e165  52                   push edx
// 0052e166  53                   push ebx
// 0052e167  e894c3ffff           call 0x52a500
// 0052e16c  83c420               add esp, 0x20
// 0052e16f  5e                   pop esi
// 0052e170  5f                   pop edi
// 0052e171  5d                   pop ebp
// 0052e172  5b                   pop ebx
// 0052e173  83c410               add esp, 0x10
// 0052e176  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_sPLT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c

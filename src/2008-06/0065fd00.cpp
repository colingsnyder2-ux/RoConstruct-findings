// roc 2008-06 0065fd00  unit: seg_00650000  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065fd00
//
// 0065fd00  53                   push ebx
// 0065fd01  55                   push ebp
// 0065fd02  56                   push esi
// 0065fd03  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065fd07  57                   push edi
// 0065fd08  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0065fd0c  8b4720               mov eax, dword ptr [edi + 0x20]
// 0065fd0f  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0065fd13  7406                 je 0x65fd1b
// 0065fd15  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0065fd19  7402                 je 0x65fd1d
// 0065fd1b  33c0                 xor eax, eax
// 0065fd1d  e8cefcffff           call 0x65f9f0
// 0065fd22  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fd26  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0065fd29  89442414             mov dword ptr [esp + 0x14], eax
// 0065fd2d  7519                 jne 0x65fd48
// 0065fd2f  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fd32  8b06                 mov eax, dword ptr [esi]
// 0065fd34  51                   push ecx
// 0065fd35  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fd38  6a04                 push 4
// 0065fd3a  8d54241c             lea edx, [esp + 0x1c]
// 0065fd3e  52                   push edx
// 0065fd3f  50                   push eax
// 0065fd40  ffd1                 call ecx
// 0065fd42  83c410               add esp, 0x10
// 0065fd45  894610               mov dword ptr [esi + 0x10], eax
// 0065fd48  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fd4c  8b5740               mov edx, dword ptr [edi + 0x40]
// 0065fd4f  89542414             mov dword ptr [esp + 0x14], edx
// 0065fd53  7519                 jne 0x65fd6e
// 0065fd55  8b4608               mov eax, dword ptr [esi + 8]
// 0065fd58  8b16                 mov edx, dword ptr [esi]
// 0065fd5a  50                   push eax
// 0065fd5b  8b4604               mov eax, dword ptr [esi + 4]
// 0065fd5e  6a04                 push 4
// 0065fd60  8d4c241c             lea ecx, [esp + 0x1c]
// 0065fd64  51                   push ecx
// 0065fd65  52                   push edx
// 0065fd66  ffd0                 call eax
// 0065fd68  83c410               add esp, 0x10
// 0065fd6b  894610               mov dword ptr [esi + 0x10], eax
// 0065fd6e  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fd72  8a4f48               mov cl, byte ptr [edi + 0x48]
// 0065fd75  884c2414             mov byte ptr [esp + 0x14], cl
// 0065fd79  7519                 jne 0x65fd94
// 0065fd7b  8b5608               mov edx, dword ptr [esi + 8]
// 0065fd7e  8b0e                 mov ecx, dword ptr [esi]
// 0065fd80  52                   push edx
// 0065fd81  8b5604               mov edx, dword ptr [esi + 4]
// 0065fd84  6a01                 push 1
// 0065fd86  8d44241c             lea eax, [esp + 0x1c]
// 0065fd8a  50                   push eax
// 0065fd8b  51                   push ecx
// 0065fd8c  ffd2                 call edx
// 0065fd8e  83c410               add esp, 0x10
// 0065fd91  894610               mov dword ptr [esi + 0x10], eax
// 0065fd94  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fd98  8a4749               mov al, byte ptr [edi + 0x49]
// 0065fd9b  88442414             mov byte ptr [esp + 0x14], al
// 0065fd9f  7519                 jne 0x65fdba
// 0065fda1  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fda4  8b06                 mov eax, dword ptr [esi]
// 0065fda6  51                   push ecx
// 0065fda7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fdaa  6a01                 push 1
// 0065fdac  8d54241c             lea edx, [esp + 0x1c]
// 0065fdb0  52                   push edx
// 0065fdb1  50                   push eax
// 0065fdb2  ffd1                 call ecx
// 0065fdb4  83c410               add esp, 0x10
// 0065fdb7  894610               mov dword ptr [esi + 0x10], eax
// 0065fdba  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fdbe  8a574a               mov dl, byte ptr [edi + 0x4a]
// 0065fdc1  88542414             mov byte ptr [esp + 0x14], dl
// 0065fdc5  7519                 jne 0x65fde0
// 0065fdc7  8b4608               mov eax, dword ptr [esi + 8]
// 0065fdca  8b16                 mov edx, dword ptr [esi]
// 0065fdcc  50                   push eax
// 0065fdcd  8b4604               mov eax, dword ptr [esi + 4]
// 0065fdd0  6a01                 push 1
// 0065fdd2  8d4c241c             lea ecx, [esp + 0x1c]
// 0065fdd6  51                   push ecx
// 0065fdd7  52                   push edx
// 0065fdd8  ffd0                 call eax
// 0065fdda  83c410               add esp, 0x10
// 0065fddd  894610               mov dword ptr [esi + 0x10], eax
// 0065fde0  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fde4  8a4f4b               mov cl, byte ptr [edi + 0x4b]
// 0065fde7  884c2414             mov byte ptr [esp + 0x14], cl
// 0065fdeb  7519                 jne 0x65fe06
// 0065fded  8b5608               mov edx, dword ptr [esi + 8]
// 0065fdf0  8b0e                 mov ecx, dword ptr [esi]
// 0065fdf2  52                   push edx
// 0065fdf3  8b5604               mov edx, dword ptr [esi + 4]
// 0065fdf6  6a01                 push 1
// 0065fdf8  8d44241c             lea eax, [esp + 0x1c]
// 0065fdfc  50                   push eax
// 0065fdfd  51                   push ecx
// 0065fdfe  ffd2                 call edx
// 0065fe00  83c410               add esp, 0x10
// 0065fe03  894610               mov dword ptr [esi + 0x10], eax
// 0065fe06  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fe0a  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 0065fe0d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0065fe10  895c2414             mov dword ptr [esp + 0x14], ebx
// 0065fe14  7538                 jne 0x65fe4e
// 0065fe16  8b4608               mov eax, dword ptr [esi + 8]
// 0065fe19  8b16                 mov edx, dword ptr [esi]
// 0065fe1b  50                   push eax
// 0065fe1c  8b4604               mov eax, dword ptr [esi + 4]
// 0065fe1f  6a04                 push 4
// 0065fe21  8d4c241c             lea ecx, [esp + 0x1c]
// 0065fe25  51                   push ecx
// 0065fe26  52                   push edx
// 0065fe27  ffd0                 call eax
// 0065fe29  83c410               add esp, 0x10
// 0065fe2c  894610               mov dword ptr [esi + 0x10], eax
// 0065fe2f  85c0                 test eax, eax
// 0065fe31  751b                 jne 0x65fe4e
// 0065fe33  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fe36  8b06                 mov eax, dword ptr [esi]
// 0065fe38  51                   push ecx
// 0065fe39  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fe3c  8d149d00000000       lea edx, [ebx*4]
// 0065fe43  52                   push edx
// 0065fe44  55                   push ebp
// 0065fe45  50                   push eax
// 0065fe46  ffd1                 call ecx
// 0065fe48  83c410               add esp, 0x10
// 0065fe4b  894610               mov dword ptr [esi + 0x10], eax
// 0065fe4e  57                   push edi
// 0065fe4f  8bc6                 mov eax, esi
// 0065fe51  e81afcffff           call 0x65fa70
// 0065fe56  57                   push edi
// 0065fe57  8bc6                 mov eax, esi
// 0065fe59  e852fdffff           call 0x65fbb0
// 0065fe5e  83c408               add esp, 8
// 0065fe61  5f                   pop edi
// 0065fe62  5e                   pop esi
// 0065fe63  5d                   pop ebp
// 0065fe64  5b                   pop ebx
// 0065fe65  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c

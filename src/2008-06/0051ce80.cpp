// roc 2008-06 0051ce80  unit: G3D::_internal::DialogTemplate  size: 549 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051ce80
//
// 0051ce80  57                   push edi
// 0051ce81  8b7c2408             mov edi, dword ptr [esp + 8]
// 0051ce85  85ff                 test edi, edi
// 0051ce87  0f8416020000         je 0x51d0a3
// 0051ce8d  56                   push esi
// 0051ce8e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051ce92  85f6                 test esi, esi
// 0051ce94  0f8408020000         je 0x51d0a2
// 0051ce9a  53                   push ebx
// 0051ce9b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0051ce9f  55                   push ebp
// 0051cea0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0051cea4  85ed                 test ebp, ebp
// 0051cea6  7404                 je 0x51ceac
// 0051cea8  85db                 test ebx, ebx
// 0051ceaa  750e                 jne 0x51ceba
// 0051ceac  689c918200           push 0x82919c
// 0051ceb1  57                   push edi
// 0051ceb2  e8f9ca0000           call 0x5299b0
// 0051ceb7  83c408               add esp, 8
// 0051ceba  3baf64020000         cmp ebp, dword ptr [edi + 0x264]
// 0051cec0  7708                 ja 0x51ceca
// 0051cec2  3b9f68020000         cmp ebx, dword ptr [edi + 0x268]
// 0051cec8  760e                 jbe 0x51ced8
// 0051ceca  6874918200           push 0x829174
// 0051cecf  57                   push edi
// 0051ced0  e8dbca0000           call 0x5299b0
// 0051ced5  83c408               add esp, 8
// 0051ced8  81fdffffff7f         cmp ebp, 0x7fffffff
// 0051cede  7708                 ja 0x51cee8
// 0051cee0  81fbffffff7f         cmp ebx, 0x7fffffff
// 0051cee6  760e                 jbe 0x51cef6
// 0051cee8  6858918200           push 0x829158
// 0051ceed  57                   push edi
// 0051ceee  e8bdca0000           call 0x5299b0
// 0051cef3  83c408               add esp, 8
// 0051cef6  81fd7effff1f         cmp ebp, 0x1fffff7e
// 0051cefc  760e                 jbe 0x51cf0c
// 0051cefe  6828918200           push 0x829128
// 0051cf03  57                   push edi
// 0051cf04  e847cb0000           call 0x529a50
// 0051cf09  83c408               add esp, 8
// 0051cf0c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051cf10  83f801               cmp eax, 1
// 0051cf13  7422                 je 0x51cf37
// 0051cf15  83f802               cmp eax, 2
// 0051cf18  741d                 je 0x51cf37
// 0051cf1a  83f804               cmp eax, 4
// 0051cf1d  7418                 je 0x51cf37
// 0051cf1f  83f808               cmp eax, 8
// 0051cf22  7413                 je 0x51cf37
// 0051cf24  83f810               cmp eax, 0x10
// 0051cf27  740e                 je 0x51cf37
// 0051cf29  680c918200           push 0x82910c
// 0051cf2e  57                   push edi
// 0051cf2f  e87cca0000           call 0x5299b0
// 0051cf34  83c408               add esp, 8
// 0051cf37  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0051cf3b  85db                 test ebx, ebx
// 0051cf3d  7c0f                 jl 0x51cf4e
// 0051cf3f  83fb01               cmp ebx, 1
// 0051cf42  740a                 je 0x51cf4e
// 0051cf44  83fb05               cmp ebx, 5
// 0051cf47  7405                 je 0x51cf4e
// 0051cf49  83fb06               cmp ebx, 6
// 0051cf4c  7e0e                 jle 0x51cf5c
// 0051cf4e  68f0908200           push 0x8290f0
// 0051cf53  57                   push edi
// 0051cf54  e857ca0000           call 0x5299b0
// 0051cf59  83c408               add esp, 8
// 0051cf5c  83fb03               cmp ebx, 3
// 0051cf5f  7509                 jne 0x51cf6a
// 0051cf61  837c242408           cmp dword ptr [esp + 0x24], 8
// 0051cf66  7f18                 jg 0x51cf80
// 0051cf68  eb24                 jmp 0x51cf8e
// 0051cf6a  83fb02               cmp ebx, 2
// 0051cf6d  740a                 je 0x51cf79
// 0051cf6f  83fb04               cmp ebx, 4
// 0051cf72  7405                 je 0x51cf79
// 0051cf74  83fb06               cmp ebx, 6
// 0051cf77  7515                 jne 0x51cf8e
// 0051cf79  837c242408           cmp dword ptr [esp + 0x24], 8
// 0051cf7e  7d0e                 jge 0x51cf8e
// 0051cf80  68bc908200           push 0x8290bc
// 0051cf85  57                   push edi
// 0051cf86  e825ca0000           call 0x5299b0
// 0051cf8b  83c408               add esp, 8
// 0051cf8e  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 0051cf93  7c0e                 jl 0x51cfa3
// 0051cf95  6898908200           push 0x829098
// 0051cf9a  57                   push edi
// 0051cf9b  e810ca0000           call 0x5299b0
// 0051cfa0  83c408               add esp, 8
// 0051cfa3  837c243000           cmp dword ptr [esp + 0x30], 0
// 0051cfa8  740e                 je 0x51cfb8
// 0051cfaa  6874908200           push 0x829074
// 0051cfaf  57                   push edi
// 0051cfb0  e8fbc90000           call 0x5299b0
// 0051cfb5  83c408               add esp, 8
// 0051cfb8  bd00100000           mov ebp, 0x1000
// 0051cfbd  856f68               test dword ptr [edi + 0x68], ebp
// 0051cfc0  7417                 je 0x51cfd9
// 0051cfc2  83bf3002000000       cmp dword ptr [edi + 0x230], 0
// 0051cfc9  740e                 je 0x51cfd9
// 0051cfcb  68388d8200           push 0x828d38
// 0051cfd0  57                   push edi
// 0051cfd1  e87aca0000           call 0x529a50
// 0051cfd6  83c408               add esp, 8
// 0051cfd9  8b442434             mov eax, dword ptr [esp + 0x34]
// 0051cfdd  85c0                 test eax, eax
// 0051cfdf  743e                 je 0x51d01f
// 0051cfe1  f6873002000004       test byte ptr [edi + 0x230], 4
// 0051cfe8  7414                 je 0x51cffe
// 0051cfea  83f840               cmp eax, 0x40
// 0051cfed  750f                 jne 0x51cffe
// 0051cfef  856f68               test dword ptr [edi + 0x68], ebp
// 0051cff2  750a                 jne 0x51cffe
// 0051cff4  83fb02               cmp ebx, 2
// 0051cff7  7413                 je 0x51d00c
// 0051cff9  83fb06               cmp ebx, 6
// 0051cffc  740e                 je 0x51d00c
// 0051cffe  6854908200           push 0x829054
// 0051d003  57                   push edi
// 0051d004  e8a7c90000           call 0x5299b0
// 0051d009  83c408               add esp, 8
// 0051d00c  856f68               test dword ptr [edi + 0x68], ebp
// 0051d00f  740e                 je 0x51d01f
// 0051d011  6834908200           push 0x829034
// 0051d016  57                   push edi
// 0051d017  e834ca0000           call 0x529a50
// 0051d01c  83c408               add esp, 8
// 0051d01f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051d023  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051d027  8a542424             mov dl, byte ptr [esp + 0x24]
// 0051d02b  894604               mov dword ptr [esi + 4], eax
// 0051d02e  8a442430             mov al, byte ptr [esp + 0x30]
// 0051d032  88461a               mov byte ptr [esi + 0x1a], al
// 0051d035  8a442434             mov al, byte ptr [esp + 0x34]
// 0051d039  88461b               mov byte ptr [esi + 0x1b], al
// 0051d03c  8a44242c             mov al, byte ptr [esp + 0x2c]
// 0051d040  890e                 mov dword ptr [esi], ecx
// 0051d042  885618               mov byte ptr [esi + 0x18], dl
// 0051d045  885e19               mov byte ptr [esi + 0x19], bl
// 0051d048  88461c               mov byte ptr [esi + 0x1c], al
// 0051d04b  80fb03               cmp bl, 3
// 0051d04e  740b                 je 0x51d05b
// 0051d050  f6c302               test bl, 2
// 0051d053  7406                 je 0x51d05b
// 0051d055  c6461d03             mov byte ptr [esi + 0x1d], 3
// 0051d059  eb04                 jmp 0x51d05f
// 0051d05b  c6461d01             mov byte ptr [esi + 0x1d], 1
// 0051d05f  5d                   pop ebp
// 0051d060  f6c304               test bl, 4
// 0051d063  5b                   pop ebx
// 0051d064  7403                 je 0x51d069
// 0051d066  fe461d               inc byte ptr [esi + 0x1d]
// 0051d069  8a461d               mov al, byte ptr [esi + 0x1d]
// 0051d06c  f6ea                 imul dl
// 0051d06e  88461e               mov byte ptr [esi + 0x1e], al
// 0051d071  81f97effff1f         cmp ecx, 0x1fffff7e
// 0051d077  760a                 jbe 0x51d083
// 0051d079  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0051d080  5e                   pop esi
// 0051d081  5f                   pop edi
// 0051d082  c3                   ret 
// 0051d083  3c08                 cmp al, 8
// 0051d085  0fb6c0               movzx eax, al
// 0051d088  720c                 jb 0x51d096
// 0051d08a  c1e803               shr eax, 3
// 0051d08d  0fafc1               imul eax, ecx
// 0051d090  89460c               mov dword ptr [esi + 0xc], eax
// 0051d093  5e                   pop esi
// 0051d094  5f                   pop edi
// 0051d095  c3                   ret 
// 0051d096  0fafc1               imul eax, ecx
// 0051d099  83c007               add eax, 7
// 0051d09c  c1e803               shr eax, 3
// 0051d09f  89460c               mov dword ptr [esi + 0xc], eax
// 0051d0a2  5e                   pop esi
// 0051d0a3  5f                   pop edi
// 0051d0a4  c3                   ret 
// library libpng-1.2.6/pngset.c (function _png_set_IHDR)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngset.c

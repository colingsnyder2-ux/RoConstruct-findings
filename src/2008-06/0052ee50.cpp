// from server: 100% by auto
// roc 2008-06 0052ee50  unit: seg_00520000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ee50
//
// 0052ee50  83ec10               sub esp, 0x10
// 0052ee53  53                   push ebx
// 0052ee54  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052ee58  56                   push esi
// 0052ee59  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0052ee5d  f6466801             test byte ptr [esi + 0x68], 1
// 0052ee61  7541                 jne 0x52eea4
// 0052ee63  6848c88200           push 0x82c848
// 0052ee68  56                   push esi
// 0052ee69  e842abffff           call 0x5299b0
// 0052ee6e  83c408               add esp, 8
// 0052ee71  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052ee74  a804                 test al, 4
// 0052ee76  7406                 je 0x52ee7e
// 0052ee78  83c808               or eax, 8
// 0052ee7b  894668               mov dword ptr [esi + 0x68], eax
// 0052ee7e  57                   push edi
// 0052ee7f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052ee83  83ff07               cmp edi, 7
// 0052ee86  7448                 je 0x52eed0
// 0052ee88  682cc88200           push 0x82c82c
// 0052ee8d  56                   push esi
// 0052ee8e  e8bdabffff           call 0x529a50
// 0052ee93  57                   push edi
// 0052ee94  56                   push esi
// 0052ee95  e846e0ffff           call 0x52cee0
// 0052ee9a  83c410               add esp, 0x10
// 0052ee9d  5f                   pop edi
// 0052ee9e  5e                   pop esi
// 0052ee9f  5b                   pop ebx
// 0052eea0  83c410               add esp, 0x10
// 0052eea3  c3                   ret 
// 0052eea4  85db                 test ebx, ebx
// 0052eea6  74c9                 je 0x52ee71
// 0052eea8  f7430800020000       test dword ptr [ebx + 8], 0x200
// 0052eeaf  74c0                 je 0x52ee71
// 0052eeb1  6814c88200           push 0x82c814
// 0052eeb6  56                   push esi
// 0052eeb7  e894abffff           call 0x529a50
// 0052eebc  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052eec0  50                   push eax
// 0052eec1  56                   push esi
// 0052eec2  e819e0ffff           call 0x52cee0
// 0052eec7  83c410               add esp, 0x10
// 0052eeca  5e                   pop esi
// 0052eecb  5b                   pop ebx
// 0052eecc  83c410               add esp, 0x10
// 0052eecf  c3                   ret 
// 0052eed0  6a07                 push 7
// 0052eed2  8d4c2410             lea ecx, [esp + 0x10]
// 0052eed6  51                   push ecx
// 0052eed7  56                   push esi
// 0052eed8  e8d35bffff           call 0x524ab0
// 0052eedd  6a07                 push 7
// 0052eedf  8d54241c             lea edx, [esp + 0x1c]
// 0052eee3  52                   push edx
// 0052eee4  56                   push esi
// 0052eee5  e896eefeff           call 0x51dd80
// 0052eeea  6a00                 push 0
// 0052eeec  56                   push esi
// 0052eeed  e8eedfffff           call 0x52cee0
// 0052eef2  83c420               add esp, 0x20
// 0052eef5  85c0                 test eax, eax
// 0052eef7  7558                 jne 0x52ef51
// 0052eef9  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 0052eefe  8a542410             mov dl, byte ptr [esp + 0x10]
// 0052ef02  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 0052ef07  8844241a             mov byte ptr [esp + 0x1a], al
// 0052ef0b  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 0052ef10  88542418             mov byte ptr [esp + 0x18], dl
// 0052ef14  660fb654240c         movzx dx, byte ptr [esp + 0xc]
// 0052ef1a  88442417             mov byte ptr [esp + 0x17], al
// 0052ef1e  b800010000           mov eax, 0x100
// 0052ef23  660fafd0             imul dx, ax
// 0052ef27  884c2419             mov byte ptr [esp + 0x19], cl
// 0052ef2b  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 0052ef30  884c2416             mov byte ptr [esp + 0x16], cl
// 0052ef34  660fb64c240d         movzx cx, byte ptr [esp + 0xd]
// 0052ef3a  6603d1               add dx, cx
// 0052ef3d  6689542414           mov word ptr [esp + 0x14], dx
// 0052ef42  8d542414             lea edx, [esp + 0x14]
// 0052ef46  52                   push edx
// 0052ef47  53                   push ebx
// 0052ef48  56                   push esi
// 0052ef49  e832e8feff           call 0x51d780
// 0052ef4e  83c40c               add esp, 0xc
// 0052ef51  5f                   pop edi
// 0052ef52  5e                   pop esi
// 0052ef53  5b                   pop ebx
// 0052ef54  83c410               add esp, 0x10
// 0052ef57  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

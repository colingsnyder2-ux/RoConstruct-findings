// from server: 100% by auto
// roc 2008-06 0052dd80  unit: seg_00520000  size: 424 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052dd80
//
// 0052dd80  57                   push edi
// 0052dd81  8b7c2408             mov edi, dword ptr [esp + 8]
// 0052dd85  8b4768               mov eax, dword ptr [edi + 0x68]
// 0052dd88  a801                 test al, 1
// 0052dd8a  750d                 jne 0x52dd99
// 0052dd8c  68f4c28200           push 0x82c2f4
// 0052dd91  57                   push edi
// 0052dd92  e819bcffff           call 0x5299b0
// 0052dd97  eb2e                 jmp 0x52ddc7
// 0052dd99  a804                 test al, 4
// 0052dd9b  741b                 je 0x52ddb8
// 0052dd9d  68dcc28200           push 0x82c2dc
// 0052dda2  57                   push edi
// 0052dda3  e8a8bcffff           call 0x529a50
// 0052dda8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052ddac  50                   push eax
// 0052ddad  57                   push edi
// 0052ddae  e82df1ffff           call 0x52cee0
// 0052ddb3  83c410               add esp, 0x10
// 0052ddb6  5f                   pop edi
// 0052ddb7  c3                   ret 
// 0052ddb8  a802                 test al, 2
// 0052ddba  740e                 je 0x52ddca
// 0052ddbc  68c4c28200           push 0x82c2c4
// 0052ddc1  57                   push edi
// 0052ddc2  e889bcffff           call 0x529a50
// 0052ddc7  83c408               add esp, 8
// 0052ddca  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052ddce  85c0                 test eax, eax
// 0052ddd0  7424                 je 0x52ddf6
// 0052ddd2  f7400800100000       test dword ptr [eax + 8], 0x1000
// 0052ddd9  741b                 je 0x52ddf6
// 0052dddb  68acc28200           push 0x82c2ac
// 0052dde0  57                   push edi
// 0052dde1  e86abcffff           call 0x529a50
// 0052dde6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052ddea  51                   push ecx
// 0052ddeb  57                   push edi
// 0052ddec  e8eff0ffff           call 0x52cee0
// 0052ddf1  83c410               add esp, 0x10
// 0052ddf4  5f                   pop edi
// 0052ddf5  c3                   ret 
// 0052ddf6  53                   push ebx
// 0052ddf7  56                   push esi
// 0052ddf8  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052ddfc  8d5601               lea edx, [esi + 1]
// 0052ddff  52                   push edx
// 0052de00  57                   push edi
// 0052de01  e89ac6ffff           call 0x52a4a0
// 0052de06  8bd8                 mov ebx, eax
// 0052de08  56                   push esi
// 0052de09  53                   push ebx
// 0052de0a  57                   push edi
// 0052de0b  e8a06cffff           call 0x524ab0
// 0052de10  56                   push esi
// 0052de11  53                   push ebx
// 0052de12  57                   push edi
// 0052de13  e868fffeff           call 0x51dd80
// 0052de18  6a00                 push 0
// 0052de1a  57                   push edi
// 0052de1b  e8c0f0ffff           call 0x52cee0
// 0052de20  83c428               add esp, 0x28
// 0052de23  85c0                 test eax, eax
// 0052de25  740e                 je 0x52de35
// 0052de27  53                   push ebx
// 0052de28  57                   push edi
// 0052de29  e8d2c6ffff           call 0x52a500
// 0052de2e  83c408               add esp, 8
// 0052de31  5e                   pop esi
// 0052de32  5b                   pop ebx
// 0052de33  5f                   pop edi
// 0052de34  c3                   ret 
// 0052de35  8d0433               lea eax, [ebx + esi]
// 0052de38  c60000               mov byte ptr [eax], 0
// 0052de3b  803b00               cmp byte ptr [ebx], 0
// 0052de3e  8bf3                 mov esi, ebx
// 0052de40  7406                 je 0x52de48
// 0052de42  46                   inc esi
// 0052de43  803e00               cmp byte ptr [esi], 0
// 0052de46  75fa                 jne 0x52de42
// 0052de48  46                   inc esi
// 0052de49  3bf0                 cmp esi, eax
// 0052de4b  7219                 jb 0x52de66
// 0052de4d  53                   push ebx
// 0052de4e  57                   push edi
// 0052de4f  e8acc6ffff           call 0x52a500
// 0052de54  6894c28200           push 0x82c294
// 0052de59  57                   push edi
// 0052de5a  e8f1bbffff           call 0x529a50
// 0052de5f  83c410               add esp, 0x10
// 0052de62  5e                   pop esi
// 0052de63  5b                   pop ebx
// 0052de64  5f                   pop edi
// 0052de65  c3                   ret 
// 0052de66  8a06                 mov al, byte ptr [esi]
// 0052de68  46                   inc esi
// 0052de69  84c0                 test al, al
// 0052de6b  7410                 je 0x52de7d
// 0052de6d  6864c28200           push 0x82c264
// 0052de72  57                   push edi
// 0052de73  e8d8bbffff           call 0x529a50
// 0052de78  83c408               add esp, 8
// 0052de7b  32c0                 xor al, al
// 0052de7d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052de81  55                   push ebp
// 0052de82  0fb6e8               movzx ebp, al
// 0052de85  8d442414             lea eax, [esp + 0x14]
// 0052de89  50                   push eax
// 0052de8a  2bf3                 sub esi, ebx
// 0052de8c  56                   push esi
// 0052de8d  51                   push ecx
// 0052de8e  53                   push ebx
// 0052de8f  55                   push ebp
// 0052de90  57                   push edi
// 0052de91  e8bae0ffff           call 0x52bf50
// 0052de96  8bd8                 mov ebx, eax
// 0052de98  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052de9c  8bc8                 mov ecx, eax
// 0052de9e  83c418               add esp, 0x18
// 0052dea1  2bce                 sub ecx, esi
// 0052dea3  3bf0                 cmp esi, eax
// 0052dea5  7767                 ja 0x52df0e
// 0052dea7  83f904               cmp ecx, 4
// 0052deaa  7262                 jb 0x52df0e
// 0052deac  0fb6041e             movzx eax, byte ptr [esi + ebx]
// 0052deb0  8d141e               lea edx, [esi + ebx]
// 0052deb3  0fb67201             movzx esi, byte ptr [edx + 1]
// 0052deb7  c1e008               shl eax, 8
// 0052deba  0bc6                 or eax, esi
// 0052debc  0fb67202             movzx esi, byte ptr [edx + 2]
// 0052dec0  c1e008               shl eax, 8
// 0052dec3  0bc6                 or eax, esi
// 0052dec5  0fb67203             movzx esi, byte ptr [edx + 3]
// 0052dec9  c1e008               shl eax, 8
// 0052decc  0bc6                 or eax, esi
// 0052dece  3bc1                 cmp eax, ecx
// 0052ded0  7320                 jae 0x52def2
// 0052ded2  8bc8                 mov ecx, eax
// 0052ded4  51                   push ecx
// 0052ded5  52                   push edx
// 0052ded6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052deda  55                   push ebp
// 0052dedb  53                   push ebx
// 0052dedc  52                   push edx
// 0052dedd  57                   push edi
// 0052dede  e8adf5feff           call 0x51d490
// 0052dee3  53                   push ebx
// 0052dee4  57                   push edi
// 0052dee5  e816c6ffff           call 0x52a500
// 0052deea  83c420               add esp, 0x20
// 0052deed  5d                   pop ebp
// 0052deee  5e                   pop esi
// 0052deef  5b                   pop ebx
// 0052def0  5f                   pop edi
// 0052def1  c3                   ret 
// 0052def2  76e0                 jbe 0x52ded4
// 0052def4  53                   push ebx
// 0052def5  57                   push edi
// 0052def6  e805c6ffff           call 0x52a500
// 0052defb  6840c28200           push 0x82c240
// 0052df00  57                   push edi
// 0052df01  e84abbffff           call 0x529a50
// 0052df06  83c410               add esp, 0x10
// 0052df09  5d                   pop ebp
// 0052df0a  5e                   pop esi
// 0052df0b  5b                   pop ebx
// 0052df0c  5f                   pop edi
// 0052df0d  c3                   ret 
// 0052df0e  53                   push ebx
// 0052df0f  57                   push edi
// 0052df10  e8ebc5ffff           call 0x52a500
// 0052df15  6814c28200           push 0x82c214
// 0052df1a  57                   push edi
// 0052df1b  e830bbffff           call 0x529a50
// 0052df20  83c410               add esp, 0x10
// 0052df23  5d                   pop ebp
// 0052df24  5e                   pop esi
// 0052df25  5b                   pop ebx
// 0052df26  5f                   pop edi
// 0052df27  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_iCCP)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c

// roc 2010-06 00579ee0  unit: seg_00570000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00579ee0
//
// 00579ee0  83ec0c               sub esp, 0xc
// 00579ee3  53                   push ebx
// 00579ee4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00579ee8  56                   push esi
// 00579ee9  8b742418             mov esi, dword ptr [esp + 0x18]
// 00579eed  8b4668               mov eax, dword ptr [esi + 0x68]
// 00579ef0  a801                 test al, 1
// 00579ef2  7534                 jne 0x579f28
// 00579ef4  683476a200           push 0xa27634
// 00579ef9  56                   push esi
// 00579efa  e8b17bffff           call 0x571ab0
// 00579eff  83c408               add esp, 8
// 00579f02  57                   push edi
// 00579f03  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00579f07  83ff09               cmp edi, 9
// 00579f0a  746b                 je 0x579f77
// 00579f0c  681876a200           push 0xa27618
// 00579f11  56                   push esi
// 00579f12  e8497cffff           call 0x571b60
// 00579f17  57                   push edi
// 00579f18  56                   push esi
// 00579f19  e8f2e5ffff           call 0x578510
// 00579f1e  83c410               add esp, 0x10
// 00579f21  5f                   pop edi
// 00579f22  5e                   pop esi
// 00579f23  5b                   pop ebx
// 00579f24  83c40c               add esp, 0xc
// 00579f27  c3                   ret 
// 00579f28  a804                 test al, 4
// 00579f2a  741f                 je 0x579f4b
// 00579f2c  680076a200           push 0xa27600
// 00579f31  56                   push esi
// 00579f32  e8297cffff           call 0x571b60
// 00579f37  8b442428             mov eax, dword ptr [esp + 0x28]
// 00579f3b  50                   push eax
// 00579f3c  56                   push esi
// 00579f3d  e8cee5ffff           call 0x578510
// 00579f42  83c410               add esp, 0x10
// 00579f45  5e                   pop esi
// 00579f46  5b                   pop ebx
// 00579f47  83c40c               add esp, 0xc
// 00579f4a  c3                   ret 
// 00579f4b  85db                 test ebx, ebx
// 00579f4d  74b3                 je 0x579f02
// 00579f4f  f7430800010000       test dword ptr [ebx + 8], 0x100
// 00579f56  74aa                 je 0x579f02
// 00579f58  68e875a200           push 0xa275e8
// 00579f5d  56                   push esi
// 00579f5e  e8fd7bffff           call 0x571b60
// 00579f63  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00579f67  51                   push ecx
// 00579f68  56                   push esi
// 00579f69  e8a2e5ffff           call 0x578510
// 00579f6e  83c410               add esp, 0x10
// 00579f71  5e                   pop esi
// 00579f72  5b                   pop ebx
// 00579f73  83c40c               add esp, 0xc
// 00579f76  c3                   ret 
// 00579f77  6a09                 push 9
// 00579f79  8d542410             lea edx, [esp + 0x10]
// 00579f7d  52                   push edx
// 00579f7e  56                   push esi
// 00579f7f  e88c24ffff           call 0x56c410
// 00579f84  6a09                 push 9
// 00579f86  8d44241c             lea eax, [esp + 0x1c]
// 00579f8a  50                   push eax
// 00579f8b  56                   push esi
// 00579f8c  e84fb0feff           call 0x564fe0
// 00579f91  6a00                 push 0
// 00579f93  56                   push esi
// 00579f94  e877e5ffff           call 0x578510
// 00579f99  83c420               add esp, 0x20
// 00579f9c  85c0                 test eax, eax
// 00579f9e  7558                 jne 0x579ff8
// 00579fa0  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00579fa5  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 00579faa  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 00579faf  51                   push ecx
// 00579fb0  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00579fb5  c1e208               shl edx, 8
// 00579fb8  03d0                 add edx, eax
// 00579fba  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 00579fbf  c1e208               shl edx, 8
// 00579fc2  03d1                 add edx, ecx
// 00579fc4  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 00579fc9  c1e208               shl edx, 8
// 00579fcc  03d0                 add edx, eax
// 00579fce  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 00579fd3  52                   push edx
// 00579fd4  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 00579fd9  c1e108               shl ecx, 8
// 00579fdc  03ca                 add ecx, edx
// 00579fde  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 00579fe3  c1e108               shl ecx, 8
// 00579fe6  03c8                 add ecx, eax
// 00579fe8  c1e108               shl ecx, 8
// 00579feb  03ca                 add ecx, edx
// 00579fed  51                   push ecx
// 00579fee  53                   push ebx
// 00579fef  56                   push esi
// 00579ff0  e83ba2feff           call 0x564230
// 00579ff5  83c414               add esp, 0x14
// 00579ff8  5f                   pop edi
// 00579ff9  5e                   pop esi
// 00579ffa  5b                   pop ebx
// 00579ffb  83c40c               add esp, 0xc
// 00579ffe  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

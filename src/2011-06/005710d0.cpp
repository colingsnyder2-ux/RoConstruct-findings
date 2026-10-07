// roc 2011-06 005710d0  unit: seg_00570000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005710d0
//
// 005710d0  83ec0c               sub esp, 0xc
// 005710d3  53                   push ebx
// 005710d4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005710d8  56                   push esi
// 005710d9  8b742418             mov esi, dword ptr [esp + 0x18]
// 005710dd  8b4668               mov eax, dword ptr [esi + 0x68]
// 005710e0  a801                 test al, 1
// 005710e2  7534                 jne 0x571118
// 005710e4  684c6ca800           push 0xa86c4c
// 005710e9  56                   push esi
// 005710ea  e84102ffff           call 0x561330
// 005710ef  83c408               add esp, 8
// 005710f2  57                   push edi
// 005710f3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005710f7  83ff09               cmp edi, 9
// 005710fa  7468                 je 0x571164
// 005710fc  68306ca800           push 0xa86c30
// 00571101  56                   push esi
// 00571102  e8d902ffff           call 0x5613e0
// 00571107  57                   push edi
// 00571108  56                   push esi
// 00571109  e832e7ffff           call 0x56f840
// 0057110e  83c410               add esp, 0x10
// 00571111  5f                   pop edi
// 00571112  5e                   pop esi
// 00571113  5b                   pop ebx
// 00571114  83c40c               add esp, 0xc
// 00571117  c3                   ret 
// 00571118  a804                 test al, 4
// 0057111a  741f                 je 0x57113b
// 0057111c  68186ca800           push 0xa86c18
// 00571121  56                   push esi
// 00571122  e8b902ffff           call 0x5613e0
// 00571127  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057112b  50                   push eax
// 0057112c  56                   push esi
// 0057112d  e80ee7ffff           call 0x56f840
// 00571132  83c410               add esp, 0x10
// 00571135  5e                   pop esi
// 00571136  5b                   pop ebx
// 00571137  83c40c               add esp, 0xc
// 0057113a  c3                   ret 
// 0057113b  85db                 test ebx, ebx
// 0057113d  74b3                 je 0x5710f2
// 0057113f  f6430880             test byte ptr [ebx + 8], 0x80
// 00571143  74ad                 je 0x5710f2
// 00571145  68006ca800           push 0xa86c00
// 0057114a  56                   push esi
// 0057114b  e89002ffff           call 0x5613e0
// 00571150  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00571154  51                   push ecx
// 00571155  56                   push esi
// 00571156  e8e5e6ffff           call 0x56f840
// 0057115b  83c410               add esp, 0x10
// 0057115e  5e                   pop esi
// 0057115f  5b                   pop ebx
// 00571160  83c40c               add esp, 0xc
// 00571163  c3                   ret 
// 00571164  6a09                 push 9
// 00571166  8d542410             lea edx, [esp + 0x10]
// 0057116a  52                   push edx
// 0057116b  56                   push esi
// 0057116c  e8fffdfeff           call 0x560f70
// 00571171  6a09                 push 9
// 00571173  8d44241c             lea eax, [esp + 0x1c]
// 00571177  50                   push eax
// 00571178  56                   push esi
// 00571179  e8d2f6fdff           call 0x550850
// 0057117e  6a00                 push 0
// 00571180  56                   push esi
// 00571181  e8bae6ffff           call 0x56f840
// 00571186  83c420               add esp, 0x20
// 00571189  85c0                 test eax, eax
// 0057118b  7558                 jne 0x5711e5
// 0057118d  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00571192  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 00571197  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0057119c  51                   push ecx
// 0057119d  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 005711a2  c1e208               shl edx, 8
// 005711a5  03d0                 add edx, eax
// 005711a7  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 005711ac  c1e208               shl edx, 8
// 005711af  03d1                 add edx, ecx
// 005711b1  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 005711b6  c1e208               shl edx, 8
// 005711b9  03d0                 add edx, eax
// 005711bb  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 005711c0  52                   push edx
// 005711c1  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 005711c6  c1e108               shl ecx, 8
// 005711c9  03ca                 add ecx, edx
// 005711cb  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 005711d0  c1e108               shl ecx, 8
// 005711d3  03c8                 add ecx, eax
// 005711d5  c1e108               shl ecx, 8
// 005711d8  03ca                 add ecx, edx
// 005711da  51                   push ecx
// 005711db  53                   push ebx
// 005711dc  56                   push esi
// 005711dd  e86e8dfeff           call 0x559f50
// 005711e2  83c414               add esp, 0x14
// 005711e5  5f                   pop edi
// 005711e6  5e                   pop esi
// 005711e7  5b                   pop ebx
// 005711e8  83c40c               add esp, 0xc
// 005711eb  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

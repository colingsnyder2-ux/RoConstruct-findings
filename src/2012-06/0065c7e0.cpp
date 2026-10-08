// from server: 100% by auto
// roc 2012-06 0065c7e0  unit: seg_00650000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065c7e0
//
// 0065c7e0  83ec0c               sub esp, 0xc
// 0065c7e3  53                   push ebx
// 0065c7e4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0065c7e8  56                   push esi
// 0065c7e9  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065c7ed  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065c7f0  a801                 test al, 1
// 0065c7f2  7534                 jne 0x65c828
// 0065c7f4  689caab800           push 0xb8aa9c
// 0065c7f9  56                   push esi
// 0065c7fa  e8b119ffff           call 0x64e1b0
// 0065c7ff  83c408               add esp, 8
// 0065c802  57                   push edi
// 0065c803  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0065c807  83ff09               cmp edi, 9
// 0065c80a  7468                 je 0x65c874
// 0065c80c  6880aab800           push 0xb8aa80
// 0065c811  56                   push esi
// 0065c812  e8491affff           call 0x64e260
// 0065c817  57                   push edi
// 0065c818  56                   push esi
// 0065c819  e832e7ffff           call 0x65af50
// 0065c81e  83c410               add esp, 0x10
// 0065c821  5f                   pop edi
// 0065c822  5e                   pop esi
// 0065c823  5b                   pop ebx
// 0065c824  83c40c               add esp, 0xc
// 0065c827  c3                   ret 
// 0065c828  a804                 test al, 4
// 0065c82a  741f                 je 0x65c84b
// 0065c82c  6868aab800           push 0xb8aa68
// 0065c831  56                   push esi
// 0065c832  e8291affff           call 0x64e260
// 0065c837  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065c83b  50                   push eax
// 0065c83c  56                   push esi
// 0065c83d  e80ee7ffff           call 0x65af50
// 0065c842  83c410               add esp, 0x10
// 0065c845  5e                   pop esi
// 0065c846  5b                   pop ebx
// 0065c847  83c40c               add esp, 0xc
// 0065c84a  c3                   ret 
// 0065c84b  85db                 test ebx, ebx
// 0065c84d  74b3                 je 0x65c802
// 0065c84f  f6430880             test byte ptr [ebx + 8], 0x80
// 0065c853  74ad                 je 0x65c802
// 0065c855  6850aab800           push 0xb8aa50
// 0065c85a  56                   push esi
// 0065c85b  e8001affff           call 0x64e260
// 0065c860  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065c864  51                   push ecx
// 0065c865  56                   push esi
// 0065c866  e8e5e6ffff           call 0x65af50
// 0065c86b  83c410               add esp, 0x10
// 0065c86e  5e                   pop esi
// 0065c86f  5b                   pop ebx
// 0065c870  83c40c               add esp, 0xc
// 0065c873  c3                   ret 
// 0065c874  6a09                 push 9
// 0065c876  8d542410             lea edx, [esp + 0x10]
// 0065c87a  52                   push edx
// 0065c87b  56                   push esi
// 0065c87c  e86f15ffff           call 0x64ddf0
// 0065c881  6a09                 push 9
// 0065c883  8d44241c             lea eax, [esp + 0x1c]
// 0065c887  50                   push eax
// 0065c888  56                   push esi
// 0065c889  e80216feff           call 0x63de90
// 0065c88e  6a00                 push 0
// 0065c890  56                   push esi
// 0065c891  e8bae6ffff           call 0x65af50
// 0065c896  83c420               add esp, 0x20
// 0065c899  85c0                 test eax, eax
// 0065c89b  7558                 jne 0x65c8f5
// 0065c89d  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0065c8a2  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 0065c8a7  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0065c8ac  51                   push ecx
// 0065c8ad  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 0065c8b2  c1e208               shl edx, 8
// 0065c8b5  03d0                 add edx, eax
// 0065c8b7  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0065c8bc  c1e208               shl edx, 8
// 0065c8bf  03d1                 add edx, ecx
// 0065c8c1  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 0065c8c6  c1e208               shl edx, 8
// 0065c8c9  03d0                 add edx, eax
// 0065c8cb  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 0065c8d0  52                   push edx
// 0065c8d1  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 0065c8d6  c1e108               shl ecx, 8
// 0065c8d9  03ca                 add ecx, edx
// 0065c8db  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 0065c8e0  c1e108               shl ecx, 8
// 0065c8e3  03c8                 add ecx, eax
// 0065c8e5  c1e108               shl ecx, 8
// 0065c8e8  03ca                 add ecx, edx
// 0065c8ea  51                   push ecx
// 0065c8eb  53                   push ebx
// 0065c8ec  56                   push esi
// 0065c8ed  e8dea4feff           call 0x646dd0
// 0065c8f2  83c414               add esp, 0x14
// 0065c8f5  5f                   pop edi
// 0065c8f6  5e                   pop esi
// 0065c8f7  5b                   pop ebx
// 0065c8f8  83c40c               add esp, 0xc
// 0065c8fb  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

// roc 2008-06 0052e790  unit: seg_00520000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052e790
//
// 0052e790  83ec0c               sub esp, 0xc
// 0052e793  53                   push ebx
// 0052e794  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0052e798  56                   push esi
// 0052e799  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052e79d  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052e7a0  a801                 test al, 1
// 0052e7a2  7534                 jne 0x52e7d8
// 0052e7a4  68f0c58200           push 0x82c5f0
// 0052e7a9  56                   push esi
// 0052e7aa  e801b2ffff           call 0x5299b0
// 0052e7af  83c408               add esp, 8
// 0052e7b2  57                   push edi
// 0052e7b3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0052e7b7  83ff09               cmp edi, 9
// 0052e7ba  7468                 je 0x52e824
// 0052e7bc  68d4c58200           push 0x82c5d4
// 0052e7c1  56                   push esi
// 0052e7c2  e889b2ffff           call 0x529a50
// 0052e7c7  57                   push edi
// 0052e7c8  56                   push esi
// 0052e7c9  e812e7ffff           call 0x52cee0
// 0052e7ce  83c410               add esp, 0x10
// 0052e7d1  5f                   pop edi
// 0052e7d2  5e                   pop esi
// 0052e7d3  5b                   pop ebx
// 0052e7d4  83c40c               add esp, 0xc
// 0052e7d7  c3                   ret 
// 0052e7d8  a804                 test al, 4
// 0052e7da  741f                 je 0x52e7fb
// 0052e7dc  68bcc58200           push 0x82c5bc
// 0052e7e1  56                   push esi
// 0052e7e2  e869b2ffff           call 0x529a50
// 0052e7e7  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052e7eb  50                   push eax
// 0052e7ec  56                   push esi
// 0052e7ed  e8eee6ffff           call 0x52cee0
// 0052e7f2  83c410               add esp, 0x10
// 0052e7f5  5e                   pop esi
// 0052e7f6  5b                   pop ebx
// 0052e7f7  83c40c               add esp, 0xc
// 0052e7fa  c3                   ret 
// 0052e7fb  85db                 test ebx, ebx
// 0052e7fd  74b3                 je 0x52e7b2
// 0052e7ff  f6430880             test byte ptr [ebx + 8], 0x80
// 0052e803  74ad                 je 0x52e7b2
// 0052e805  68a4c58200           push 0x82c5a4
// 0052e80a  56                   push esi
// 0052e80b  e840b2ffff           call 0x529a50
// 0052e810  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052e814  51                   push ecx
// 0052e815  56                   push esi
// 0052e816  e8c5e6ffff           call 0x52cee0
// 0052e81b  83c410               add esp, 0x10
// 0052e81e  5e                   pop esi
// 0052e81f  5b                   pop ebx
// 0052e820  83c40c               add esp, 0xc
// 0052e823  c3                   ret 
// 0052e824  6a09                 push 9
// 0052e826  8d542410             lea edx, [esp + 0x10]
// 0052e82a  52                   push edx
// 0052e82b  56                   push esi
// 0052e82c  e87f62ffff           call 0x524ab0
// 0052e831  6a09                 push 9
// 0052e833  8d44241c             lea eax, [esp + 0x1c]
// 0052e837  50                   push eax
// 0052e838  56                   push esi
// 0052e839  e842f5feff           call 0x51dd80
// 0052e83e  6a00                 push 0
// 0052e840  56                   push esi
// 0052e841  e89ae6ffff           call 0x52cee0
// 0052e846  83c420               add esp, 0x20
// 0052e849  85c0                 test eax, eax
// 0052e84b  7558                 jne 0x52e8a5
// 0052e84d  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0052e852  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 0052e857  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0052e85c  51                   push ecx
// 0052e85d  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 0052e862  c1e208               shl edx, 8
// 0052e865  03d0                 add edx, eax
// 0052e867  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0052e86c  c1e208               shl edx, 8
// 0052e86f  03d1                 add edx, ecx
// 0052e871  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 0052e876  c1e208               shl edx, 8
// 0052e879  03d0                 add edx, eax
// 0052e87b  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 0052e880  52                   push edx
// 0052e881  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 0052e886  c1e108               shl ecx, 8
// 0052e889  03ca                 add ecx, edx
// 0052e88b  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 0052e890  c1e108               shl ecx, 8
// 0052e893  03c8                 add ecx, eax
// 0052e895  c1e108               shl ecx, 8
// 0052e898  03ca                 add ecx, edx
// 0052e89a  51                   push ecx
// 0052e89b  53                   push ebx
// 0052e89c  56                   push esi
// 0052e89d  e81eeafeff           call 0x51d2c0
// 0052e8a2  83c414               add esp, 0x14
// 0052e8a5  5f                   pop edi
// 0052e8a6  5e                   pop esi
// 0052e8a7  5b                   pop ebx
// 0052e8a8  83c40c               add esp, 0xc
// 0052e8ab  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

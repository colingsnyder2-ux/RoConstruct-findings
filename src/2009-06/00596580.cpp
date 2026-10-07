// roc 2009-06 00596580  unit: seg_00590000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00596580
//
// 00596580  83ec0c               sub esp, 0xc
// 00596583  53                   push ebx
// 00596584  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00596588  56                   push esi
// 00596589  8b742418             mov esi, dword ptr [esp + 0x18]
// 0059658d  8b4668               mov eax, dword ptr [esi + 0x68]
// 00596590  a801                 test al, 1
// 00596592  7534                 jne 0x5965c8
// 00596594  682c2a8d00           push 0x8d2a2c
// 00596599  56                   push esi
// 0059659a  e8c17bffff           call 0x58e160
// 0059659f  83c408               add esp, 8
// 005965a2  57                   push edi
// 005965a3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005965a7  83ff09               cmp edi, 9
// 005965aa  746b                 je 0x596617
// 005965ac  68102a8d00           push 0x8d2a10
// 005965b1  56                   push esi
// 005965b2  e8597cffff           call 0x58e210
// 005965b7  57                   push edi
// 005965b8  56                   push esi
// 005965b9  e822e6ffff           call 0x594be0
// 005965be  83c410               add esp, 0x10
// 005965c1  5f                   pop edi
// 005965c2  5e                   pop esi
// 005965c3  5b                   pop ebx
// 005965c4  83c40c               add esp, 0xc
// 005965c7  c3                   ret 
// 005965c8  a804                 test al, 4
// 005965ca  741f                 je 0x5965eb
// 005965cc  68f8298d00           push 0x8d29f8
// 005965d1  56                   push esi
// 005965d2  e8397cffff           call 0x58e210
// 005965d7  8b442428             mov eax, dword ptr [esp + 0x28]
// 005965db  50                   push eax
// 005965dc  56                   push esi
// 005965dd  e8fee5ffff           call 0x594be0
// 005965e2  83c410               add esp, 0x10
// 005965e5  5e                   pop esi
// 005965e6  5b                   pop ebx
// 005965e7  83c40c               add esp, 0xc
// 005965ea  c3                   ret 
// 005965eb  85db                 test ebx, ebx
// 005965ed  74b3                 je 0x5965a2
// 005965ef  f7430800010000       test dword ptr [ebx + 8], 0x100
// 005965f6  74aa                 je 0x5965a2
// 005965f8  68e0298d00           push 0x8d29e0
// 005965fd  56                   push esi
// 005965fe  e80d7cffff           call 0x58e210
// 00596603  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00596607  51                   push ecx
// 00596608  56                   push esi
// 00596609  e8d2e5ffff           call 0x594be0
// 0059660e  83c410               add esp, 0x10
// 00596611  5e                   pop esi
// 00596612  5b                   pop ebx
// 00596613  83c40c               add esp, 0xc
// 00596616  c3                   ret 
// 00596617  6a09                 push 9
// 00596619  8d542410             lea edx, [esp + 0x10]
// 0059661d  52                   push edx
// 0059661e  56                   push esi
// 0059661f  e8dc26ffff           call 0x588d00
// 00596624  6a09                 push 9
// 00596626  8d44241c             lea eax, [esp + 0x1c]
// 0059662a  50                   push eax
// 0059662b  56                   push esi
// 0059662c  e88fb2feff           call 0x5818c0
// 00596631  6a00                 push 0
// 00596633  56                   push esi
// 00596634  e8a7e5ffff           call 0x594be0
// 00596639  83c420               add esp, 0x20
// 0059663c  85c0                 test eax, eax
// 0059663e  7558                 jne 0x596698
// 00596640  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00596645  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 0059664a  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0059664f  51                   push ecx
// 00596650  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00596655  c1e208               shl edx, 8
// 00596658  03d0                 add edx, eax
// 0059665a  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0059665f  c1e208               shl edx, 8
// 00596662  03d1                 add edx, ecx
// 00596664  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 00596669  c1e208               shl edx, 8
// 0059666c  03d0                 add edx, eax
// 0059666e  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 00596673  52                   push edx
// 00596674  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 00596679  c1e108               shl ecx, 8
// 0059667c  03ca                 add ecx, edx
// 0059667e  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 00596683  c1e108               shl ecx, 8
// 00596686  03c8                 add ecx, eax
// 00596688  c1e108               shl ecx, 8
// 0059668b  03ca                 add ecx, edx
// 0059668d  51                   push ecx
// 0059668e  53                   push ebx
// 0059668f  56                   push esi
// 00596690  e87ba4feff           call 0x580b10
// 00596695  83c414               add esp, 0x14
// 00596698  5f                   pop edi
// 00596699  5e                   pop esi
// 0059669a  5b                   pop ebx
// 0059669b  83c40c               add esp, 0xc
// 0059669e  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

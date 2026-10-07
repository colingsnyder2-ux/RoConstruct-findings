// roc 2012-06 0065c900  unit: seg_00650000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065c900
//
// 0065c900  83ec0c               sub esp, 0xc
// 0065c903  53                   push ebx
// 0065c904  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0065c908  56                   push esi
// 0065c909  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065c90d  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065c910  a801                 test al, 1
// 0065c912  7534                 jne 0x65c948
// 0065c914  6804abb800           push 0xb8ab04
// 0065c919  56                   push esi
// 0065c91a  e89118ffff           call 0x64e1b0
// 0065c91f  83c408               add esp, 8
// 0065c922  57                   push edi
// 0065c923  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0065c927  83ff09               cmp edi, 9
// 0065c92a  746b                 je 0x65c997
// 0065c92c  68e8aab800           push 0xb8aae8
// 0065c931  56                   push esi
// 0065c932  e82919ffff           call 0x64e260
// 0065c937  57                   push edi
// 0065c938  56                   push esi
// 0065c939  e812e6ffff           call 0x65af50
// 0065c93e  83c410               add esp, 0x10
// 0065c941  5f                   pop edi
// 0065c942  5e                   pop esi
// 0065c943  5b                   pop ebx
// 0065c944  83c40c               add esp, 0xc
// 0065c947  c3                   ret 
// 0065c948  a804                 test al, 4
// 0065c94a  741f                 je 0x65c96b
// 0065c94c  68d0aab800           push 0xb8aad0
// 0065c951  56                   push esi
// 0065c952  e80919ffff           call 0x64e260
// 0065c957  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065c95b  50                   push eax
// 0065c95c  56                   push esi
// 0065c95d  e8eee5ffff           call 0x65af50
// 0065c962  83c410               add esp, 0x10
// 0065c965  5e                   pop esi
// 0065c966  5b                   pop ebx
// 0065c967  83c40c               add esp, 0xc
// 0065c96a  c3                   ret 
// 0065c96b  85db                 test ebx, ebx
// 0065c96d  74b3                 je 0x65c922
// 0065c96f  f7430800010000       test dword ptr [ebx + 8], 0x100
// 0065c976  74aa                 je 0x65c922
// 0065c978  68b8aab800           push 0xb8aab8
// 0065c97d  56                   push esi
// 0065c97e  e8dd18ffff           call 0x64e260
// 0065c983  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065c987  51                   push ecx
// 0065c988  56                   push esi
// 0065c989  e8c2e5ffff           call 0x65af50
// 0065c98e  83c410               add esp, 0x10
// 0065c991  5e                   pop esi
// 0065c992  5b                   pop ebx
// 0065c993  83c40c               add esp, 0xc
// 0065c996  c3                   ret 
// 0065c997  6a09                 push 9
// 0065c999  8d542410             lea edx, [esp + 0x10]
// 0065c99d  52                   push edx
// 0065c99e  56                   push esi
// 0065c99f  e84c14ffff           call 0x64ddf0
// 0065c9a4  6a09                 push 9
// 0065c9a6  8d44241c             lea eax, [esp + 0x1c]
// 0065c9aa  50                   push eax
// 0065c9ab  56                   push esi
// 0065c9ac  e8df14feff           call 0x63de90
// 0065c9b1  6a00                 push 0
// 0065c9b3  56                   push esi
// 0065c9b4  e897e5ffff           call 0x65af50
// 0065c9b9  83c420               add esp, 0x20
// 0065c9bc  85c0                 test eax, eax
// 0065c9be  7558                 jne 0x65ca18
// 0065c9c0  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0065c9c5  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 0065c9ca  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0065c9cf  51                   push ecx
// 0065c9d0  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 0065c9d5  c1e208               shl edx, 8
// 0065c9d8  03d0                 add edx, eax
// 0065c9da  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0065c9df  c1e208               shl edx, 8
// 0065c9e2  03d1                 add edx, ecx
// 0065c9e4  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 0065c9e9  c1e208               shl edx, 8
// 0065c9ec  03d0                 add edx, eax
// 0065c9ee  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 0065c9f3  52                   push edx
// 0065c9f4  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 0065c9f9  c1e108               shl ecx, 8
// 0065c9fc  03ca                 add ecx, edx
// 0065c9fe  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 0065ca03  c1e108               shl ecx, 8
// 0065ca06  03c8                 add ecx, eax
// 0065ca08  c1e108               shl ecx, 8
// 0065ca0b  03ca                 add ecx, edx
// 0065ca0d  51                   push ecx
// 0065ca0e  53                   push ebx
// 0065ca0f  56                   push esi
// 0065ca10  e8aba1feff           call 0x646bc0
// 0065ca15  83c414               add esp, 0x14
// 0065ca18  5f                   pop edi
// 0065ca19  5e                   pop esi
// 0065ca1a  5b                   pop ebx
// 0065ca1b  83c40c               add esp, 0xc
// 0065ca1e  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

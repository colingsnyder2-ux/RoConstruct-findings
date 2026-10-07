// roc 2008-06 0052e8b0  unit: seg_00520000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052e8b0
//
// 0052e8b0  83ec0c               sub esp, 0xc
// 0052e8b3  53                   push ebx
// 0052e8b4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0052e8b8  56                   push esi
// 0052e8b9  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052e8bd  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052e8c0  a801                 test al, 1
// 0052e8c2  7534                 jne 0x52e8f8
// 0052e8c4  6858c68200           push 0x82c658
// 0052e8c9  56                   push esi
// 0052e8ca  e8e1b0ffff           call 0x5299b0
// 0052e8cf  83c408               add esp, 8
// 0052e8d2  57                   push edi
// 0052e8d3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0052e8d7  83ff09               cmp edi, 9
// 0052e8da  746b                 je 0x52e947
// 0052e8dc  683cc68200           push 0x82c63c
// 0052e8e1  56                   push esi
// 0052e8e2  e869b1ffff           call 0x529a50
// 0052e8e7  57                   push edi
// 0052e8e8  56                   push esi
// 0052e8e9  e8f2e5ffff           call 0x52cee0
// 0052e8ee  83c410               add esp, 0x10
// 0052e8f1  5f                   pop edi
// 0052e8f2  5e                   pop esi
// 0052e8f3  5b                   pop ebx
// 0052e8f4  83c40c               add esp, 0xc
// 0052e8f7  c3                   ret 
// 0052e8f8  a804                 test al, 4
// 0052e8fa  741f                 je 0x52e91b
// 0052e8fc  6824c68200           push 0x82c624
// 0052e901  56                   push esi
// 0052e902  e849b1ffff           call 0x529a50
// 0052e907  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052e90b  50                   push eax
// 0052e90c  56                   push esi
// 0052e90d  e8cee5ffff           call 0x52cee0
// 0052e912  83c410               add esp, 0x10
// 0052e915  5e                   pop esi
// 0052e916  5b                   pop ebx
// 0052e917  83c40c               add esp, 0xc
// 0052e91a  c3                   ret 
// 0052e91b  85db                 test ebx, ebx
// 0052e91d  74b3                 je 0x52e8d2
// 0052e91f  f7430800010000       test dword ptr [ebx + 8], 0x100
// 0052e926  74aa                 je 0x52e8d2
// 0052e928  680cc68200           push 0x82c60c
// 0052e92d  56                   push esi
// 0052e92e  e81db1ffff           call 0x529a50
// 0052e933  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052e937  51                   push ecx
// 0052e938  56                   push esi
// 0052e939  e8a2e5ffff           call 0x52cee0
// 0052e93e  83c410               add esp, 0x10
// 0052e941  5e                   pop esi
// 0052e942  5b                   pop ebx
// 0052e943  83c40c               add esp, 0xc
// 0052e946  c3                   ret 
// 0052e947  6a09                 push 9
// 0052e949  8d542410             lea edx, [esp + 0x10]
// 0052e94d  52                   push edx
// 0052e94e  56                   push esi
// 0052e94f  e85c61ffff           call 0x524ab0
// 0052e954  6a09                 push 9
// 0052e956  8d44241c             lea eax, [esp + 0x1c]
// 0052e95a  50                   push eax
// 0052e95b  56                   push esi
// 0052e95c  e81ff4feff           call 0x51dd80
// 0052e961  6a00                 push 0
// 0052e963  56                   push esi
// 0052e964  e877e5ffff           call 0x52cee0
// 0052e969  83c420               add esp, 0x20
// 0052e96c  85c0                 test eax, eax
// 0052e96e  7558                 jne 0x52e9c8
// 0052e970  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0052e975  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 0052e97a  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0052e97f  51                   push ecx
// 0052e980  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 0052e985  c1e208               shl edx, 8
// 0052e988  03d0                 add edx, eax
// 0052e98a  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0052e98f  c1e208               shl edx, 8
// 0052e992  03d1                 add edx, ecx
// 0052e994  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 0052e999  c1e208               shl edx, 8
// 0052e99c  03d0                 add edx, eax
// 0052e99e  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 0052e9a3  52                   push edx
// 0052e9a4  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 0052e9a9  c1e108               shl ecx, 8
// 0052e9ac  03ca                 add ecx, edx
// 0052e9ae  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 0052e9b3  c1e108               shl ecx, 8
// 0052e9b6  03c8                 add ecx, eax
// 0052e9b8  c1e108               shl ecx, 8
// 0052e9bb  03ca                 add ecx, edx
// 0052e9bd  51                   push ecx
// 0052e9be  53                   push ebx
// 0052e9bf  56                   push esi
// 0052e9c0  e8ebe6feff           call 0x51d0b0
// 0052e9c5  83c414               add esp, 0x14
// 0052e9c8  5f                   pop edi
// 0052e9c9  5e                   pop esi
// 0052e9ca  5b                   pop ebx
// 0052e9cb  83c40c               add esp, 0xc
// 0052e9ce  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

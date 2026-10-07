// roc 2010-06 00578b20  unit: seg_00570000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00578b20
//
// 00578b20  51                   push ecx
// 00578b21  53                   push ebx
// 00578b22  56                   push esi
// 00578b23  8b742410             mov esi, dword ptr [esp + 0x10]
// 00578b27  8b4668               mov eax, dword ptr [esi + 0x68]
// 00578b2a  33db                 xor ebx, ebx
// 00578b2c  885c240b             mov byte ptr [esp + 0xb], bl
// 00578b30  885c240a             mov byte ptr [esp + 0xa], bl
// 00578b34  885c2409             mov byte ptr [esp + 9], bl
// 00578b38  885c2408             mov byte ptr [esp + 8], bl
// 00578b3c  a801                 test al, 1
// 00578b3e  750d                 jne 0x578b4d
// 00578b40  68c46fa200           push 0xa26fc4
// 00578b45  56                   push esi
// 00578b46  e8658fffff           call 0x571ab0
// 00578b4b  eb30                 jmp 0x578b7d
// 00578b4d  a804                 test al, 4
// 00578b4f  741d                 je 0x578b6e
// 00578b51  68ac6fa200           push 0xa26fac
// 00578b56  56                   push esi
// 00578b57  e80490ffff           call 0x571b60
// 00578b5c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00578b60  50                   push eax
// 00578b61  56                   push esi
// 00578b62  e8a9f9ffff           call 0x578510
// 00578b67  83c410               add esp, 0x10
// 00578b6a  5e                   pop esi
// 00578b6b  5b                   pop ebx
// 00578b6c  59                   pop ecx
// 00578b6d  c3                   ret 
// 00578b6e  a802                 test al, 2
// 00578b70  740e                 je 0x578b80
// 00578b72  68946fa200           push 0xa26f94
// 00578b77  56                   push esi
// 00578b78  e8e38fffff           call 0x571b60
// 00578b7d  83c408               add esp, 8
// 00578b80  8b442414             mov eax, dword ptr [esp + 0x14]
// 00578b84  3bc3                 cmp eax, ebx
// 00578b86  7423                 je 0x578bab
// 00578b88  f6400802             test byte ptr [eax + 8], 2
// 00578b8c  741d                 je 0x578bab
// 00578b8e  687c6fa200           push 0xa26f7c
// 00578b93  56                   push esi
// 00578b94  e8c78fffff           call 0x571b60
// 00578b99  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578b9d  51                   push ecx
// 00578b9e  56                   push esi
// 00578b9f  e86cf9ffff           call 0x578510
// 00578ba4  83c410               add esp, 0x10
// 00578ba7  5e                   pop esi
// 00578ba8  5b                   pop ebx
// 00578ba9  59                   pop ecx
// 00578baa  c3                   ret 
// 00578bab  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 00578bb2  57                   push edi
// 00578bb3  bf03000000           mov edi, 3
// 00578bb8  7407                 je 0x578bc1
// 00578bba  0fb6be2a010000       movzx edi, byte ptr [esi + 0x12a]
// 00578bc1  55                   push ebp
// 00578bc2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00578bc6  3bef                 cmp ebp, edi
// 00578bc8  0f85b7000000         jne 0x578c85
// 00578bce  83fd04               cmp ebp, 4
// 00578bd1  0f87ae000000         ja 0x578c85
// 00578bd7  57                   push edi
// 00578bd8  8d542414             lea edx, [esp + 0x14]
// 00578bdc  52                   push edx
// 00578bdd  56                   push esi
// 00578bde  e82d38ffff           call 0x56c410
// 00578be3  57                   push edi
// 00578be4  8d442420             lea eax, [esp + 0x20]
// 00578be8  50                   push eax
// 00578be9  56                   push esi
// 00578bea  e8f1c3feff           call 0x564fe0
// 00578bef  53                   push ebx
// 00578bf0  56                   push esi
// 00578bf1  e81af9ffff           call 0x578510
// 00578bf6  83c420               add esp, 0x20
// 00578bf9  85c0                 test eax, eax
// 00578bfb  0f8599000000         jne 0x578c9a
// 00578c01  f6862601000002       test byte ptr [esi + 0x126], 2
// 00578c08  8d867c010000         lea eax, [esi + 0x17c]
// 00578c0e  743d                 je 0x578c4d
// 00578c10  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 00578c15  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 00578c1a  88967d010000         mov byte ptr [esi + 0x17d], dl
// 00578c20  0fb6542413           movzx edx, byte ptr [esp + 0x13]
// 00578c25  889680010000         mov byte ptr [esi + 0x180], dl
// 00578c2b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00578c2f  50                   push eax
// 00578c30  8808                 mov byte ptr [eax], cl
// 00578c32  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00578c37  52                   push edx
// 00578c38  56                   push esi
// 00578c39  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 00578c3f  e8ecb8feff           call 0x564530
// 00578c44  83c40c               add esp, 0xc
// 00578c47  5d                   pop ebp
// 00578c48  5f                   pop edi
// 00578c49  5e                   pop esi
// 00578c4a  5b                   pop ebx
// 00578c4b  59                   pop ecx
// 00578c4c  c3                   ret 
// 00578c4d  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 00578c51  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00578c55  50                   push eax
// 00578c56  888e7f010000         mov byte ptr [esi + 0x17f], cl
// 00578c5c  8808                 mov byte ptr [eax], cl
// 00578c5e  888e7d010000         mov byte ptr [esi + 0x17d], cl
// 00578c64  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 00578c6a  0fb64c2415           movzx ecx, byte ptr [esp + 0x15]
// 00578c6f  52                   push edx
// 00578c70  56                   push esi
// 00578c71  888e80010000         mov byte ptr [esi + 0x180], cl
// 00578c77  e8b4b8feff           call 0x564530
// 00578c7c  83c40c               add esp, 0xc
// 00578c7f  5d                   pop ebp
// 00578c80  5f                   pop edi
// 00578c81  5e                   pop esi
// 00578c82  5b                   pop ebx
// 00578c83  59                   pop ecx
// 00578c84  c3                   ret 
// 00578c85  68606fa200           push 0xa26f60
// 00578c8a  56                   push esi
// 00578c8b  e8d08effff           call 0x571b60
// 00578c90  55                   push ebp
// 00578c91  56                   push esi
// 00578c92  e879f8ffff           call 0x578510
// 00578c97  83c410               add esp, 0x10
// 00578c9a  5d                   pop ebp
// 00578c9b  5f                   pop edi
// 00578c9c  5e                   pop esi
// 00578c9d  5b                   pop ebx
// 00578c9e  59                   pop ecx
// 00578c9f  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c

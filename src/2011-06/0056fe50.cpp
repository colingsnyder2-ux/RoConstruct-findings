// roc 2011-06 0056fe50  unit: seg_00560000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056fe50
//
// 0056fe50  51                   push ecx
// 0056fe51  53                   push ebx
// 0056fe52  56                   push esi
// 0056fe53  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056fe57  8b4668               mov eax, dword ptr [esi + 0x68]
// 0056fe5a  33db                 xor ebx, ebx
// 0056fe5c  885c240b             mov byte ptr [esp + 0xb], bl
// 0056fe60  885c240a             mov byte ptr [esp + 0xa], bl
// 0056fe64  885c2409             mov byte ptr [esp + 9], bl
// 0056fe68  885c2408             mov byte ptr [esp + 8], bl
// 0056fe6c  a801                 test al, 1
// 0056fe6e  750d                 jne 0x56fe7d
// 0056fe70  68ac66a800           push 0xa866ac
// 0056fe75  56                   push esi
// 0056fe76  e8b514ffff           call 0x561330
// 0056fe7b  eb30                 jmp 0x56fead
// 0056fe7d  a804                 test al, 4
// 0056fe7f  741d                 je 0x56fe9e
// 0056fe81  689466a800           push 0xa86694
// 0056fe86  56                   push esi
// 0056fe87  e85415ffff           call 0x5613e0
// 0056fe8c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056fe90  50                   push eax
// 0056fe91  56                   push esi
// 0056fe92  e8a9f9ffff           call 0x56f840
// 0056fe97  83c410               add esp, 0x10
// 0056fe9a  5e                   pop esi
// 0056fe9b  5b                   pop ebx
// 0056fe9c  59                   pop ecx
// 0056fe9d  c3                   ret 
// 0056fe9e  a802                 test al, 2
// 0056fea0  740e                 je 0x56feb0
// 0056fea2  687c66a800           push 0xa8667c
// 0056fea7  56                   push esi
// 0056fea8  e83315ffff           call 0x5613e0
// 0056fead  83c408               add esp, 8
// 0056feb0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056feb4  3bc3                 cmp eax, ebx
// 0056feb6  7423                 je 0x56fedb
// 0056feb8  f6400802             test byte ptr [eax + 8], 2
// 0056febc  741d                 je 0x56fedb
// 0056febe  686466a800           push 0xa86664
// 0056fec3  56                   push esi
// 0056fec4  e81715ffff           call 0x5613e0
// 0056fec9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056fecd  51                   push ecx
// 0056fece  56                   push esi
// 0056fecf  e86cf9ffff           call 0x56f840
// 0056fed4  83c410               add esp, 0x10
// 0056fed7  5e                   pop esi
// 0056fed8  5b                   pop ebx
// 0056fed9  59                   pop ecx
// 0056feda  c3                   ret 
// 0056fedb  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0056fee2  57                   push edi
// 0056fee3  bf03000000           mov edi, 3
// 0056fee8  7407                 je 0x56fef1
// 0056feea  0fb6be2a010000       movzx edi, byte ptr [esi + 0x12a]
// 0056fef1  55                   push ebp
// 0056fef2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0056fef6  3bef                 cmp ebp, edi
// 0056fef8  0f85b7000000         jne 0x56ffb5
// 0056fefe  83fd04               cmp ebp, 4
// 0056ff01  0f87ae000000         ja 0x56ffb5
// 0056ff07  57                   push edi
// 0056ff08  8d542414             lea edx, [esp + 0x14]
// 0056ff0c  52                   push edx
// 0056ff0d  56                   push esi
// 0056ff0e  e85d10ffff           call 0x560f70
// 0056ff13  57                   push edi
// 0056ff14  8d442420             lea eax, [esp + 0x20]
// 0056ff18  50                   push eax
// 0056ff19  56                   push esi
// 0056ff1a  e83109feff           call 0x550850
// 0056ff1f  53                   push ebx
// 0056ff20  56                   push esi
// 0056ff21  e81af9ffff           call 0x56f840
// 0056ff26  83c420               add esp, 0x20
// 0056ff29  85c0                 test eax, eax
// 0056ff2b  0f8599000000         jne 0x56ffca
// 0056ff31  f6862601000002       test byte ptr [esi + 0x126], 2
// 0056ff38  8d867c010000         lea eax, [esi + 0x17c]
// 0056ff3e  743d                 je 0x56ff7d
// 0056ff40  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 0056ff45  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 0056ff4a  88967d010000         mov byte ptr [esi + 0x17d], dl
// 0056ff50  0fb6542413           movzx edx, byte ptr [esp + 0x13]
// 0056ff55  889680010000         mov byte ptr [esi + 0x180], dl
// 0056ff5b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0056ff5f  50                   push eax
// 0056ff60  8808                 mov byte ptr [eax], cl
// 0056ff62  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 0056ff67  52                   push edx
// 0056ff68  56                   push esi
// 0056ff69  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 0056ff6f  e8cca0feff           call 0x55a040
// 0056ff74  83c40c               add esp, 0xc
// 0056ff77  5d                   pop ebp
// 0056ff78  5f                   pop edi
// 0056ff79  5e                   pop esi
// 0056ff7a  5b                   pop ebx
// 0056ff7b  59                   pop ecx
// 0056ff7c  c3                   ret 
// 0056ff7d  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 0056ff81  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0056ff85  50                   push eax
// 0056ff86  888e7f010000         mov byte ptr [esi + 0x17f], cl
// 0056ff8c  8808                 mov byte ptr [eax], cl
// 0056ff8e  888e7d010000         mov byte ptr [esi + 0x17d], cl
// 0056ff94  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 0056ff9a  0fb64c2415           movzx ecx, byte ptr [esp + 0x15]
// 0056ff9f  52                   push edx
// 0056ffa0  56                   push esi
// 0056ffa1  888e80010000         mov byte ptr [esi + 0x180], cl
// 0056ffa7  e894a0feff           call 0x55a040
// 0056ffac  83c40c               add esp, 0xc
// 0056ffaf  5d                   pop ebp
// 0056ffb0  5f                   pop edi
// 0056ffb1  5e                   pop esi
// 0056ffb2  5b                   pop ebx
// 0056ffb3  59                   pop ecx
// 0056ffb4  c3                   ret 
// 0056ffb5  684866a800           push 0xa86648
// 0056ffba  56                   push esi
// 0056ffbb  e82014ffff           call 0x5613e0
// 0056ffc0  55                   push ebp
// 0056ffc1  56                   push esi
// 0056ffc2  e879f8ffff           call 0x56f840
// 0056ffc7  83c410               add esp, 0x10
// 0056ffca  5d                   pop ebp
// 0056ffcb  5f                   pop edi
// 0056ffcc  5e                   pop esi
// 0056ffcd  5b                   pop ebx
// 0056ffce  59                   pop ecx
// 0056ffcf  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c

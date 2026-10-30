// from server: 100% by auto
// roc 2009-06 006f1000  unit: seg_006f0000  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f1000
//
// 006f1000  83ec18               sub esp, 0x18
// 006f1003  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f1006  6a0c                 push 0xc
// 006f1008  8d442410             lea eax, [esp + 0x10]
// 006f100c  50                   push eax
// 006f100d  51                   push ecx
// 006f100e  c744240c1b4c7561     mov dword ptr [esp + 0xc], 0x61754c1b
// 006f1016  c644241051           mov byte ptr [esp + 0x10], 0x51
// 006f101b  c644241100           mov byte ptr [esp + 0x11], 0
// 006f1020  c644241201           mov byte ptr [esp + 0x12], 1
// 006f1025  c644241304           mov byte ptr [esp + 0x13], 4
// 006f102a  c644241404           mov byte ptr [esp + 0x14], 4
// 006f102f  c644241504           mov byte ptr [esp + 0x15], 4
// 006f1034  c644241608           mov byte ptr [esp + 0x16], 8
// 006f1039  c644241700           mov byte ptr [esp + 0x17], 0
// 006f103e  e80dc1ffff           call 0x6ed150
// 006f1043  83c40c               add esp, 0xc
// 006f1046  85c0                 test eax, eax
// 006f1048  7423                 je 0x6f106d
// 006f104a  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f104d  8b06                 mov eax, dword ptr [esi]
// 006f104f  6840e08e00           push 0x8ee040
// 006f1054  52                   push edx
// 006f1055  6824e08e00           push 0x8ee024
// 006f105a  50                   push eax
// 006f105b  e84080fdff           call 0x6c90a0
// 006f1060  8b0e                 mov ecx, dword ptr [esi]
// 006f1062  6a03                 push 3
// 006f1064  51                   push ecx
// 006f1065  e87622fdff           call 0x6c32e0
// 006f106a  83c418               add esp, 0x18
// 006f106d  b80c000000           mov eax, 0xc
// 006f1072  33c9                 xor ecx, ecx
// 006f1074  8b140c               mov edx, dword ptr [esp + ecx]
// 006f1077  3b540c0c             cmp edx, dword ptr [esp + ecx + 0xc]
// 006f107b  750f                 jne 0x6f108c
// 006f107d  83e804               sub eax, 4
// 006f1080  83c104               add ecx, 4
// 006f1083  83f804               cmp eax, 4
// 006f1086  73ec                 jae 0x6f1074
// 006f1088  83c418               add esp, 0x18
// 006f108b  c3                   ret 
// 006f108c  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f108f  8b0e                 mov ecx, dword ptr [esi]
// 006f1091  6888e08e00           push 0x8ee088
// 006f1096  50                   push eax
// 006f1097  6824e08e00           push 0x8ee024
// 006f109c  51                   push ecx
// 006f109d  e8fe7ffdff           call 0x6c90a0
// 006f10a2  8b16                 mov edx, dword ptr [esi]
// 006f10a4  6a03                 push 3
// 006f10a6  52                   push edx
// 006f10a7  e83422fdff           call 0x6c32e0
// 006f10ac  83c418               add esp, 0x18
// 006f10af  83c418               add esp, 0x18
// 006f10b2  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadHeader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c

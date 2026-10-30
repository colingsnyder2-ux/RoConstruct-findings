// from server: 100% by auto
// roc 2011-06 007de770  unit: seg_007d0000  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007de770
//
// 007de770  83ec18               sub esp, 0x18
// 007de773  8b4e04               mov ecx, dword ptr [esi + 4]
// 007de776  6a0c                 push 0xc
// 007de778  8d442410             lea eax, [esp + 0x10]
// 007de77c  50                   push eax
// 007de77d  51                   push ecx
// 007de77e  c744240c1b4c7561     mov dword ptr [esp + 0xc], 0x61754c1b
// 007de786  c644241051           mov byte ptr [esp + 0x10], 0x51
// 007de78b  c644241100           mov byte ptr [esp + 0x11], 0
// 007de790  c644241201           mov byte ptr [esp + 0x12], 1
// 007de795  c644241304           mov byte ptr [esp + 0x13], 4
// 007de79a  c644241404           mov byte ptr [esp + 0x14], 4
// 007de79f  c644241504           mov byte ptr [esp + 0x15], 4
// 007de7a4  c644241608           mov byte ptr [esp + 0x16], 8
// 007de7a9  c644241700           mov byte ptr [esp + 0x17], 0
// 007de7ae  e87dc0ffff           call 0x7da830
// 007de7b3  83c40c               add esp, 0xc
// 007de7b6  85c0                 test eax, eax
// 007de7b8  7423                 je 0x7de7dd
// 007de7ba  8b560c               mov edx, dword ptr [esi + 0xc]
// 007de7bd  8b06                 mov eax, dword ptr [esi]
// 007de7bf  68b4e3ab00           push 0xabe3b4
// 007de7c4  52                   push edx
// 007de7c5  6898e3ab00           push 0xabe398
// 007de7ca  50                   push eax
// 007de7cb  e850e6f9ff           call 0x77ce20
// 007de7d0  8b0e                 mov ecx, dword ptr [esi]
// 007de7d2  6a03                 push 3
// 007de7d4  51                   push ecx
// 007de7d5  e81600faff           call 0x77e7f0
// 007de7da  83c418               add esp, 0x18
// 007de7dd  b80c000000           mov eax, 0xc
// 007de7e2  33c9                 xor ecx, ecx
// 007de7e4  8b140c               mov edx, dword ptr [esp + ecx]
// 007de7e7  3b540c0c             cmp edx, dword ptr [esp + ecx + 0xc]
// 007de7eb  750f                 jne 0x7de7fc
// 007de7ed  83e804               sub eax, 4
// 007de7f0  83c104               add ecx, 4
// 007de7f3  83f804               cmp eax, 4
// 007de7f6  73ec                 jae 0x7de7e4
// 007de7f8  83c418               add esp, 0x18
// 007de7fb  c3                   ret 
// 007de7fc  8b460c               mov eax, dword ptr [esi + 0xc]
// 007de7ff  8b0e                 mov ecx, dword ptr [esi]
// 007de801  68fce3ab00           push 0xabe3fc
// 007de806  50                   push eax
// 007de807  6898e3ab00           push 0xabe398
// 007de80c  51                   push ecx
// 007de80d  e80ee6f9ff           call 0x77ce20
// 007de812  8b16                 mov edx, dword ptr [esi]
// 007de814  6a03                 push 3
// 007de816  52                   push edx
// 007de817  e8d4fff9ff           call 0x77e7f0
// 007de81c  83c418               add esp, 0x18
// 007de81f  83c418               add esp, 0x18
// 007de822  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadHeader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c

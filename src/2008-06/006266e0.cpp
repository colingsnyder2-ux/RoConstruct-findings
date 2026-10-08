// from server: 100% by auto
// roc 2008-06 006266e0  unit: seg_00620000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006266e0
//
// 006266e0  81ec0c020000         sub esp, 0x20c
// 006266e6  55                   push ebp
// 006266e7  56                   push esi
// 006266e8  57                   push edi
// 006266e9  8bbc241c020000       mov edi, dword ptr [esp + 0x21c]
// 006266f0  57                   push edi
// 006266f1  e81ab5feff           call 0x611c10
// 006266f6  8be8                 mov ebp, eax
// 006266f8  8d442410             lea eax, [esp + 0x10]
// 006266fc  50                   push eax
// 006266fd  57                   push edi
// 006266fe  e89da9feff           call 0x6110a0
// 00626703  be01000000           mov esi, 1
// 00626708  83c40c               add esp, 0xc
// 0062670b  3bee                 cmp ebp, esi
// 0062670d  7c4d                 jl 0x62675c
// 0062670f  53                   push ebx
// 00626710  56                   push esi
// 00626711  57                   push edi
// 00626712  e8e9b0feff           call 0x611800
// 00626717  8bd8                 mov ebx, eax
// 00626719  0fb6cb               movzx ecx, bl
// 0062671c  83c408               add esp, 8
// 0062671f  3bcb                 cmp ecx, ebx
// 00626721  740f                 je 0x626732
// 00626723  6810518400           push 0x845110
// 00626728  56                   push esi
// 00626729  57                   push edi
// 0062672a  e8a1adfeff           call 0x6114d0
// 0062672f  83c40c               add esp, 0xc
// 00626732  8d94241c020000       lea edx, [esp + 0x21c]
// 00626739  39542410             cmp dword ptr [esp + 0x10], edx
// 0062673d  720d                 jb 0x62674c
// 0062673f  8d442410             lea eax, [esp + 0x10]
// 00626743  50                   push eax
// 00626744  e8f7a7feff           call 0x610f40
// 00626749  83c404               add esp, 4
// 0062674c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00626750  8819                 mov byte ptr [ecx], bl
// 00626752  ff442410             inc dword ptr [esp + 0x10]
// 00626756  46                   inc esi
// 00626757  3bf5                 cmp esi, ebp
// 00626759  7eb5                 jle 0x626710
// 0062675b  5b                   pop ebx
// 0062675c  8d54240c             lea edx, [esp + 0xc]
// 00626760  52                   push edx
// 00626761  e87aa8feff           call 0x610fe0
// 00626766  83c404               add esp, 4
// 00626769  5f                   pop edi
// 0062676a  5e                   pop esi
// 0062676b  b801000000           mov eax, 1
// 00626770  5d                   pop ebp
// 00626771  81c40c020000         add esp, 0x20c
// 00626777  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_char)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

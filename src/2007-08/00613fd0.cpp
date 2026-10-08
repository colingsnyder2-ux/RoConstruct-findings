// from server: 100% by auto
// roc 2007-08 00613fd0  unit: seg_00610000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613fd0
//
// 00613fd0  56                   push esi
// 00613fd1  57                   push edi
// 00613fd2  8b7830               mov edi, dword ptr [eax + 0x30]
// 00613fd5  8b01                 mov eax, dword ptr [ecx]
// 00613fd7  8bf2                 mov esi, edx
// 00613fd9  2b74240c             sub esi, dword ptr [esp + 0xc]
// 00613fdd  83f80d               cmp eax, 0xd
// 00613fe0  7431                 je 0x614013
// 00613fe2  83f80e               cmp eax, 0xe
// 00613fe5  742c                 je 0x614013
// 00613fe7  85c0                 test eax, eax
// 00613fe9  740a                 je 0x613ff5
// 00613feb  51                   push ecx
// 00613fec  57                   push edi
// 00613fed  e89e530100           call 0x629390
// 00613ff2  83c408               add esp, 8
// 00613ff5  85f6                 test esi, esi
// 00613ff7  7e3e                 jle 0x614037
// 00613ff9  53                   push ebx
// 00613ffa  8b5f24               mov ebx, dword ptr [edi + 0x24]
// 00613ffd  56                   push esi
// 00613ffe  57                   push edi
// 00613fff  e8ac480100           call 0x6288b0
// 00614004  56                   push esi
// 00614005  53                   push ebx
// 00614006  57                   push edi
// 00614007  e8744e0100           call 0x628e80
// 0061400c  83c414               add esp, 0x14
// 0061400f  5b                   pop ebx
// 00614010  5f                   pop edi
// 00614011  5e                   pop esi
// 00614012  c3                   ret 
// 00614013  83c601               add esi, 1
// 00614016  7902                 jns 0x61401a
// 00614018  33f6                 xor esi, esi
// 0061401a  56                   push esi
// 0061401b  51                   push ecx
// 0061401c  57                   push edi
// 0061401d  e86e4a0100           call 0x628a90
// 00614022  83c40c               add esp, 0xc
// 00614025  83fe01               cmp esi, 1
// 00614028  7e0d                 jle 0x614037
// 0061402a  83c6ff               add esi, -1
// 0061402d  56                   push esi
// 0061402e  57                   push edi
// 0061402f  e87c480100           call 0x6288b0
// 00614034  83c408               add esp, 8
// 00614037  5f                   pop edi
// 00614038  5e                   pop esi
// 00614039  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjust_assign)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

// from server: 100% by auto
// roc 2010-06 0077efc0  unit: seg_00770000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077efc0
//
// 0077efc0  56                   push esi
// 0077efc1  57                   push edi
// 0077efc2  8b7830               mov edi, dword ptr [eax + 0x30]
// 0077efc5  8b01                 mov eax, dword ptr [ecx]
// 0077efc7  8bf2                 mov esi, edx
// 0077efc9  2b74240c             sub esi, dword ptr [esp + 0xc]
// 0077efcd  83f80d               cmp eax, 0xd
// 0077efd0  7431                 je 0x77f003
// 0077efd2  83f80e               cmp eax, 0xe
// 0077efd5  742c                 je 0x77f003
// 0077efd7  85c0                 test eax, eax
// 0077efd9  740a                 je 0x77efe5
// 0077efdb  51                   push ecx
// 0077efdc  57                   push edi
// 0077efdd  e88e110100           call 0x790170
// 0077efe2  83c408               add esp, 8
// 0077efe5  85f6                 test esi, esi
// 0077efe7  7e3c                 jle 0x77f025
// 0077efe9  53                   push ebx
// 0077efea  8b5f24               mov ebx, dword ptr [edi + 0x24]
// 0077efed  56                   push esi
// 0077efee  57                   push edi
// 0077efef  e8cc060100           call 0x78f6c0
// 0077eff4  56                   push esi
// 0077eff5  53                   push ebx
// 0077eff6  57                   push edi
// 0077eff7  e8540c0100           call 0x78fc50
// 0077effc  83c414               add esp, 0x14
// 0077efff  5b                   pop ebx
// 0077f000  5f                   pop edi
// 0077f001  5e                   pop esi
// 0077f002  c3                   ret 
// 0077f003  83c601               add esi, 1
// 0077f006  7902                 jns 0x77f00a
// 0077f008  33f6                 xor esi, esi
// 0077f00a  56                   push esi
// 0077f00b  51                   push ecx
// 0077f00c  57                   push edi
// 0077f00d  e84e080100           call 0x78f860
// 0077f012  83c40c               add esp, 0xc
// 0077f015  83fe01               cmp esi, 1
// 0077f018  7e0b                 jle 0x77f025
// 0077f01a  4e                   dec esi
// 0077f01b  56                   push esi
// 0077f01c  57                   push edi
// 0077f01d  e89e060100           call 0x78f6c0
// 0077f022  83c408               add esp, 8
// 0077f025  5f                   pop edi
// 0077f026  5e                   pop esi
// 0077f027  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjust_assign)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

// from server: 100% by auto
// roc 2008-06 00536010  unit: seg_00530000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536010
//
// 00536010  8b4804               mov ecx, dword ptr [eax + 4]
// 00536013  8b11                 mov edx, dword ptr [ecx]
// 00536015  56                   push esi
// 00536016  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 0053601c  57                   push edi
// 0053601d  68fc070000           push 0x7fc
// 00536022  6a01                 push 1
// 00536024  50                   push eax
// 00536025  ffd2                 call edx
// 00536027  05fc030000           add eax, 0x3fc
// 0053602c  83c40c               add esp, 0xc
// 0053602f  894628               mov dword ptr [esi + 0x28], eax
// 00536032  33d2                 xor edx, edx
// 00536034  33c9                 xor ecx, ecx
// 00536036  33ff                 xor edi, edi
// 00536038  8bf0                 mov esi, eax
// 0053603a  8d9b00000000         lea ebx, [ebx]
// 00536040  891488               mov dword ptr [eax + ecx*4], edx
// 00536043  893e                 mov dword ptr [esi], edi
// 00536045  41                   inc ecx
// 00536046  83ee04               sub esi, 4
// 00536049  42                   inc edx
// 0053604a  4f                   dec edi
// 0053604b  83f910               cmp ecx, 0x10
// 0053604e  7cf0                 jl 0x536040
// 00536050  83f930               cmp ecx, 0x30
// 00536053  7d28                 jge 0x53607d
// 00536055  8d348d00000000       lea esi, [ecx*4]
// 0053605c  8bfe                 mov edi, esi
// 0053605e  8bf0                 mov esi, eax
// 00536060  2bf7                 sub esi, edi
// 00536062  8bfa                 mov edi, edx
// 00536064  f7df                 neg edi
// 00536066  891488               mov dword ptr [eax + ecx*4], edx
// 00536069  893e                 mov dword ptr [esi], edi
// 0053606b  41                   inc ecx
// 0053606c  8bf9                 mov edi, ecx
// 0053606e  f7d7                 not edi
// 00536070  83e701               and edi, 1
// 00536073  83ee04               sub esi, 4
// 00536076  03d7                 add edx, edi
// 00536078  83f930               cmp ecx, 0x30
// 0053607b  7ce5                 jl 0x536062
// 0053607d  81f9ff000000         cmp ecx, 0xff
// 00536083  7f24                 jg 0x5360a9
// 00536085  8d348d00000000       lea esi, [ecx*4]
// 0053608c  53                   push ebx
// 0053608d  8bde                 mov ebx, esi
// 0053608f  8bfa                 mov edi, edx
// 00536091  8bf0                 mov esi, eax
// 00536093  f7df                 neg edi
// 00536095  2bf3                 sub esi, ebx
// 00536097  5b                   pop ebx
// 00536098  891488               mov dword ptr [eax + ecx*4], edx
// 0053609b  893e                 mov dword ptr [esi], edi
// 0053609d  41                   inc ecx
// 0053609e  83ee04               sub esi, 4
// 005360a1  81f9ff000000         cmp ecx, 0xff
// 005360a7  7eef                 jle 0x536098
// 005360a9  5f                   pop edi
// 005360aa  5e                   pop esi
// 005360ab  c3                   ret 
// library jpeg-6b/jquant2.c (function _init_error_limit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c

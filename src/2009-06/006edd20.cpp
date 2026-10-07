// roc 2009-06 006edd20  unit: seg_006e0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006edd20
//
// 006edd20  56                   push esi
// 006edd21  57                   push edi
// 006edd22  8b7830               mov edi, dword ptr [eax + 0x30]
// 006edd25  8b01                 mov eax, dword ptr [ecx]
// 006edd27  8bf2                 mov esi, edx
// 006edd29  2b74240c             sub esi, dword ptr [esp + 0xc]
// 006edd2d  83f80d               cmp eax, 0xd
// 006edd30  7431                 je 0x6edd63
// 006edd32  83f80e               cmp eax, 0xe
// 006edd35  742c                 je 0x6edd63
// 006edd37  85c0                 test eax, eax
// 006edd39  740a                 je 0x6edd45
// 006edd3b  51                   push ecx
// 006edd3c  57                   push edi
// 006edd3d  e89eca0000           call 0x6fa7e0
// 006edd42  83c408               add esp, 8
// 006edd45  85f6                 test esi, esi
// 006edd47  7e3c                 jle 0x6edd85
// 006edd49  53                   push ebx
// 006edd4a  8b5f24               mov ebx, dword ptr [edi + 0x24]
// 006edd4d  56                   push esi
// 006edd4e  57                   push edi
// 006edd4f  e8ecbf0000           call 0x6f9d40
// 006edd54  56                   push esi
// 006edd55  53                   push ebx
// 006edd56  57                   push edi
// 006edd57  e864c50000           call 0x6fa2c0
// 006edd5c  83c414               add esp, 0x14
// 006edd5f  5b                   pop ebx
// 006edd60  5f                   pop edi
// 006edd61  5e                   pop esi
// 006edd62  c3                   ret 
// 006edd63  83c601               add esi, 1
// 006edd66  7902                 jns 0x6edd6a
// 006edd68  33f6                 xor esi, esi
// 006edd6a  56                   push esi
// 006edd6b  51                   push ecx
// 006edd6c  57                   push edi
// 006edd6d  e86ec10000           call 0x6f9ee0
// 006edd72  83c40c               add esp, 0xc
// 006edd75  83fe01               cmp esi, 1
// 006edd78  7e0b                 jle 0x6edd85
// 006edd7a  4e                   dec esi
// 006edd7b  56                   push esi
// 006edd7c  57                   push edi
// 006edd7d  e8bebf0000           call 0x6f9d40
// 006edd82  83c408               add esp, 8
// 006edd85  5f                   pop edi
// 006edd86  5e                   pop esi
// 006edd87  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjust_assign)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

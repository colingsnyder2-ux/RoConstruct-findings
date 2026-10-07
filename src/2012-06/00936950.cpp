// roc 2012-06 00936950  unit: seg_00930000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936950
//
// 00936950  53                   push ebx
// 00936951  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00936955  55                   push ebp
// 00936956  56                   push esi
// 00936957  57                   push edi
// 00936958  85db                 test ebx, ebx
// 0093695a  7470                 je 0x9369cc
// 0093695c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00936960  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00936964  833e00               cmp dword ptr [esi], 0
// 00936967  753a                 jne 0x9369a3
// 00936969  8b560c               mov edx, dword ptr [esi + 0xc]
// 0093696c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0093696f  8d4c241c             lea ecx, [esp + 0x1c]
// 00936973  51                   push ecx
// 00936974  52                   push edx
// 00936975  50                   push eax
// 00936976  8b4608               mov eax, dword ptr [esi + 8]
// 00936979  ffd0                 call eax
// 0093697b  83c40c               add esp, 0xc
// 0093697e  85c0                 test eax, eax
// 00936980  7451                 je 0x9369d3
// 00936982  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00936986  85c9                 test ecx, ecx
// 00936988  7449                 je 0x9369d3
// 0093698a  49                   dec ecx
// 0093698b  894604               mov dword ptr [esi + 4], eax
// 0093698e  890e                 mov dword ptr [esi], ecx
// 00936990  0fb610               movzx edx, byte ptr [eax]
// 00936993  40                   inc eax
// 00936994  894604               mov dword ptr [esi + 4], eax
// 00936997  83faff               cmp edx, -1
// 0093699a  7437                 je 0x9369d3
// 0093699c  41                   inc ecx
// 0093699d  48                   dec eax
// 0093699e  890e                 mov dword ptr [esi], ecx
// 009369a0  894604               mov dword ptr [esi + 4], eax
// 009369a3  8b4604               mov eax, dword ptr [esi + 4]
// 009369a6  0fb608               movzx ecx, byte ptr [eax]
// 009369a9  83f9ff               cmp ecx, -1
// 009369ac  7425                 je 0x9369d3
// 009369ae  8b3e                 mov edi, dword ptr [esi]
// 009369b0  3bdf                 cmp ebx, edi
// 009369b2  7702                 ja 0x9369b6
// 009369b4  8bfb                 mov edi, ebx
// 009369b6  57                   push edi
// 009369b7  50                   push eax
// 009369b8  55                   push ebp
// 009369b9  e89ecc0400           call 0x98365c
// 009369be  293e                 sub dword ptr [esi], edi
// 009369c0  017e04               add dword ptr [esi + 4], edi
// 009369c3  83c40c               add esp, 0xc
// 009369c6  03ef                 add ebp, edi
// 009369c8  2bdf                 sub ebx, edi
// 009369ca  7598                 jne 0x936964
// 009369cc  5f                   pop edi
// 009369cd  5e                   pop esi
// 009369ce  5d                   pop ebp
// 009369cf  33c0                 xor eax, eax
// 009369d1  5b                   pop ebx
// 009369d2  c3                   ret 
// 009369d3  5f                   pop edi
// 009369d4  5e                   pop esi
// 009369d5  5d                   pop ebp
// 009369d6  8bc3                 mov eax, ebx
// 009369d8  5b                   pop ebx
// 009369d9  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c

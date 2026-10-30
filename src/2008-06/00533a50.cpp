// from server: 100% by auto
// roc 2008-06 00533a50  unit: seg_00530000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533a50
//
// 00533a50  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00533a54  53                   push ebx
// 00533a55  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00533a59  2b03                 sub eax, dword ptr [ebx]
// 00533a5b  56                   push esi
// 00533a5c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00533a60  57                   push edi
// 00533a61  8bbe8c010000         mov edi, dword ptr [esi + 0x18c]
// 00533a67  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00533a6a  3bc1                 cmp eax, ecx
// 00533a6c  7602                 jbe 0x533a70
// 00533a6e  8bc1                 mov eax, ecx
// 00533a70  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 00533a76  50                   push eax
// 00533a77  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00533a7f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00533a82  8d542414             lea edx, [esp + 0x14]
// 00533a86  52                   push edx
// 00533a87  8b542424             mov edx, dword ptr [esp + 0x24]
// 00533a8b  50                   push eax
// 00533a8c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00533a90  52                   push edx
// 00533a91  8b542424             mov edx, dword ptr [esp + 0x24]
// 00533a95  50                   push eax
// 00533a96  8b4104               mov eax, dword ptr [ecx + 4]
// 00533a99  52                   push edx
// 00533a9a  56                   push esi
// 00533a9b  ffd0                 call eax
// 00533a9d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00533aa1  8b03                 mov eax, dword ptr [ebx]
// 00533aa3  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00533aa9  52                   push edx
// 00533aaa  8b542440             mov edx, dword ptr [esp + 0x40]
// 00533aae  8d0482               lea eax, [edx + eax*4]
// 00533ab1  8b570c               mov edx, dword ptr [edi + 0xc]
// 00533ab4  50                   push eax
// 00533ab5  8b4104               mov eax, dword ptr [ecx + 4]
// 00533ab8  52                   push edx
// 00533ab9  56                   push esi
// 00533aba  ffd0                 call eax
// 00533abc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00533ac0  010b                 add dword ptr [ebx], ecx
// 00533ac2  83c42c               add esp, 0x2c
// 00533ac5  5f                   pop edi
// 00533ac6  5e                   pop esi
// 00533ac7  5b                   pop ebx
// 00533ac8  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_1pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c

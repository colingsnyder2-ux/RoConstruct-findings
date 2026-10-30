// from server: 100% by auto
// roc 2012-06 00663700  unit: seg_00660000  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663700
//
// 00663700  83ec0c               sub esp, 0xc
// 00663703  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00663707  8b12                 mov edx, dword ptr [edx]
// 00663709  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066370d  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 00663713  891424               mov dword ptr [esp], edx
// 00663716  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066371a  8b5204               mov edx, dword ptr [edx + 4]
// 0066371d  03d0                 add edx, eax
// 0066371f  0fb6828c000000       movzx eax, byte ptr [edx + 0x8c]
// 00663726  0fb69296000000       movzx edx, byte ptr [edx + 0x96]
// 0066372d  53                   push ebx
// 0066372e  33db                 xor ebx, ebx
// 00663730  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00663736  89442420             mov dword ptr [esp + 0x20], eax
// 0066373a  89542408             mov dword ptr [esp + 8], edx
// 0066373e  0f8e8d000000         jle 0x6637d1
// 00663744  55                   push ebp
// 00663745  56                   push esi
// 00663746  8b742424             mov esi, dword ptr [esp + 0x24]
// 0066374a  57                   push edi
// 0066374b  89742424             mov dword ptr [esp + 0x24], esi
// 0066374f  90                   nop 
// 00663750  8b742424             mov esi, dword ptr [esp + 0x24]
// 00663754  8b2e                 mov ebp, dword ptr [esi]
// 00663756  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066375a  8b349e               mov esi, dword ptr [esi + ebx*4]
// 0066375d  8b795c               mov edi, dword ptr [ecx + 0x5c]
// 00663760  03fe                 add edi, esi
// 00663762  3bf7                 cmp esi, edi
// 00663764  732f                 jae 0x663795
// 00663766  8a5500               mov dl, byte ptr [ebp]
// 00663769  45                   inc ebp
// 0066376a  88542418             mov byte ptr [esp + 0x18], dl
// 0066376e  85c0                 test eax, eax
// 00663770  7e1b                 jle 0x66378d
// 00663772  50                   push eax
// 00663773  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00663777  50                   push eax
// 00663778  56                   push esi
// 00663779  e8f6fb3100           call 0x983374
// 0066377e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00663782  8b442438             mov eax, dword ptr [esp + 0x38]
// 00663786  83c40c               add esp, 0xc
// 00663789  0374242c             add esi, dword ptr [esp + 0x2c]
// 0066378d  3bf7                 cmp esi, edi
// 0066378f  72d5                 jb 0x663766
// 00663791  8b542414             mov edx, dword ptr [esp + 0x14]
// 00663795  83fa01               cmp edx, 1
// 00663798  7e21                 jle 0x6637bb
// 0066379a  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 0066379d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006637a1  51                   push ecx
// 006637a2  4a                   dec edx
// 006637a3  52                   push edx
// 006637a4  8d5301               lea edx, [ebx + 1]
// 006637a7  52                   push edx
// 006637a8  50                   push eax
// 006637a9  53                   push ebx
// 006637aa  50                   push eax
// 006637ab  e830fdfeff           call 0x6534e0
// 006637b0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006637b4  8b442444             mov eax, dword ptr [esp + 0x44]
// 006637b8  83c418               add esp, 0x18
// 006637bb  8b542414             mov edx, dword ptr [esp + 0x14]
// 006637bf  8344242404           add dword ptr [esp + 0x24], 4
// 006637c4  03da                 add ebx, edx
// 006637c6  3b9914010000         cmp ebx, dword ptr [ecx + 0x114]
// 006637cc  7c82                 jl 0x663750
// 006637ce  5f                   pop edi
// 006637cf  5e                   pop esi
// 006637d0  5d                   pop ebp
// 006637d1  5b                   pop ebx
// 006637d2  83c40c               add esp, 0xc
// 006637d5  c3                   ret 
// library jpeg-6b/jdsample.c (function _int_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

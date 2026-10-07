// roc 2011-06 00577ff0  unit: seg_00570000  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577ff0
//
// 00577ff0  83ec0c               sub esp, 0xc
// 00577ff3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00577ff7  8b12                 mov edx, dword ptr [edx]
// 00577ff9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00577ffd  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 00578003  891424               mov dword ptr [esp], edx
// 00578006  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057800a  8b5204               mov edx, dword ptr [edx + 4]
// 0057800d  03d0                 add edx, eax
// 0057800f  0fb6828c000000       movzx eax, byte ptr [edx + 0x8c]
// 00578016  0fb69296000000       movzx edx, byte ptr [edx + 0x96]
// 0057801d  53                   push ebx
// 0057801e  33db                 xor ebx, ebx
// 00578020  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00578026  89442420             mov dword ptr [esp + 0x20], eax
// 0057802a  89542408             mov dword ptr [esp + 8], edx
// 0057802e  0f8e8d000000         jle 0x5780c1
// 00578034  55                   push ebp
// 00578035  56                   push esi
// 00578036  8b742424             mov esi, dword ptr [esp + 0x24]
// 0057803a  57                   push edi
// 0057803b  89742424             mov dword ptr [esp + 0x24], esi
// 0057803f  90                   nop 
// 00578040  8b742424             mov esi, dword ptr [esp + 0x24]
// 00578044  8b2e                 mov ebp, dword ptr [esi]
// 00578046  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057804a  8b349e               mov esi, dword ptr [esi + ebx*4]
// 0057804d  8b795c               mov edi, dword ptr [ecx + 0x5c]
// 00578050  03fe                 add edi, esi
// 00578052  3bf7                 cmp esi, edi
// 00578054  732f                 jae 0x578085
// 00578056  8a5500               mov dl, byte ptr [ebp]
// 00578059  45                   inc ebp
// 0057805a  88542418             mov byte ptr [esp + 0x18], dl
// 0057805e  85c0                 test eax, eax
// 00578060  7e1b                 jle 0x57807d
// 00578062  50                   push eax
// 00578063  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00578067  50                   push eax
// 00578068  56                   push esi
// 00578069  e876322900           call 0x80b2e4
// 0057806e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578072  8b442438             mov eax, dword ptr [esp + 0x38]
// 00578076  83c40c               add esp, 0xc
// 00578079  0374242c             add esi, dword ptr [esp + 0x2c]
// 0057807d  3bf7                 cmp esi, edi
// 0057807f  72d5                 jb 0x578056
// 00578081  8b542414             mov edx, dword ptr [esp + 0x14]
// 00578085  83fa01               cmp edx, 1
// 00578088  7e21                 jle 0x5780ab
// 0057808a  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 0057808d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00578091  51                   push ecx
// 00578092  4a                   dec edx
// 00578093  52                   push edx
// 00578094  8d5301               lea edx, [ebx + 1]
// 00578097  52                   push edx
// 00578098  50                   push eax
// 00578099  53                   push ebx
// 0057809a  50                   push eax
// 0057809b  e830fdfeff           call 0x567dd0
// 005780a0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005780a4  8b442444             mov eax, dword ptr [esp + 0x44]
// 005780a8  83c418               add esp, 0x18
// 005780ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 005780af  8344242404           add dword ptr [esp + 0x24], 4
// 005780b4  03da                 add ebx, edx
// 005780b6  3b9914010000         cmp ebx, dword ptr [ecx + 0x114]
// 005780bc  7c82                 jl 0x578040
// 005780be  5f                   pop edi
// 005780bf  5e                   pop esi
// 005780c0  5d                   pop ebp
// 005780c1  5b                   pop ebx
// 005780c2  83c40c               add esp, 0xc
// 005780c5  c3                   ret 
// library jpeg-6b/jdsample.c (function _int_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

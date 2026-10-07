// roc 2010-06 00581d40  unit: seg_00580000  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581d40
//
// 00581d40  83ec0c               sub esp, 0xc
// 00581d43  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00581d47  8b12                 mov edx, dword ptr [edx]
// 00581d49  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00581d4d  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 00581d53  891424               mov dword ptr [esp], edx
// 00581d56  8b542414             mov edx, dword ptr [esp + 0x14]
// 00581d5a  8b5204               mov edx, dword ptr [edx + 4]
// 00581d5d  03d0                 add edx, eax
// 00581d5f  0fb6828c000000       movzx eax, byte ptr [edx + 0x8c]
// 00581d66  0fb69296000000       movzx edx, byte ptr [edx + 0x96]
// 00581d6d  53                   push ebx
// 00581d6e  33db                 xor ebx, ebx
// 00581d70  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00581d76  89442420             mov dword ptr [esp + 0x20], eax
// 00581d7a  89542408             mov dword ptr [esp + 8], edx
// 00581d7e  0f8e8d000000         jle 0x581e11
// 00581d84  55                   push ebp
// 00581d85  56                   push esi
// 00581d86  8b742424             mov esi, dword ptr [esp + 0x24]
// 00581d8a  57                   push edi
// 00581d8b  89742424             mov dword ptr [esp + 0x24], esi
// 00581d8f  90                   nop 
// 00581d90  8b742424             mov esi, dword ptr [esp + 0x24]
// 00581d94  8b2e                 mov ebp, dword ptr [esi]
// 00581d96  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581d9a  8b349e               mov esi, dword ptr [esi + ebx*4]
// 00581d9d  8b795c               mov edi, dword ptr [ecx + 0x5c]
// 00581da0  03fe                 add edi, esi
// 00581da2  3bf7                 cmp esi, edi
// 00581da4  732f                 jae 0x581dd5
// 00581da6  8a5500               mov dl, byte ptr [ebp]
// 00581da9  45                   inc ebp
// 00581daa  88542418             mov byte ptr [esp + 0x18], dl
// 00581dae  85c0                 test eax, eax
// 00581db0  7e1b                 jle 0x581dcd
// 00581db2  50                   push eax
// 00581db3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00581db7  50                   push eax
// 00581db8  56                   push esi
// 00581db9  e8266e2200           call 0x7a8be4
// 00581dbe  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00581dc2  8b442438             mov eax, dword ptr [esp + 0x38]
// 00581dc6  83c40c               add esp, 0xc
// 00581dc9  0374242c             add esi, dword ptr [esp + 0x2c]
// 00581dcd  3bf7                 cmp esi, edi
// 00581dcf  72d5                 jb 0x581da6
// 00581dd1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00581dd5  83fa01               cmp edx, 1
// 00581dd8  7e21                 jle 0x581dfb
// 00581dda  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00581ddd  8b442410             mov eax, dword ptr [esp + 0x10]
// 00581de1  51                   push ecx
// 00581de2  4a                   dec edx
// 00581de3  52                   push edx
// 00581de4  8d5301               lea edx, [ebx + 1]
// 00581de7  52                   push edx
// 00581de8  50                   push eax
// 00581de9  53                   push ebx
// 00581dea  50                   push eax
// 00581deb  e880b5feff           call 0x56d370
// 00581df0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00581df4  8b442444             mov eax, dword ptr [esp + 0x44]
// 00581df8  83c418               add esp, 0x18
// 00581dfb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00581dff  8344242404           add dword ptr [esp + 0x24], 4
// 00581e04  03da                 add ebx, edx
// 00581e06  3b9914010000         cmp ebx, dword ptr [ecx + 0x114]
// 00581e0c  7c82                 jl 0x581d90
// 00581e0e  5f                   pop edi
// 00581e0f  5e                   pop esi
// 00581e10  5d                   pop ebp
// 00581e11  5b                   pop ebx
// 00581e12  83c40c               add esp, 0xc
// 00581e15  c3                   ret 
// library jpeg-6b/jdsample.c (function _int_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

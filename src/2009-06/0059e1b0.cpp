// from server: 100% by auto
// roc 2009-06 0059e1b0  unit: seg_00590000  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e1b0
//
// 0059e1b0  83ec0c               sub esp, 0xc
// 0059e1b3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059e1b7  8b12                 mov edx, dword ptr [edx]
// 0059e1b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059e1bd  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 0059e1c3  891424               mov dword ptr [esp], edx
// 0059e1c6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059e1ca  8b5204               mov edx, dword ptr [edx + 4]
// 0059e1cd  03d0                 add edx, eax
// 0059e1cf  0fb6828c000000       movzx eax, byte ptr [edx + 0x8c]
// 0059e1d6  0fb69296000000       movzx edx, byte ptr [edx + 0x96]
// 0059e1dd  53                   push ebx
// 0059e1de  33db                 xor ebx, ebx
// 0059e1e0  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 0059e1e6  89442420             mov dword ptr [esp + 0x20], eax
// 0059e1ea  89542408             mov dword ptr [esp + 8], edx
// 0059e1ee  0f8e8d000000         jle 0x59e281
// 0059e1f4  55                   push ebp
// 0059e1f5  56                   push esi
// 0059e1f6  8b742424             mov esi, dword ptr [esp + 0x24]
// 0059e1fa  57                   push edi
// 0059e1fb  89742424             mov dword ptr [esp + 0x24], esi
// 0059e1ff  90                   nop 
// 0059e200  8b742424             mov esi, dword ptr [esp + 0x24]
// 0059e204  8b2e                 mov ebp, dword ptr [esi]
// 0059e206  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059e20a  8b349e               mov esi, dword ptr [esi + ebx*4]
// 0059e20d  8b795c               mov edi, dword ptr [ecx + 0x5c]
// 0059e210  03fe                 add edi, esi
// 0059e212  3bf7                 cmp esi, edi
// 0059e214  732f                 jae 0x59e245
// 0059e216  8a5500               mov dl, byte ptr [ebp]
// 0059e219  45                   inc ebp
// 0059e21a  88542418             mov byte ptr [esp + 0x18], dl
// 0059e21e  85c0                 test eax, eax
// 0059e220  7e1b                 jle 0x59e23d
// 0059e222  50                   push eax
// 0059e223  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059e227  50                   push eax
// 0059e228  56                   push esi
// 0059e229  e846ba1700           call 0x719c74
// 0059e22e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059e232  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059e236  83c40c               add esp, 0xc
// 0059e239  0374242c             add esi, dword ptr [esp + 0x2c]
// 0059e23d  3bf7                 cmp esi, edi
// 0059e23f  72d5                 jb 0x59e216
// 0059e241  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059e245  83fa01               cmp edx, 1
// 0059e248  7e21                 jle 0x59e26b
// 0059e24a  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 0059e24d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e251  51                   push ecx
// 0059e252  4a                   dec edx
// 0059e253  52                   push edx
// 0059e254  8d5301               lea edx, [ebx + 1]
// 0059e257  52                   push edx
// 0059e258  50                   push eax
// 0059e259  53                   push ebx
// 0059e25a  50                   push eax
// 0059e25b  e8e0bbfeff           call 0x589e40
// 0059e260  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0059e264  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059e268  83c418               add esp, 0x18
// 0059e26b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059e26f  8344242404           add dword ptr [esp + 0x24], 4
// 0059e274  03da                 add ebx, edx
// 0059e276  3b9914010000         cmp ebx, dword ptr [ecx + 0x114]
// 0059e27c  7c82                 jl 0x59e200
// 0059e27e  5f                   pop edi
// 0059e27f  5e                   pop esi
// 0059e280  5d                   pop ebp
// 0059e281  5b                   pop ebx
// 0059e282  83c40c               add esp, 0xc
// 0059e285  c3                   ret 
// library jpeg-6b/jdsample.c (function _int_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

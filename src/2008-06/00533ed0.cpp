// from server: 100% by auto
// roc 2008-06 00533ed0  unit: seg_00530000  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533ed0
//
// 00533ed0  83ec0c               sub esp, 0xc
// 00533ed3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00533ed7  8b12                 mov edx, dword ptr [edx]
// 00533ed9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00533edd  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 00533ee3  891424               mov dword ptr [esp], edx
// 00533ee6  8b542414             mov edx, dword ptr [esp + 0x14]
// 00533eea  8b5204               mov edx, dword ptr [edx + 4]
// 00533eed  03d0                 add edx, eax
// 00533eef  0fb6828c000000       movzx eax, byte ptr [edx + 0x8c]
// 00533ef6  0fb69296000000       movzx edx, byte ptr [edx + 0x96]
// 00533efd  53                   push ebx
// 00533efe  33db                 xor ebx, ebx
// 00533f00  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00533f06  89442420             mov dword ptr [esp + 0x20], eax
// 00533f0a  89542408             mov dword ptr [esp + 8], edx
// 00533f0e  0f8e8d000000         jle 0x533fa1
// 00533f14  55                   push ebp
// 00533f15  56                   push esi
// 00533f16  8b742424             mov esi, dword ptr [esp + 0x24]
// 00533f1a  57                   push edi
// 00533f1b  89742424             mov dword ptr [esp + 0x24], esi
// 00533f1f  90                   nop 
// 00533f20  8b742424             mov esi, dword ptr [esp + 0x24]
// 00533f24  8b2e                 mov ebp, dword ptr [esi]
// 00533f26  8b742410             mov esi, dword ptr [esp + 0x10]
// 00533f2a  8b349e               mov esi, dword ptr [esi + ebx*4]
// 00533f2d  8b795c               mov edi, dword ptr [ecx + 0x5c]
// 00533f30  03fe                 add edi, esi
// 00533f32  3bf7                 cmp esi, edi
// 00533f34  732f                 jae 0x533f65
// 00533f36  8a5500               mov dl, byte ptr [ebp]
// 00533f39  45                   inc ebp
// 00533f3a  88542418             mov byte ptr [esp + 0x18], dl
// 00533f3e  85c0                 test eax, eax
// 00533f40  7e1b                 jle 0x533f5d
// 00533f42  50                   push eax
// 00533f43  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00533f47  50                   push eax
// 00533f48  56                   push esi
// 00533f49  e8b6d71600           call 0x6a1704
// 00533f4e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00533f52  8b442438             mov eax, dword ptr [esp + 0x38]
// 00533f56  83c40c               add esp, 0xc
// 00533f59  0374242c             add esi, dword ptr [esp + 0x2c]
// 00533f5d  3bf7                 cmp esi, edi
// 00533f5f  72d5                 jb 0x533f36
// 00533f61  8b542414             mov edx, dword ptr [esp + 0x14]
// 00533f65  83fa01               cmp edx, 1
// 00533f68  7e21                 jle 0x533f8b
// 00533f6a  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00533f6d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00533f71  51                   push ecx
// 00533f72  4a                   dec edx
// 00533f73  52                   push edx
// 00533f74  8d5301               lea edx, [ebx + 1]
// 00533f77  52                   push edx
// 00533f78  50                   push eax
// 00533f79  53                   push ebx
// 00533f7a  50                   push eax
// 00533f7b  e8b01bffff           call 0x525b30
// 00533f80  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00533f84  8b442444             mov eax, dword ptr [esp + 0x44]
// 00533f88  83c418               add esp, 0x18
// 00533f8b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00533f8f  8344242404           add dword ptr [esp + 0x24], 4
// 00533f94  03da                 add ebx, edx
// 00533f96  3b9914010000         cmp ebx, dword ptr [ecx + 0x114]
// 00533f9c  7c82                 jl 0x533f20
// 00533f9e  5f                   pop edi
// 00533f9f  5e                   pop esi
// 00533fa0  5d                   pop ebp
// 00533fa1  5b                   pop ebx
// 00533fa2  83c40c               add esp, 0xc
// 00533fa5  c3                   ret 
// library jpeg-6b/jdsample.c (function _int_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

// roc 2007-03 005229d0  unit: seg_00520000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005229d0
//
// 005229d0  83ec0c               sub esp, 0xc
// 005229d3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005229d7  8b12                 mov edx, dword ptr [edx]
// 005229d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005229dd  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 005229e3  891424               mov dword ptr [esp], edx
// 005229e6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005229ea  8b5204               mov edx, dword ptr [edx + 4]
// 005229ed  03d0                 add edx, eax
// 005229ef  0fb6828c000000       movzx eax, byte ptr [edx + 0x8c]
// 005229f6  0fb69296000000       movzx edx, byte ptr [edx + 0x96]
// 005229fd  53                   push ebx
// 005229fe  33db                 xor ebx, ebx
// 00522a00  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00522a06  89442420             mov dword ptr [esp + 0x20], eax
// 00522a0a  89542408             mov dword ptr [esp + 8], edx
// 00522a0e  0f8e95000000         jle 0x522aa9
// 00522a14  55                   push ebp
// 00522a15  56                   push esi
// 00522a16  8b742424             mov esi, dword ptr [esp + 0x24]
// 00522a1a  57                   push edi
// 00522a1b  89742424             mov dword ptr [esp + 0x24], esi
// 00522a1f  90                   nop 
// 00522a20  8b742424             mov esi, dword ptr [esp + 0x24]
// 00522a24  8b2e                 mov ebp, dword ptr [esi]
// 00522a26  8b742410             mov esi, dword ptr [esp + 0x10]
// 00522a2a  8b349e               mov esi, dword ptr [esi + ebx*4]
// 00522a2d  8b795c               mov edi, dword ptr [ecx + 0x5c]
// 00522a30  03fe                 add edi, esi
// 00522a32  3bf7                 cmp esi, edi
// 00522a34  7331                 jae 0x522a67
// 00522a36  8a5500               mov dl, byte ptr [ebp]
// 00522a39  83c501               add ebp, 1
// 00522a3c  85c0                 test eax, eax
// 00522a3e  88542418             mov byte ptr [esp + 0x18], dl
// 00522a42  7e1b                 jle 0x522a5f
// 00522a44  50                   push eax
// 00522a45  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00522a49  50                   push eax
// 00522a4a  56                   push esi
// 00522a4b  e8ccc50f00           call 0x61f01c
// 00522a50  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00522a54  8b442438             mov eax, dword ptr [esp + 0x38]
// 00522a58  83c40c               add esp, 0xc
// 00522a5b  0374242c             add esi, dword ptr [esp + 0x2c]
// 00522a5f  3bf7                 cmp esi, edi
// 00522a61  72d3                 jb 0x522a36
// 00522a63  8b542414             mov edx, dword ptr [esp + 0x14]
// 00522a67  83fa01               cmp edx, 1
// 00522a6a  7e23                 jle 0x522a8f
// 00522a6c  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00522a6f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00522a73  51                   push ecx
// 00522a74  83c2ff               add edx, -1
// 00522a77  52                   push edx
// 00522a78  8d5301               lea edx, [ebx + 1]
// 00522a7b  52                   push edx
// 00522a7c  50                   push eax
// 00522a7d  53                   push ebx
// 00522a7e  50                   push eax
// 00522a7f  e8bc1bffff           call 0x514640
// 00522a84  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00522a88  8b442444             mov eax, dword ptr [esp + 0x44]
// 00522a8c  83c418               add esp, 0x18
// 00522a8f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00522a93  8344242404           add dword ptr [esp + 0x24], 4
// 00522a98  03da                 add ebx, edx
// 00522a9a  3b9914010000         cmp ebx, dword ptr [ecx + 0x114]
// 00522aa0  0f8c7affffff         jl 0x522a20
// 00522aa6  5f                   pop edi
// 00522aa7  5e                   pop esi
// 00522aa8  5d                   pop ebp
// 00522aa9  5b                   pop ebx
// 00522aaa  83c40c               add esp, 0xc
// 00522aad  c3                   ret 
// library jpeg-6b/jdsample.c (function _int_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

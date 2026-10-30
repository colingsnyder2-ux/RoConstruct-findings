// from server: 100% by auto
// roc 2007-08 00527d00  unit: G3D::Line  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527d00
//
// 00527d00  83ec0c               sub esp, 0xc
// 00527d03  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00527d07  8b12                 mov edx, dword ptr [edx]
// 00527d09  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00527d0d  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 00527d13  891424               mov dword ptr [esp], edx
// 00527d16  8b542414             mov edx, dword ptr [esp + 0x14]
// 00527d1a  8b5204               mov edx, dword ptr [edx + 4]
// 00527d1d  03d0                 add edx, eax
// 00527d1f  0fb6828c000000       movzx eax, byte ptr [edx + 0x8c]
// 00527d26  0fb69296000000       movzx edx, byte ptr [edx + 0x96]
// 00527d2d  53                   push ebx
// 00527d2e  33db                 xor ebx, ebx
// 00527d30  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00527d36  89442420             mov dword ptr [esp + 0x20], eax
// 00527d3a  89542408             mov dword ptr [esp + 8], edx
// 00527d3e  0f8e95000000         jle 0x527dd9
// 00527d44  55                   push ebp
// 00527d45  56                   push esi
// 00527d46  8b742424             mov esi, dword ptr [esp + 0x24]
// 00527d4a  57                   push edi
// 00527d4b  89742424             mov dword ptr [esp + 0x24], esi
// 00527d4f  90                   nop 
// 00527d50  8b742424             mov esi, dword ptr [esp + 0x24]
// 00527d54  8b2e                 mov ebp, dword ptr [esi]
// 00527d56  8b742410             mov esi, dword ptr [esp + 0x10]
// 00527d5a  8b349e               mov esi, dword ptr [esi + ebx*4]
// 00527d5d  8b795c               mov edi, dword ptr [ecx + 0x5c]
// 00527d60  03fe                 add edi, esi
// 00527d62  3bf7                 cmp esi, edi
// 00527d64  7331                 jae 0x527d97
// 00527d66  8a5500               mov dl, byte ptr [ebp]
// 00527d69  83c501               add ebp, 1
// 00527d6c  85c0                 test eax, eax
// 00527d6e  88542418             mov byte ptr [esp + 0x18], dl
// 00527d72  7e1b                 jle 0x527d8f
// 00527d74  50                   push eax
// 00527d75  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00527d79  50                   push eax
// 00527d7a  56                   push esi
// 00527d7b  e80c8e1000           call 0x630b8c
// 00527d80  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00527d84  8b442438             mov eax, dword ptr [esp + 0x38]
// 00527d88  83c40c               add esp, 0xc
// 00527d8b  0374242c             add esi, dword ptr [esp + 0x2c]
// 00527d8f  3bf7                 cmp esi, edi
// 00527d91  72d3                 jb 0x527d66
// 00527d93  8b542414             mov edx, dword ptr [esp + 0x14]
// 00527d97  83fa01               cmp edx, 1
// 00527d9a  7e23                 jle 0x527dbf
// 00527d9c  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00527d9f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527da3  51                   push ecx
// 00527da4  83c2ff               add edx, -1
// 00527da7  52                   push edx
// 00527da8  8d5301               lea edx, [ebx + 1]
// 00527dab  52                   push edx
// 00527dac  50                   push eax
// 00527dad  53                   push ebx
// 00527dae  50                   push eax
// 00527daf  e8cc64ffff           call 0x51e280
// 00527db4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00527db8  8b442444             mov eax, dword ptr [esp + 0x44]
// 00527dbc  83c418               add esp, 0x18
// 00527dbf  8b542414             mov edx, dword ptr [esp + 0x14]
// 00527dc3  8344242404           add dword ptr [esp + 0x24], 4
// 00527dc8  03da                 add ebx, edx
// 00527dca  3b9914010000         cmp ebx, dword ptr [ecx + 0x114]
// 00527dd0  0f8c7affffff         jl 0x527d50
// 00527dd6  5f                   pop edi
// 00527dd7  5e                   pop esi
// 00527dd8  5d                   pop ebp
// 00527dd9  5b                   pop ebx
// 00527dda  83c40c               add esp, 0xc
// 00527ddd  c3                   ret 
// library jpeg-6b/jdsample.c (function _int_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

// from server: 100% by auto
// roc 2008-06 00623a00  unit: lua_exception  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623a00
//
// 00623a00  51                   push ecx
// 00623a01  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00623a05  8b4808               mov ecx, dword ptr [eax + 8]
// 00623a08  53                   push ebx
// 00623a09  8b1c8d64c28400       mov ebx, dword ptr [ecx*4 + 0x84c264]
// 00623a10  56                   push esi
// 00623a11  57                   push edi
// 00623a12  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00623a16  8b5714               mov edx, dword ptr [edi + 0x14]
// 00623a19  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00623a21  8b0a                 mov ecx, dword ptr [edx]
// 00623a23  8b7208               mov esi, dword ptr [edx + 8]
// 00623a26  3bce                 cmp ecx, esi
// 00623a28  7311                 jae 0x623a3b
// 00623a2a  8d9b00000000         lea ebx, [ebx]
// 00623a30  3bc1                 cmp eax, ecx
// 00623a32  7420                 je 0x623a54
// 00623a34  83c110               add ecx, 0x10
// 00623a37  3bce                 cmp ecx, esi
// 00623a39  72f5                 jb 0x623a30
// 00623a3b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00623a3f  53                   push ebx
// 00623a40  51                   push ecx
// 00623a41  68404a8400           push 0x844a40
// 00623a46  57                   push edi
// 00623a47  e884fdffff           call 0x6237d0
// 00623a4c  83c410               add esp, 0x10
// 00623a4f  5f                   pop edi
// 00623a50  5e                   pop esi
// 00623a51  5b                   pop ebx
// 00623a52  59                   pop ecx
// 00623a53  c3                   ret 
// 00623a54  2b470c               sub eax, dword ptr [edi + 0xc]
// 00623a57  8d4c240c             lea ecx, [esp + 0xc]
// 00623a5b  51                   push ecx
// 00623a5c  52                   push edx
// 00623a5d  c1f804               sar eax, 4
// 00623a60  57                   push edi
// 00623a61  e84afaffff           call 0x6234b0
// 00623a66  83c40c               add esp, 0xc
// 00623a69  85c0                 test eax, eax
// 00623a6b  74ce                 je 0x623a3b
// 00623a6d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00623a71  53                   push ebx
// 00623a72  52                   push edx
// 00623a73  50                   push eax
// 00623a74  8b442428             mov eax, dword ptr [esp + 0x28]
// 00623a78  50                   push eax
// 00623a79  681c4a8400           push 0x844a1c
// 00623a7e  57                   push edi
// 00623a7f  e84cfdffff           call 0x6237d0
// 00623a84  83c418               add esp, 0x18
// 00623a87  5f                   pop edi
// 00623a88  5e                   pop esi
// 00623a89  5b                   pop ebx
// 00623a8a  59                   pop ecx
// 00623a8b  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_typeerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c

// roc 2007-08 0046d2b0  unit: RBX::LDraw2Lua::LuaWriter  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d2b0
//
// 0046d2b0  51                   push ecx
// 0046d2b1  53                   push ebx
// 0046d2b2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0046d2b6  55                   push ebp
// 0046d2b7  56                   push esi
// 0046d2b8  57                   push edi
// 0046d2b9  8bf1                 mov esi, ecx
// 0046d2bb  8b4608               mov eax, dword ptr [esi + 8]
// 0046d2be  8d3c9d00000000       lea edi, [ebx*4]
// 0046d2c5  6a10                 push 0x10
// 0046d2c7  57                   push edi
// 0046d2c8  89442418             mov dword ptr [esp + 0x18], eax
// 0046d2cc  e88f2d0900           call 0x500060
// 0046d2d1  57                   push edi
// 0046d2d2  6a00                 push 0
// 0046d2d4  50                   push eax
// 0046d2d5  894608               mov dword ptr [esi + 8], eax
// 0046d2d8  e8a3320900           call 0x500580
// 0046d2dd  33ed                 xor ebp, ebp
// 0046d2df  83c414               add esp, 0x14
// 0046d2e2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0046d2e5  7e31                 jle 0x46d318
// 0046d2e7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046d2eb  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0046d2ee  85c9                 test ecx, ecx
// 0046d2f0  741e                 je 0x46d310
// 0046d2f2  8b01                 mov eax, dword ptr [ecx]
// 0046d2f4  33d2                 xor edx, edx
// 0046d2f6  f7f3                 div ebx
// 0046d2f8  8b4608               mov eax, dword ptr [esi + 8]
// 0046d2fb  8b7924               mov edi, dword ptr [ecx + 0x24]
// 0046d2fe  85ff                 test edi, edi
// 0046d300  8b0490               mov eax, dword ptr [eax + edx*4]
// 0046d303  894124               mov dword ptr [ecx + 0x24], eax
// 0046d306  8b4608               mov eax, dword ptr [esi + 8]
// 0046d309  890c90               mov dword ptr [eax + edx*4], ecx
// 0046d30c  8bcf                 mov ecx, edi
// 0046d30e  75e2                 jne 0x46d2f2
// 0046d310  83c501               add ebp, 1
// 0046d313  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0046d316  7ccf                 jl 0x46d2e7
// 0046d318  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046d31c  51                   push ecx
// 0046d31d  e8ee240900           call 0x4ff810
// 0046d322  83c404               add esp, 4
// 0046d325  5f                   pop edi
// 0046d326  895e0c               mov dword ptr [esi + 0xc], ebx
// 0046d329  5e                   pop esi
// 0046d32a  5d                   pop ebp
// 0046d32b  5b                   pop ebx
// 0046d32c  59                   pop ecx
// 0046d32d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp

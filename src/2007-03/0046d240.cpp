// roc 2007-03 0046d240  unit: seg_00460000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046d240
//
// 0046d240  51                   push ecx
// 0046d241  53                   push ebx
// 0046d242  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0046d246  55                   push ebp
// 0046d247  56                   push esi
// 0046d248  57                   push edi
// 0046d249  8bf1                 mov esi, ecx
// 0046d24b  8b4608               mov eax, dword ptr [esi + 8]
// 0046d24e  8d3c9d00000000       lea edi, [ebx*4]
// 0046d255  6a10                 push 0x10
// 0046d257  57                   push edi
// 0046d258  89442418             mov dword ptr [esp + 0x18], eax
// 0046d25c  e86f690800           call 0x4f3bd0
// 0046d261  57                   push edi
// 0046d262  6a00                 push 0
// 0046d264  50                   push eax
// 0046d265  894608               mov dword ptr [esi + 8], eax
// 0046d268  e8836e0800           call 0x4f40f0
// 0046d26d  33ed                 xor ebp, ebp
// 0046d26f  83c414               add esp, 0x14
// 0046d272  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0046d275  7e31                 jle 0x46d2a8
// 0046d277  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046d27b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0046d27e  85c9                 test ecx, ecx
// 0046d280  741e                 je 0x46d2a0
// 0046d282  8b01                 mov eax, dword ptr [ecx]
// 0046d284  33d2                 xor edx, edx
// 0046d286  f7f3                 div ebx
// 0046d288  8b4608               mov eax, dword ptr [esi + 8]
// 0046d28b  8b7924               mov edi, dword ptr [ecx + 0x24]
// 0046d28e  85ff                 test edi, edi
// 0046d290  8b0490               mov eax, dword ptr [eax + edx*4]
// 0046d293  894124               mov dword ptr [ecx + 0x24], eax
// 0046d296  8b4608               mov eax, dword ptr [esi + 8]
// 0046d299  890c90               mov dword ptr [eax + edx*4], ecx
// 0046d29c  8bcf                 mov ecx, edi
// 0046d29e  75e2                 jne 0x46d282
// 0046d2a0  83c501               add ebp, 1
// 0046d2a3  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0046d2a6  7ccf                 jl 0x46d277
// 0046d2a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046d2ac  51                   push ecx
// 0046d2ad  e8ce600800           call 0x4f3380
// 0046d2b2  83c404               add esp, 4
// 0046d2b5  5f                   pop edi
// 0046d2b6  895e0c               mov dword ptr [esi + 0xc], ebx
// 0046d2b9  5e                   pop esi
// 0046d2ba  5d                   pop ebp
// 0046d2bb  5b                   pop ebx
// 0046d2bc  59                   pop ecx
// 0046d2bd  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GLCaps.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GLCaps.cpp

// roc 2011-06 007d7320  unit: RBX::EquationDisplay  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d7320
//
// 007d7320  8b442408             mov eax, dword ptr [esp + 8]
// 007d7324  56                   push esi
// 007d7325  57                   push edi
// 007d7326  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007d732a  8b7710               mov esi, dword ptr [edi + 0x10]
// 007d732d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007d7330  8908                 mov dword ptr [eax], ecx
// 007d7332  89461c               mov dword ptr [esi + 0x1c], eax
// 007d7335  8a4805               mov cl, byte ptr [eax + 5]
// 007d7338  f6c107               test cl, 7
// 007d733b  753e                 jne 0x7d737b
// 007d733d  807e1501             cmp byte ptr [esi + 0x15], 1
// 007d7341  752a                 jne 0x7d736d
// 007d7343  8b5008               mov edx, dword ptr [eax + 8]
// 007d7346  80c904               or cl, 4
// 007d7349  884805               mov byte ptr [eax + 5], cl
// 007d734c  837a0804             cmp dword ptr [edx + 8], 4
// 007d7350  7c29                 jl 0x7d737b
// 007d7352  8b12                 mov edx, dword ptr [edx]
// 007d7354  f6420503             test byte ptr [edx + 5], 3
// 007d7358  7421                 je 0x7d737b
// 007d735a  f6c104               test cl, 4
// 007d735d  741c                 je 0x7d737b
// 007d735f  52                   push edx
// 007d7360  50                   push eax
// 007d7361  57                   push edi
// 007d7362  e829ffffff           call 0x7d7290
// 007d7367  83c40c               add esp, 0xc
// 007d736a  5f                   pop edi
// 007d736b  5e                   pop esi
// 007d736c  c3                   ret 
// 007d736d  8a5614               mov dl, byte ptr [esi + 0x14]
// 007d7370  80e203               and dl, 3
// 007d7373  80e1f8               and cl, 0xf8
// 007d7376  0ad1                 or dl, cl
// 007d7378  885005               mov byte ptr [eax + 5], dl
// 007d737b  5f                   pop edi
// 007d737c  5e                   pop esi
// 007d737d  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_linkupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

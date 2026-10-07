// roc 2009-06 006e9d40  unit: RBX::PartDropTool  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9d40
//
// 006e9d40  8b442408             mov eax, dword ptr [esp + 8]
// 006e9d44  56                   push esi
// 006e9d45  57                   push edi
// 006e9d46  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e9d4a  8b7710               mov esi, dword ptr [edi + 0x10]
// 006e9d4d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006e9d50  8908                 mov dword ptr [eax], ecx
// 006e9d52  89461c               mov dword ptr [esi + 0x1c], eax
// 006e9d55  8a4805               mov cl, byte ptr [eax + 5]
// 006e9d58  f6c107               test cl, 7
// 006e9d5b  753e                 jne 0x6e9d9b
// 006e9d5d  807e1501             cmp byte ptr [esi + 0x15], 1
// 006e9d61  752a                 jne 0x6e9d8d
// 006e9d63  8b5008               mov edx, dword ptr [eax + 8]
// 006e9d66  80c904               or cl, 4
// 006e9d69  884805               mov byte ptr [eax + 5], cl
// 006e9d6c  837a0804             cmp dword ptr [edx + 8], 4
// 006e9d70  7c29                 jl 0x6e9d9b
// 006e9d72  8b12                 mov edx, dword ptr [edx]
// 006e9d74  f6420503             test byte ptr [edx + 5], 3
// 006e9d78  7421                 je 0x6e9d9b
// 006e9d7a  f6c104               test cl, 4
// 006e9d7d  741c                 je 0x6e9d9b
// 006e9d7f  52                   push edx
// 006e9d80  50                   push eax
// 006e9d81  57                   push edi
// 006e9d82  e829ffffff           call 0x6e9cb0
// 006e9d87  83c40c               add esp, 0xc
// 006e9d8a  5f                   pop edi
// 006e9d8b  5e                   pop esi
// 006e9d8c  c3                   ret 
// 006e9d8d  8a5614               mov dl, byte ptr [esi + 0x14]
// 006e9d90  80e203               and dl, 3
// 006e9d93  80e1f8               and cl, 0xf8
// 006e9d96  0ad1                 or dl, cl
// 006e9d98  885005               mov byte ptr [eax + 5], dl
// 006e9d9b  5f                   pop edi
// 006e9d9c  5e                   pop esi
// 006e9d9d  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_linkupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

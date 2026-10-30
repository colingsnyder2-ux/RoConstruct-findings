// from server: 100% by auto
// roc 2012-06 00933430  unit: RBX::BallCellContact  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00933430
//
// 00933430  8b442408             mov eax, dword ptr [esp + 8]
// 00933434  56                   push esi
// 00933435  57                   push edi
// 00933436  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0093343a  8b7710               mov esi, dword ptr [edi + 0x10]
// 0093343d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00933440  8908                 mov dword ptr [eax], ecx
// 00933442  89461c               mov dword ptr [esi + 0x1c], eax
// 00933445  8a4805               mov cl, byte ptr [eax + 5]
// 00933448  f6c107               test cl, 7
// 0093344b  753e                 jne 0x93348b
// 0093344d  807e1501             cmp byte ptr [esi + 0x15], 1
// 00933451  752a                 jne 0x93347d
// 00933453  8b5008               mov edx, dword ptr [eax + 8]
// 00933456  80c904               or cl, 4
// 00933459  884805               mov byte ptr [eax + 5], cl
// 0093345c  837a0804             cmp dword ptr [edx + 8], 4
// 00933460  7c29                 jl 0x93348b
// 00933462  8b12                 mov edx, dword ptr [edx]
// 00933464  f6420503             test byte ptr [edx + 5], 3
// 00933468  7421                 je 0x93348b
// 0093346a  f6c104               test cl, 4
// 0093346d  741c                 je 0x93348b
// 0093346f  52                   push edx
// 00933470  50                   push eax
// 00933471  57                   push edi
// 00933472  e829ffffff           call 0x9333a0
// 00933477  83c40c               add esp, 0xc
// 0093347a  5f                   pop edi
// 0093347b  5e                   pop esi
// 0093347c  c3                   ret 
// 0093347d  8a5614               mov dl, byte ptr [esi + 0x14]
// 00933480  80e203               and dl, 3
// 00933483  80e1f8               and cl, 0xf8
// 00933486  0ad1                 or dl, cl
// 00933488  885005               mov byte ptr [eax + 5], dl
// 0093348b  5f                   pop edi
// 0093348c  5e                   pop esi
// 0093348d  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_linkupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

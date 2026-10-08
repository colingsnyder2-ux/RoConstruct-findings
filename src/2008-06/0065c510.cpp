// from server: 100% by auto
// roc 2008-06 0065c510  unit: RBX::BallBallContact  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c510
//
// 0065c510  8b442408             mov eax, dword ptr [esp + 8]
// 0065c514  56                   push esi
// 0065c515  57                   push edi
// 0065c516  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065c51a  8b7710               mov esi, dword ptr [edi + 0x10]
// 0065c51d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0065c520  8908                 mov dword ptr [eax], ecx
// 0065c522  89461c               mov dword ptr [esi + 0x1c], eax
// 0065c525  8a4805               mov cl, byte ptr [eax + 5]
// 0065c528  f6c107               test cl, 7
// 0065c52b  753e                 jne 0x65c56b
// 0065c52d  807e1501             cmp byte ptr [esi + 0x15], 1
// 0065c531  752a                 jne 0x65c55d
// 0065c533  8b5008               mov edx, dword ptr [eax + 8]
// 0065c536  80c904               or cl, 4
// 0065c539  884805               mov byte ptr [eax + 5], cl
// 0065c53c  837a0804             cmp dword ptr [edx + 8], 4
// 0065c540  7c29                 jl 0x65c56b
// 0065c542  8b12                 mov edx, dword ptr [edx]
// 0065c544  f6420503             test byte ptr [edx + 5], 3
// 0065c548  7421                 je 0x65c56b
// 0065c54a  f6c104               test cl, 4
// 0065c54d  741c                 je 0x65c56b
// 0065c54f  52                   push edx
// 0065c550  50                   push eax
// 0065c551  57                   push edi
// 0065c552  e829ffffff           call 0x65c480
// 0065c557  83c40c               add esp, 0xc
// 0065c55a  5f                   pop edi
// 0065c55b  5e                   pop esi
// 0065c55c  c3                   ret 
// 0065c55d  8a5614               mov dl, byte ptr [esi + 0x14]
// 0065c560  80e203               and dl, 3
// 0065c563  80e1f8               and cl, 0xf8
// 0065c566  0ad1                 or dl, cl
// 0065c568  885005               mov byte ptr [eax + 5], dl
// 0065c56b  5f                   pop edi
// 0065c56c  5e                   pop esi
// 0065c56d  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_linkupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

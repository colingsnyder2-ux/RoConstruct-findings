// from server: 100% by auto
// roc 2007-08 0060ff80  unit: RBX::Ball  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060ff80
//
// 0060ff80  8b442408             mov eax, dword ptr [esp + 8]
// 0060ff84  56                   push esi
// 0060ff85  57                   push edi
// 0060ff86  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060ff8a  8b7710               mov esi, dword ptr [edi + 0x10]
// 0060ff8d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0060ff90  8908                 mov dword ptr [eax], ecx
// 0060ff92  89461c               mov dword ptr [esi + 0x1c], eax
// 0060ff95  8a4805               mov cl, byte ptr [eax + 5]
// 0060ff98  f6c107               test cl, 7
// 0060ff9b  753e                 jne 0x60ffdb
// 0060ff9d  807e1501             cmp byte ptr [esi + 0x15], 1
// 0060ffa1  752a                 jne 0x60ffcd
// 0060ffa3  8b5008               mov edx, dword ptr [eax + 8]
// 0060ffa6  80c904               or cl, 4
// 0060ffa9  884805               mov byte ptr [eax + 5], cl
// 0060ffac  837a0804             cmp dword ptr [edx + 8], 4
// 0060ffb0  7c29                 jl 0x60ffdb
// 0060ffb2  8b12                 mov edx, dword ptr [edx]
// 0060ffb4  f6420503             test byte ptr [edx + 5], 3
// 0060ffb8  7421                 je 0x60ffdb
// 0060ffba  f6c104               test cl, 4
// 0060ffbd  741c                 je 0x60ffdb
// 0060ffbf  52                   push edx
// 0060ffc0  50                   push eax
// 0060ffc1  57                   push edi
// 0060ffc2  e829ffffff           call 0x60fef0
// 0060ffc7  83c40c               add esp, 0xc
// 0060ffca  5f                   pop edi
// 0060ffcb  5e                   pop esi
// 0060ffcc  c3                   ret 
// 0060ffcd  8a5614               mov dl, byte ptr [esi + 0x14]
// 0060ffd0  80e203               and dl, 3
// 0060ffd3  80e1f8               and cl, 0xf8
// 0060ffd6  0ad1                 or dl, cl
// 0060ffd8  885005               mov byte ptr [eax + 5], dl
// 0060ffdb  5f                   pop edi
// 0060ffdc  5e                   pop esi
// 0060ffdd  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_linkupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

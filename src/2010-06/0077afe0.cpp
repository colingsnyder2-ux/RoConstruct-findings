// from server: 100% by auto
// roc 2010-06 0077afe0  unit: RBX::PartDropTool  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077afe0
//
// 0077afe0  8b442408             mov eax, dword ptr [esp + 8]
// 0077afe4  56                   push esi
// 0077afe5  57                   push edi
// 0077afe6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077afea  8b7710               mov esi, dword ptr [edi + 0x10]
// 0077afed  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0077aff0  8908                 mov dword ptr [eax], ecx
// 0077aff2  89461c               mov dword ptr [esi + 0x1c], eax
// 0077aff5  8a4805               mov cl, byte ptr [eax + 5]
// 0077aff8  f6c107               test cl, 7
// 0077affb  753e                 jne 0x77b03b
// 0077affd  807e1501             cmp byte ptr [esi + 0x15], 1
// 0077b001  752a                 jne 0x77b02d
// 0077b003  8b5008               mov edx, dword ptr [eax + 8]
// 0077b006  80c904               or cl, 4
// 0077b009  884805               mov byte ptr [eax + 5], cl
// 0077b00c  837a0804             cmp dword ptr [edx + 8], 4
// 0077b010  7c29                 jl 0x77b03b
// 0077b012  8b12                 mov edx, dword ptr [edx]
// 0077b014  f6420503             test byte ptr [edx + 5], 3
// 0077b018  7421                 je 0x77b03b
// 0077b01a  f6c104               test cl, 4
// 0077b01d  741c                 je 0x77b03b
// 0077b01f  52                   push edx
// 0077b020  50                   push eax
// 0077b021  57                   push edi
// 0077b022  e829ffffff           call 0x77af50
// 0077b027  83c40c               add esp, 0xc
// 0077b02a  5f                   pop edi
// 0077b02b  5e                   pop esi
// 0077b02c  c3                   ret 
// 0077b02d  8a5614               mov dl, byte ptr [esi + 0x14]
// 0077b030  80e203               and dl, 3
// 0077b033  80e1f8               and cl, 0xf8
// 0077b036  0ad1                 or dl, cl
// 0077b038  885005               mov byte ptr [eax + 5], dl
// 0077b03b  5f                   pop edi
// 0077b03c  5e                   pop esi
// 0077b03d  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_linkupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

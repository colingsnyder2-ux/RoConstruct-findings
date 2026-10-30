// from server: 100% by auto
// roc 2010-06 00576440  unit: seg_00570000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576440
//
// 00576440  53                   push ebx
// 00576441  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00576445  56                   push esi
// 00576446  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057644a  57                   push edi
// 0057644b  8b7e04               mov edi, dword ptr [esi + 4]
// 0057644e  83fb01               cmp ebx, 1
// 00576451  7418                 je 0x57646b
// 00576453  8b06                 mov eax, dword ptr [esi]
// 00576455  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0057645c  8b0e                 mov ecx, dword ptr [esi]
// 0057645e  895918               mov dword ptr [ecx + 0x18], ebx
// 00576461  8b16                 mov edx, dword ptr [esi]
// 00576463  8b02                 mov eax, dword ptr [edx]
// 00576465  56                   push esi
// 00576466  ffd0                 call eax
// 00576468  83c404               add esp, 4
// 0057646b  6a78                 push 0x78
// 0057646d  53                   push ebx
// 0057646e  56                   push esi
// 0057646f  e8ecfbffff           call 0x576060
// 00576474  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00576478  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057647c  894804               mov dword ptr [eax + 4], ecx
// 0057647f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00576483  895008               mov dword ptr [eax + 8], edx
// 00576486  8a542424             mov dl, byte ptr [esp + 0x24]
// 0057648a  c70000000000         mov dword ptr [eax], 0
// 00576490  89480c               mov dword ptr [eax + 0xc], ecx
// 00576493  885020               mov byte ptr [eax + 0x20], dl
// 00576496  c6402200             mov byte ptr [eax + 0x22], 0
// 0057649a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0057649d  83c40c               add esp, 0xc
// 005764a0  894824               mov dword ptr [eax + 0x24], ecx
// 005764a3  894748               mov dword ptr [edi + 0x48], eax
// 005764a6  5f                   pop edi
// 005764a7  5e                   pop esi
// 005764a8  5b                   pop ebx
// 005764a9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

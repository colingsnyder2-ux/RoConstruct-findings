// from server: 100% by auto
// roc 2012-06 00654180  unit: seg_00650000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654180
//
// 00654180  53                   push ebx
// 00654181  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00654185  56                   push esi
// 00654186  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065418a  57                   push edi
// 0065418b  8b7e04               mov edi, dword ptr [esi + 4]
// 0065418e  83fb01               cmp ebx, 1
// 00654191  7418                 je 0x6541ab
// 00654193  8b06                 mov eax, dword ptr [esi]
// 00654195  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0065419c  8b0e                 mov ecx, dword ptr [esi]
// 0065419e  895918               mov dword ptr [ecx + 0x18], ebx
// 006541a1  8b16                 mov edx, dword ptr [esi]
// 006541a3  8b02                 mov eax, dword ptr [edx]
// 006541a5  56                   push esi
// 006541a6  ffd0                 call eax
// 006541a8  83c404               add esp, 4
// 006541ab  6a78                 push 0x78
// 006541ad  53                   push ebx
// 006541ae  56                   push esi
// 006541af  e8ecfbffff           call 0x653da0
// 006541b4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006541b8  8b542428             mov edx, dword ptr [esp + 0x28]
// 006541bc  894804               mov dword ptr [eax + 4], ecx
// 006541bf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006541c3  895008               mov dword ptr [eax + 8], edx
// 006541c6  8a542424             mov dl, byte ptr [esp + 0x24]
// 006541ca  c70000000000         mov dword ptr [eax], 0
// 006541d0  89480c               mov dword ptr [eax + 0xc], ecx
// 006541d3  885020               mov byte ptr [eax + 0x20], dl
// 006541d6  c6402200             mov byte ptr [eax + 0x22], 0
// 006541da  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 006541dd  83c40c               add esp, 0xc
// 006541e0  894824               mov dword ptr [eax + 0x24], ecx
// 006541e3  894748               mov dword ptr [edi + 0x48], eax
// 006541e6  5f                   pop edi
// 006541e7  5e                   pop esi
// 006541e8  5b                   pop ebx
// 006541e9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

// from server: 100% by auto
// roc 2009-06 00592b10  unit: seg_00590000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592b10
//
// 00592b10  53                   push ebx
// 00592b11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00592b15  56                   push esi
// 00592b16  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00592b1a  57                   push edi
// 00592b1b  8b7e04               mov edi, dword ptr [esi + 4]
// 00592b1e  83fb01               cmp ebx, 1
// 00592b21  7418                 je 0x592b3b
// 00592b23  8b06                 mov eax, dword ptr [esi]
// 00592b25  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00592b2c  8b0e                 mov ecx, dword ptr [esi]
// 00592b2e  895918               mov dword ptr [ecx + 0x18], ebx
// 00592b31  8b16                 mov edx, dword ptr [esi]
// 00592b33  8b02                 mov eax, dword ptr [edx]
// 00592b35  56                   push esi
// 00592b36  ffd0                 call eax
// 00592b38  83c404               add esp, 4
// 00592b3b  6a78                 push 0x78
// 00592b3d  53                   push ebx
// 00592b3e  56                   push esi
// 00592b3f  e8ecfbffff           call 0x592730
// 00592b44  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00592b48  8b542428             mov edx, dword ptr [esp + 0x28]
// 00592b4c  894804               mov dword ptr [eax + 4], ecx
// 00592b4f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00592b53  895008               mov dword ptr [eax + 8], edx
// 00592b56  8a542424             mov dl, byte ptr [esp + 0x24]
// 00592b5a  c70000000000         mov dword ptr [eax], 0
// 00592b60  89480c               mov dword ptr [eax + 0xc], ecx
// 00592b63  885020               mov byte ptr [eax + 0x20], dl
// 00592b66  c6402200             mov byte ptr [eax + 0x22], 0
// 00592b6a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00592b6d  83c40c               add esp, 0xc
// 00592b70  894824               mov dword ptr [eax + 0x24], ecx
// 00592b73  894748               mov dword ptr [edi + 0x48], eax
// 00592b76  5f                   pop edi
// 00592b77  5e                   pop esi
// 00592b78  5b                   pop ebx
// 00592b79  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

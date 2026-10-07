// roc 2011-06 00568a70  unit: seg_00560000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568a70
//
// 00568a70  53                   push ebx
// 00568a71  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00568a75  56                   push esi
// 00568a76  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00568a7a  57                   push edi
// 00568a7b  8b7e04               mov edi, dword ptr [esi + 4]
// 00568a7e  83fb01               cmp ebx, 1
// 00568a81  7418                 je 0x568a9b
// 00568a83  8b06                 mov eax, dword ptr [esi]
// 00568a85  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00568a8c  8b0e                 mov ecx, dword ptr [esi]
// 00568a8e  895918               mov dword ptr [ecx + 0x18], ebx
// 00568a91  8b16                 mov edx, dword ptr [esi]
// 00568a93  8b02                 mov eax, dword ptr [edx]
// 00568a95  56                   push esi
// 00568a96  ffd0                 call eax
// 00568a98  83c404               add esp, 4
// 00568a9b  6a78                 push 0x78
// 00568a9d  53                   push ebx
// 00568a9e  56                   push esi
// 00568a9f  e8ecfbffff           call 0x568690
// 00568aa4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00568aa8  8b542428             mov edx, dword ptr [esp + 0x28]
// 00568aac  894804               mov dword ptr [eax + 4], ecx
// 00568aaf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00568ab3  895008               mov dword ptr [eax + 8], edx
// 00568ab6  8a542424             mov dl, byte ptr [esp + 0x24]
// 00568aba  c70000000000         mov dword ptr [eax], 0
// 00568ac0  89480c               mov dword ptr [eax + 0xc], ecx
// 00568ac3  885020               mov byte ptr [eax + 0x20], dl
// 00568ac6  c6402200             mov byte ptr [eax + 0x22], 0
// 00568aca  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00568acd  83c40c               add esp, 0xc
// 00568ad0  894824               mov dword ptr [eax + 0x24], ecx
// 00568ad3  894748               mov dword ptr [edi + 0x48], eax
// 00568ad6  5f                   pop edi
// 00568ad7  5e                   pop esi
// 00568ad8  5b                   pop ebx
// 00568ad9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

// roc 2009-12 00614b20  unit: seg_00610000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614b20
//
// 00614b20  53                   push ebx
// 00614b21  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00614b25  56                   push esi
// 00614b26  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00614b2a  57                   push edi
// 00614b2b  8b7e04               mov edi, dword ptr [esi + 4]
// 00614b2e  83fb01               cmp ebx, 1
// 00614b31  7418                 je 0x614b4b
// 00614b33  8b06                 mov eax, dword ptr [esi]
// 00614b35  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00614b3c  8b0e                 mov ecx, dword ptr [esi]
// 00614b3e  895918               mov dword ptr [ecx + 0x18], ebx
// 00614b41  8b16                 mov edx, dword ptr [esi]
// 00614b43  8b02                 mov eax, dword ptr [edx]
// 00614b45  56                   push esi
// 00614b46  ffd0                 call eax
// 00614b48  83c404               add esp, 4
// 00614b4b  6a78                 push 0x78
// 00614b4d  53                   push ebx
// 00614b4e  56                   push esi
// 00614b4f  e8ecfbffff           call 0x614740
// 00614b54  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00614b58  8b542428             mov edx, dword ptr [esp + 0x28]
// 00614b5c  894804               mov dword ptr [eax + 4], ecx
// 00614b5f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00614b63  895008               mov dword ptr [eax + 8], edx
// 00614b66  8a542424             mov dl, byte ptr [esp + 0x24]
// 00614b6a  c70000000000         mov dword ptr [eax], 0
// 00614b70  89480c               mov dword ptr [eax + 0xc], ecx
// 00614b73  885020               mov byte ptr [eax + 0x20], dl
// 00614b76  c6402200             mov byte ptr [eax + 0x22], 0
// 00614b7a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00614b7d  83c40c               add esp, 0xc
// 00614b80  894824               mov dword ptr [eax + 0x24], ecx
// 00614b83  894748               mov dword ptr [edi + 0x48], eax
// 00614b86  5f                   pop edi
// 00614b87  5e                   pop esi
// 00614b88  5b                   pop ebx
// 00614b89  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

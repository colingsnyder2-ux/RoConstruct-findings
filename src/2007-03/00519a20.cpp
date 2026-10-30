// roc 2007-03 00519a20  unit: seg_00510000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519a20
//
// 00519a20  53                   push ebx
// 00519a21  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00519a25  83fb01               cmp ebx, 1
// 00519a28  56                   push esi
// 00519a29  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00519a2d  57                   push edi
// 00519a2e  8b7e04               mov edi, dword ptr [esi + 4]
// 00519a31  7418                 je 0x519a4b
// 00519a33  8b06                 mov eax, dword ptr [esi]
// 00519a35  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00519a3c  8b0e                 mov ecx, dword ptr [esi]
// 00519a3e  895918               mov dword ptr [ecx + 0x18], ebx
// 00519a41  8b16                 mov edx, dword ptr [esi]
// 00519a43  8b02                 mov eax, dword ptr [edx]
// 00519a45  56                   push esi
// 00519a46  ffd0                 call eax
// 00519a48  83c404               add esp, 4
// 00519a4b  6a78                 push 0x78
// 00519a4d  53                   push ebx
// 00519a4e  56                   push esi
// 00519a4f  e82cfcffff           call 0x519680
// 00519a54  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00519a58  8b542428             mov edx, dword ptr [esp + 0x28]
// 00519a5c  894804               mov dword ptr [eax + 4], ecx
// 00519a5f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00519a63  895008               mov dword ptr [eax + 8], edx
// 00519a66  8a542424             mov dl, byte ptr [esp + 0x24]
// 00519a6a  c70000000000         mov dword ptr [eax], 0
// 00519a70  89480c               mov dword ptr [eax + 0xc], ecx
// 00519a73  885020               mov byte ptr [eax + 0x20], dl
// 00519a76  c6402200             mov byte ptr [eax + 0x22], 0
// 00519a7a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00519a7d  83c40c               add esp, 0xc
// 00519a80  894824               mov dword ptr [eax + 0x24], ecx
// 00519a83  894748               mov dword ptr [edi + 0x48], eax
// 00519a86  5f                   pop edi
// 00519a87  5e                   pop esi
// 00519a88  5b                   pop ebx
// 00519a89  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_barray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

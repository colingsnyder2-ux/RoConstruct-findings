// roc 2007-08 0051f690  unit: seg_00510000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f690
//
// 0051f690  53                   push ebx
// 0051f691  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0051f695  83fb01               cmp ebx, 1
// 0051f698  56                   push esi
// 0051f699  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051f69d  57                   push edi
// 0051f69e  8b7e04               mov edi, dword ptr [esi + 4]
// 0051f6a1  7418                 je 0x51f6bb
// 0051f6a3  8b06                 mov eax, dword ptr [esi]
// 0051f6a5  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0051f6ac  8b0e                 mov ecx, dword ptr [esi]
// 0051f6ae  895918               mov dword ptr [ecx + 0x18], ebx
// 0051f6b1  8b16                 mov edx, dword ptr [esi]
// 0051f6b3  8b02                 mov eax, dword ptr [edx]
// 0051f6b5  56                   push esi
// 0051f6b6  ffd0                 call eax
// 0051f6b8  83c404               add esp, 4
// 0051f6bb  6a78                 push 0x78
// 0051f6bd  53                   push ebx
// 0051f6be  56                   push esi
// 0051f6bf  e89cfcffff           call 0x51f360
// 0051f6c4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051f6c8  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051f6cc  894804               mov dword ptr [eax + 4], ecx
// 0051f6cf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0051f6d3  895008               mov dword ptr [eax + 8], edx
// 0051f6d6  8a542424             mov dl, byte ptr [esp + 0x24]
// 0051f6da  c70000000000         mov dword ptr [eax], 0
// 0051f6e0  89480c               mov dword ptr [eax + 0xc], ecx
// 0051f6e3  885020               mov byte ptr [eax + 0x20], dl
// 0051f6e6  c6402200             mov byte ptr [eax + 0x22], 0
// 0051f6ea  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0051f6ed  83c40c               add esp, 0xc
// 0051f6f0  894824               mov dword ptr [eax + 0x24], ecx
// 0051f6f3  894744               mov dword ptr [edi + 0x44], eax
// 0051f6f6  5f                   pop edi
// 0051f6f7  5e                   pop esi
// 0051f6f8  5b                   pop ebx
// 0051f6f9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_sarray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

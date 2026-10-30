// from server: 100% by auto
// roc 2007-08 0051f700  unit: seg_00510000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f700
//
// 0051f700  53                   push ebx
// 0051f701  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0051f705  83fb01               cmp ebx, 1
// 0051f708  56                   push esi
// 0051f709  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051f70d  57                   push edi
// 0051f70e  8b7e04               mov edi, dword ptr [esi + 4]
// 0051f711  7418                 je 0x51f72b
// 0051f713  8b06                 mov eax, dword ptr [esi]
// 0051f715  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0051f71c  8b0e                 mov ecx, dword ptr [esi]
// 0051f71e  895918               mov dword ptr [ecx + 0x18], ebx
// 0051f721  8b16                 mov edx, dword ptr [esi]
// 0051f723  8b02                 mov eax, dword ptr [edx]
// 0051f725  56                   push esi
// 0051f726  ffd0                 call eax
// 0051f728  83c404               add esp, 4
// 0051f72b  6a78                 push 0x78
// 0051f72d  53                   push ebx
// 0051f72e  56                   push esi
// 0051f72f  e82cfcffff           call 0x51f360
// 0051f734  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051f738  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051f73c  894804               mov dword ptr [eax + 4], ecx
// 0051f73f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0051f743  895008               mov dword ptr [eax + 8], edx
// 0051f746  8a542424             mov dl, byte ptr [esp + 0x24]
// 0051f74a  c70000000000         mov dword ptr [eax], 0
// 0051f750  89480c               mov dword ptr [eax + 0xc], ecx
// 0051f753  885020               mov byte ptr [eax + 0x20], dl
// 0051f756  c6402200             mov byte ptr [eax + 0x22], 0
// 0051f75a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0051f75d  83c40c               add esp, 0xc
// 0051f760  894824               mov dword ptr [eax + 0x24], ecx
// 0051f763  894748               mov dword ptr [edi + 0x48], eax
// 0051f766  5f                   pop edi
// 0051f767  5e                   pop esi
// 0051f768  5b                   pop ebx
// 0051f769  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_barray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

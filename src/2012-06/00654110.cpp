// from server: 100% by auto
// roc 2012-06 00654110  unit: seg_00650000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654110
//
// 00654110  53                   push ebx
// 00654111  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00654115  56                   push esi
// 00654116  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065411a  57                   push edi
// 0065411b  8b7e04               mov edi, dword ptr [esi + 4]
// 0065411e  83fb01               cmp ebx, 1
// 00654121  7418                 je 0x65413b
// 00654123  8b06                 mov eax, dword ptr [esi]
// 00654125  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0065412c  8b0e                 mov ecx, dword ptr [esi]
// 0065412e  895918               mov dword ptr [ecx + 0x18], ebx
// 00654131  8b16                 mov edx, dword ptr [esi]
// 00654133  8b02                 mov eax, dword ptr [edx]
// 00654135  56                   push esi
// 00654136  ffd0                 call eax
// 00654138  83c404               add esp, 4
// 0065413b  6a78                 push 0x78
// 0065413d  53                   push ebx
// 0065413e  56                   push esi
// 0065413f  e85cfcffff           call 0x653da0
// 00654144  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00654148  8b542428             mov edx, dword ptr [esp + 0x28]
// 0065414c  894804               mov dword ptr [eax + 4], ecx
// 0065414f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00654153  895008               mov dword ptr [eax + 8], edx
// 00654156  8a542424             mov dl, byte ptr [esp + 0x24]
// 0065415a  c70000000000         mov dword ptr [eax], 0
// 00654160  89480c               mov dword ptr [eax + 0xc], ecx
// 00654163  885020               mov byte ptr [eax + 0x20], dl
// 00654166  c6402200             mov byte ptr [eax + 0x22], 0
// 0065416a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0065416d  83c40c               add esp, 0xc
// 00654170  894824               mov dword ptr [eax + 0x24], ecx
// 00654173  894744               mov dword ptr [edi + 0x44], eax
// 00654176  5f                   pop edi
// 00654177  5e                   pop esi
// 00654178  5b                   pop ebx
// 00654179  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

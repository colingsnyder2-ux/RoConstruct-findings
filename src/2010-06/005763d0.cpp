// roc 2010-06 005763d0  unit: seg_00570000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005763d0
//
// 005763d0  53                   push ebx
// 005763d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005763d5  56                   push esi
// 005763d6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005763da  57                   push edi
// 005763db  8b7e04               mov edi, dword ptr [esi + 4]
// 005763de  83fb01               cmp ebx, 1
// 005763e1  7418                 je 0x5763fb
// 005763e3  8b06                 mov eax, dword ptr [esi]
// 005763e5  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 005763ec  8b0e                 mov ecx, dword ptr [esi]
// 005763ee  895918               mov dword ptr [ecx + 0x18], ebx
// 005763f1  8b16                 mov edx, dword ptr [esi]
// 005763f3  8b02                 mov eax, dword ptr [edx]
// 005763f5  56                   push esi
// 005763f6  ffd0                 call eax
// 005763f8  83c404               add esp, 4
// 005763fb  6a78                 push 0x78
// 005763fd  53                   push ebx
// 005763fe  56                   push esi
// 005763ff  e85cfcffff           call 0x576060
// 00576404  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00576408  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057640c  894804               mov dword ptr [eax + 4], ecx
// 0057640f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00576413  895008               mov dword ptr [eax + 8], edx
// 00576416  8a542424             mov dl, byte ptr [esp + 0x24]
// 0057641a  c70000000000         mov dword ptr [eax], 0
// 00576420  89480c               mov dword ptr [eax + 0xc], ecx
// 00576423  885020               mov byte ptr [eax + 0x20], dl
// 00576426  c6402200             mov byte ptr [eax + 0x22], 0
// 0057642a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0057642d  83c40c               add esp, 0xc
// 00576430  894824               mov dword ptr [eax + 0x24], ecx
// 00576433  894744               mov dword ptr [edi + 0x44], eax
// 00576436  5f                   pop edi
// 00576437  5e                   pop esi
// 00576438  5b                   pop ebx
// 00576439  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

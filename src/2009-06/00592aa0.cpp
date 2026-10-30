// from server: 100% by auto
// roc 2009-06 00592aa0  unit: seg_00590000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592aa0
//
// 00592aa0  53                   push ebx
// 00592aa1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00592aa5  56                   push esi
// 00592aa6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00592aaa  57                   push edi
// 00592aab  8b7e04               mov edi, dword ptr [esi + 4]
// 00592aae  83fb01               cmp ebx, 1
// 00592ab1  7418                 je 0x592acb
// 00592ab3  8b06                 mov eax, dword ptr [esi]
// 00592ab5  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00592abc  8b0e                 mov ecx, dword ptr [esi]
// 00592abe  895918               mov dword ptr [ecx + 0x18], ebx
// 00592ac1  8b16                 mov edx, dword ptr [esi]
// 00592ac3  8b02                 mov eax, dword ptr [edx]
// 00592ac5  56                   push esi
// 00592ac6  ffd0                 call eax
// 00592ac8  83c404               add esp, 4
// 00592acb  6a78                 push 0x78
// 00592acd  53                   push ebx
// 00592ace  56                   push esi
// 00592acf  e85cfcffff           call 0x592730
// 00592ad4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00592ad8  8b542428             mov edx, dword ptr [esp + 0x28]
// 00592adc  894804               mov dword ptr [eax + 4], ecx
// 00592adf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00592ae3  895008               mov dword ptr [eax + 8], edx
// 00592ae6  8a542424             mov dl, byte ptr [esp + 0x24]
// 00592aea  c70000000000         mov dword ptr [eax], 0
// 00592af0  89480c               mov dword ptr [eax + 0xc], ecx
// 00592af3  885020               mov byte ptr [eax + 0x20], dl
// 00592af6  c6402200             mov byte ptr [eax + 0x22], 0
// 00592afa  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00592afd  83c40c               add esp, 0xc
// 00592b00  894824               mov dword ptr [eax + 0x24], ecx
// 00592b03  894744               mov dword ptr [edi + 0x44], eax
// 00592b06  5f                   pop edi
// 00592b07  5e                   pop esi
// 00592b08  5b                   pop ebx
// 00592b09  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

// from server: 100% by auto
// roc 2011-06 00568a00  unit: seg_00560000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568a00
//
// 00568a00  53                   push ebx
// 00568a01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00568a05  56                   push esi
// 00568a06  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00568a0a  57                   push edi
// 00568a0b  8b7e04               mov edi, dword ptr [esi + 4]
// 00568a0e  83fb01               cmp ebx, 1
// 00568a11  7418                 je 0x568a2b
// 00568a13  8b06                 mov eax, dword ptr [esi]
// 00568a15  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00568a1c  8b0e                 mov ecx, dword ptr [esi]
// 00568a1e  895918               mov dword ptr [ecx + 0x18], ebx
// 00568a21  8b16                 mov edx, dword ptr [esi]
// 00568a23  8b02                 mov eax, dword ptr [edx]
// 00568a25  56                   push esi
// 00568a26  ffd0                 call eax
// 00568a28  83c404               add esp, 4
// 00568a2b  6a78                 push 0x78
// 00568a2d  53                   push ebx
// 00568a2e  56                   push esi
// 00568a2f  e85cfcffff           call 0x568690
// 00568a34  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00568a38  8b542428             mov edx, dword ptr [esp + 0x28]
// 00568a3c  894804               mov dword ptr [eax + 4], ecx
// 00568a3f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00568a43  895008               mov dword ptr [eax + 8], edx
// 00568a46  8a542424             mov dl, byte ptr [esp + 0x24]
// 00568a4a  c70000000000         mov dword ptr [eax], 0
// 00568a50  89480c               mov dword ptr [eax + 0xc], ecx
// 00568a53  885020               mov byte ptr [eax + 0x20], dl
// 00568a56  c6402200             mov byte ptr [eax + 0x22], 0
// 00568a5a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00568a5d  83c40c               add esp, 0xc
// 00568a60  894824               mov dword ptr [eax + 0x24], ecx
// 00568a63  894744               mov dword ptr [edi + 0x44], eax
// 00568a66  5f                   pop edi
// 00568a67  5e                   pop esi
// 00568a68  5b                   pop ebx
// 00568a69  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

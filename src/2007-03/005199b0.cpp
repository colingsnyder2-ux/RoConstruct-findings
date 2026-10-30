// roc 2007-03 005199b0  unit: seg_00510000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005199b0
//
// 005199b0  53                   push ebx
// 005199b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005199b5  83fb01               cmp ebx, 1
// 005199b8  56                   push esi
// 005199b9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005199bd  57                   push edi
// 005199be  8b7e04               mov edi, dword ptr [esi + 4]
// 005199c1  7418                 je 0x5199db
// 005199c3  8b06                 mov eax, dword ptr [esi]
// 005199c5  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 005199cc  8b0e                 mov ecx, dword ptr [esi]
// 005199ce  895918               mov dword ptr [ecx + 0x18], ebx
// 005199d1  8b16                 mov edx, dword ptr [esi]
// 005199d3  8b02                 mov eax, dword ptr [edx]
// 005199d5  56                   push esi
// 005199d6  ffd0                 call eax
// 005199d8  83c404               add esp, 4
// 005199db  6a78                 push 0x78
// 005199dd  53                   push ebx
// 005199de  56                   push esi
// 005199df  e89cfcffff           call 0x519680
// 005199e4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005199e8  8b542428             mov edx, dword ptr [esp + 0x28]
// 005199ec  894804               mov dword ptr [eax + 4], ecx
// 005199ef  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005199f3  895008               mov dword ptr [eax + 8], edx
// 005199f6  8a542424             mov dl, byte ptr [esp + 0x24]
// 005199fa  c70000000000         mov dword ptr [eax], 0
// 00519a00  89480c               mov dword ptr [eax + 0xc], ecx
// 00519a03  885020               mov byte ptr [eax + 0x20], dl
// 00519a06  c6402200             mov byte ptr [eax + 0x22], 0
// 00519a0a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00519a0d  83c40c               add esp, 0xc
// 00519a10  894824               mov dword ptr [eax + 0x24], ecx
// 00519a13  894744               mov dword ptr [edi + 0x44], eax
// 00519a16  5f                   pop edi
// 00519a17  5e                   pop esi
// 00519a18  5b                   pop ebx
// 00519a19  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_sarray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

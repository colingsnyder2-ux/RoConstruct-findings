// roc 2009-12 00614ab0  unit: seg_00610000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614ab0
//
// 00614ab0  53                   push ebx
// 00614ab1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00614ab5  56                   push esi
// 00614ab6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00614aba  57                   push edi
// 00614abb  8b7e04               mov edi, dword ptr [esi + 4]
// 00614abe  83fb01               cmp ebx, 1
// 00614ac1  7418                 je 0x614adb
// 00614ac3  8b06                 mov eax, dword ptr [esi]
// 00614ac5  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00614acc  8b0e                 mov ecx, dword ptr [esi]
// 00614ace  895918               mov dword ptr [ecx + 0x18], ebx
// 00614ad1  8b16                 mov edx, dword ptr [esi]
// 00614ad3  8b02                 mov eax, dword ptr [edx]
// 00614ad5  56                   push esi
// 00614ad6  ffd0                 call eax
// 00614ad8  83c404               add esp, 4
// 00614adb  6a78                 push 0x78
// 00614add  53                   push ebx
// 00614ade  56                   push esi
// 00614adf  e85cfcffff           call 0x614740
// 00614ae4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00614ae8  8b542428             mov edx, dword ptr [esp + 0x28]
// 00614aec  894804               mov dword ptr [eax + 4], ecx
// 00614aef  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00614af3  895008               mov dword ptr [eax + 8], edx
// 00614af6  8a542424             mov dl, byte ptr [esp + 0x24]
// 00614afa  c70000000000         mov dword ptr [eax], 0
// 00614b00  89480c               mov dword ptr [eax + 0xc], ecx
// 00614b03  885020               mov byte ptr [eax + 0x20], dl
// 00614b06  c6402200             mov byte ptr [eax + 0x22], 0
// 00614b0a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00614b0d  83c40c               add esp, 0xc
// 00614b10  894824               mov dword ptr [eax + 0x24], ecx
// 00614b13  894744               mov dword ptr [edi + 0x44], eax
// 00614b16  5f                   pop edi
// 00614b17  5e                   pop esi
// 00614b18  5b                   pop ebx
// 00614b19  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

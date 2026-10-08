// from server: 100% by auto
// roc 2007-08 00527880  unit: G3D::Line  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527880
//
// 00527880  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00527884  53                   push ebx
// 00527885  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00527889  2b03                 sub eax, dword ptr [ebx]
// 0052788b  56                   push esi
// 0052788c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00527890  57                   push edi
// 00527891  8bbe8c010000         mov edi, dword ptr [esi + 0x18c]
// 00527897  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0052789a  3bc1                 cmp eax, ecx
// 0052789c  7602                 jbe 0x5278a0
// 0052789e  8bc1                 mov eax, ecx
// 005278a0  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 005278a6  50                   push eax
// 005278a7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005278af  8b470c               mov eax, dword ptr [edi + 0xc]
// 005278b2  8d542414             lea edx, [esp + 0x14]
// 005278b6  52                   push edx
// 005278b7  8b542424             mov edx, dword ptr [esp + 0x24]
// 005278bb  50                   push eax
// 005278bc  8b442424             mov eax, dword ptr [esp + 0x24]
// 005278c0  52                   push edx
// 005278c1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005278c5  50                   push eax
// 005278c6  8b4104               mov eax, dword ptr [ecx + 4]
// 005278c9  52                   push edx
// 005278ca  56                   push esi
// 005278cb  ffd0                 call eax
// 005278cd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005278d1  8b03                 mov eax, dword ptr [ebx]
// 005278d3  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 005278d9  52                   push edx
// 005278da  8b542440             mov edx, dword ptr [esp + 0x40]
// 005278de  8d0482               lea eax, [edx + eax*4]
// 005278e1  8b570c               mov edx, dword ptr [edi + 0xc]
// 005278e4  50                   push eax
// 005278e5  8b4104               mov eax, dword ptr [ecx + 4]
// 005278e8  52                   push edx
// 005278e9  56                   push esi
// 005278ea  ffd0                 call eax
// 005278ec  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005278f0  010b                 add dword ptr [ebx], ecx
// 005278f2  83c42c               add esp, 0x2c
// 005278f5  5f                   pop edi
// 005278f6  5e                   pop esi
// 005278f7  5b                   pop ebx
// 005278f8  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_1pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c

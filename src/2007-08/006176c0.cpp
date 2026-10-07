// roc 2007-08 006176c0  unit: seg_00610000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006176c0
//
// 006176c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006176c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006176c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006176cc  56                   push esi
// 006176cd  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006176d1  894638               mov dword ptr [esi + 0x38], eax
// 006176d4  b801000000           mov eax, 1
// 006176d9  894604               mov dword ptr [esi + 4], eax
// 006176dc  894608               mov dword ptr [esi + 8], eax
// 006176df  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006176e2  c646442e             mov byte ptr [esi + 0x44], 0x2e
// 006176e6  894e34               mov dword ptr [esi + 0x34], ecx
// 006176e9  c746201f010000       mov dword ptr [esi + 0x20], 0x11f
// 006176f0  c7463000000000       mov dword ptr [esi + 0x30], 0
// 006176f7  895640               mov dword ptr [esi + 0x40], edx
// 006176fa  8b5008               mov edx, dword ptr [eax + 8]
// 006176fd  8b00                 mov eax, dword ptr [eax]
// 006176ff  6a20                 push 0x20
// 00617701  52                   push edx
// 00617702  50                   push eax
// 00617703  51                   push ecx
// 00617704  e8e7c2ffff           call 0x6139f0
// 00617709  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0061770c  8901                 mov dword ptr [ecx], eax
// 0061770e  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00617711  c7420820000000       mov dword ptr [edx + 8], 0x20
// 00617718  8b4638               mov eax, dword ptr [esi + 0x38]
// 0061771b  8b08                 mov ecx, dword ptr [eax]
// 0061771d  8d51ff               lea edx, [ecx - 1]
// 00617720  83c410               add esp, 0x10
// 00617723  85c9                 test ecx, ecx
// 00617725  8910                 mov dword ptr [eax], edx
// 00617727  8b4638               mov eax, dword ptr [esi + 0x38]
// 0061772a  7610                 jbe 0x61773c
// 0061772c  8b4804               mov ecx, dword ptr [eax + 4]
// 0061772f  0fb611               movzx edx, byte ptr [ecx]
// 00617732  83c101               add ecx, 1
// 00617735  894804               mov dword ptr [eax + 4], ecx
// 00617738  8916                 mov dword ptr [esi], edx
// 0061773a  5e                   pop esi
// 0061773b  c3                   ret 
// 0061773c  50                   push eax
// 0061773d  e8aebbffff           call 0x6132f0
// 00617742  83c404               add esp, 4
// 00617745  8906                 mov dword ptr [esi], eax
// 00617747  5e                   pop esi
// 00617748  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_setinput)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c

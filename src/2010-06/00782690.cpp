// roc 2010-06 00782690  unit: seg_00780000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782690
//
// 00782690  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00782694  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00782698  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078269c  56                   push esi
// 0078269d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007826a1  894638               mov dword ptr [esi + 0x38], eax
// 007826a4  b801000000           mov eax, 1
// 007826a9  894604               mov dword ptr [esi + 4], eax
// 007826ac  894608               mov dword ptr [esi + 8], eax
// 007826af  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007826b2  c646442e             mov byte ptr [esi + 0x44], 0x2e
// 007826b6  894e34               mov dword ptr [esi + 0x34], ecx
// 007826b9  c746201f010000       mov dword ptr [esi + 0x20], 0x11f
// 007826c0  c7463000000000       mov dword ptr [esi + 0x30], 0
// 007826c7  895640               mov dword ptr [esi + 0x40], edx
// 007826ca  8b5008               mov edx, dword ptr [eax + 8]
// 007826cd  8b00                 mov eax, dword ptr [eax]
// 007826cf  6a20                 push 0x20
// 007826d1  52                   push edx
// 007826d2  50                   push eax
// 007826d3  51                   push ecx
// 007826d4  e827c3ffff           call 0x77ea00
// 007826d9  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007826dc  8901                 mov dword ptr [ecx], eax
// 007826de  8b563c               mov edx, dword ptr [esi + 0x3c]
// 007826e1  c7420820000000       mov dword ptr [edx + 8], 0x20
// 007826e8  8b4638               mov eax, dword ptr [esi + 0x38]
// 007826eb  8b08                 mov ecx, dword ptr [eax]
// 007826ed  8d51ff               lea edx, [ecx - 1]
// 007826f0  83c410               add esp, 0x10
// 007826f3  8910                 mov dword ptr [eax], edx
// 007826f5  8b4638               mov eax, dword ptr [esi + 0x38]
// 007826f8  85c9                 test ecx, ecx
// 007826fa  760e                 jbe 0x78270a
// 007826fc  8b4804               mov ecx, dword ptr [eax + 4]
// 007826ff  0fb611               movzx edx, byte ptr [ecx]
// 00782702  41                   inc ecx
// 00782703  894804               mov dword ptr [eax + 4], ecx
// 00782706  8916                 mov dword ptr [esi], edx
// 00782708  5e                   pop esi
// 00782709  c3                   ret 
// 0078270a  50                   push eax
// 0078270b  e810bcffff           call 0x77e320
// 00782710  83c404               add esp, 4
// 00782713  8906                 mov dword ptr [esi], eax
// 00782715  5e                   pop esi
// 00782716  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_setinput)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c

// roc 2011-06 008c5320  unit: CXTPDockingPaneSplitterWnd  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5320
//
// 008c5320  83ec0c               sub esp, 0xc
// 008c5323  53                   push ebx
// 008c5324  56                   push esi
// 008c5325  8bf1                 mov esi, ecx
// 008c5327  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c532a  57                   push edi
// 008c532b  83c120               add ecx, 0x20
// 008c532e  e82dcaffff           call 0x8c1d60
// 008c5333  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c5336  83b99000000000       cmp dword ptr [ecx + 0x90], 0
// 008c533d  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 008c5343  8b5828               mov ebx, dword ptr [eax + 0x28]
// 008c5346  747f                 je 0x8c53c7
// 008c5348  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008c534c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008c5350  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008c5354  2bd0                 sub edx, eax
// 008c5356  8954240c             mov dword ptr [esp + 0xc], edx
// 008c535a  db44240c             fild dword ptr [esp + 0xc]
// 008c535e  2bc8                 sub ecx, eax
// 008c5360  894c240c             mov dword ptr [esp + 0xc], ecx
// 008c5364  db44240c             fild dword ptr [esp + 0xc]
// 008c5368  8b565c               mov edx, dword ptr [esi + 0x5c]
// 008c536b  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c536e  8b7a04               mov edi, dword ptr [edx + 4]
// 008c5371  def9                 fdivp st(1)
// 008c5373  037804               add edi, dword ptr [eax + 4]
// 008c5376  8bce                 mov ecx, esi
// 008c5378  03fb                 add edi, ebx
// 008c537a  897c240c             mov dword ptr [esp + 0xc], edi
// 008c537e  dd5c2410             fstp qword ptr [esp + 0x10]
// 008c5382  e897721000           call 0x9cc61e
// 008c5387  db44240c             fild dword ptr [esp + 0xc]
// 008c538b  dc4c2410             fmul qword ptr [esp + 0x10]
// 008c538f  a900004000           test eax, 0x400000
// 008c5394  740f                 je 0x8c53a5
// 008c5396  e89561f4ff           call 0x80b530
// 008c539b  8bc8                 mov ecx, eax
// 008c539d  8bc7                 mov eax, edi
// 008c539f  2bc1                 sub eax, ecx
// 008c53a1  2bc3                 sub eax, ebx
// 008c53a3  eb05                 jmp 0x8c53aa
// 008c53a5  e88661f4ff           call 0x80b530
// 008c53aa  8b5658               mov edx, dword ptr [esi + 0x58]
// 008c53ad  894204               mov dword ptr [edx + 4], eax
// 008c53b0  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c53b3  2b7804               sub edi, dword ptr [eax + 4]
// 008c53b6  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008c53b9  2bfb                 sub edi, ebx
// 008c53bb  897904               mov dword ptr [ecx + 4], edi
// 008c53be  5f                   pop edi
// 008c53bf  5e                   pop esi
// 008c53c0  5b                   pop ebx
// 008c53c1  83c40c               add esp, 0xc
// 008c53c4  c22000               ret 0x20
// 008c53c7  8b442430             mov eax, dword ptr [esp + 0x30]
// 008c53cb  8b565c               mov edx, dword ptr [esi + 0x5c]
// 008c53ce  8b7a08               mov edi, dword ptr [edx + 8]
// 008c53d1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c53d5  8b542438             mov edx, dword ptr [esp + 0x38]
// 008c53d9  2bc8                 sub ecx, eax
// 008c53db  894c240c             mov dword ptr [esp + 0xc], ecx
// 008c53df  db44240c             fild dword ptr [esp + 0xc]
// 008c53e3  2bd0                 sub edx, eax
// 008c53e5  8954240c             mov dword ptr [esp + 0xc], edx
// 008c53e9  db44240c             fild dword ptr [esp + 0xc]
// 008c53ed  55                   push ebp
// 008c53ee  8b6e58               mov ebp, dword ptr [esi + 0x58]
// 008c53f1  037d08               add edi, dword ptr [ebp + 8]
// 008c53f4  def9                 fdivp st(1)
// 008c53f6  03fb                 add edi, ebx
// 008c53f8  897c2414             mov dword ptr [esp + 0x14], edi
// 008c53fc  da4c2414             fimul dword ptr [esp + 0x14]
// 008c5400  e82b61f4ff           call 0x80b530
// 008c5405  894508               mov dword ptr [ebp + 8], eax
// 008c5408  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c540b  2b7808               sub edi, dword ptr [eax + 8]
// 008c540e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008c5411  2bfb                 sub edi, ebx
// 008c5413  5d                   pop ebp
// 008c5414  897908               mov dword ptr [ecx + 8], edi
// 008c5417  5f                   pop edi
// 008c5418  5e                   pop esi
// 008c5419  5b                   pop ebx
// 008c541a  83c40c               add esp, 0xc
// 008c541d  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Reposition@CXTPDockingPaneSplitterWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp

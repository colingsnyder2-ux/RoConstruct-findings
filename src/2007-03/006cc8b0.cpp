// roc 2007-03 006cc8b0  unit: seg_006c0000  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cc8b0
//
// 006cc8b0  51                   push ecx
// 006cc8b1  53                   push ebx
// 006cc8b2  56                   push esi
// 006cc8b3  8bf1                 mov esi, ecx
// 006cc8b5  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 006cc8b8  57                   push edi
// 006cc8b9  83c120               add ecx, 0x20
// 006cc8bc  e85fccffff           call 0x6c9520
// 006cc8c1  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 006cc8c4  83b99000000000       cmp dword ptr [ecx + 0x90], 0
// 006cc8cb  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 006cc8d1  8b5828               mov ebx, dword ptr [eax + 0x28]
// 006cc8d4  747d                 je 0x6cc953
// 006cc8d6  8b442424             mov eax, dword ptr [esp + 0x24]
// 006cc8da  8b542414             mov edx, dword ptr [esp + 0x14]
// 006cc8de  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006cc8e2  2bd0                 sub edx, eax
// 006cc8e4  2bc8                 sub ecx, eax
// 006cc8e6  89542414             mov dword ptr [esp + 0x14], edx
// 006cc8ea  db442414             fild dword ptr [esp + 0x14]
// 006cc8ee  894c2424             mov dword ptr [esp + 0x24], ecx
// 006cc8f2  db442424             fild dword ptr [esp + 0x24]
// 006cc8f6  8b565c               mov edx, dword ptr [esi + 0x5c]
// 006cc8f9  8b4658               mov eax, dword ptr [esi + 0x58]
// 006cc8fc  8b7a04               mov edi, dword ptr [edx + 4]
// 006cc8ff  def9                 fdivp st(1)
// 006cc901  037804               add edi, dword ptr [eax + 4]
// 006cc904  8bce                 mov ecx, esi
// 006cc906  03fb                 add edi, ebx
// 006cc908  897c2424             mov dword ptr [esp + 0x24], edi
// 006cc90c  dd5c2414             fstp qword ptr [esp + 0x14]
// 006cc910  e871e10600           call 0x73aa86
// 006cc915  db442424             fild dword ptr [esp + 0x24]
// 006cc919  a900004000           test eax, 0x400000
// 006cc91e  dc4c2414             fmul qword ptr [esp + 0x14]
// 006cc922  740f                 je 0x6cc933
// 006cc924  e8d728f5ff           call 0x61f200
// 006cc929  8bc8                 mov ecx, eax
// 006cc92b  8bc7                 mov eax, edi
// 006cc92d  2bc1                 sub eax, ecx
// 006cc92f  2bc3                 sub eax, ebx
// 006cc931  eb05                 jmp 0x6cc938
// 006cc933  e8c828f5ff           call 0x61f200
// 006cc938  8b5658               mov edx, dword ptr [esi + 0x58]
// 006cc93b  894204               mov dword ptr [edx + 4], eax
// 006cc93e  8b4658               mov eax, dword ptr [esi + 0x58]
// 006cc941  2b7804               sub edi, dword ptr [eax + 4]
// 006cc944  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006cc947  2bfb                 sub edi, ebx
// 006cc949  897904               mov dword ptr [ecx + 4], edi
// 006cc94c  5f                   pop edi
// 006cc94d  5e                   pop esi
// 006cc94e  5b                   pop ebx
// 006cc94f  59                   pop ecx
// 006cc950  c22000               ret 0x20
// 006cc953  8b565c               mov edx, dword ptr [esi + 0x5c]
// 006cc956  8b7a08               mov edi, dword ptr [edx + 8]
// 006cc959  8b442428             mov eax, dword ptr [esp + 0x28]
// 006cc95d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006cc961  8b542430             mov edx, dword ptr [esp + 0x30]
// 006cc965  2bc8                 sub ecx, eax
// 006cc967  2bd0                 sub edx, eax
// 006cc969  894c2414             mov dword ptr [esp + 0x14], ecx
// 006cc96d  db442414             fild dword ptr [esp + 0x14]
// 006cc971  89542424             mov dword ptr [esp + 0x24], edx
// 006cc975  db442424             fild dword ptr [esp + 0x24]
// 006cc979  55                   push ebp
// 006cc97a  8b6e58               mov ebp, dword ptr [esi + 0x58]
// 006cc97d  03fb                 add edi, ebx
// 006cc97f  def9                 fdivp st(1)
// 006cc981  037d08               add edi, dword ptr [ebp + 8]
// 006cc984  897c2410             mov dword ptr [esp + 0x10], edi
// 006cc988  da4c2410             fimul dword ptr [esp + 0x10]
// 006cc98c  e86f28f5ff           call 0x61f200
// 006cc991  894508               mov dword ptr [ebp + 8], eax
// 006cc994  8b4658               mov eax, dword ptr [esi + 0x58]
// 006cc997  2b7808               sub edi, dword ptr [eax + 8]
// 006cc99a  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006cc99d  2bfb                 sub edi, ebx
// 006cc99f  5d                   pop ebp
// 006cc9a0  897908               mov dword ptr [ecx + 8], edi
// 006cc9a3  5f                   pop edi
// 006cc9a4  5e                   pop esi
// 006cc9a5  5b                   pop ebx
// 006cc9a6  59                   pop ecx
// 006cc9a7  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Reposition@CXTPDockingPaneSplitterWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp

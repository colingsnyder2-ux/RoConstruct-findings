// from server: 100% by auto
// roc 2007-08 006e3970  unit: CXTPDockingPaneSplitterWnd  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3970
//
// 006e3970  51                   push ecx
// 006e3971  53                   push ebx
// 006e3972  56                   push esi
// 006e3973  8bf1                 mov esi, ecx
// 006e3975  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 006e3978  57                   push edi
// 006e3979  83c120               add ecx, 0x20
// 006e397c  e8bfcbffff           call 0x6e0540
// 006e3981  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 006e3984  83b99000000000       cmp dword ptr [ecx + 0x90], 0
// 006e398b  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 006e3991  8b5828               mov ebx, dword ptr [eax + 0x28]
// 006e3994  747d                 je 0x6e3a13
// 006e3996  8b442424             mov eax, dword ptr [esp + 0x24]
// 006e399a  8b542414             mov edx, dword ptr [esp + 0x14]
// 006e399e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006e39a2  2bd0                 sub edx, eax
// 006e39a4  2bc8                 sub ecx, eax
// 006e39a6  89542414             mov dword ptr [esp + 0x14], edx
// 006e39aa  db442414             fild dword ptr [esp + 0x14]
// 006e39ae  894c2424             mov dword ptr [esp + 0x24], ecx
// 006e39b2  db442424             fild dword ptr [esp + 0x24]
// 006e39b6  8b565c               mov edx, dword ptr [esi + 0x5c]
// 006e39b9  8b4658               mov eax, dword ptr [esi + 0x58]
// 006e39bc  8b7a04               mov edi, dword ptr [edx + 4]
// 006e39bf  def9                 fdivp st(1)
// 006e39c1  037804               add edi, dword ptr [eax + 4]
// 006e39c4  8bce                 mov ecx, esi
// 006e39c6  03fb                 add edi, ebx
// 006e39c8  897c2424             mov dword ptr [esp + 0x24], edi
// 006e39cc  dd5c2414             fstp qword ptr [esp + 0x14]
// 006e39d0  e84d490500           call 0x738322
// 006e39d5  db442424             fild dword ptr [esp + 0x24]
// 006e39d9  a900004000           test eax, 0x400000
// 006e39de  dc4c2414             fmul qword ptr [esp + 0x14]
// 006e39e2  740f                 je 0x6e39f3
// 006e39e4  e877d3f4ff           call 0x630d60
// 006e39e9  8bc8                 mov ecx, eax
// 006e39eb  8bc7                 mov eax, edi
// 006e39ed  2bc1                 sub eax, ecx
// 006e39ef  2bc3                 sub eax, ebx
// 006e39f1  eb05                 jmp 0x6e39f8
// 006e39f3  e868d3f4ff           call 0x630d60
// 006e39f8  8b5658               mov edx, dword ptr [esi + 0x58]
// 006e39fb  894204               mov dword ptr [edx + 4], eax
// 006e39fe  8b4658               mov eax, dword ptr [esi + 0x58]
// 006e3a01  2b7804               sub edi, dword ptr [eax + 4]
// 006e3a04  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006e3a07  2bfb                 sub edi, ebx
// 006e3a09  897904               mov dword ptr [ecx + 4], edi
// 006e3a0c  5f                   pop edi
// 006e3a0d  5e                   pop esi
// 006e3a0e  5b                   pop ebx
// 006e3a0f  59                   pop ecx
// 006e3a10  c22000               ret 0x20
// 006e3a13  8b565c               mov edx, dword ptr [esi + 0x5c]
// 006e3a16  8b7a08               mov edi, dword ptr [edx + 8]
// 006e3a19  8b442428             mov eax, dword ptr [esp + 0x28]
// 006e3a1d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e3a21  8b542430             mov edx, dword ptr [esp + 0x30]
// 006e3a25  2bc8                 sub ecx, eax
// 006e3a27  2bd0                 sub edx, eax
// 006e3a29  894c2414             mov dword ptr [esp + 0x14], ecx
// 006e3a2d  db442414             fild dword ptr [esp + 0x14]
// 006e3a31  89542424             mov dword ptr [esp + 0x24], edx
// 006e3a35  db442424             fild dword ptr [esp + 0x24]
// 006e3a39  55                   push ebp
// 006e3a3a  8b6e58               mov ebp, dword ptr [esi + 0x58]
// 006e3a3d  03fb                 add edi, ebx
// 006e3a3f  def9                 fdivp st(1)
// 006e3a41  037d08               add edi, dword ptr [ebp + 8]
// 006e3a44  897c2410             mov dword ptr [esp + 0x10], edi
// 006e3a48  da4c2410             fimul dword ptr [esp + 0x10]
// 006e3a4c  e80fd3f4ff           call 0x630d60
// 006e3a51  894508               mov dword ptr [ebp + 8], eax
// 006e3a54  8b4658               mov eax, dword ptr [esi + 0x58]
// 006e3a57  2b7808               sub edi, dword ptr [eax + 8]
// 006e3a5a  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006e3a5d  2bfb                 sub edi, ebx
// 006e3a5f  5d                   pop ebp
// 006e3a60  897908               mov dword ptr [ecx + 8], edi
// 006e3a63  5f                   pop edi
// 006e3a64  5e                   pop esi
// 006e3a65  5b                   pop ebx
// 006e3a66  59                   pop ecx
// 006e3a67  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Reposition@CXTPDockingPaneSplitterWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp

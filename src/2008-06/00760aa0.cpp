// roc 2008-06 00760aa0  unit: CXTPDockingPaneSplitterWnd  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760aa0
//
// 00760aa0  83ec0c               sub esp, 0xc
// 00760aa3  53                   push ebx
// 00760aa4  56                   push esi
// 00760aa5  8bf1                 mov esi, ecx
// 00760aa7  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00760aaa  57                   push edi
// 00760aab  83c120               add ecx, 0x20
// 00760aae  e8edc9ffff           call 0x75d4a0
// 00760ab3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00760ab6  83b99000000000       cmp dword ptr [ecx + 0x90], 0
// 00760abd  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 00760ac3  8b5828               mov ebx, dword ptr [eax + 0x28]
// 00760ac6  747f                 je 0x760b47
// 00760ac8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00760acc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00760ad0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00760ad4  2bd0                 sub edx, eax
// 00760ad6  8954240c             mov dword ptr [esp + 0xc], edx
// 00760ada  db44240c             fild dword ptr [esp + 0xc]
// 00760ade  2bc8                 sub ecx, eax
// 00760ae0  894c240c             mov dword ptr [esp + 0xc], ecx
// 00760ae4  db44240c             fild dword ptr [esp + 0xc]
// 00760ae8  8b565c               mov edx, dword ptr [esi + 0x5c]
// 00760aeb  8b4658               mov eax, dword ptr [esi + 0x58]
// 00760aee  8b7a04               mov edi, dword ptr [edx + 4]
// 00760af1  def9                 fdivp st(1)
// 00760af3  037804               add edi, dword ptr [eax + 4]
// 00760af6  8bce                 mov ecx, esi
// 00760af8  03fb                 add edi, ebx
// 00760afa  897c240c             mov dword ptr [esp + 0xc], edi
// 00760afe  dd5c2410             fstp qword ptr [esp + 0x10]
// 00760b02  e891b40500           call 0x7bbf98
// 00760b07  db44240c             fild dword ptr [esp + 0xc]
// 00760b0b  dc4c2410             fmul qword ptr [esp + 0x10]
// 00760b0f  a900004000           test eax, 0x400000
// 00760b14  740f                 je 0x760b25
// 00760b16  e8d50cf4ff           call 0x6a17f0
// 00760b1b  8bc8                 mov ecx, eax
// 00760b1d  8bc7                 mov eax, edi
// 00760b1f  2bc1                 sub eax, ecx
// 00760b21  2bc3                 sub eax, ebx
// 00760b23  eb05                 jmp 0x760b2a
// 00760b25  e8c60cf4ff           call 0x6a17f0
// 00760b2a  8b5658               mov edx, dword ptr [esi + 0x58]
// 00760b2d  894204               mov dword ptr [edx + 4], eax
// 00760b30  8b4658               mov eax, dword ptr [esi + 0x58]
// 00760b33  2b7804               sub edi, dword ptr [eax + 4]
// 00760b36  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00760b39  2bfb                 sub edi, ebx
// 00760b3b  897904               mov dword ptr [ecx + 4], edi
// 00760b3e  5f                   pop edi
// 00760b3f  5e                   pop esi
// 00760b40  5b                   pop ebx
// 00760b41  83c40c               add esp, 0xc
// 00760b44  c22000               ret 0x20
// 00760b47  8b442430             mov eax, dword ptr [esp + 0x30]
// 00760b4b  8b565c               mov edx, dword ptr [esi + 0x5c]
// 00760b4e  8b7a08               mov edi, dword ptr [edx + 8]
// 00760b51  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00760b55  8b542438             mov edx, dword ptr [esp + 0x38]
// 00760b59  2bc8                 sub ecx, eax
// 00760b5b  894c240c             mov dword ptr [esp + 0xc], ecx
// 00760b5f  db44240c             fild dword ptr [esp + 0xc]
// 00760b63  2bd0                 sub edx, eax
// 00760b65  8954240c             mov dword ptr [esp + 0xc], edx
// 00760b69  db44240c             fild dword ptr [esp + 0xc]
// 00760b6d  55                   push ebp
// 00760b6e  8b6e58               mov ebp, dword ptr [esi + 0x58]
// 00760b71  037d08               add edi, dword ptr [ebp + 8]
// 00760b74  def9                 fdivp st(1)
// 00760b76  03fb                 add edi, ebx
// 00760b78  897c2414             mov dword ptr [esp + 0x14], edi
// 00760b7c  da4c2414             fimul dword ptr [esp + 0x14]
// 00760b80  e86b0cf4ff           call 0x6a17f0
// 00760b85  894508               mov dword ptr [ebp + 8], eax
// 00760b88  8b4658               mov eax, dword ptr [esi + 0x58]
// 00760b8b  2b7808               sub edi, dword ptr [eax + 8]
// 00760b8e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00760b91  2bfb                 sub edi, ebx
// 00760b93  5d                   pop ebp
// 00760b94  897908               mov dword ptr [ecx + 8], edi
// 00760b97  5f                   pop edi
// 00760b98  5e                   pop esi
// 00760b99  5b                   pop ebx
// 00760b9a  83c40c               add esp, 0xc
// 00760b9d  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Reposition@CXTPDockingPaneSplitterWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp

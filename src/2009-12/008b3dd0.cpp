// roc 2009-12 008b3dd0  unit: CXTPDockingPaneSplitterWnd  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3dd0
//
// 008b3dd0  83ec0c               sub esp, 0xc
// 008b3dd3  53                   push ebx
// 008b3dd4  56                   push esi
// 008b3dd5  8bf1                 mov esi, ecx
// 008b3dd7  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008b3dda  57                   push edi
// 008b3ddb  83c120               add ecx, 0x20
// 008b3dde  e85dcaffff           call 0x8b0840
// 008b3de3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008b3de6  83b99000000000       cmp dword ptr [ecx + 0x90], 0
// 008b3ded  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 008b3df3  8b5828               mov ebx, dword ptr [eax + 0x28]
// 008b3df6  747f                 je 0x8b3e77
// 008b3df8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b3dfc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008b3e00  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008b3e04  2bd0                 sub edx, eax
// 008b3e06  8954240c             mov dword ptr [esp + 0xc], edx
// 008b3e0a  db44240c             fild dword ptr [esp + 0xc]
// 008b3e0e  2bc8                 sub ecx, eax
// 008b3e10  894c240c             mov dword ptr [esp + 0xc], ecx
// 008b3e14  db44240c             fild dword ptr [esp + 0xc]
// 008b3e18  8b565c               mov edx, dword ptr [esi + 0x5c]
// 008b3e1b  8b4658               mov eax, dword ptr [esi + 0x58]
// 008b3e1e  8b7a04               mov edi, dword ptr [edx + 4]
// 008b3e21  def9                 fdivp st(1)
// 008b3e23  037804               add edi, dword ptr [eax + 4]
// 008b3e26  8bce                 mov ecx, esi
// 008b3e28  03fb                 add edi, ebx
// 008b3e2a  897c240c             mov dword ptr [esp + 0xc], edi
// 008b3e2e  dd5c2410             fstp qword ptr [esp + 0x10]
// 008b3e32  e841260700           call 0x926478
// 008b3e37  db44240c             fild dword ptr [esp + 0xc]
// 008b3e3b  dc4c2410             fmul qword ptr [esp + 0x10]
// 008b3e3f  a900004000           test eax, 0x400000
// 008b3e44  740f                 je 0x8b3e55
// 008b3e46  e8a50ef4ff           call 0x7f4cf0
// 008b3e4b  8bc8                 mov ecx, eax
// 008b3e4d  8bc7                 mov eax, edi
// 008b3e4f  2bc1                 sub eax, ecx
// 008b3e51  2bc3                 sub eax, ebx
// 008b3e53  eb05                 jmp 0x8b3e5a
// 008b3e55  e8960ef4ff           call 0x7f4cf0
// 008b3e5a  8b5658               mov edx, dword ptr [esi + 0x58]
// 008b3e5d  894204               mov dword ptr [edx + 4], eax
// 008b3e60  8b4658               mov eax, dword ptr [esi + 0x58]
// 008b3e63  2b7804               sub edi, dword ptr [eax + 4]
// 008b3e66  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008b3e69  2bfb                 sub edi, ebx
// 008b3e6b  897904               mov dword ptr [ecx + 4], edi
// 008b3e6e  5f                   pop edi
// 008b3e6f  5e                   pop esi
// 008b3e70  5b                   pop ebx
// 008b3e71  83c40c               add esp, 0xc
// 008b3e74  c22000               ret 0x20
// 008b3e77  8b442430             mov eax, dword ptr [esp + 0x30]
// 008b3e7b  8b565c               mov edx, dword ptr [esi + 0x5c]
// 008b3e7e  8b7a08               mov edi, dword ptr [edx + 8]
// 008b3e81  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b3e85  8b542438             mov edx, dword ptr [esp + 0x38]
// 008b3e89  2bc8                 sub ecx, eax
// 008b3e8b  894c240c             mov dword ptr [esp + 0xc], ecx
// 008b3e8f  db44240c             fild dword ptr [esp + 0xc]
// 008b3e93  2bd0                 sub edx, eax
// 008b3e95  8954240c             mov dword ptr [esp + 0xc], edx
// 008b3e99  db44240c             fild dword ptr [esp + 0xc]
// 008b3e9d  55                   push ebp
// 008b3e9e  8b6e58               mov ebp, dword ptr [esi + 0x58]
// 008b3ea1  037d08               add edi, dword ptr [ebp + 8]
// 008b3ea4  def9                 fdivp st(1)
// 008b3ea6  03fb                 add edi, ebx
// 008b3ea8  897c2414             mov dword ptr [esp + 0x14], edi
// 008b3eac  da4c2414             fimul dword ptr [esp + 0x14]
// 008b3eb0  e83b0ef4ff           call 0x7f4cf0
// 008b3eb5  894508               mov dword ptr [ebp + 8], eax
// 008b3eb8  8b4658               mov eax, dword ptr [esi + 0x58]
// 008b3ebb  2b7808               sub edi, dword ptr [eax + 8]
// 008b3ebe  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008b3ec1  2bfb                 sub edi, ebx
// 008b3ec3  5d                   pop ebp
// 008b3ec4  897908               mov dword ptr [ecx + 8], edi
// 008b3ec7  5f                   pop edi
// 008b3ec8  5e                   pop esi
// 008b3ec9  5b                   pop ebx
// 008b3eca  83c40c               add esp, 0xc
// 008b3ecd  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Reposition@CXTPDockingPaneSplitterWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp

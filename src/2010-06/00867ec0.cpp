// roc 2010-06 00867ec0  unit: CXTPDockingPaneSplitterWnd  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00867ec0
//
// 00867ec0  83ec0c               sub esp, 0xc
// 00867ec3  53                   push ebx
// 00867ec4  56                   push esi
// 00867ec5  8bf1                 mov esi, ecx
// 00867ec7  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00867eca  57                   push edi
// 00867ecb  83c120               add ecx, 0x20
// 00867ece  e83dcaffff           call 0x864910
// 00867ed3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00867ed6  83b99000000000       cmp dword ptr [ecx + 0x90], 0
// 00867edd  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 00867ee3  8b5828               mov ebx, dword ptr [eax + 0x28]
// 00867ee6  747f                 je 0x867f67
// 00867ee8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00867eec  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00867ef0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00867ef4  2bd0                 sub edx, eax
// 00867ef6  8954240c             mov dword ptr [esp + 0xc], edx
// 00867efa  db44240c             fild dword ptr [esp + 0xc]
// 00867efe  2bc8                 sub ecx, eax
// 00867f00  894c240c             mov dword ptr [esp + 0xc], ecx
// 00867f04  db44240c             fild dword ptr [esp + 0xc]
// 00867f08  8b565c               mov edx, dword ptr [esi + 0x5c]
// 00867f0b  8b4658               mov eax, dword ptr [esi + 0x58]
// 00867f0e  8b7a04               mov edi, dword ptr [edx + 4]
// 00867f11  def9                 fdivp st(1)
// 00867f13  037804               add edi, dword ptr [eax + 4]
// 00867f16  8bce                 mov ecx, esi
// 00867f18  03fb                 add edi, ebx
// 00867f1a  897c240c             mov dword ptr [esp + 0xc], edi
// 00867f1e  dd5c2410             fstp qword ptr [esp + 0x10]
// 00867f22  e8bd4e1100           call 0x97cde4
// 00867f27  db44240c             fild dword ptr [esp + 0xc]
// 00867f2b  dc4c2410             fmul qword ptr [esp + 0x10]
// 00867f2f  a900004000           test eax, 0x400000
// 00867f34  740f                 je 0x867f45
// 00867f36  e8f50ef4ff           call 0x7a8e30
// 00867f3b  8bc8                 mov ecx, eax
// 00867f3d  8bc7                 mov eax, edi
// 00867f3f  2bc1                 sub eax, ecx
// 00867f41  2bc3                 sub eax, ebx
// 00867f43  eb05                 jmp 0x867f4a
// 00867f45  e8e60ef4ff           call 0x7a8e30
// 00867f4a  8b5658               mov edx, dword ptr [esi + 0x58]
// 00867f4d  894204               mov dword ptr [edx + 4], eax
// 00867f50  8b4658               mov eax, dword ptr [esi + 0x58]
// 00867f53  2b7804               sub edi, dword ptr [eax + 4]
// 00867f56  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00867f59  2bfb                 sub edi, ebx
// 00867f5b  897904               mov dword ptr [ecx + 4], edi
// 00867f5e  5f                   pop edi
// 00867f5f  5e                   pop esi
// 00867f60  5b                   pop ebx
// 00867f61  83c40c               add esp, 0xc
// 00867f64  c22000               ret 0x20
// 00867f67  8b442430             mov eax, dword ptr [esp + 0x30]
// 00867f6b  8b565c               mov edx, dword ptr [esi + 0x5c]
// 00867f6e  8b7a08               mov edi, dword ptr [edx + 8]
// 00867f71  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00867f75  8b542438             mov edx, dword ptr [esp + 0x38]
// 00867f79  2bc8                 sub ecx, eax
// 00867f7b  894c240c             mov dword ptr [esp + 0xc], ecx
// 00867f7f  db44240c             fild dword ptr [esp + 0xc]
// 00867f83  2bd0                 sub edx, eax
// 00867f85  8954240c             mov dword ptr [esp + 0xc], edx
// 00867f89  db44240c             fild dword ptr [esp + 0xc]
// 00867f8d  55                   push ebp
// 00867f8e  8b6e58               mov ebp, dword ptr [esi + 0x58]
// 00867f91  037d08               add edi, dword ptr [ebp + 8]
// 00867f94  def9                 fdivp st(1)
// 00867f96  03fb                 add edi, ebx
// 00867f98  897c2414             mov dword ptr [esp + 0x14], edi
// 00867f9c  da4c2414             fimul dword ptr [esp + 0x14]
// 00867fa0  e88b0ef4ff           call 0x7a8e30
// 00867fa5  894508               mov dword ptr [ebp + 8], eax
// 00867fa8  8b4658               mov eax, dword ptr [esi + 0x58]
// 00867fab  2b7808               sub edi, dword ptr [eax + 8]
// 00867fae  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00867fb1  2bfb                 sub edi, ebx
// 00867fb3  5d                   pop ebp
// 00867fb4  897908               mov dword ptr [ecx + 8], edi
// 00867fb7  5f                   pop edi
// 00867fb8  5e                   pop esi
// 00867fb9  5b                   pop ebx
// 00867fba  83c40c               add esp, 0xc
// 00867fbd  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Reposition@CXTPDockingPaneSplitterWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp

// roc 2012-06 00a3d740  unit: CXTPDockingPaneSplitterWnd  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d740
//
// 00a3d740  83ec0c               sub esp, 0xc
// 00a3d743  53                   push ebx
// 00a3d744  56                   push esi
// 00a3d745  8bf1                 mov esi, ecx
// 00a3d747  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a3d74a  57                   push edi
// 00a3d74b  83c120               add ecx, 0x20
// 00a3d74e  e81dcaffff           call 0xa3a170
// 00a3d753  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a3d756  83b99000000000       cmp dword ptr [ecx + 0x90], 0
// 00a3d75d  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 00a3d763  8b5828               mov ebx, dword ptr [eax + 0x28]
// 00a3d766  747f                 je 0xa3d7e7
// 00a3d768  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a3d76c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a3d770  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a3d774  2bd0                 sub edx, eax
// 00a3d776  8954240c             mov dword ptr [esp + 0xc], edx
// 00a3d77a  db44240c             fild dword ptr [esp + 0xc]
// 00a3d77e  2bc8                 sub ecx, eax
// 00a3d780  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a3d784  db44240c             fild dword ptr [esp + 0xc]
// 00a3d788  8b565c               mov edx, dword ptr [esi + 0x5c]
// 00a3d78b  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a3d78e  8b7a04               mov edi, dword ptr [edx + 4]
// 00a3d791  def9                 fdivp st(1)
// 00a3d793  037804               add edi, dword ptr [eax + 4]
// 00a3d796  8bce                 mov ecx, esi
// 00a3d798  03fb                 add edi, ebx
// 00a3d79a  897c240c             mov dword ptr [esp + 0xc], edi
// 00a3d79e  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a3d7a2  e831be0500           call 0xa995d8
// 00a3d7a7  db44240c             fild dword ptr [esp + 0xc]
// 00a3d7ab  dc4c2410             fmul qword ptr [esp + 0x10]
// 00a3d7af  a900004000           test eax, 0x400000
// 00a3d7b4  740f                 je 0xa3d7c5
// 00a3d7b6  e8f55df4ff           call 0x9835b0
// 00a3d7bb  8bc8                 mov ecx, eax
// 00a3d7bd  8bc7                 mov eax, edi
// 00a3d7bf  2bc1                 sub eax, ecx
// 00a3d7c1  2bc3                 sub eax, ebx
// 00a3d7c3  eb05                 jmp 0xa3d7ca
// 00a3d7c5  e8e65df4ff           call 0x9835b0
// 00a3d7ca  8b5658               mov edx, dword ptr [esi + 0x58]
// 00a3d7cd  894204               mov dword ptr [edx + 4], eax
// 00a3d7d0  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a3d7d3  2b7804               sub edi, dword ptr [eax + 4]
// 00a3d7d6  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00a3d7d9  2bfb                 sub edi, ebx
// 00a3d7db  897904               mov dword ptr [ecx + 4], edi
// 00a3d7de  5f                   pop edi
// 00a3d7df  5e                   pop esi
// 00a3d7e0  5b                   pop ebx
// 00a3d7e1  83c40c               add esp, 0xc
// 00a3d7e4  c22000               ret 0x20
// 00a3d7e7  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a3d7eb  8b565c               mov edx, dword ptr [esi + 0x5c]
// 00a3d7ee  8b7a08               mov edi, dword ptr [edx + 8]
// 00a3d7f1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a3d7f5  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a3d7f9  2bc8                 sub ecx, eax
// 00a3d7fb  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a3d7ff  db44240c             fild dword ptr [esp + 0xc]
// 00a3d803  2bd0                 sub edx, eax
// 00a3d805  8954240c             mov dword ptr [esp + 0xc], edx
// 00a3d809  db44240c             fild dword ptr [esp + 0xc]
// 00a3d80d  55                   push ebp
// 00a3d80e  8b6e58               mov ebp, dword ptr [esi + 0x58]
// 00a3d811  037d08               add edi, dword ptr [ebp + 8]
// 00a3d814  def9                 fdivp st(1)
// 00a3d816  03fb                 add edi, ebx
// 00a3d818  897c2414             mov dword ptr [esp + 0x14], edi
// 00a3d81c  da4c2414             fimul dword ptr [esp + 0x14]
// 00a3d820  e88b5df4ff           call 0x9835b0
// 00a3d825  894508               mov dword ptr [ebp + 8], eax
// 00a3d828  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a3d82b  2b7808               sub edi, dword ptr [eax + 8]
// 00a3d82e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00a3d831  2bfb                 sub edi, ebx
// 00a3d833  5d                   pop ebp
// 00a3d834  897908               mov dword ptr [ecx + 8], edi
// 00a3d837  5f                   pop edi
// 00a3d838  5e                   pop esi
// 00a3d839  5b                   pop ebx
// 00a3d83a  83c40c               add esp, 0xc
// 00a3d83d  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Reposition@CXTPDockingPaneSplitterWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp

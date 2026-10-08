// roc 2009-06 007d92a0  unit: CXTPDockingPaneSplitterWnd  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d92a0
//
// 007d92a0  83ec0c               sub esp, 0xc
// 007d92a3  53                   push ebx
// 007d92a4  56                   push esi
// 007d92a5  8bf1                 mov esi, ecx
// 007d92a7  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 007d92aa  57                   push edi
// 007d92ab  83c120               add ecx, 0x20
// 007d92ae  e84dcaffff           call 0x7d5d00
// 007d92b3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 007d92b6  83b99000000000       cmp dword ptr [ecx + 0x90], 0
// 007d92bd  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 007d92c3  8b5828               mov ebx, dword ptr [eax + 0x28]
// 007d92c6  747f                 je 0x7d9347
// 007d92c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007d92cc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007d92d0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007d92d4  2bd0                 sub edx, eax
// 007d92d6  8954240c             mov dword ptr [esp + 0xc], edx
// 007d92da  db44240c             fild dword ptr [esp + 0xc]
// 007d92de  2bc8                 sub ecx, eax
// 007d92e0  894c240c             mov dword ptr [esp + 0xc], ecx
// 007d92e4  db44240c             fild dword ptr [esp + 0xc]
// 007d92e8  8b565c               mov edx, dword ptr [esi + 0x5c]
// 007d92eb  8b4658               mov eax, dword ptr [esi + 0x58]
// 007d92ee  8b7a04               mov edi, dword ptr [edx + 4]
// 007d92f1  def9                 fdivp st(1)
// 007d92f3  037804               add edi, dword ptr [eax + 4]
// 007d92f6  8bce                 mov ecx, esi
// 007d92f8  03fb                 add edi, ebx
// 007d92fa  897c240c             mov dword ptr [esp + 0xc], edi
// 007d92fe  dd5c2410             fstp qword ptr [esp + 0x10]
// 007d9302  e8db2b0700           call 0x84bee2
// 007d9307  db44240c             fild dword ptr [esp + 0xc]
// 007d930b  dc4c2410             fmul qword ptr [esp + 0x10]
// 007d930f  a900004000           test eax, 0x400000
// 007d9314  740f                 je 0x7d9325
// 007d9316  e8a50bf4ff           call 0x719ec0
// 007d931b  8bc8                 mov ecx, eax
// 007d931d  8bc7                 mov eax, edi
// 007d931f  2bc1                 sub eax, ecx
// 007d9321  2bc3                 sub eax, ebx
// 007d9323  eb05                 jmp 0x7d932a
// 007d9325  e8960bf4ff           call 0x719ec0
// 007d932a  8b5658               mov edx, dword ptr [esi + 0x58]
// 007d932d  894204               mov dword ptr [edx + 4], eax
// 007d9330  8b4658               mov eax, dword ptr [esi + 0x58]
// 007d9333  2b7804               sub edi, dword ptr [eax + 4]
// 007d9336  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007d9339  2bfb                 sub edi, ebx
// 007d933b  897904               mov dword ptr [ecx + 4], edi
// 007d933e  5f                   pop edi
// 007d933f  5e                   pop esi
// 007d9340  5b                   pop ebx
// 007d9341  83c40c               add esp, 0xc
// 007d9344  c22000               ret 0x20
// 007d9347  8b442430             mov eax, dword ptr [esp + 0x30]
// 007d934b  8b565c               mov edx, dword ptr [esi + 0x5c]
// 007d934e  8b7a08               mov edi, dword ptr [edx + 8]
// 007d9351  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007d9355  8b542438             mov edx, dword ptr [esp + 0x38]
// 007d9359  2bc8                 sub ecx, eax
// 007d935b  894c240c             mov dword ptr [esp + 0xc], ecx
// 007d935f  db44240c             fild dword ptr [esp + 0xc]
// 007d9363  2bd0                 sub edx, eax
// 007d9365  8954240c             mov dword ptr [esp + 0xc], edx
// 007d9369  db44240c             fild dword ptr [esp + 0xc]
// 007d936d  55                   push ebp
// 007d936e  8b6e58               mov ebp, dword ptr [esi + 0x58]
// 007d9371  037d08               add edi, dword ptr [ebp + 8]
// 007d9374  def9                 fdivp st(1)
// 007d9376  03fb                 add edi, ebx
// 007d9378  897c2414             mov dword ptr [esp + 0x14], edi
// 007d937c  da4c2414             fimul dword ptr [esp + 0x14]
// 007d9380  e83b0bf4ff           call 0x719ec0
// 007d9385  894508               mov dword ptr [ebp + 8], eax
// 007d9388  8b4658               mov eax, dword ptr [esi + 0x58]
// 007d938b  2b7808               sub edi, dword ptr [eax + 8]
// 007d938e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007d9391  2bfb                 sub edi, ebx
// 007d9393  5d                   pop ebp
// 007d9394  897908               mov dword ptr [ecx + 8], edi
// 007d9397  5f                   pop edi
// 007d9398  5e                   pop esi
// 007d9399  5b                   pop ebx
// 007d939a  83c40c               add esp, 0xc
// 007d939d  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Reposition@CXTPDockingPaneSplitterWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp

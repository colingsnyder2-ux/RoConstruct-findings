// roc 2007-08 00423240  unit: CSelectionTreeCtrl  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00423240
//
// 00423240  83ec10               sub esp, 0x10
// 00423243  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00423246  394108               cmp dword ptr [ecx + 8], eax
// 00423249  55                   push ebp
// 0042324a  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00423250  56                   push esi
// 00423251  8d7104               lea esi, [ecx + 4]
// 00423254  894c240c             mov dword ptr [esp + 0xc], ecx
// 00423258  89442408             mov dword ptr [esp + 8], eax
// 0042325c  7602                 jbe 0x423260
// 0042325e  ffd5                 call ebp
// 00423260  53                   push ebx
// 00423261  8b5e08               mov ebx, dword ptr [esi + 8]
// 00423264  395e04               cmp dword ptr [esi + 4], ebx
// 00423267  57                   push edi
// 00423268  7602                 jbe 0x42326c
// 0042326a  ffd5                 call ebp
// 0042326c  8b7e04               mov edi, dword ptr [esi + 4]
// 0042326f  3b7e08               cmp edi, dword ptr [esi + 8]
// 00423272  7602                 jbe 0x423276
// 00423274  ffd5                 call ebp
// 00423276  3bfb                 cmp edi, ebx
// 00423278  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0042327c  8bc6                 mov eax, esi
// 0042327e  897c241c             mov dword ptr [esp + 0x1c], edi
// 00423282  740b                 je 0x42328f
// 00423284  392f                 cmp dword ptr [edi], ebp
// 00423286  7407                 je 0x42328f
// 00423288  83c704               add edi, 4
// 0042328b  3bfb                 cmp edi, ebx
// 0042328d  75f5                 jne 0x423284
// 0042328f  85c0                 test eax, eax
// 00423291  7404                 je 0x423297
// 00423293  3bc6                 cmp eax, esi
// 00423295  7406                 je 0x42329d
// 00423297  ff15d8e67700         call dword ptr [0x77e6d8]
// 0042329d  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 004232a1  5f                   pop edi
// 004232a2  5b                   pop ebx
// 004232a3  7518                 jne 0x4232bd
// 004232a5  8d44241c             lea eax, [esp + 0x1c]
// 004232a9  50                   push eax
// 004232aa  8bce                 mov ecx, esi
// 004232ac  e80f1c0400           call 0x464ec0
// 004232b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004232b5  8b11                 mov edx, dword ptr [ecx]
// 004232b7  8b4204               mov eax, dword ptr [edx + 4]
// 004232ba  55                   push ebp
// 004232bb  ffd0                 call eax
// 004232bd  5e                   pop esi
// 004232be  5d                   pop ebp
// 004232bf  83c410               add esp, 0x10
// 004232c2  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?addListener@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@QBEXPAV?$Listener@VRunService@RBX@@VHeartbeat@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp

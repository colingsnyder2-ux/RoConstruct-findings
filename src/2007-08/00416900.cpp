// roc 2007-08 00416900  unit: VCLuaFunction::?$CComObject  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416900
//
// 00416900  56                   push esi
// 00416901  8bf1                 mov esi, ecx
// 00416903  8b4614               mov eax, dword ptr [esi + 0x14]
// 00416906  57                   push edi
// 00416907  33ff                 xor edi, edi
// 00416909  3bc7                 cmp eax, edi
// 0041690b  7409                 je 0x416916
// 0041690d  50                   push eax
// 0041690e  e84f932100           call 0x62fc62
// 00416913  83c404               add esp, 4
// 00416916  897e14               mov dword ptr [esi + 0x14], edi
// 00416919  897e18               mov dword ptr [esi + 0x18], edi
// 0041691c  897e1c               mov dword ptr [esi + 0x1c], edi
// 0041691f  8b4604               mov eax, dword ptr [esi + 4]
// 00416922  3bc7                 cmp eax, edi
// 00416924  7409                 je 0x41692f
// 00416926  50                   push eax
// 00416927  e836932100           call 0x62fc62
// 0041692c  83c404               add esp, 4
// 0041692f  897e04               mov dword ptr [esi + 4], edi
// 00416932  897e08               mov dword ptr [esi + 8], edi
// 00416935  897e0c               mov dword ptr [esi + 0xc], edi
// 00416938  5f                   pop edi
// 00416939  5e                   pop esi
// 0041693a  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp

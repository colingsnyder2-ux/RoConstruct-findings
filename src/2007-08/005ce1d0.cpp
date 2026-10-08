// roc 2007-08 005ce1d0  unit: RBX::BlockBlockContact  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ce1d0
//
// 005ce1d0  83ec18               sub esp, 0x18
// 005ce1d3  53                   push ebx
// 005ce1d4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005ce1d8  56                   push esi
// 005ce1d9  8b742428             mov esi, dword ptr [esp + 0x28]
// 005ce1dd  57                   push edi
// 005ce1de  8b3b                 mov edi, dword ptr [ebx]
// 005ce1e0  83ef01               sub edi, 1
// 005ce1e3  3bf7                 cmp esi, edi
// 005ce1e5  7361                 jae 0x5ce248
// 005ce1e7  55                   push ebp
// 005ce1e8  8d442410             lea eax, [esp + 0x10]
// 005ce1ec  50                   push eax
// 005ce1ed  8bcb                 mov ecx, ebx
// 005ce1ef  e8acfeffff           call 0x5ce0a0
// 005ce1f4  56                   push esi
// 005ce1f5  8d4c2420             lea ecx, [esp + 0x20]
// 005ce1f9  51                   push ecx
// 005ce1fa  8bcb                 mov ecx, ebx
// 005ce1fc  8be8                 mov ebp, eax
// 005ce1fe  e88de5f3ff           call 0x50c790
// 005ce203  8bcd                 mov ecx, ebp
// 005ce205  8bf0                 mov esi, eax
// 005ce207  e8f4e3f3ff           call 0x50c600
// 005ce20c  84c0                 test al, al
// 005ce20e  5d                   pop ebp
// 005ce20f  8bce                 mov ecx, esi
// 005ce211  7422                 je 0x5ce235
// 005ce213  e898e3f3ff           call 0x50c5b0
// 005ce218  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ce21b  ba01000000           mov edx, 1
// 005ce220  d3e2                 shl edx, cl
// 005ce222  6a00                 push 0
// 005ce224  57                   push edi
// 005ce225  8bcb                 mov ecx, ebx
// 005ce227  0910                 or dword ptr [eax], edx
// 005ce229  e892f0f3ff           call 0x50d2c0
// 005ce22e  5f                   pop edi
// 005ce22f  5e                   pop esi
// 005ce230  5b                   pop ebx
// 005ce231  83c418               add esp, 0x18
// 005ce234  c3                   ret 
// 005ce235  e876e3f3ff           call 0x50c5b0
// 005ce23a  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ce23d  ba01000000           mov edx, 1
// 005ce242  d3e2                 shl edx, cl
// 005ce244  f7d2                 not edx
// 005ce246  2110                 and dword ptr [eax], edx
// 005ce248  6a00                 push 0
// 005ce24a  57                   push edi
// 005ce24b  8bcb                 mov ecx, ebx
// 005ce24d  e86ef0f3ff           call 0x50d2c0
// 005ce252  5f                   pop edi
// 005ce253  5e                   pop esi
// 005ce254  5b                   pop ebx
// 005ce255  83c418               add esp, 0x18
// 005ce258  c3                   ret 
// library openrbx-client/App\v8world\Contact.cpp (function ??$fastRemoveIndex@_N@RBX@@YAXAAV?$vector@_NV?$allocator@_N@std@@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Contact.cpp

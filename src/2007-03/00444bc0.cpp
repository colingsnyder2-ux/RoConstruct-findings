// roc 2007-03 00444bc0  unit: seg_00440000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444bc0
//
// 00444bc0  55                   push ebp
// 00444bc1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00444bc5  85ed                 test ebp, ebp
// 00444bc7  56                   push esi
// 00444bc8  57                   push edi
// 00444bc9  8bf9                 mov edi, ecx
// 00444bcb  7406                 je 0x444bd3
// 00444bcd  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00444bd1  7406                 je 0x444bd9
// 00444bd3  ff1544e97700         call dword ptr [0x77e944]
// 00444bd9  8b742418             mov esi, dword ptr [esp + 0x18]
// 00444bdd  8b542420             mov edx, dword ptr [esp + 0x20]
// 00444be1  3bf2                 cmp esi, edx
// 00444be3  7428                 je 0x444c0d
// 00444be5  8b4708               mov eax, dword ptr [edi + 8]
// 00444be8  2bc2                 sub eax, edx
// 00444bea  c1f802               sar eax, 2
// 00444bed  85c0                 test eax, eax
// 00444bef  8d0c8500000000       lea ecx, [eax*4]
// 00444bf6  53                   push ebx
// 00444bf7  8d1c31               lea ebx, [ecx + esi]
// 00444bfa  7e0d                 jle 0x444c09
// 00444bfc  51                   push ecx
// 00444bfd  52                   push edx
// 00444bfe  51                   push ecx
// 00444bff  56                   push esi
// 00444c00  ff1578e97700         call dword ptr [0x77e978]
// 00444c06  83c410               add esp, 0x10
// 00444c09  895f08               mov dword ptr [edi + 8], ebx
// 00444c0c  5b                   pop ebx
// 00444c0d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00444c11  5f                   pop edi
// 00444c12  897004               mov dword ptr [eax + 4], esi
// 00444c15  5e                   pop esi
// 00444c16  8928                 mov dword ptr [eax], ebp
// 00444c18  5d                   pop ebp
// 00444c19  c21400               ret 0x14
// library rbxgs/v8datamodel\Camera.cpp (function ?erase@?$vector@PBVName@RBX@@V?$allocator@PBVName@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PBVName@RBX@@V?$allocator@PBVName@RBX@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

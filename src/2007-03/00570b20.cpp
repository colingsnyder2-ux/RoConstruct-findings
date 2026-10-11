// roc 2007-03 00570b20  unit: seg_00570000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570b20
//
// 00570b20  51                   push ecx
// 00570b21  53                   push ebx
// 00570b22  55                   push ebp
// 00570b23  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00570b29  56                   push esi
// 00570b2a  57                   push edi
// 00570b2b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00570b2f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00570b33  8b7704               mov esi, dword ptr [edi + 4]
// 00570b36  3b7708               cmp esi, dword ptr [edi + 8]
// 00570b39  7605                 jbe 0x570b40
// 00570b3b  ffd5                 call ebp
// 00570b3d  8d4900               lea ecx, [ecx]
// 00570b40  8b5f08               mov ebx, dword ptr [edi + 8]
// 00570b43  395f04               cmp dword ptr [edi + 4], ebx
// 00570b46  7602                 jbe 0x570b4a
// 00570b48  ffd5                 call ebp
// 00570b4a  3bf3                 cmp esi, ebx
// 00570b4c  741f                 je 0x570b6d
// 00570b4e  3b7708               cmp esi, dword ptr [edi + 8]
// 00570b51  7202                 jb 0x570b55
// 00570b53  ffd5                 call ebp
// 00570b55  8b06                 mov eax, dword ptr [esi]
// 00570b57  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00570b5b  50                   push eax
// 00570b5c  e8aff6ffff           call 0x570210
// 00570b61  3b7708               cmp esi, dword ptr [edi + 8]
// 00570b64  7202                 jb 0x570b68
// 00570b66  ffd5                 call ebp
// 00570b68  83c604               add esi, 4
// 00570b6b  ebd3                 jmp 0x570b40
// 00570b6d  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00570b70  85ff                 test edi, edi
// 00570b72  75bf                 jne 0x570b33
// 00570b74  5f                   pop edi
// 00570b75  5e                   pop esi
// 00570b76  5d                   pop ebp
// 00570b77  5b                   pop ebx
// 00570b78  59                   pop ecx
// 00570b79  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp

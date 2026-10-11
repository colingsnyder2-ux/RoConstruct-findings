// roc 2007-03 00570b80  unit: seg_00570000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570b80
//
// 00570b80  51                   push ecx
// 00570b81  53                   push ebx
// 00570b82  55                   push ebp
// 00570b83  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00570b89  56                   push esi
// 00570b8a  57                   push edi
// 00570b8b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00570b8f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00570b93  8b7704               mov esi, dword ptr [edi + 4]
// 00570b96  3b7708               cmp esi, dword ptr [edi + 8]
// 00570b99  7605                 jbe 0x570ba0
// 00570b9b  ffd5                 call ebp
// 00570b9d  8d4900               lea ecx, [ecx]
// 00570ba0  8b5f08               mov ebx, dword ptr [edi + 8]
// 00570ba3  395f04               cmp dword ptr [edi + 4], ebx
// 00570ba6  7602                 jbe 0x570baa
// 00570ba8  ffd5                 call ebp
// 00570baa  3bf3                 cmp esi, ebx
// 00570bac  741f                 je 0x570bcd
// 00570bae  3b7708               cmp esi, dword ptr [edi + 8]
// 00570bb1  7202                 jb 0x570bb5
// 00570bb3  ffd5                 call ebp
// 00570bb5  8b06                 mov eax, dword ptr [esi]
// 00570bb7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00570bbb  50                   push eax
// 00570bbc  e83ffeffff           call 0x570a00
// 00570bc1  3b7708               cmp esi, dword ptr [edi + 8]
// 00570bc4  7202                 jb 0x570bc8
// 00570bc6  ffd5                 call ebp
// 00570bc8  83c604               add esi, 4
// 00570bcb  ebd3                 jmp 0x570ba0
// 00570bcd  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00570bd0  85ff                 test edi, edi
// 00570bd2  75bf                 jne 0x570b93
// 00570bd4  5f                   pop edi
// 00570bd5  5e                   pop esi
// 00570bd6  5d                   pop ebp
// 00570bd7  5b                   pop ebx
// 00570bd8  59                   pop ecx
// 00570bd9  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp

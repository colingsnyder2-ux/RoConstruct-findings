// roc 2007-03 0055c890  unit: seg_00550000  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055c890
//
// 0055c890  6aff                 push -1
// 0055c892  68e8457500           push 0x7545e8
// 0055c897  64a100000000         mov eax, dword ptr fs:[0]
// 0055c89d  50                   push eax
// 0055c89e  64892500000000       mov dword ptr fs:[0], esp
// 0055c8a5  83ec14               sub esp, 0x14
// 0055c8a8  53                   push ebx
// 0055c8a9  8bd9                 mov ebx, ecx
// 0055c8ab  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0055c8ae  85c9                 test ecx, ecx
// 0055c8b0  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0055c8b3  55                   push ebp
// 0055c8b4  56                   push esi
// 0055c8b5  57                   push edi
// 0055c8b6  89442410             mov dword ptr [esp + 0x10], eax
// 0055c8ba  7409                 je 0x55c8c5
// 0055c8bc  8b11                 mov edx, dword ptr [ecx]
// 0055c8be  8b4208               mov eax, dword ptr [edx + 8]
// 0055c8c1  ffd0                 call eax
// 0055c8c3  eb02                 jmp 0x55c8c7
// 0055c8c5  33c0                 xor eax, eax
// 0055c8c7  89442414             mov dword ptr [esp + 0x14], eax
// 0055c8cb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0055c8cf  8b11                 mov edx, dword ptr [ecx]
// 0055c8d1  8b5204               mov edx, dword ptr [edx + 4]
// 0055c8d4  8d442410             lea eax, [esp + 0x10]
// 0055c8d8  50                   push eax
// 0055c8d9  6a01                 push 1
// 0055c8db  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0055c8e3  ffd2                 call edx
// 0055c8e5  8b442434             mov eax, dword ptr [esp + 0x34]
// 0055c8e9  6a00                 push 0
// 0055c8eb  68f0578800           push 0x8857f0
// 0055c8f0  68d4118800           push 0x8811d4
// 0055c8f5  6a00                 push 0
// 0055c8f7  50                   push eax
// 0055c8f8  e8c9280c00           call 0x61f1c6
// 0055c8fd  8be8                 mov ebp, eax
// 0055c8ff  83c414               add esp, 0x14
// 0055c902  85ed                 test ebp, ebp
// 0055c904  751e                 jne 0x55c924
// 0055c906  68ac5e7800           push 0x785eac
// 0055c90b  8d4c241c             lea ecx, [esp + 0x1c]
// 0055c90f  ff1580e97700         call dword ptr [0x77e980]
// 0055c915  68c0218400           push 0x8421c0
// 0055c91a  8d4c241c             lea ecx, [esp + 0x1c]
// 0055c91e  51                   push ecx
// 0055c91f  e80a270c00           call 0x61f02e
// 0055c924  8d4c2410             lea ecx, [esp + 0x10]
// 0055c928  e8a3220100           call 0x56ebd0
// 0055c92d  83ec20               sub esp, 0x20
// 0055c930  8bfc                 mov edi, esp
// 0055c932  8bf0                 mov esi, eax
// 0055c934  89642458             mov dword ptr [esp + 0x58], esp
// 0055c938  56                   push esi
// 0055c939  8bcf                 mov ecx, edi
// 0055c93b  ff157ce77700         call dword ptr [0x77e77c]
// 0055c941  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0055c944  89571c               mov dword ptr [edi + 0x1c], edx
// 0055c947  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 0055c94a  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0055c94d  03cd                 add ecx, ebp
// 0055c94f  ffd0                 call eax
// 0055c951  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055c955  85c9                 test ecx, ecx
// 0055c957  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0055c95f  7408                 je 0x55c969
// 0055c961  8b11                 mov edx, dword ptr [ecx]
// 0055c963  8b02                 mov eax, dword ptr [edx]
// 0055c965  6a01                 push 1
// 0055c967  ffd0                 call eax
// 0055c969  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055c96d  5f                   pop edi
// 0055c96e  5e                   pop esi
// 0055c96f  5d                   pop ebp
// 0055c970  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c977  5b                   pop ebx
// 0055c978  83c420               add esp, 0x20
// 0055c97b  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?execute@?$BoundFuncDesc@VDataModel@RBX@@$$A6AXVContentId@2@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

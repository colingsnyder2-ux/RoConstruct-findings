// roc 2007-08 0055bdf0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055bdf0
//
// 0055bdf0  6aff                 push -1
// 0055bdf2  68588a7500           push 0x758a58
// 0055bdf7  64a100000000         mov eax, dword ptr fs:[0]
// 0055bdfd  50                   push eax
// 0055bdfe  64892500000000       mov dword ptr fs:[0], esp
// 0055be05  83ec14               sub esp, 0x14
// 0055be08  53                   push ebx
// 0055be09  8bd9                 mov ebx, ecx
// 0055be0b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0055be0e  85c9                 test ecx, ecx
// 0055be10  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0055be13  55                   push ebp
// 0055be14  56                   push esi
// 0055be15  57                   push edi
// 0055be16  89442410             mov dword ptr [esp + 0x10], eax
// 0055be1a  7409                 je 0x55be25
// 0055be1c  8b11                 mov edx, dword ptr [ecx]
// 0055be1e  8b4208               mov eax, dword ptr [edx + 8]
// 0055be21  ffd0                 call eax
// 0055be23  eb02                 jmp 0x55be27
// 0055be25  33c0                 xor eax, eax
// 0055be27  89442414             mov dword ptr [esp + 0x14], eax
// 0055be2b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0055be2f  8b11                 mov edx, dword ptr [ecx]
// 0055be31  8b5204               mov edx, dword ptr [edx + 4]
// 0055be34  8d442410             lea eax, [esp + 0x10]
// 0055be38  50                   push eax
// 0055be39  6a01                 push 1
// 0055be3b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0055be43  ffd2                 call edx
// 0055be45  8b442434             mov eax, dword ptr [esp + 0x34]
// 0055be49  6a00                 push 0
// 0055be4b  68a0658800           push 0x8865a0
// 0055be50  689c208800           push 0x88209c
// 0055be55  6a00                 push 0
// 0055be57  50                   push eax
// 0055be58  e8d94e0d00           call 0x630d36
// 0055be5d  8be8                 mov ebp, eax
// 0055be5f  83c414               add esp, 0x14
// 0055be62  85ed                 test ebp, ebp
// 0055be64  751e                 jne 0x55be84
// 0055be66  68046e7800           push 0x786e04
// 0055be6b  8d4c241c             lea ecx, [esp + 0x1c]
// 0055be6f  ff1510e77700         call dword ptr [0x77e710]
// 0055be75  680c1e8400           push 0x841e0c
// 0055be7a  8d4c241c             lea ecx, [esp + 0x1c]
// 0055be7e  51                   push ecx
// 0055be7f  e81a4d0d00           call 0x630b9e
// 0055be84  8d4c2410             lea ecx, [esp + 0x10]
// 0055be88  e8c3340100           call 0x56f350
// 0055be8d  83ec20               sub esp, 0x20
// 0055be90  8bfc                 mov edi, esp
// 0055be92  8bf0                 mov esi, eax
// 0055be94  89642458             mov dword ptr [esp + 0x58], esp
// 0055be98  56                   push esi
// 0055be99  8bcf                 mov ecx, edi
// 0055be9b  ff159ce67700         call dword ptr [0x77e69c]
// 0055bea1  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0055bea4  89571c               mov dword ptr [edi + 0x1c], edx
// 0055bea7  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 0055beaa  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0055bead  03cd                 add ecx, ebp
// 0055beaf  ffd0                 call eax
// 0055beb1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055beb5  85c9                 test ecx, ecx
// 0055beb7  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0055bebf  7408                 je 0x55bec9
// 0055bec1  8b11                 mov edx, dword ptr [ecx]
// 0055bec3  8b02                 mov eax, dword ptr [edx]
// 0055bec5  6a01                 push 1
// 0055bec7  ffd0                 call eax
// 0055bec9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055becd  5f                   pop edi
// 0055bece  5e                   pop esi
// 0055becf  5d                   pop ebp
// 0055bed0  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bed7  5b                   pop ebx
// 0055bed8  83c420               add esp, 0x20
// 0055bedb  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?execute@?$BoundFuncDesc@VDataModel@RBX@@$$A6AXVContentId@2@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

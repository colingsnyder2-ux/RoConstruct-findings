// roc 2007-08 0055bc80  unit: RBX::VDataModel::?$BoundFuncDesc  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055bc80
//
// 0055bc80  6aff                 push -1
// 0055bc82  68588a7500           push 0x758a58
// 0055bc87  64a100000000         mov eax, dword ptr fs:[0]
// 0055bc8d  50                   push eax
// 0055bc8e  64892500000000       mov dword ptr fs:[0], esp
// 0055bc95  83ec14               sub esp, 0x14
// 0055bc98  56                   push esi
// 0055bc99  57                   push edi
// 0055bc9a  8bf9                 mov edi, ecx
// 0055bc9c  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0055bc9f  85c9                 test ecx, ecx
// 0055bca1  8b4730               mov eax, dword ptr [edi + 0x30]
// 0055bca4  89442408             mov dword ptr [esp + 8], eax
// 0055bca8  7409                 je 0x55bcb3
// 0055bcaa  8b11                 mov edx, dword ptr [ecx]
// 0055bcac  8b4208               mov eax, dword ptr [edx + 8]
// 0055bcaf  ffd0                 call eax
// 0055bcb1  eb02                 jmp 0x55bcb5
// 0055bcb3  33c0                 xor eax, eax
// 0055bcb5  8944240c             mov dword ptr [esp + 0xc], eax
// 0055bcb9  8b742430             mov esi, dword ptr [esp + 0x30]
// 0055bcbd  8b16                 mov edx, dword ptr [esi]
// 0055bcbf  8b5204               mov edx, dword ptr [edx + 4]
// 0055bcc2  8d442408             lea eax, [esp + 8]
// 0055bcc6  50                   push eax
// 0055bcc7  6a01                 push 1
// 0055bcc9  8bce                 mov ecx, esi
// 0055bccb  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0055bcd3  ffd2                 call edx
// 0055bcd5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055bcd9  6a00                 push 0
// 0055bcdb  68a0658800           push 0x8865a0
// 0055bce0  689c208800           push 0x88209c
// 0055bce5  6a00                 push 0
// 0055bce7  50                   push eax
// 0055bce8  e849500d00           call 0x630d36
// 0055bced  83c414               add esp, 0x14
// 0055bcf0  85c0                 test eax, eax
// 0055bcf2  751e                 jne 0x55bd12
// 0055bcf4  68046e7800           push 0x786e04
// 0055bcf9  8d4c2414             lea ecx, [esp + 0x14]
// 0055bcfd  ff1510e77700         call dword ptr [0x77e710]
// 0055bd03  680c1e8400           push 0x841e0c
// 0055bd08  8d4c2414             lea ecx, [esp + 0x14]
// 0055bd0c  51                   push ecx
// 0055bd0d  e88c4e0d00           call 0x630b9e
// 0055bd12  8d542408             lea edx, [esp + 8]
// 0055bd16  52                   push edx
// 0055bd17  83c604               add esi, 4
// 0055bd1a  56                   push esi
// 0055bd1b  50                   push eax
// 0055bd1c  8bcf                 mov ecx, edi
// 0055bd1e  e89dfeffff           call 0x55bbc0
// 0055bd23  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055bd27  85c9                 test ecx, ecx
// 0055bd29  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0055bd31  7408                 je 0x55bd3b
// 0055bd33  8b01                 mov eax, dword ptr [ecx]
// 0055bd35  8b10                 mov edx, dword ptr [eax]
// 0055bd37  6a01                 push 1
// 0055bd39  ffd2                 call edx
// 0055bd3b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0055bd3f  5f                   pop edi
// 0055bd40  5e                   pop esi
// 0055bd41  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bd48  83c420               add esp, 0x20
// 0055bd4b  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?execute@?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

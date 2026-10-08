// roc 2007-03 0055c720  unit: seg_00550000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055c720
//
// 0055c720  6aff                 push -1
// 0055c722  68e8457500           push 0x7545e8
// 0055c727  64a100000000         mov eax, dword ptr fs:[0]
// 0055c72d  50                   push eax
// 0055c72e  64892500000000       mov dword ptr fs:[0], esp
// 0055c735  83ec14               sub esp, 0x14
// 0055c738  56                   push esi
// 0055c739  57                   push edi
// 0055c73a  8bf9                 mov edi, ecx
// 0055c73c  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0055c73f  85c9                 test ecx, ecx
// 0055c741  8b4730               mov eax, dword ptr [edi + 0x30]
// 0055c744  89442408             mov dword ptr [esp + 8], eax
// 0055c748  7409                 je 0x55c753
// 0055c74a  8b11                 mov edx, dword ptr [ecx]
// 0055c74c  8b4208               mov eax, dword ptr [edx + 8]
// 0055c74f  ffd0                 call eax
// 0055c751  eb02                 jmp 0x55c755
// 0055c753  33c0                 xor eax, eax
// 0055c755  8944240c             mov dword ptr [esp + 0xc], eax
// 0055c759  8b742430             mov esi, dword ptr [esp + 0x30]
// 0055c75d  8b16                 mov edx, dword ptr [esi]
// 0055c75f  8b5204               mov edx, dword ptr [edx + 4]
// 0055c762  8d442408             lea eax, [esp + 8]
// 0055c766  50                   push eax
// 0055c767  6a01                 push 1
// 0055c769  8bce                 mov ecx, esi
// 0055c76b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0055c773  ffd2                 call edx
// 0055c775  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055c779  6a00                 push 0
// 0055c77b  68f0578800           push 0x8857f0
// 0055c780  68d4118800           push 0x8811d4
// 0055c785  6a00                 push 0
// 0055c787  50                   push eax
// 0055c788  e8392a0c00           call 0x61f1c6
// 0055c78d  83c414               add esp, 0x14
// 0055c790  85c0                 test eax, eax
// 0055c792  751e                 jne 0x55c7b2
// 0055c794  68ac5e7800           push 0x785eac
// 0055c799  8d4c2414             lea ecx, [esp + 0x14]
// 0055c79d  ff1580e97700         call dword ptr [0x77e980]
// 0055c7a3  68c0218400           push 0x8421c0
// 0055c7a8  8d4c2414             lea ecx, [esp + 0x14]
// 0055c7ac  51                   push ecx
// 0055c7ad  e87c280c00           call 0x61f02e
// 0055c7b2  8d542408             lea edx, [esp + 8]
// 0055c7b6  52                   push edx
// 0055c7b7  83c604               add esi, 4
// 0055c7ba  56                   push esi
// 0055c7bb  50                   push eax
// 0055c7bc  8bcf                 mov ecx, edi
// 0055c7be  e89dfeffff           call 0x55c660
// 0055c7c3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055c7c7  85c9                 test ecx, ecx
// 0055c7c9  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0055c7d1  7408                 je 0x55c7db
// 0055c7d3  8b01                 mov eax, dword ptr [ecx]
// 0055c7d5  8b10                 mov edx, dword ptr [eax]
// 0055c7d7  6a01                 push 1
// 0055c7d9  ffd2                 call edx
// 0055c7db  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0055c7df  5f                   pop edi
// 0055c7e0  5e                   pop esi
// 0055c7e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c7e8  83c420               add esp, 0x20
// 0055c7eb  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?execute@?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

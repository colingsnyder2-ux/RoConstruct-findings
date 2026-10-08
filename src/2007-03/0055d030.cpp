// roc 2007-03 0055d030  unit: seg_00550000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055d030
//
// 0055d030  6aff                 push -1
// 0055d032  6863797500           push 0x757963
// 0055d037  64a100000000         mov eax, dword ptr fs:[0]
// 0055d03d  50                   push eax
// 0055d03e  64892500000000       mov dword ptr fs:[0], esp
// 0055d045  51                   push ecx
// 0055d046  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055d04a  53                   push ebx
// 0055d04b  56                   push esi
// 0055d04c  57                   push edi
// 0055d04d  8bf1                 mov esi, ecx
// 0055d04f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055d053  50                   push eax
// 0055d054  51                   push ecx
// 0055d055  89742414             mov dword ptr [esp + 0x14], esi
// 0055d059  e8e2eeffff           call 0x55bf40
// 0055d05e  50                   push eax
// 0055d05f  8bce                 mov ecx, esi
// 0055d061  e82a3f0100           call 0x570f90
// 0055d066  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055d06a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055d06e  8d7e30               lea edi, [esi + 0x30]
// 0055d071  8bcf                 mov ecx, edi
// 0055d073  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055d07b  c7065ca27a00         mov dword ptr [esi], 0x7aa25c
// 0055d081  895628               mov dword ptr [esi + 0x28], edx
// 0055d084  89462c               mov dword ptr [esi + 0x2c], eax
// 0055d087  e8c4fd0000           call 0x56ce50
// 0055d08c  c644241801           mov byte ptr [esp + 0x18], 1
// 0055d091  8d5e14               lea ebx, [esi + 0x14]
// 0055d094  e847fd0000           call 0x56cde0
// 0055d099  57                   push edi
// 0055d09a  8903                 mov dword ptr [ebx], eax
// 0055d09c  e85f030100           call 0x56d400
// 0055d0a1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055d0a5  50                   push eax
// 0055d0a6  6aff                 push -1
// 0055d0a8  51                   push ecx
// 0055d0a9  e83208fdff           call 0x52d8e0
// 0055d0ae  83c408               add esp, 8
// 0055d0b1  50                   push eax
// 0055d0b2  8bcb                 mov ecx, ebx
// 0055d0b4  e8d7fd0000           call 0x56ce90
// 0055d0b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055d0bd  5f                   pop edi
// 0055d0be  8bc6                 mov eax, esi
// 0055d0c0  5e                   pop esi
// 0055d0c1  5b                   pop ebx
// 0055d0c2  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d0c9  83c410               add esp, 0x10
// 0055d0cc  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

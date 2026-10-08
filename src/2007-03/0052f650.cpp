// roc 2007-03 0052f650  unit: seg_00520000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052f650
//
// 0052f650  6aff                 push -1
// 0052f652  6863797500           push 0x757963
// 0052f657  64a100000000         mov eax, dword ptr fs:[0]
// 0052f65d  50                   push eax
// 0052f65e  64892500000000       mov dword ptr fs:[0], esp
// 0052f665  51                   push ecx
// 0052f666  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052f66a  53                   push ebx
// 0052f66b  56                   push esi
// 0052f66c  57                   push edi
// 0052f66d  8bf1                 mov esi, ecx
// 0052f66f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052f673  50                   push eax
// 0052f674  51                   push ecx
// 0052f675  89742414             mov dword ptr [esp + 0x14], esi
// 0052f679  e872f1ffff           call 0x52e7f0
// 0052f67e  50                   push eax
// 0052f67f  8bce                 mov ecx, esi
// 0052f681  e80a190400           call 0x570f90
// 0052f686  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052f68a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052f68e  8d7e30               lea edi, [esi + 0x30]
// 0052f691  8bcf                 mov ecx, edi
// 0052f693  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052f69b  c706c44b7a00         mov dword ptr [esi], 0x7a4bc4
// 0052f6a1  895628               mov dword ptr [esi + 0x28], edx
// 0052f6a4  89462c               mov dword ptr [esi + 0x2c], eax
// 0052f6a7  e8a4d70300           call 0x56ce50
// 0052f6ac  c644241801           mov byte ptr [esp + 0x18], 1
// 0052f6b1  8d5e14               lea ebx, [esi + 0x14]
// 0052f6b4  e827d70300           call 0x56cde0
// 0052f6b9  57                   push edi
// 0052f6ba  8903                 mov dword ptr [ebx], eax
// 0052f6bc  e89fda0300           call 0x56d160
// 0052f6c1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052f6c5  50                   push eax
// 0052f6c6  6aff                 push -1
// 0052f6c8  51                   push ecx
// 0052f6c9  e812e2ffff           call 0x52d8e0
// 0052f6ce  83c408               add esp, 8
// 0052f6d1  50                   push eax
// 0052f6d2  8bcb                 mov ecx, ebx
// 0052f6d4  e8b7d70300           call 0x56ce90
// 0052f6d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052f6dd  5f                   pop edi
// 0052f6de  8bc6                 mov eax, esi
// 0052f6e0  5e                   pop esi
// 0052f6e1  5b                   pop ebx
// 0052f6e2  64890d00000000       mov dword ptr fs:[0], ecx
// 0052f6e9  83c410               add esp, 0x10
// 0052f6ec  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

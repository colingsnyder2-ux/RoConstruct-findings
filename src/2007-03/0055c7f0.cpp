// roc 2007-03 0055c7f0  unit: seg_00550000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055c7f0
//
// 0055c7f0  6aff                 push -1
// 0055c7f2  6863797500           push 0x757963
// 0055c7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0055c7fd  50                   push eax
// 0055c7fe  64892500000000       mov dword ptr fs:[0], esp
// 0055c805  51                   push ecx
// 0055c806  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055c80a  53                   push ebx
// 0055c80b  56                   push esi
// 0055c80c  57                   push edi
// 0055c80d  8bf1                 mov esi, ecx
// 0055c80f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055c813  50                   push eax
// 0055c814  51                   push ecx
// 0055c815  89742414             mov dword ptr [esp + 0x14], esi
// 0055c819  e822f7ffff           call 0x55bf40
// 0055c81e  50                   push eax
// 0055c81f  8bce                 mov ecx, esi
// 0055c821  e86a470100           call 0x570f90
// 0055c826  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055c82a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055c82e  8d7e30               lea edi, [esi + 0x30]
// 0055c831  8bcf                 mov ecx, edi
// 0055c833  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055c83b  c7062ca27a00         mov dword ptr [esi], 0x7aa22c
// 0055c841  895628               mov dword ptr [esi + 0x28], edx
// 0055c844  89462c               mov dword ptr [esi + 0x2c], eax
// 0055c847  e804060100           call 0x56ce50
// 0055c84c  c644241801           mov byte ptr [esp + 0x18], 1
// 0055c851  8d5e14               lea ebx, [esi + 0x14]
// 0055c854  e887050100           call 0x56cde0
// 0055c859  57                   push edi
// 0055c85a  8903                 mov dword ptr [ebx], eax
// 0055c85c  e82f0b0100           call 0x56d390
// 0055c861  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055c865  50                   push eax
// 0055c866  6aff                 push -1
// 0055c868  51                   push ecx
// 0055c869  e87210fdff           call 0x52d8e0
// 0055c86e  83c408               add esp, 8
// 0055c871  50                   push eax
// 0055c872  8bcb                 mov ecx, ebx
// 0055c874  e817060100           call 0x56ce90
// 0055c879  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055c87d  5f                   pop edi
// 0055c87e  8bc6                 mov eax, esi
// 0055c880  5e                   pop esi
// 0055c881  5b                   pop ebx
// 0055c882  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c889  83c410               add esp, 0x10
// 0055c88c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

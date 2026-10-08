// roc 2007-08 005af0f0  unit: RBX::VLighting::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005af0f0
//
// 005af0f0  6aff                 push -1
// 005af0f2  6863387500           push 0x753863
// 005af0f7  64a100000000         mov eax, dword ptr fs:[0]
// 005af0fd  50                   push eax
// 005af0fe  64892500000000       mov dword ptr fs:[0], esp
// 005af105  51                   push ecx
// 005af106  8b442424             mov eax, dword ptr [esp + 0x24]
// 005af10a  53                   push ebx
// 005af10b  56                   push esi
// 005af10c  57                   push edi
// 005af10d  8bf1                 mov esi, ecx
// 005af10f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005af113  50                   push eax
// 005af114  51                   push ecx
// 005af115  89742414             mov dword ptr [esp + 0x14], esi
// 005af119  e812f7ffff           call 0x5ae830
// 005af11e  50                   push eax
// 005af11f  8bce                 mov ecx, esi
// 005af121  e88a1cfcff           call 0x570db0
// 005af126  8b542420             mov edx, dword ptr [esp + 0x20]
// 005af12a  8b442424             mov eax, dword ptr [esp + 0x24]
// 005af12e  8d7e30               lea edi, [esi + 0x30]
// 005af131  8bcf                 mov ecx, edi
// 005af133  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005af13b  c706605c7b00         mov dword ptr [esi], 0x7b5c60
// 005af141  895628               mov dword ptr [esi + 0x28], edx
// 005af144  89462c               mov dword ptr [esi + 0x2c], eax
// 005af147  e874e2fbff           call 0x56d3c0
// 005af14c  c644241801           mov byte ptr [esp + 0x18], 1
// 005af151  8d5e14               lea ebx, [esi + 0x14]
// 005af154  e8f7e1fbff           call 0x56d350
// 005af159  57                   push edi
// 005af15a  8903                 mov dword ptr [ebx], eax
// 005af15c  e8bfe7fbff           call 0x56d920
// 005af161  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005af165  50                   push eax
// 005af166  6aff                 push -1
// 005af168  51                   push ecx
// 005af169  e8d2d7f7ff           call 0x52c940
// 005af16e  83c408               add esp, 8
// 005af171  50                   push eax
// 005af172  8bcb                 mov ecx, ebx
// 005af174  e887e2fbff           call 0x56d400
// 005af179  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005af17d  5f                   pop edi
// 005af17e  8bc6                 mov eax, esi
// 005af180  5e                   pop esi
// 005af181  5b                   pop ebx
// 005af182  64890d00000000       mov dword ptr fs:[0], ecx
// 005af189  83c410               add esp, 0x10
// 005af18c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

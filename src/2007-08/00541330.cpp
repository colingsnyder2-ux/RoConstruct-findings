// roc 2007-08 00541330  unit: RBX::VInstance::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541330
//
// 00541330  6aff                 push -1
// 00541332  6863387500           push 0x753863
// 00541337  64a100000000         mov eax, dword ptr fs:[0]
// 0054133d  50                   push eax
// 0054133e  64892500000000       mov dword ptr fs:[0], esp
// 00541345  51                   push ecx
// 00541346  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054134a  53                   push ebx
// 0054134b  56                   push esi
// 0054134c  57                   push edi
// 0054134d  8bf1                 mov esi, ecx
// 0054134f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00541353  50                   push eax
// 00541354  51                   push ecx
// 00541355  89742414             mov dword ptr [esp + 0x14], esi
// 00541359  e83273edff           call 0x418690
// 0054135e  50                   push eax
// 0054135f  8bce                 mov ecx, esi
// 00541361  e84afa0200           call 0x570db0
// 00541366  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054136a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054136e  8d7e30               lea edi, [esi + 0x30]
// 00541371  8bcf                 mov ecx, edi
// 00541373  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0054137b  c706a4667a00         mov dword ptr [esi], 0x7a66a4
// 00541381  895628               mov dword ptr [esi + 0x28], edx
// 00541384  89462c               mov dword ptr [esi + 0x2c], eax
// 00541387  e834c00200           call 0x56d3c0
// 0054138c  c644241801           mov byte ptr [esp + 0x18], 1
// 00541391  8d5e14               lea ebx, [esi + 0x14]
// 00541394  e8a7c40200           call 0x56d840
// 00541399  57                   push edi
// 0054139a  8903                 mov dword ptr [ebx], eax
// 0054139c  e84fc30200           call 0x56d6f0
// 005413a1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005413a5  50                   push eax
// 005413a6  6aff                 push -1
// 005413a8  51                   push ecx
// 005413a9  e892b5feff           call 0x52c940
// 005413ae  83c408               add esp, 8
// 005413b1  50                   push eax
// 005413b2  8bcb                 mov ecx, ebx
// 005413b4  e847c00200           call 0x56d400
// 005413b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005413bd  5f                   pop edi
// 005413be  8bc6                 mov eax, esi
// 005413c0  5e                   pop esi
// 005413c1  5b                   pop ebx
// 005413c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005413c9  83c410               add esp, 0x10
// 005413cc  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

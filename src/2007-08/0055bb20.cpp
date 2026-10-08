// roc 2007-08 0055bb20  unit: RBX::VTool::?$FactoryProduct::Creator  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055bb20
//
// 0055bb20  6aff                 push -1
// 0055bb22  6863387500           push 0x753863
// 0055bb27  64a100000000         mov eax, dword ptr fs:[0]
// 0055bb2d  50                   push eax
// 0055bb2e  64892500000000       mov dword ptr fs:[0], esp
// 0055bb35  51                   push ecx
// 0055bb36  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055bb3a  53                   push ebx
// 0055bb3b  56                   push esi
// 0055bb3c  57                   push edi
// 0055bb3d  8bf1                 mov esi, ecx
// 0055bb3f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055bb43  50                   push eax
// 0055bb44  51                   push ecx
// 0055bb45  89742414             mov dword ptr [esp + 0x14], esi
// 0055bb49  e8f2f1ffff           call 0x55ad40
// 0055bb4e  50                   push eax
// 0055bb4f  8bce                 mov ecx, esi
// 0055bb51  e85a520100           call 0x570db0
// 0055bb56  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055bb5a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055bb5e  8d7e30               lea edi, [esi + 0x30]
// 0055bb61  8bcf                 mov ecx, edi
// 0055bb63  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055bb6b  c706a88a7a00         mov dword ptr [esi], 0x7a8aa8
// 0055bb71  895628               mov dword ptr [esi + 0x28], edx
// 0055bb74  89462c               mov dword ptr [esi + 0x2c], eax
// 0055bb77  e844180100           call 0x56d3c0
// 0055bb7c  c644241801           mov byte ptr [esp + 0x18], 1
// 0055bb81  8d5e14               lea ebx, [esi + 0x14]
// 0055bb84  e8d71b0100           call 0x56d760
// 0055bb89  57                   push edi
// 0055bb8a  8903                 mov dword ptr [ebx], eax
// 0055bb8c  e8ff1d0100           call 0x56d990
// 0055bb91  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055bb95  50                   push eax
// 0055bb96  6aff                 push -1
// 0055bb98  51                   push ecx
// 0055bb99  e8a20dfdff           call 0x52c940
// 0055bb9e  83c408               add esp, 8
// 0055bba1  50                   push eax
// 0055bba2  8bcb                 mov ecx, ebx
// 0055bba4  e857180100           call 0x56d400
// 0055bba9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055bbad  5f                   pop edi
// 0055bbae  8bc6                 mov eax, esi
// 0055bbb0  5e                   pop esi
// 0055bbb1  5b                   pop ebx
// 0055bbb2  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bbb9  83c410               add esp, 0x10
// 0055bbbc  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

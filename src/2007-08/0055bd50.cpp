// roc 2007-08 0055bd50  unit: RBX::VDataModel::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055bd50
//
// 0055bd50  6aff                 push -1
// 0055bd52  6863387500           push 0x753863
// 0055bd57  64a100000000         mov eax, dword ptr fs:[0]
// 0055bd5d  50                   push eax
// 0055bd5e  64892500000000       mov dword ptr fs:[0], esp
// 0055bd65  51                   push ecx
// 0055bd66  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055bd6a  53                   push ebx
// 0055bd6b  56                   push esi
// 0055bd6c  57                   push edi
// 0055bd6d  8bf1                 mov esi, ecx
// 0055bd6f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055bd73  50                   push eax
// 0055bd74  51                   push ecx
// 0055bd75  89742414             mov dword ptr [esp + 0x14], esi
// 0055bd79  e8c2efffff           call 0x55ad40
// 0055bd7e  50                   push eax
// 0055bd7f  8bce                 mov ecx, esi
// 0055bd81  e82a500100           call 0x570db0
// 0055bd86  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055bd8a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055bd8e  8d7e30               lea edi, [esi + 0x30]
// 0055bd91  8bcf                 mov ecx, edi
// 0055bd93  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055bd9b  c706b48a7a00         mov dword ptr [esi], 0x7a8ab4
// 0055bda1  895628               mov dword ptr [esi + 0x28], edx
// 0055bda4  89462c               mov dword ptr [esi + 0x2c], eax
// 0055bda7  e814160100           call 0x56d3c0
// 0055bdac  c644241801           mov byte ptr [esp + 0x18], 1
// 0055bdb1  8d5e14               lea ebx, [esi + 0x14]
// 0055bdb4  e897150100           call 0x56d350
// 0055bdb9  57                   push edi
// 0055bdba  8903                 mov dword ptr [ebx], eax
// 0055bdbc  e8cf1b0100           call 0x56d990
// 0055bdc1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055bdc5  50                   push eax
// 0055bdc6  6aff                 push -1
// 0055bdc8  51                   push ecx
// 0055bdc9  e8720bfdff           call 0x52c940
// 0055bdce  83c408               add esp, 8
// 0055bdd1  50                   push eax
// 0055bdd2  8bcb                 mov ecx, ebx
// 0055bdd4  e827160100           call 0x56d400
// 0055bdd9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055bddd  5f                   pop edi
// 0055bdde  8bc6                 mov eax, esi
// 0055bde0  5e                   pop esi
// 0055bde1  5b                   pop ebx
// 0055bde2  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bde9  83c410               add esp, 0x10
// 0055bdec  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

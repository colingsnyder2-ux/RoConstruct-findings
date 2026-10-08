// roc 2007-08 00533990  unit: RBX::VSelection::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533990
//
// 00533990  6aff                 push -1
// 00533992  6863387500           push 0x753863
// 00533997  64a100000000         mov eax, dword ptr fs:[0]
// 0053399d  50                   push eax
// 0053399e  64892500000000       mov dword ptr fs:[0], esp
// 005339a5  51                   push ecx
// 005339a6  8b442424             mov eax, dword ptr [esp + 0x24]
// 005339aa  53                   push ebx
// 005339ab  56                   push esi
// 005339ac  57                   push edi
// 005339ad  8bf1                 mov esi, ecx
// 005339af  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005339b3  50                   push eax
// 005339b4  51                   push ecx
// 005339b5  89742414             mov dword ptr [esp + 0x14], esi
// 005339b9  e802f2ffff           call 0x532bc0
// 005339be  50                   push eax
// 005339bf  8bce                 mov ecx, esi
// 005339c1  e8ead30300           call 0x570db0
// 005339c6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005339ca  8b442424             mov eax, dword ptr [esp + 0x24]
// 005339ce  8d7e30               lea edi, [esi + 0x30]
// 005339d1  8bcf                 mov ecx, edi
// 005339d3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005339db  c70690557a00         mov dword ptr [esi], 0x7a5590
// 005339e1  895628               mov dword ptr [esi + 0x28], edx
// 005339e4  89462c               mov dword ptr [esi + 0x2c], eax
// 005339e7  e8d4990300           call 0x56d3c0
// 005339ec  c644241801           mov byte ptr [esp + 0x18], 1
// 005339f1  8d5e14               lea ebx, [esi + 0x14]
// 005339f4  e857990300           call 0x56d350
// 005339f9  57                   push edi
// 005339fa  8903                 mov dword ptr [ebx], eax
// 005339fc  e85f9d0300           call 0x56d760
// 00533a01  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00533a05  50                   push eax
// 00533a06  6aff                 push -1
// 00533a08  51                   push ecx
// 00533a09  e8328fffff           call 0x52c940
// 00533a0e  83c408               add esp, 8
// 00533a11  50                   push eax
// 00533a12  8bcb                 mov ecx, ebx
// 00533a14  e8e7990300           call 0x56d400
// 00533a19  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00533a1d  5f                   pop edi
// 00533a1e  8bc6                 mov eax, esi
// 00533a20  5e                   pop esi
// 00533a21  5b                   pop ebx
// 00533a22  64890d00000000       mov dword ptr fs:[0], ecx
// 00533a29  83c410               add esp, 0x10
// 00533a2c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

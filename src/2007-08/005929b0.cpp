// roc 2007-08 005929b0  unit: RBX::VVisit::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005929b0
//
// 005929b0  6aff                 push -1
// 005929b2  6863387500           push 0x753863
// 005929b7  64a100000000         mov eax, dword ptr fs:[0]
// 005929bd  50                   push eax
// 005929be  64892500000000       mov dword ptr fs:[0], esp
// 005929c5  51                   push ecx
// 005929c6  8b442424             mov eax, dword ptr [esp + 0x24]
// 005929ca  53                   push ebx
// 005929cb  56                   push esi
// 005929cc  57                   push edi
// 005929cd  8bf1                 mov esi, ecx
// 005929cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005929d3  50                   push eax
// 005929d4  51                   push ecx
// 005929d5  89742414             mov dword ptr [esp + 0x14], esi
// 005929d9  e8b2b9ffff           call 0x58e390
// 005929de  50                   push eax
// 005929df  8bce                 mov ecx, esi
// 005929e1  e8cae3fdff           call 0x570db0
// 005929e6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005929ea  8b442424             mov eax, dword ptr [esp + 0x24]
// 005929ee  8d7e30               lea edi, [esi + 0x30]
// 005929f1  8bcf                 mov ecx, edi
// 005929f3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005929fb  c70654027b00         mov dword ptr [esi], 0x7b0254
// 00592a01  895628               mov dword ptr [esi + 0x28], edx
// 00592a04  89462c               mov dword ptr [esi + 0x2c], eax
// 00592a07  e8b4a9fdff           call 0x56d3c0
// 00592a0c  c644241801           mov byte ptr [esp + 0x18], 1
// 00592a11  8d5e14               lea ebx, [esi + 0x14]
// 00592a14  e837a9fdff           call 0x56d350
// 00592a19  57                   push edi
// 00592a1a  8903                 mov dword ptr [ebx], eax
// 00592a1c  e8dfaffdff           call 0x56da00
// 00592a21  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00592a25  50                   push eax
// 00592a26  6aff                 push -1
// 00592a28  51                   push ecx
// 00592a29  e8129ff9ff           call 0x52c940
// 00592a2e  83c408               add esp, 8
// 00592a31  50                   push eax
// 00592a32  8bcb                 mov ecx, ebx
// 00592a34  e8c7a9fdff           call 0x56d400
// 00592a39  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00592a3d  5f                   pop edi
// 00592a3e  8bc6                 mov eax, esi
// 00592a40  5e                   pop esi
// 00592a41  5b                   pop ebx
// 00592a42  64890d00000000       mov dword ptr fs:[0], ecx
// 00592a49  83c410               add esp, 0x10
// 00592a4c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

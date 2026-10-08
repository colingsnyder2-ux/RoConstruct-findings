// roc 2007-08 0055c5d0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055c5d0
//
// 0055c5d0  6aff                 push -1
// 0055c5d2  6863387500           push 0x753863
// 0055c5d7  64a100000000         mov eax, dword ptr fs:[0]
// 0055c5dd  50                   push eax
// 0055c5de  64892500000000       mov dword ptr fs:[0], esp
// 0055c5e5  51                   push ecx
// 0055c5e6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055c5ea  53                   push ebx
// 0055c5eb  56                   push esi
// 0055c5ec  57                   push edi
// 0055c5ed  8bf1                 mov esi, ecx
// 0055c5ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055c5f3  50                   push eax
// 0055c5f4  51                   push ecx
// 0055c5f5  89742414             mov dword ptr [esp + 0x14], esi
// 0055c5f9  e842e7ffff           call 0x55ad40
// 0055c5fe  50                   push eax
// 0055c5ff  8bce                 mov ecx, esi
// 0055c601  e8aa470100           call 0x570db0
// 0055c606  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055c60a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055c60e  8d7e30               lea edi, [esi + 0x30]
// 0055c611  8bcf                 mov ecx, edi
// 0055c613  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055c61b  c706e48a7a00         mov dword ptr [esi], 0x7a8ae4
// 0055c621  895628               mov dword ptr [esi + 0x28], edx
// 0055c624  89462c               mov dword ptr [esi + 0x2c], eax
// 0055c627  e8940d0100           call 0x56d3c0
// 0055c62c  c644241801           mov byte ptr [esp + 0x18], 1
// 0055c631  8d5e14               lea ebx, [esi + 0x14]
// 0055c634  e8170d0100           call 0x56d350
// 0055c639  57                   push edi
// 0055c63a  8903                 mov dword ptr [ebx], eax
// 0055c63c  e8bf130100           call 0x56da00
// 0055c641  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055c645  50                   push eax
// 0055c646  6aff                 push -1
// 0055c648  51                   push ecx
// 0055c649  e8f202fdff           call 0x52c940
// 0055c64e  83c408               add esp, 8
// 0055c651  50                   push eax
// 0055c652  8bcb                 mov ecx, ebx
// 0055c654  e8a70d0100           call 0x56d400
// 0055c659  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055c65d  5f                   pop edi
// 0055c65e  8bc6                 mov eax, esi
// 0055c660  5e                   pop esi
// 0055c661  5b                   pop ebx
// 0055c662  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c669  83c410               add esp, 0x10
// 0055c66c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

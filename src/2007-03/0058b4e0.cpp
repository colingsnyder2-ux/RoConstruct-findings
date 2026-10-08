// roc 2007-03 0058b4e0  unit: seg_00580000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058b4e0
//
// 0058b4e0  6aff                 push -1
// 0058b4e2  6863797500           push 0x757963
// 0058b4e7  64a100000000         mov eax, dword ptr fs:[0]
// 0058b4ed  50                   push eax
// 0058b4ee  64892500000000       mov dword ptr fs:[0], esp
// 0058b4f5  51                   push ecx
// 0058b4f6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058b4fa  53                   push ebx
// 0058b4fb  56                   push esi
// 0058b4fc  57                   push edi
// 0058b4fd  8bf1                 mov esi, ecx
// 0058b4ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058b503  50                   push eax
// 0058b504  51                   push ecx
// 0058b505  89742414             mov dword ptr [esp + 0x14], esi
// 0058b509  e812d0ffff           call 0x588520
// 0058b50e  50                   push eax
// 0058b50f  8bce                 mov ecx, esi
// 0058b511  e87a5afeff           call 0x570f90
// 0058b516  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058b51a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058b51e  8d7e30               lea edi, [esi + 0x30]
// 0058b521  8bcf                 mov ecx, edi
// 0058b523  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058b52b  c706e00e7b00         mov dword ptr [esi], 0x7b0ee0
// 0058b531  895628               mov dword ptr [esi + 0x28], edx
// 0058b534  89462c               mov dword ptr [esi + 0x2c], eax
// 0058b537  e81419feff           call 0x56ce50
// 0058b53c  c644241801           mov byte ptr [esp + 0x18], 1
// 0058b541  8d5e14               lea ebx, [esi + 0x14]
// 0058b544  e89718feff           call 0x56cde0
// 0058b549  57                   push edi
// 0058b54a  8903                 mov dword ptr [ebx], eax
// 0058b54c  e8af1efeff           call 0x56d400
// 0058b551  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0058b555  50                   push eax
// 0058b556  6aff                 push -1
// 0058b558  51                   push ecx
// 0058b559  e88223faff           call 0x52d8e0
// 0058b55e  83c408               add esp, 8
// 0058b561  50                   push eax
// 0058b562  8bcb                 mov ecx, ebx
// 0058b564  e82719feff           call 0x56ce90
// 0058b569  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058b56d  5f                   pop edi
// 0058b56e  8bc6                 mov eax, esi
// 0058b570  5e                   pop esi
// 0058b571  5b                   pop ebx
// 0058b572  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b579  83c410               add esp, 0x10
// 0058b57c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

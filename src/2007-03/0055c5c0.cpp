// roc 2007-03 0055c5c0  unit: seg_00550000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055c5c0
//
// 0055c5c0  6aff                 push -1
// 0055c5c2  6863797500           push 0x757963
// 0055c5c7  64a100000000         mov eax, dword ptr fs:[0]
// 0055c5cd  50                   push eax
// 0055c5ce  64892500000000       mov dword ptr fs:[0], esp
// 0055c5d5  51                   push ecx
// 0055c5d6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055c5da  53                   push ebx
// 0055c5db  56                   push esi
// 0055c5dc  57                   push edi
// 0055c5dd  8bf1                 mov esi, ecx
// 0055c5df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055c5e3  50                   push eax
// 0055c5e4  51                   push ecx
// 0055c5e5  89742414             mov dword ptr [esp + 0x14], esi
// 0055c5e9  e852f9ffff           call 0x55bf40
// 0055c5ee  50                   push eax
// 0055c5ef  8bce                 mov ecx, esi
// 0055c5f1  e89a490100           call 0x570f90
// 0055c5f6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055c5fa  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055c5fe  8d7e30               lea edi, [esi + 0x30]
// 0055c601  8bcf                 mov ecx, edi
// 0055c603  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055c60b  c70620a27a00         mov dword ptr [esi], 0x7aa220
// 0055c611  895628               mov dword ptr [esi + 0x28], edx
// 0055c614  89462c               mov dword ptr [esi + 0x2c], eax
// 0055c617  e834080100           call 0x56ce50
// 0055c61c  c644241801           mov byte ptr [esp + 0x18], 1
// 0055c621  8d5e14               lea ebx, [esi + 0x14]
// 0055c624  e8370b0100           call 0x56d160
// 0055c629  57                   push edi
// 0055c62a  8903                 mov dword ptr [ebx], eax
// 0055c62c  e85f0d0100           call 0x56d390
// 0055c631  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055c635  50                   push eax
// 0055c636  6aff                 push -1
// 0055c638  51                   push ecx
// 0055c639  e8a212fdff           call 0x52d8e0
// 0055c63e  83c408               add esp, 8
// 0055c641  50                   push eax
// 0055c642  8bcb                 mov ecx, ebx
// 0055c644  e847080100           call 0x56ce90
// 0055c649  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055c64d  5f                   pop edi
// 0055c64e  8bc6                 mov eax, esi
// 0055c650  5e                   pop esi
// 0055c651  5b                   pop ebx
// 0055c652  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c659  83c410               add esp, 0x10
// 0055c65c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

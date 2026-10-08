// roc 2007-03 005516f0  unit: seg_00550000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005516f0
//
// 005516f0  6aff                 push -1
// 005516f2  6863797500           push 0x757963
// 005516f7  64a100000000         mov eax, dword ptr fs:[0]
// 005516fd  50                   push eax
// 005516fe  64892500000000       mov dword ptr fs:[0], esp
// 00551705  51                   push ecx
// 00551706  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055170a  53                   push ebx
// 0055170b  56                   push esi
// 0055170c  57                   push edi
// 0055170d  8bf1                 mov esi, ecx
// 0055170f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00551713  50                   push eax
// 00551714  51                   push ecx
// 00551715  89742414             mov dword ptr [esp + 0x14], esi
// 00551719  e86282ffff           call 0x549980
// 0055171e  50                   push eax
// 0055171f  8bce                 mov ecx, esi
// 00551721  e86af80100           call 0x570f90
// 00551726  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055172a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055172e  8d7e30               lea edi, [esi + 0x30]
// 00551731  8bcf                 mov ecx, edi
// 00551733  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055173b  c706b0827a00         mov dword ptr [esi], 0x7a82b0
// 00551741  895628               mov dword ptr [esi + 0x28], edx
// 00551744  89462c               mov dword ptr [esi + 0x2c], eax
// 00551747  e804b70100           call 0x56ce50
// 0055174c  c644241801           mov byte ptr [esp + 0x18], 1
// 00551751  8d5e14               lea ebx, [esi + 0x14]
// 00551754  e897b90100           call 0x56d0f0
// 00551759  57                   push edi
// 0055175a  8903                 mov dword ptr [ebx], eax
// 0055175c  e89fbc0100           call 0x56d400
// 00551761  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00551765  50                   push eax
// 00551766  6aff                 push -1
// 00551768  51                   push ecx
// 00551769  e872c1fdff           call 0x52d8e0
// 0055176e  83c408               add esp, 8
// 00551771  50                   push eax
// 00551772  8bcb                 mov ecx, ebx
// 00551774  e817b70100           call 0x56ce90
// 00551779  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055177d  5f                   pop edi
// 0055177e  8bc6                 mov eax, esi
// 00551780  5e                   pop esi
// 00551781  5b                   pop ebx
// 00551782  64890d00000000       mov dword ptr fs:[0], ecx
// 00551789  83c410               add esp, 0x10
// 0055178c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

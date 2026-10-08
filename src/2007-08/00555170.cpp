// roc 2007-08 00555170  unit: RBX::ServiceProvider  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555170
//
// 00555170  6aff                 push -1
// 00555172  6863387500           push 0x753863
// 00555177  64a100000000         mov eax, dword ptr fs:[0]
// 0055517d  50                   push eax
// 0055517e  64892500000000       mov dword ptr fs:[0], esp
// 00555185  51                   push ecx
// 00555186  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055518a  53                   push ebx
// 0055518b  56                   push esi
// 0055518c  57                   push edi
// 0055518d  8bf1                 mov esi, ecx
// 0055518f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00555193  50                   push eax
// 00555194  51                   push ecx
// 00555195  89742414             mov dword ptr [esp + 0x14], esi
// 00555199  e8a24dffff           call 0x549f40
// 0055519e  50                   push eax
// 0055519f  8bce                 mov ecx, esi
// 005551a1  e80abc0100           call 0x570db0
// 005551a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005551aa  8b442424             mov eax, dword ptr [esp + 0x24]
// 005551ae  8d7e30               lea edi, [esi + 0x30]
// 005551b1  8bcf                 mov ecx, edi
// 005551b3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005551bb  c70618837a00         mov dword ptr [esi], 0x7a8318
// 005551c1  895628               mov dword ptr [esi + 0x28], edx
// 005551c4  89462c               mov dword ptr [esi + 0x2c], eax
// 005551c7  e8f4810100           call 0x56d3c0
// 005551cc  c644241801           mov byte ptr [esp + 0x18], 1
// 005551d1  8d5e14               lea ebx, [esi + 0x14]
// 005551d4  e817850100           call 0x56d6f0
// 005551d9  57                   push edi
// 005551da  8903                 mov dword ptr [ebx], eax
// 005551dc  e81f880100           call 0x56da00
// 005551e1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005551e5  50                   push eax
// 005551e6  6aff                 push -1
// 005551e8  51                   push ecx
// 005551e9  e85277fdff           call 0x52c940
// 005551ee  83c408               add esp, 8
// 005551f1  50                   push eax
// 005551f2  8bcb                 mov ecx, ebx
// 005551f4  e807820100           call 0x56d400
// 005551f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005551fd  5f                   pop edi
// 005551fe  8bc6                 mov eax, esi
// 00555200  5e                   pop esi
// 00555201  5b                   pop ebx
// 00555202  64890d00000000       mov dword ptr fs:[0], ecx
// 00555209  83c410               add esp, 0x10
// 0055520c  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

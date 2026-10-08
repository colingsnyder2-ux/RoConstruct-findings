// roc 2007-03 00598c60  unit: seg_00590000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00598c60
//
// 00598c60  6aff                 push -1
// 00598c62  6863797500           push 0x757963
// 00598c67  64a100000000         mov eax, dword ptr fs:[0]
// 00598c6d  50                   push eax
// 00598c6e  64892500000000       mov dword ptr fs:[0], esp
// 00598c75  51                   push ecx
// 00598c76  8b442424             mov eax, dword ptr [esp + 0x24]
// 00598c7a  53                   push ebx
// 00598c7b  56                   push esi
// 00598c7c  57                   push edi
// 00598c7d  8bf1                 mov esi, ecx
// 00598c7f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00598c83  50                   push eax
// 00598c84  51                   push ecx
// 00598c85  89742414             mov dword ptr [esp + 0x14], esi
// 00598c89  e872edffff           call 0x597a00
// 00598c8e  50                   push eax
// 00598c8f  8bce                 mov ecx, esi
// 00598c91  e8fa82fdff           call 0x570f90
// 00598c96  8b542420             mov edx, dword ptr [esp + 0x20]
// 00598c9a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00598c9e  8d7e30               lea edi, [esi + 0x30]
// 00598ca1  8bcf                 mov ecx, edi
// 00598ca3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00598cab  c706441d7b00         mov dword ptr [esi], 0x7b1d44
// 00598cb1  895628               mov dword ptr [esi + 0x28], edx
// 00598cb4  89462c               mov dword ptr [esi + 0x2c], eax
// 00598cb7  e89441fdff           call 0x56ce50
// 00598cbc  c644241801           mov byte ptr [esp + 0x18], 1
// 00598cc1  8d5e14               lea ebx, [esi + 0x14]
// 00598cc4  e81741fdff           call 0x56cde0
// 00598cc9  57                   push edi
// 00598cca  8903                 mov dword ptr [ebx], eax
// 00598ccc  e8ff44fdff           call 0x56d1d0
// 00598cd1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00598cd5  50                   push eax
// 00598cd6  6aff                 push -1
// 00598cd8  51                   push ecx
// 00598cd9  e8024cf9ff           call 0x52d8e0
// 00598cde  83c408               add esp, 8
// 00598ce1  50                   push eax
// 00598ce2  8bcb                 mov ecx, ebx
// 00598ce4  e8a741fdff           call 0x56ce90
// 00598ce9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00598ced  5f                   pop edi
// 00598cee  8bc6                 mov eax, esi
// 00598cf0  5e                   pop esi
// 00598cf1  5b                   pop ebx
// 00598cf2  64890d00000000       mov dword ptr fs:[0], ecx
// 00598cf9  83c410               add esp, 0x10
// 00598cfc  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@QAE@P8DataModel@2@AE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

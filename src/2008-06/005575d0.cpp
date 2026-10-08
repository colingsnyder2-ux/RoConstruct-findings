// roc 2008-06 005575d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005575d0
//
// 005575d0  56                   push esi
// 005575d1  8bf1                 mov esi, ecx
// 005575d3  57                   push edi
// 005575d4  8d7e14               lea edi, [esi + 0x14]
// 005575d7  e804550100           call 0x56cae0
// 005575dc  8907                 mov dword ptr [edi], eax
// 005575de  8d4640               lea eax, [esi + 0x40]
// 005575e1  50                   push eax
// 005575e2  e809580100           call 0x56cdf0
// 005575e7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005575eb  50                   push eax
// 005575ec  6aff                 push -1
// 005575ee  51                   push ecx
// 005575ef  e89cc9ffff           call 0x553f90
// 005575f4  83c408               add esp, 8
// 005575f7  50                   push eax
// 005575f8  8bcf                 mov ecx, edi
// 005575fa  e841d50300           call 0x594b40
// 005575ff  83c648               add esi, 0x48
// 00557602  56                   push esi
// 00557603  e828560100           call 0x56cc30
// 00557608  8b542414             mov edx, dword ptr [esp + 0x14]
// 0055760c  50                   push eax
// 0055760d  6aff                 push -1
// 0055760f  52                   push edx
// 00557610  e87bc9ffff           call 0x553f90
// 00557615  83c408               add esp, 8
// 00557618  50                   push eax
// 00557619  8bcf                 mov ecx, edi
// 0055761b  e820d50300           call 0x594b40
// 00557620  5f                   pop edi
// 00557621  5e                   pop esi
// 00557622  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp

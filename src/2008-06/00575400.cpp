// roc 2008-06 00575400  unit: RBX::ServiceProvider  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575400
//
// 00575400  56                   push esi
// 00575401  8bf1                 mov esi, ecx
// 00575403  57                   push edi
// 00575404  8d7e14               lea edi, [esi + 0x14]
// 00575407  e8e479ffff           call 0x56cdf0
// 0057540c  8907                 mov dword ptr [edi], eax
// 0057540e  8d4640               lea eax, [esi + 0x40]
// 00575411  50                   push eax
// 00575412  e8d979ffff           call 0x56cdf0
// 00575417  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057541b  50                   push eax
// 0057541c  6aff                 push -1
// 0057541e  51                   push ecx
// 0057541f  e86cebfdff           call 0x553f90
// 00575424  83c408               add esp, 8
// 00575427  50                   push eax
// 00575428  8bcf                 mov ecx, edi
// 0057542a  e811f70100           call 0x594b40
// 0057542f  83c648               add esi, 0x48
// 00575432  56                   push esi
// 00575433  e8f877ffff           call 0x56cc30
// 00575438  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057543c  50                   push eax
// 0057543d  6aff                 push -1
// 0057543f  52                   push edx
// 00575440  e84bebfdff           call 0x553f90
// 00575445  83c408               add esp, 8
// 00575448  50                   push eax
// 00575449  8bcf                 mov ecx, edi
// 0057544b  e8f0f60100           call 0x594b40
// 00575450  5f                   pop edi
// 00575451  5e                   pop esi
// 00575452  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp

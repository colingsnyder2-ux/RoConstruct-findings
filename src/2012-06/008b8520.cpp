// roc 2012-06 008b8520  unit: seg_008b0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b8520
//
// 008b8520  56                   push esi
// 008b8521  57                   push edi
// 008b8522  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b8526  8bf1                 mov esi, ecx
// 008b8528  c70600000000         mov dword ptr [esi], 0
// 008b852e  8b07                 mov eax, dword ptr [edi]
// 008b8530  85c0                 test eax, eax
// 008b8532  7415                 je 0x8b8549
// 008b8534  8906                 mov dword ptr [esi], eax
// 008b8536  8b07                 mov eax, dword ptr [edi]
// 008b8538  8b00                 mov eax, dword ptr [eax]
// 008b853a  6a00                 push 0
// 008b853c  8d4e08               lea ecx, [esi + 8]
// 008b853f  51                   push ecx
// 008b8540  8d5708               lea edx, [edi + 8]
// 008b8543  52                   push edx
// 008b8544  ffd0                 call eax
// 008b8546  83c40c               add esp, 0xc
// 008b8549  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008b854c  5f                   pop edi
// 008b854d  894e20               mov dword ptr [esi + 0x20], ecx
// 008b8550  8bc6                 mov eax, esi
// 008b8552  5e                   pop esi
// 008b8553  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

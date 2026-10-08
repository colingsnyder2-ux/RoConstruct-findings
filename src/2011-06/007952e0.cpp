// roc 2011-06 007952e0  unit: RBX::VHttp::?$sp_counted_impl_p  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007952e0
//
// 007952e0  56                   push esi
// 007952e1  57                   push edi
// 007952e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007952e6  8bf1                 mov esi, ecx
// 007952e8  c70600000000         mov dword ptr [esi], 0
// 007952ee  8b07                 mov eax, dword ptr [edi]
// 007952f0  85c0                 test eax, eax
// 007952f2  7415                 je 0x795309
// 007952f4  8906                 mov dword ptr [esi], eax
// 007952f6  8b07                 mov eax, dword ptr [edi]
// 007952f8  8b00                 mov eax, dword ptr [eax]
// 007952fa  6a00                 push 0
// 007952fc  8d4e08               lea ecx, [esi + 8]
// 007952ff  51                   push ecx
// 00795300  8d5708               lea edx, [edi + 8]
// 00795303  52                   push edx
// 00795304  ffd0                 call eax
// 00795306  83c40c               add esp, 0xc
// 00795309  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0079530c  5f                   pop edi
// 0079530d  894e20               mov dword ptr [esi + 0x20], ecx
// 00795310  8bc6                 mov eax, esi
// 00795312  5e                   pop esi
// 00795313  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

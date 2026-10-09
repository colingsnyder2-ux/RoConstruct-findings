// roc 2009-12 0072baf0  unit: boost::Vthread::?$sp_counted_impl_p  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072baf0
//
// 0072baf0  56                   push esi
// 0072baf1  57                   push edi
// 0072baf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0072baf6  8bf1                 mov esi, ecx
// 0072baf8  c70600000000         mov dword ptr [esi], 0
// 0072bafe  8b07                 mov eax, dword ptr [edi]
// 0072bb00  85c0                 test eax, eax
// 0072bb02  7415                 je 0x72bb19
// 0072bb04  8906                 mov dword ptr [esi], eax
// 0072bb06  8b07                 mov eax, dword ptr [edi]
// 0072bb08  8b00                 mov eax, dword ptr [eax]
// 0072bb0a  6a00                 push 0
// 0072bb0c  8d4e08               lea ecx, [esi + 8]
// 0072bb0f  51                   push ecx
// 0072bb10  8d5708               lea edx, [edi + 8]
// 0072bb13  52                   push edx
// 0072bb14  ffd0                 call eax
// 0072bb16  83c40c               add esp, 0xc
// 0072bb19  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0072bb1c  5f                   pop edi
// 0072bb1d  894e20               mov dword ptr [esi + 0x20], ecx
// 0072bb20  8bc6                 mov eax, esi
// 0072bb22  5e                   pop esi
// 0072bb23  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

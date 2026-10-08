// roc 2010-06 00740c40  unit: RBX::VHttp::?$sp_counted_impl_p  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00740c40
//
// 00740c40  56                   push esi
// 00740c41  57                   push edi
// 00740c42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00740c46  8bf1                 mov esi, ecx
// 00740c48  c70600000000         mov dword ptr [esi], 0
// 00740c4e  8b07                 mov eax, dword ptr [edi]
// 00740c50  85c0                 test eax, eax
// 00740c52  7415                 je 0x740c69
// 00740c54  8906                 mov dword ptr [esi], eax
// 00740c56  8b07                 mov eax, dword ptr [edi]
// 00740c58  8b00                 mov eax, dword ptr [eax]
// 00740c5a  6a00                 push 0
// 00740c5c  8d4e08               lea ecx, [esi + 8]
// 00740c5f  51                   push ecx
// 00740c60  8d5708               lea edx, [edi + 8]
// 00740c63  52                   push edx
// 00740c64  ffd0                 call eax
// 00740c66  83c40c               add esp, 0xc
// 00740c69  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00740c6c  5f                   pop edi
// 00740c6d  894e20               mov dword ptr [esi + 0x20], ecx
// 00740c70  8bc6                 mov eax, esi
// 00740c72  5e                   pop esi
// 00740c73  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

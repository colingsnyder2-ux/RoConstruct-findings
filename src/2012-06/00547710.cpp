// roc 2012-06 00547710  unit: RBX::Network::Players::W4PlayerChatType::?$EnumDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00547710
//
// 00547710  56                   push esi
// 00547711  57                   push edi
// 00547712  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00547716  8b07                 mov eax, dword ptr [edi]
// 00547718  8bf1                 mov esi, ecx
// 0054771a  8906                 mov dword ptr [esi], eax
// 0054771c  c7460800000000       mov dword ptr [esi + 8], 0
// 00547723  8b4708               mov eax, dword ptr [edi + 8]
// 00547726  85c0                 test eax, eax
// 00547728  7417                 je 0x547741
// 0054772a  894608               mov dword ptr [esi + 8], eax
// 0054772d  8b4f08               mov ecx, dword ptr [edi + 8]
// 00547730  8b09                 mov ecx, dword ptr [ecx]
// 00547732  6a00                 push 0
// 00547734  8d5610               lea edx, [esi + 0x10]
// 00547737  52                   push edx
// 00547738  8d4710               lea eax, [edi + 0x10]
// 0054773b  50                   push eax
// 0054773c  ffd1                 call ecx
// 0054773e  83c40c               add esp, 0xc
// 00547741  8b5728               mov edx, dword ptr [edi + 0x28]
// 00547744  895628               mov dword ptr [esi + 0x28], edx
// 00547747  8a4730               mov al, byte ptr [edi + 0x30]
// 0054774a  884630               mov byte ptr [esi + 0x30], al
// 0054774d  5f                   pop edi
// 0054774e  8bc6                 mov eax, esi
// 00547750  5e                   pop esi
// 00547751  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

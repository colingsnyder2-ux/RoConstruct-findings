// roc 2011-06 004ceb90  unit: RBX::Network::Players::W4PlayerChatType::?$EnumDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ceb90
//
// 004ceb90  56                   push esi
// 004ceb91  57                   push edi
// 004ceb92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ceb96  8b07                 mov eax, dword ptr [edi]
// 004ceb98  8bf1                 mov esi, ecx
// 004ceb9a  8906                 mov dword ptr [esi], eax
// 004ceb9c  c7460800000000       mov dword ptr [esi + 8], 0
// 004ceba3  8b4708               mov eax, dword ptr [edi + 8]
// 004ceba6  85c0                 test eax, eax
// 004ceba8  7417                 je 0x4cebc1
// 004cebaa  894608               mov dword ptr [esi + 8], eax
// 004cebad  8b4f08               mov ecx, dword ptr [edi + 8]
// 004cebb0  8b09                 mov ecx, dword ptr [ecx]
// 004cebb2  6a00                 push 0
// 004cebb4  8d5610               lea edx, [esi + 0x10]
// 004cebb7  52                   push edx
// 004cebb8  8d4710               lea eax, [edi + 0x10]
// 004cebbb  50                   push eax
// 004cebbc  ffd1                 call ecx
// 004cebbe  83c40c               add esp, 0xc
// 004cebc1  8b5728               mov edx, dword ptr [edi + 0x28]
// 004cebc4  895628               mov dword ptr [esi + 0x28], edx
// 004cebc7  8a4730               mov al, byte ptr [edi + 0x30]
// 004cebca  884630               mov byte ptr [esi + 0x30], al
// 004cebcd  5f                   pop edi
// 004cebce  8bc6                 mov eax, esi
// 004cebd0  5e                   pop esi
// 004cebd1  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

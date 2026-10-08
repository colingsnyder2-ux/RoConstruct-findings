// roc 2010-06 004c6b10  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c6b10
//
// 004c6b10  56                   push esi
// 004c6b11  57                   push edi
// 004c6b12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c6b16  8b07                 mov eax, dword ptr [edi]
// 004c6b18  8bf1                 mov esi, ecx
// 004c6b1a  8906                 mov dword ptr [esi], eax
// 004c6b1c  c7460800000000       mov dword ptr [esi + 8], 0
// 004c6b23  8b4708               mov eax, dword ptr [edi + 8]
// 004c6b26  85c0                 test eax, eax
// 004c6b28  7417                 je 0x4c6b41
// 004c6b2a  894608               mov dword ptr [esi + 8], eax
// 004c6b2d  8b4f08               mov ecx, dword ptr [edi + 8]
// 004c6b30  8b09                 mov ecx, dword ptr [ecx]
// 004c6b32  6a00                 push 0
// 004c6b34  8d5610               lea edx, [esi + 0x10]
// 004c6b37  52                   push edx
// 004c6b38  8d4710               lea eax, [edi + 0x10]
// 004c6b3b  50                   push eax
// 004c6b3c  ffd1                 call ecx
// 004c6b3e  83c40c               add esp, 0xc
// 004c6b41  8b5728               mov edx, dword ptr [edi + 0x28]
// 004c6b44  895628               mov dword ptr [esi + 0x28], edx
// 004c6b47  8a4730               mov al, byte ptr [edi + 0x30]
// 004c6b4a  884630               mov byte ptr [esi + 0x30], al
// 004c6b4d  5f                   pop edi
// 004c6b4e  8bc6                 mov eax, esi
// 004c6b50  5e                   pop esi
// 004c6b51  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

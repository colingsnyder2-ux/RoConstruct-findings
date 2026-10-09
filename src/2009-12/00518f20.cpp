// roc 2009-12 00518f20  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00518f20
//
// 00518f20  56                   push esi
// 00518f21  57                   push edi
// 00518f22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00518f26  8b07                 mov eax, dword ptr [edi]
// 00518f28  8bf1                 mov esi, ecx
// 00518f2a  8906                 mov dword ptr [esi], eax
// 00518f2c  c7460800000000       mov dword ptr [esi + 8], 0
// 00518f33  8b4708               mov eax, dword ptr [edi + 8]
// 00518f36  85c0                 test eax, eax
// 00518f38  7417                 je 0x518f51
// 00518f3a  894608               mov dword ptr [esi + 8], eax
// 00518f3d  8b4f08               mov ecx, dword ptr [edi + 8]
// 00518f40  8b09                 mov ecx, dword ptr [ecx]
// 00518f42  6a00                 push 0
// 00518f44  8d5610               lea edx, [esi + 0x10]
// 00518f47  52                   push edx
// 00518f48  8d4710               lea eax, [edi + 0x10]
// 00518f4b  50                   push eax
// 00518f4c  ffd1                 call ecx
// 00518f4e  83c40c               add esp, 0xc
// 00518f51  8b5728               mov edx, dword ptr [edi + 0x28]
// 00518f54  895628               mov dword ptr [esi + 0x28], edx
// 00518f57  8a4730               mov al, byte ptr [edi + 0x30]
// 00518f5a  884630               mov byte ptr [esi + 0x30], al
// 00518f5d  5f                   pop edi
// 00518f5e  8bc6                 mov eax, esi
// 00518f60  5e                   pop esi
// 00518f61  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

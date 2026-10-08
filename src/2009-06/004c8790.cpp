// roc 2009-06 004c8790  unit: RBX::VInstance::?$NonFactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c8790
//
// 004c8790  56                   push esi
// 004c8791  57                   push edi
// 004c8792  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c8796  8b07                 mov eax, dword ptr [edi]
// 004c8798  8bf1                 mov esi, ecx
// 004c879a  8906                 mov dword ptr [esi], eax
// 004c879c  c7460800000000       mov dword ptr [esi + 8], 0
// 004c87a3  8b4708               mov eax, dword ptr [edi + 8]
// 004c87a6  85c0                 test eax, eax
// 004c87a8  7417                 je 0x4c87c1
// 004c87aa  894608               mov dword ptr [esi + 8], eax
// 004c87ad  8b4f08               mov ecx, dword ptr [edi + 8]
// 004c87b0  8b09                 mov ecx, dword ptr [ecx]
// 004c87b2  6a00                 push 0
// 004c87b4  8d5610               lea edx, [esi + 0x10]
// 004c87b7  52                   push edx
// 004c87b8  8d4710               lea eax, [edi + 0x10]
// 004c87bb  50                   push eax
// 004c87bc  ffd1                 call ecx
// 004c87be  83c40c               add esp, 0xc
// 004c87c1  8b5728               mov edx, dword ptr [edi + 0x28]
// 004c87c4  895628               mov dword ptr [esi + 0x28], edx
// 004c87c7  8a4730               mov al, byte ptr [edi + 0x30]
// 004c87ca  884630               mov byte ptr [esi + 0x30], al
// 004c87cd  5f                   pop edi
// 004c87ce  8bc6                 mov eax, esi
// 004c87d0  5e                   pop esi
// 004c87d1  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-08 0055a740  unit: RBX::VTool::?$FactoryProduct::Creator  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055a740
//
// 0055a740  6aff                 push -1
// 0055a742  6863387500           push 0x753863
// 0055a747  64a100000000         mov eax, dword ptr fs:[0]
// 0055a74d  50                   push eax
// 0055a74e  64892500000000       mov dword ptr fs:[0], esp
// 0055a755  51                   push ecx
// 0055a756  56                   push esi
// 0055a757  8bf1                 mov esi, ecx
// 0055a759  89742404             mov dword ptr [esp + 4], esi
// 0055a75d  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0055a760  85c9                 test ecx, ecx
// 0055a762  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0055a76a  7408                 je 0x55a774
// 0055a76c  8b01                 mov eax, dword ptr [ecx]
// 0055a76e  8b10                 mov edx, dword ptr [eax]
// 0055a770  6a01                 push 1
// 0055a772  ffd2                 call edx
// 0055a774  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055a777  85c9                 test ecx, ecx
// 0055a779  c644241000           mov byte ptr [esp + 0x10], 0
// 0055a77e  7408                 je 0x55a788
// 0055a780  8b01                 mov eax, dword ptr [ecx]
// 0055a782  8b10                 mov edx, dword ptr [eax]
// 0055a784  6a01                 push 1
// 0055a786  ffd2                 call edx
// 0055a788  8bce                 mov ecx, esi
// 0055a78a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055a792  e879ceebff           call 0x417610
// 0055a797  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055a79b  5e                   pop esi
// 0055a79c  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a7a3  83c410               add esp, 0x10
// 0055a7a6  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@_N@Z$01@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

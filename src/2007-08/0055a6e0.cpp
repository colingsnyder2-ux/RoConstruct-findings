// roc 2007-08 0055a6e0  unit: RBX::VTool::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055a6e0
//
// 0055a6e0  6aff                 push -1
// 0055a6e2  6888587500           push 0x755888
// 0055a6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0055a6ed  50                   push eax
// 0055a6ee  64892500000000       mov dword ptr fs:[0], esp
// 0055a6f5  51                   push ecx
// 0055a6f6  56                   push esi
// 0055a6f7  8bf1                 mov esi, ecx
// 0055a6f9  89742404             mov dword ptr [esp + 4], esi
// 0055a6fd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055a700  85c9                 test ecx, ecx
// 0055a702  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055a70a  7408                 je 0x55a714
// 0055a70c  8b01                 mov eax, dword ptr [ecx]
// 0055a70e  8b10                 mov edx, dword ptr [eax]
// 0055a710  6a01                 push 1
// 0055a712  ffd2                 call edx
// 0055a714  8bce                 mov ecx, esi
// 0055a716  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055a71e  e8edceebff           call 0x417610
// 0055a723  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055a727  5e                   pop esi
// 0055a728  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a72f  83c410               add esp, 0x10
// 0055a732  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1?$BoundFuncDesc@VDataModel@RBX@@$$A6AXVContentId@2@@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-03 0058b1c0  unit: seg_00580000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058b1c0
//
// 0058b1c0  6aff                 push -1
// 0058b1c2  6863797500           push 0x757963
// 0058b1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0058b1cd  50                   push eax
// 0058b1ce  64892500000000       mov dword ptr fs:[0], esp
// 0058b1d5  51                   push ecx
// 0058b1d6  56                   push esi
// 0058b1d7  8bf1                 mov esi, ecx
// 0058b1d9  89742404             mov dword ptr [esp + 4], esi
// 0058b1dd  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0058b1e0  85c9                 test ecx, ecx
// 0058b1e2  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0058b1ea  7408                 je 0x58b1f4
// 0058b1ec  8b01                 mov eax, dword ptr [ecx]
// 0058b1ee  8b10                 mov edx, dword ptr [eax]
// 0058b1f0  6a01                 push 1
// 0058b1f2  ffd2                 call edx
// 0058b1f4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0058b1f7  85c9                 test ecx, ecx
// 0058b1f9  c644241000           mov byte ptr [esp + 0x10], 0
// 0058b1fe  7408                 je 0x58b208
// 0058b200  8b01                 mov eax, dword ptr [ecx]
// 0058b202  8b10                 mov edx, dword ptr [eax]
// 0058b204  6a01                 push 1
// 0058b206  ffd2                 call edx
// 0058b208  8bce                 mov ecx, esi
// 0058b20a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0058b212  e859d9e8ff           call 0x418b70
// 0058b217  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b21b  5e                   pop esi
// 0058b21c  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b223  83c410               add esp, 0x10
// 0058b226  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@_N@Z$01@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

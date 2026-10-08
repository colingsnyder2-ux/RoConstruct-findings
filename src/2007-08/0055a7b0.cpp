// roc 2007-08 0055a7b0  unit: RBX::VTool::?$FactoryProduct::Creator  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055a7b0
//
// 0055a7b0  6aff                 push -1
// 0055a7b2  688e387500           push 0x75388e
// 0055a7b7  64a100000000         mov eax, dword ptr fs:[0]
// 0055a7bd  50                   push eax
// 0055a7be  64892500000000       mov dword ptr fs:[0], esp
// 0055a7c5  51                   push ecx
// 0055a7c6  56                   push esi
// 0055a7c7  8bf1                 mov esi, ecx
// 0055a7c9  89742404             mov dword ptr [esp + 4], esi
// 0055a7cd  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0055a7d0  85c9                 test ecx, ecx
// 0055a7d2  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0055a7da  7408                 je 0x55a7e4
// 0055a7dc  8b01                 mov eax, dword ptr [ecx]
// 0055a7de  8b10                 mov edx, dword ptr [eax]
// 0055a7e0  6a01                 push 1
// 0055a7e2  ffd2                 call edx
// 0055a7e4  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0055a7e7  85c9                 test ecx, ecx
// 0055a7e9  c644241001           mov byte ptr [esp + 0x10], 1
// 0055a7ee  7408                 je 0x55a7f8
// 0055a7f0  8b01                 mov eax, dword ptr [ecx]
// 0055a7f2  8b10                 mov edx, dword ptr [eax]
// 0055a7f4  6a01                 push 1
// 0055a7f6  ffd2                 call edx
// 0055a7f8  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055a7fb  85c9                 test ecx, ecx
// 0055a7fd  c644241000           mov byte ptr [esp + 0x10], 0
// 0055a802  7408                 je 0x55a80c
// 0055a804  8b01                 mov eax, dword ptr [ecx]
// 0055a806  8b10                 mov edx, dword ptr [eax]
// 0055a808  6a01                 push 1
// 0055a80a  ffd2                 call edx
// 0055a80c  8bce                 mov ecx, esi
// 0055a80e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055a816  e8f5cdebff           call 0x417610
// 0055a81b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055a81f  5e                   pop esi
// 0055a820  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a827  83c410               add esp, 0x10
// 0055a82a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@0_N@Z$02@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

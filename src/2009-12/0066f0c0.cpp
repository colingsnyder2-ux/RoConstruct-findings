// roc 2009-12 0066f0c0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0066f0c0
//
// 0066f0c0  56                   push esi
// 0066f0c1  6a0c                 push 0xc
// 0066f0c3  8bf1                 mov esi, ecx
// 0066f0c5  e896471800           call 0x7f3860
// 0066f0ca  83c404               add esp, 4
// 0066f0cd  85c0                 test eax, eax
// 0066f0cf  7427                 je 0x66f0f8
// 0066f0d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066f0d5  c700c41b9b00         mov dword ptr [eax], 0x9b1bc4
// 0066f0db  8b11                 mov edx, dword ptr [ecx]
// 0066f0dd  895004               mov dword ptr [eax + 4], edx
// 0066f0e0  8b4904               mov ecx, dword ptr [ecx + 4]
// 0066f0e3  894808               mov dword ptr [eax + 8], ecx
// 0066f0e6  85c9                 test ecx, ecx
// 0066f0e8  7410                 je 0x66f0fa
// 0066f0ea  83c104               add ecx, 4
// 0066f0ed  ba01000000           mov edx, 1
// 0066f0f2  f00fc111             lock xadd dword ptr [ecx], edx
// 0066f0f6  eb02                 jmp 0x66f0fa
// 0066f0f8  33c0                 xor eax, eax
// 0066f0fa  8d542408             lea edx, [esp + 8]
// 0066f0fe  8bc8                 mov ecx, eax
// 0066f100  3bd6                 cmp edx, esi
// 0066f102  7404                 je 0x66f108
// 0066f104  8b0e                 mov ecx, dword ptr [esi]
// 0066f106  8906                 mov dword ptr [esi], eax
// 0066f108  85c9                 test ecx, ecx
// 0066f10a  7408                 je 0x66f114
// 0066f10c  8b01                 mov eax, dword ptr [ecx]
// 0066f10e  8b10                 mov edx, dword ptr [eax]
// 0066f110  6a01                 push 1
// 0066f112  ffd2                 call edx
// 0066f114  8bc6                 mov eax, esi
// 0066f116  5e                   pop esi
// 0066f117  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

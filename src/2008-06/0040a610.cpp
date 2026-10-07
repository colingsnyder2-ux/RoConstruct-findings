// roc 2008-06 0040a610  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a610
//
// 0040a610  56                   push esi
// 0040a611  57                   push edi
// 0040a612  8bf9                 mov edi, ecx
// 0040a614  e817261600           call 0x56cc30
// 0040a619  6a08                 push 8
// 0040a61b  8907                 mov dword ptr [edi], eax
// 0040a61d  8d7704               lea esi, [edi + 4]
// 0040a620  e8fb622900           call 0x6a0920
// 0040a625  83c404               add esp, 4
// 0040a628  85c0                 test eax, eax
// 0040a62a  7411                 je 0x40a63d
// 0040a62c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040a630  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 0040a636  8a11                 mov dl, byte ptr [ecx]
// 0040a638  885004               mov byte ptr [eax + 4], dl
// 0040a63b  eb02                 jmp 0x40a63f
// 0040a63d  33c0                 xor eax, eax
// 0040a63f  8d54240c             lea edx, [esp + 0xc]
// 0040a643  8bc8                 mov ecx, eax
// 0040a645  3bd6                 cmp edx, esi
// 0040a647  7404                 je 0x40a64d
// 0040a649  8b0e                 mov ecx, dword ptr [esi]
// 0040a64b  8906                 mov dword ptr [esi], eax
// 0040a64d  85c9                 test ecx, ecx
// 0040a64f  7408                 je 0x40a659
// 0040a651  8b01                 mov eax, dword ptr [ecx]
// 0040a653  8b10                 mov edx, dword ptr [eax]
// 0040a655  6a01                 push 1
// 0040a657  ffd2                 call edx
// 0040a659  8bc7                 mov eax, edi
// 0040a65b  5f                   pop edi
// 0040a65c  5e                   pop esi
// 0040a65d  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@Value@Reflection@RBX@@QAEAAV012@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

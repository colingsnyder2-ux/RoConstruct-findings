// roc 2008-06 0042d0a0  unit: boost::any::H::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d0a0
//
// 0042d0a0  8b442404             mov eax, dword ptr [esp + 4]
// 0042d0a4  56                   push esi
// 0042d0a5  8bf1                 mov esi, ecx
// 0042d0a7  8b08                 mov ecx, dword ptr [eax]
// 0042d0a9  890e                 mov dword ptr [esi], ecx
// 0042d0ab  8b4804               mov ecx, dword ptr [eax + 4]
// 0042d0ae  57                   push edi
// 0042d0af  8d7e04               lea edi, [esi + 4]
// 0042d0b2  85c9                 test ecx, ecx
// 0042d0b4  7409                 je 0x42d0bf
// 0042d0b6  8b11                 mov edx, dword ptr [ecx]
// 0042d0b8  8b4208               mov eax, dword ptr [edx + 8]
// 0042d0bb  ffd0                 call eax
// 0042d0bd  eb02                 jmp 0x42d0c1
// 0042d0bf  33c0                 xor eax, eax
// 0042d0c1  8d4c240c             lea ecx, [esp + 0xc]
// 0042d0c5  3bcf                 cmp ecx, edi
// 0042d0c7  7406                 je 0x42d0cf
// 0042d0c9  8bc8                 mov ecx, eax
// 0042d0cb  8b07                 mov eax, dword ptr [edi]
// 0042d0cd  890f                 mov dword ptr [edi], ecx
// 0042d0cf  85c0                 test eax, eax
// 0042d0d1  740a                 je 0x42d0dd
// 0042d0d3  8b10                 mov edx, dword ptr [eax]
// 0042d0d5  8bc8                 mov ecx, eax
// 0042d0d7  8b02                 mov eax, dword ptr [edx]
// 0042d0d9  6a01                 push 1
// 0042d0db  ffd0                 call eax
// 0042d0dd  5f                   pop edi
// 0042d0de  8bc6                 mov eax, esi
// 0042d0e0  5e                   pop esi
// 0042d0e1  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??4Value@Reflection@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

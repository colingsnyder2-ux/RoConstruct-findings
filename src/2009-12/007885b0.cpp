// roc 2009-12 007885b0  unit: RBX::UniversalTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007885b0
//
// 007885b0  51                   push ecx
// 007885b1  56                   push esi
// 007885b2  57                   push edi
// 007885b3  8bf1                 mov esi, ecx
// 007885b5  8d44240b             lea eax, [esp + 0xb]
// 007885b9  50                   push eax
// 007885ba  8d4c240f             lea ecx, [esp + 0xf]
// 007885be  8d7e04               lea edi, [esi + 4]
// 007885c1  51                   push ecx
// 007885c2  8bcf                 mov ecx, edi
// 007885c4  e8c79ec7ff           call 0x402490
// 007885c9  33c0                 xor eax, eax
// 007885cb  894624               mov dword ptr [esi + 0x24], eax
// 007885ce  894628               mov dword ptr [esi + 0x28], eax
// 007885d1  8b4718               mov eax, dword ptr [edi + 0x18]
// 007885d4  8b3f                 mov edi, dword ptr [edi]
// 007885d6  897e24               mov dword ptr [esi + 0x24], edi
// 007885d9  894628               mov dword ptr [esi + 0x28], eax
// 007885dc  5f                   pop edi
// 007885dd  8bc6                 mov eax, esi
// 007885df  5e                   pop esi
// 007885e0  59                   pop ecx
// 007885e1  c3                   ret 
// library rbxgs/v8world\IMoving.cpp (function ??0IMovingManager@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/IMoving.cpp

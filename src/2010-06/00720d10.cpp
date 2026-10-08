// roc 2010-06 00720d10  unit: RBX::UniversalTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720d10
//
// 00720d10  51                   push ecx
// 00720d11  56                   push esi
// 00720d12  57                   push edi
// 00720d13  8bf1                 mov esi, ecx
// 00720d15  8d44240b             lea eax, [esp + 0xb]
// 00720d19  50                   push eax
// 00720d1a  8d4c240f             lea ecx, [esp + 0xf]
// 00720d1e  8d7e04               lea edi, [esi + 4]
// 00720d21  51                   push ecx
// 00720d22  8bcf                 mov ecx, edi
// 00720d24  e897e80300           call 0x75f5c0
// 00720d29  33c0                 xor eax, eax
// 00720d2b  894624               mov dword ptr [esi + 0x24], eax
// 00720d2e  894628               mov dword ptr [esi + 0x28], eax
// 00720d31  8b4718               mov eax, dword ptr [edi + 0x18]
// 00720d34  8b3f                 mov edi, dword ptr [edi]
// 00720d36  897e24               mov dword ptr [esi + 0x24], edi
// 00720d39  894628               mov dword ptr [esi + 0x28], eax
// 00720d3c  5f                   pop edi
// 00720d3d  8bc6                 mov eax, esi
// 00720d3f  5e                   pop esi
// 00720d40  59                   pop ecx
// 00720d41  c3                   ret 
// library rbxgs/v8world\IMoving.cpp (function ??0IMovingManager@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/IMoving.cpp

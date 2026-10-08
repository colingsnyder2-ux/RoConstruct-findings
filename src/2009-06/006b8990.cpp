// roc 2009-06 006b8990  unit: RBX::UniversalTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8990
//
// 006b8990  51                   push ecx
// 006b8991  56                   push esi
// 006b8992  57                   push edi
// 006b8993  8bf1                 mov esi, ecx
// 006b8995  8d44240b             lea eax, [esp + 0xb]
// 006b8999  50                   push eax
// 006b899a  8d4c240f             lea ecx, [esp + 0xf]
// 006b899e  8d7e04               lea edi, [esi + 4]
// 006b89a1  51                   push ecx
// 006b89a2  8bcf                 mov ecx, edi
// 006b89a4  e89768fcff           call 0x67f240
// 006b89a9  33c0                 xor eax, eax
// 006b89ab  894624               mov dword ptr [esi + 0x24], eax
// 006b89ae  894628               mov dword ptr [esi + 0x28], eax
// 006b89b1  8b4718               mov eax, dword ptr [edi + 0x18]
// 006b89b4  8b3f                 mov edi, dword ptr [edi]
// 006b89b6  897e24               mov dword ptr [esi + 0x24], edi
// 006b89b9  894628               mov dword ptr [esi + 0x28], eax
// 006b89bc  5f                   pop edi
// 006b89bd  8bc6                 mov eax, esi
// 006b89bf  5e                   pop esi
// 006b89c0  59                   pop ecx
// 006b89c1  c3                   ret 
// library rbxgs/v8world\IMoving.cpp (function ??0IMovingManager@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/IMoving.cpp

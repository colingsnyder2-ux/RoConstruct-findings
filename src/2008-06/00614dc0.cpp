// roc 2008-06 00614dc0  unit: RBX::RevoluteLink  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614dc0
//
// 00614dc0  51                   push ecx
// 00614dc1  56                   push esi
// 00614dc2  57                   push edi
// 00614dc3  8bf1                 mov esi, ecx
// 00614dc5  8d44240b             lea eax, [esp + 0xb]
// 00614dc9  50                   push eax
// 00614dca  8d4c240f             lea ecx, [esp + 0xf]
// 00614dce  8d7e04               lea edi, [esi + 4]
// 00614dd1  51                   push ecx
// 00614dd2  8bcf                 mov ecx, edi
// 00614dd4  e8c7640300           call 0x64b2a0
// 00614dd9  33c0                 xor eax, eax
// 00614ddb  894624               mov dword ptr [esi + 0x24], eax
// 00614dde  894628               mov dword ptr [esi + 0x28], eax
// 00614de1  8b4718               mov eax, dword ptr [edi + 0x18]
// 00614de4  8b3f                 mov edi, dword ptr [edi]
// 00614de6  897e24               mov dword ptr [esi + 0x24], edi
// 00614de9  894628               mov dword ptr [esi + 0x28], eax
// 00614dec  5f                   pop edi
// 00614ded  8bc6                 mov eax, esi
// 00614def  5e                   pop esi
// 00614df0  59                   pop ecx
// 00614df1  c3                   ret 
// library rbxgs/v8world\IMoving.cpp (function ??0IMovingManager@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/IMoving.cpp

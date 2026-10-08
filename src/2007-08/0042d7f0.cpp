// roc 2007-08 0042d7f0  unit: boost::any::_N::?$holder  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d7f0
//
// 0042d7f0  8b442404             mov eax, dword ptr [esp + 4]
// 0042d7f4  56                   push esi
// 0042d7f5  8bf1                 mov esi, ecx
// 0042d7f7  8b08                 mov ecx, dword ptr [eax]
// 0042d7f9  890e                 mov dword ptr [esi], ecx
// 0042d7fb  8b4804               mov ecx, dword ptr [eax + 4]
// 0042d7fe  85c9                 test ecx, ecx
// 0042d800  7409                 je 0x42d80b
// 0042d802  8b11                 mov edx, dword ptr [ecx]
// 0042d804  8b4208               mov eax, dword ptr [edx + 8]
// 0042d807  ffd0                 call eax
// 0042d809  eb02                 jmp 0x42d80d
// 0042d80b  33c0                 xor eax, eax
// 0042d80d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042d810  85c9                 test ecx, ecx
// 0042d812  894604               mov dword ptr [esi + 4], eax
// 0042d815  7408                 je 0x42d81f
// 0042d817  8b11                 mov edx, dword ptr [ecx]
// 0042d819  8b02                 mov eax, dword ptr [edx]
// 0042d81b  6a01                 push 1
// 0042d81d  ffd0                 call eax
// 0042d81f  8bc6                 mov eax, esi
// 0042d821  5e                   pop esi
// 0042d822  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??4Value@Reflection@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

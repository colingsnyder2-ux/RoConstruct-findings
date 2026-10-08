// roc 2007-03 0042e690  unit: seg_00420000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e690
//
// 0042e690  8b442404             mov eax, dword ptr [esp + 4]
// 0042e694  56                   push esi
// 0042e695  8bf1                 mov esi, ecx
// 0042e697  8b08                 mov ecx, dword ptr [eax]
// 0042e699  890e                 mov dword ptr [esi], ecx
// 0042e69b  8b4804               mov ecx, dword ptr [eax + 4]
// 0042e69e  85c9                 test ecx, ecx
// 0042e6a0  7409                 je 0x42e6ab
// 0042e6a2  8b11                 mov edx, dword ptr [ecx]
// 0042e6a4  8b4208               mov eax, dword ptr [edx + 8]
// 0042e6a7  ffd0                 call eax
// 0042e6a9  eb02                 jmp 0x42e6ad
// 0042e6ab  33c0                 xor eax, eax
// 0042e6ad  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042e6b0  85c9                 test ecx, ecx
// 0042e6b2  894604               mov dword ptr [esi + 4], eax
// 0042e6b5  7408                 je 0x42e6bf
// 0042e6b7  8b11                 mov edx, dword ptr [ecx]
// 0042e6b9  8b02                 mov eax, dword ptr [edx]
// 0042e6bb  6a01                 push 1
// 0042e6bd  ffd0                 call eax
// 0042e6bf  8bc6                 mov eax, esi
// 0042e6c1  5e                   pop esi
// 0042e6c2  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??4Value@Reflection@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

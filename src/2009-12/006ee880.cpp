// roc 2009-12 006ee880  unit: RBX::Primitive  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ee880
//
// 006ee880  83ec48               sub esp, 0x48
// 006ee883  56                   push esi
// 006ee884  8b742458             mov esi, dword ptr [esp + 0x58]
// 006ee888  57                   push edi
// 006ee889  8d442408             lea eax, [esp + 8]
// 006ee88d  50                   push eax
// 006ee88e  8bce                 mov ecx, esi
// 006ee890  e81b55f0ff           call 0x5f3db0
// 006ee895  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 006ee899  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006ee89d  50                   push eax
// 006ee89e  57                   push edi
// 006ee89f  51                   push ecx
// 006ee8a0  8d542438             lea edx, [esp + 0x38]
// 006ee8a4  52                   push edx
// 006ee8a5  8bce                 mov ecx, esi
// 006ee8a7  e81452f0ff           call 0x5f3ac0
// 006ee8ac  8bc8                 mov ecx, eax
// 006ee8ae  e80d52f0ff           call 0x5f3ac0
// 006ee8b3  8bc7                 mov eax, edi
// 006ee8b5  5f                   pop edi
// 006ee8b6  5e                   pop esi
// 006ee8b7  83c448               add esp, 0x48
// 006ee8ba  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToWorldSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp

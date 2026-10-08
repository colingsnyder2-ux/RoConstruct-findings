// roc 2007-08 005aad00  unit: RBX::World  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aad00
//
// 005aad00  83ec48               sub esp, 0x48
// 005aad03  56                   push esi
// 005aad04  8b742458             mov esi, dword ptr [esp + 0x58]
// 005aad08  57                   push edi
// 005aad09  8d442408             lea eax, [esp + 8]
// 005aad0d  50                   push eax
// 005aad0e  8bce                 mov ecx, esi
// 005aad10  e88becf5ff           call 0x5099a0
// 005aad15  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005aad19  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005aad1d  50                   push eax
// 005aad1e  57                   push edi
// 005aad1f  51                   push ecx
// 005aad20  8d542438             lea edx, [esp + 0x38]
// 005aad24  52                   push edx
// 005aad25  8bce                 mov ecx, esi
// 005aad27  e824eaf5ff           call 0x509750
// 005aad2c  8bc8                 mov ecx, eax
// 005aad2e  e81deaf5ff           call 0x509750
// 005aad33  8bc7                 mov eax, edi
// 005aad35  5f                   pop edi
// 005aad36  5e                   pop esi
// 005aad37  83c448               add esp, 0x48
// 005aad3a  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToWorldSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp

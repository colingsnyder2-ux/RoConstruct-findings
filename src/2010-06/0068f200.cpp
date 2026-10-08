// roc 2010-06 0068f200  unit: RBX::Mechanism  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068f200
//
// 0068f200  83ec48               sub esp, 0x48
// 0068f203  56                   push esi
// 0068f204  8b742458             mov esi, dword ptr [esp + 0x58]
// 0068f208  57                   push edi
// 0068f209  8d442408             lea eax, [esp + 8]
// 0068f20d  50                   push eax
// 0068f20e  8bce                 mov ecx, esi
// 0068f210  e80b73ecff           call 0x556520
// 0068f215  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0068f219  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0068f21d  50                   push eax
// 0068f21e  57                   push edi
// 0068f21f  51                   push ecx
// 0068f220  8d542438             lea edx, [esp + 0x38]
// 0068f224  52                   push edx
// 0068f225  8bce                 mov ecx, esi
// 0068f227  e80470ecff           call 0x556230
// 0068f22c  8bc8                 mov ecx, eax
// 0068f22e  e8fd6fecff           call 0x556230
// 0068f233  8bc7                 mov eax, edi
// 0068f235  5f                   pop edi
// 0068f236  5e                   pop esi
// 0068f237  83c448               add esp, 0x48
// 0068f23a  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToWorldSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp

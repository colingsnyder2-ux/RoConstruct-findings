// roc 2007-08 005a9050  unit: RBX::VHumanoid::?$SignalDesc  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9050
//
// 005a9050  56                   push esi
// 005a9051  57                   push edi
// 005a9052  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a9056  8bcf                 mov ecx, edi
// 005a9058  e8e3bc0000           call 0x5b4d40
// 005a905d  8bf0                 mov esi, eax
// 005a905f  85f6                 test esi, esi
// 005a9061  7415                 je 0x5a9078
// 005a9063  8bce                 mov ecx, esi
// 005a9065  e8b6470200           call 0x5cd820
// 005a906a  56                   push esi
// 005a906b  8bcf                 mov ecx, edi
// 005a906d  e8aebc0000           call 0x5b4d20
// 005a9072  8bf0                 mov esi, eax
// 005a9074  85f6                 test esi, esi
// 005a9076  75eb                 jne 0x5a9063
// 005a9078  5f                   pop edi
// 005a9079  5e                   pop esi
// 005a907a  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveContactParametersChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp

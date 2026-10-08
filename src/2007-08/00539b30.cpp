// roc 2007-08 00539b30  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539b30
//
// 00539b30  56                   push esi
// 00539b31  8b742408             mov esi, dword ptr [esp + 8]
// 00539b35  81c6ac000000         add esi, 0xac
// 00539b3b  8bce                 mov ecx, esi
// 00539b3d  e8eed1ffff           call 0x536d30
// 00539b42  84c0                 test al, al
// 00539b44  7415                 je 0x539b5b
// 00539b46  8bce                 mov ecx, esi
// 00539b48  e853fdffff           call 0x5398a0
// 00539b4d  8b08                 mov ecx, dword ptr [eax]
// 00539b4f  e8bc310300           call 0x56cd10
// 00539b54  8bce                 mov ecx, esi
// 00539b56  e885d2ffff           call 0x536de0
// 00539b5b  5e                   pop esi
// 00539b5c  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?disassociateState@ScriptContext@RBX@@AAEXPAVScript@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

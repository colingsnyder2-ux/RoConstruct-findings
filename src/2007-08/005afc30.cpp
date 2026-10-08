// roc 2007-08 005afc30  unit: RBX::Lighting  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afc30
//
// 005afc30  8b442404             mov eax, dword ptr [esp + 4]
// 005afc34  83ec08               sub esp, 8
// 005afc37  56                   push esi
// 005afc38  8bf1                 mov esi, ecx
// 005afc3a  50                   push eax
// 005afc3b  8d4c2408             lea ecx, [esp + 8]
// 005afc3f  51                   push ecx
// 005afc40  e81be6ffff           call 0x5ae260
// 005afc45  83c408               add esp, 8
// 005afc48  8d542404             lea edx, [esp + 4]
// 005afc4c  52                   push edx
// 005afc4d  8bce                 mov ecx, esi
// 005afc4f  e86cfdffff           call 0x5af9c0
// 005afc54  5e                   pop esi
// 005afc55  83c408               add esp, 8
// 005afc58  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?setTimeStr@Lighting@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

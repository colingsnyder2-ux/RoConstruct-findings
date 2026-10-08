// roc 2007-08 0059ee20  unit: RBX::BackpackItem  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059ee20
//
// 0059ee20  56                   push esi
// 0059ee21  8d442408             lea eax, [esp + 8]
// 0059ee25  8bf1                 mov esi, ecx
// 0059ee27  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059ee2b  50                   push eax
// 0059ee2c  51                   push ecx
// 0059ee2d  e8aeecffff           call 0x59dae0
// 0059ee32  8bc8                 mov ecx, eax
// 0059ee34  e867d40300           call 0x5dc2a0
// 0059ee39  84c0                 test al, al
// 0059ee3b  750e                 jne 0x59ee4b
// 0059ee3d  33c0                 xor eax, eax
// 0059ee3f  50                   push eax
// 0059ee40  8bce                 mov ecx, esi
// 0059ee42  e849ffffff           call 0x59ed90
// 0059ee47  5e                   pop esi
// 0059ee48  c20400               ret 4
// 0059ee4b  8b442408             mov eax, dword ptr [esp + 8]
// 0059ee4f  50                   push eax
// 0059ee50  8bce                 mov ecx, esi
// 0059ee52  e839ffffff           call 0x59ed90
// 0059ee57  5e                   pop esi
// 0059ee58  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?setLegacyCommand@HopperBin@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp

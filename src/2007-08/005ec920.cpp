// roc 2007-08 005ec920  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec920
//
// 005ec920  8b442404             mov eax, dword ptr [esp + 4]
// 005ec924  85c0                 test eax, eax
// 005ec926  740a                 je 0x5ec932
// 005ec928  8b4908               mov ecx, dword ptr [ecx + 8]
// 005ec92b  d94408fc             fld dword ptr [eax + ecx - 4]
// 005ec92f  c20400               ret 4
// 005ec932  8b5108               mov edx, dword ptr [ecx + 8]
// 005ec935  33c0                 xor eax, eax
// 005ec937  d90410               fld dword ptr [eax + edx]
// 005ec93a  c20400               ret 4
// library rbxgs/v8datamodel\Explosion.cpp (function ?getValue@?$BoundPropGetSet@VExplosion@RBX@@@?$BoundProp@M$00@Reflection@RBX@@UBEMPBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp

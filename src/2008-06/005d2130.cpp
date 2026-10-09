// roc 2008-06 005d2130  unit: RBX::P8PartInstance::?$GetSetImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2130
//
// 005d2130  8bc1                 mov eax, ecx
// 005d2132  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d2136  85c9                 test ecx, ecx
// 005d2138  7405                 je 0x5d213f
// 005d213a  83c1ec               add ecx, -0x14
// 005d213d  eb02                 jmp 0x5d2141
// 005d213f  33c9                 xor ecx, ecx
// 005d2141  56                   push esi
// 005d2142  8b7010               mov esi, dword ptr [eax + 0x10]
// 005d2145  8d54240c             lea edx, [esp + 0xc]
// 005d2149  52                   push edx
// 005d214a  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 005d2150  8b1432               mov edx, dword ptr [edx + esi]
// 005d2153  03500c               add edx, dword ptr [eax + 0xc]
// 005d2156  8b4008               mov eax, dword ptr [eax + 8]
// 005d2159  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 005d2160  ffd0                 call eax
// 005d2162  8b08                 mov ecx, dword ptr [eax]
// 005d2164  8b442408             mov eax, dword ptr [esp + 8]
// 005d2168  8908                 mov dword ptr [eax], ecx
// 005d216a  5e                   pop esi
// 005d216b  c20800               ret 8
// library openrbx-client/App\v8datamodel\SpawnLocation.cpp (function ?getValue@?$GetSetImpl@P8SpawnLocation@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VSpawnLocation@RBX@@VBrickColor@2@@Reflection@RBX@@UBE?AVBrickColor@4@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/SpawnLocation.cpp

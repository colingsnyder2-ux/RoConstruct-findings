// roc 2008-06 00618610  unit: RBX::P8Flag::?$GetSetImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618610
//
// 00618610  8bc1                 mov eax, ecx
// 00618612  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00618616  85c9                 test ecx, ecx
// 00618618  7405                 je 0x61861f
// 0061861a  83c1ec               add ecx, -0x14
// 0061861d  eb02                 jmp 0x618621
// 0061861f  33c9                 xor ecx, ecx
// 00618621  56                   push esi
// 00618622  8b7010               mov esi, dword ptr [eax + 0x10]
// 00618625  8d54240c             lea edx, [esp + 0xc]
// 00618629  52                   push edx
// 0061862a  8b91c0010000         mov edx, dword ptr [ecx + 0x1c0]
// 00618630  8b1432               mov edx, dword ptr [edx + esi]
// 00618633  03500c               add edx, dword ptr [eax + 0xc]
// 00618636  8b4008               mov eax, dword ptr [eax + 8]
// 00618639  8d8c0ac0010000       lea ecx, [edx + ecx + 0x1c0]
// 00618640  ffd0                 call eax
// 00618642  8b08                 mov ecx, dword ptr [eax]
// 00618644  8b442408             mov eax, dword ptr [esp + 8]
// 00618648  8908                 mov dword ptr [eax], ecx
// 0061864a  5e                   pop esi
// 0061864b  c20800               ret 8
// library openrbx-client/App\v8datamodel\Flag.cpp (function ?getValue@?$GetSetImpl@P8Flag@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlag@RBX@@VBrickColor@2@@Reflection@RBX@@UBE?AVBrickColor@4@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Flag.cpp

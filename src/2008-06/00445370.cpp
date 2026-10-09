// roc 2008-06 00445370  unit: P8CRenderSettings::?$GetSetImpl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445370
//
// 00445370  8bc1                 mov eax, ecx
// 00445372  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445376  85c9                 test ecx, ecx
// 00445378  7405                 je 0x44537f
// 0044537a  8d51ec               lea edx, [ecx - 0x14]
// 0044537d  eb02                 jmp 0x445381
// 0044537f  33d2                 xor edx, edx
// 00445381  8d4c2408             lea ecx, [esp + 8]
// 00445385  51                   push ecx
// 00445386  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00445389  03ca                 add ecx, edx
// 0044538b  8b5008               mov edx, dword ptr [eax + 8]
// 0044538e  ffd2                 call edx
// 00445390  8b08                 mov ecx, dword ptr [eax]
// 00445392  8b442404             mov eax, dword ptr [esp + 4]
// 00445396  8908                 mov dword ptr [eax], ecx
// 00445398  c20800               ret 8
// library openrbx-client/App\v8datamodel\Team.cpp (function ?getValue@?$GetSetImpl@P8Team@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VTeam@RBX@@VBrickColor@2@@Reflection@RBX@@UBE?AVBrickColor@4@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Team.cpp

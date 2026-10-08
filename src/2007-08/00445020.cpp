// roc 2007-08 00445020  unit: P8CRenderSettings::?$GetSetImpl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445020
//
// 00445020  8bc1                 mov eax, ecx
// 00445022  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445026  85c9                 test ecx, ecx
// 00445028  7405                 je 0x44502f
// 0044502a  8d51fc               lea edx, [ecx - 4]
// 0044502d  eb02                 jmp 0x445031
// 0044502f  33d2                 xor edx, edx
// 00445031  8d4c2408             lea ecx, [esp + 8]
// 00445035  51                   push ecx
// 00445036  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00445039  03ca                 add ecx, edx
// 0044503b  8b5008               mov edx, dword ptr [eax + 8]
// 0044503e  ffd2                 call edx
// 00445040  8b08                 mov ecx, dword ptr [eax]
// 00445042  8b442404             mov eax, dword ptr [esp + 4]
// 00445046  8908                 mov dword ptr [eax], ecx
// 00445048  c20800               ret 8
// library rbxgs/v8datamodel\Team.cpp (function ?getValue@?$GetSetImpl@P8Team@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VTeam@RBX@@VBrickColor@2@@Reflection@RBX@@UBE?AVBrickColor@4@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp

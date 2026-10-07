// roc 2012-06 00455c00  unit: G3D::VVector3::?$XItem  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00455c00
//
// 00455c00  56                   push esi
// 00455c01  8b742410             mov esi, dword ptr [esp + 0x10]
// 00455c05  57                   push edi
// 00455c06  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00455c0a  8bc7                 mov eax, edi
// 00455c0c  c1e804               shr eax, 4
// 00455c0f  8906                 mov dword ptr [esi], eax
// 00455c11  33d2                 xor edx, edx
// 00455c13  f77108               div dword ptr [ecx + 8]
// 00455c16  8b442410             mov eax, dword ptr [esp + 0x10]
// 00455c1a  8910                 mov dword ptr [eax], edx
// 00455c1c  8b4904               mov ecx, dword ptr [ecx + 4]
// 00455c1f  85c9                 test ecx, ecx
// 00455c21  741d                 je 0x455c40
// 00455c23  8b0491               mov eax, dword ptr [ecx + edx*4]
// 00455c26  85c0                 test eax, eax
// 00455c28  7416                 je 0x455c40
// 00455c2a  8b36                 mov esi, dword ptr [esi]
// 00455c2c  8d642400             lea esp, [esp]
// 00455c30  39700c               cmp dword ptr [eax + 0xc], esi
// 00455c33  7504                 jne 0x455c39
// 00455c35  3938                 cmp dword ptr [eax], edi
// 00455c37  7409                 je 0x455c42
// 00455c39  8b4008               mov eax, dword ptr [eax + 8]
// 00455c3c  85c0                 test eax, eax
// 00455c3e  75f0                 jne 0x455c30
// 00455c40  33c0                 xor eax, eax
// 00455c42  5f                   pop edi
// 00455c43  5e                   pop esi
// 00455c44  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ?GetAssocAt@?$CMap@JJII@@IBEPAVCAssoc@1@JAAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp

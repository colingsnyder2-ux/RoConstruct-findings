// roc 2012-06 00561d80  unit: RBX::VHint::?$FactoryProduct::Creator  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561d80
//
// 00561d80  a02043e200           mov al, byte ptr [0xe24320]
// 00561d85  8ad0                 mov dl, al
// 00561d87  fec0                 inc al
// 00561d89  a22043e200           mov byte ptr [0xe24320], al
// 00561d8e  0fb6c2               movzx eax, dl
// 00561d91  8b542404             mov edx, dword ptr [esp + 4]
// 00561d95  56                   push esi
// 00561d96  83e007               and eax, 7
// 00561d99  8d34c500000000       lea esi, [eax*8]
// 00561da0  2bf0                 sub esi, eax
// 00561da2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00561da6  50                   push eax
// 00561da7  8d34b54042e200       lea esi, [esi*4 + 0xe24240]
// 00561dae  56                   push esi
// 00561daf  52                   push edx
// 00561db0  e89bfbffff           call 0x561950
// 00561db5  8bc6                 mov eax, esi
// 00561db7  5e                   pop esi
// 00561db8  c20800               ret 8
// library rbx2016-raknet/RakNetTypes.cpp (function ?ToString@SystemAddress@RakNet@@QBEPBD_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp

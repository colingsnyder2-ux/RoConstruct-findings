// roc 2008-06 00599330  unit: RBX::VPartInstance::?$FactoryProduct  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599330
//
// 00599330  56                   push esi
// 00599331  8b742408             mov esi, dword ptr [esp + 8]
// 00599335  8b06                 mov eax, dword ptr [esi]
// 00599337  8b500c               mov edx, dword ptr [eax + 0xc]
// 0059933a  8bce                 mov ecx, esi
// 0059933c  ffd2                 call edx
// 0059933e  85c0                 test eax, eax
// 00599340  7515                 jne 0x599357
// 00599342  8b06                 mov eax, dword ptr [esi]
// 00599344  8b5014               mov edx, dword ptr [eax + 0x14]
// 00599347  8bce                 mov ecx, esi
// 00599349  ffd2                 call edx
// 0059934b  83f808               cmp eax, 8
// 0059934e  7507                 jne 0x599357
// 00599350  b801000000           mov eax, 1
// 00599355  5e                   pop esi
// 00599356  c3                   ret 
// 00599357  33c0                 xor eax, eax
// 00599359  5e                   pop esi
// 0059935a  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ?isMotorJoint@MotorJoint@RBX@@SA_NPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp

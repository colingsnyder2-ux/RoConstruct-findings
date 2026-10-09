// roc 2009-12 00773400  unit: CXTCaptionButtonTheme  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00773400
//
// 00773400  d9442414             fld dword ptr [esp + 0x14]
// 00773404  83ec60               sub esp, 0x60
// 00773407  56                   push esi
// 00773408  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0077340c  57                   push edi
// 0077340d  51                   push ecx
// 0077340e  8bce                 mov ecx, esi
// 00773410  d91c24               fstp dword ptr [esp]
// 00773413  e878a7f7ff           call 0x6edb90
// 00773418  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0077341c  50                   push eax
// 0077341d  8bcf                 mov ecx, edi
// 0077341f  e86ca7f7ff           call 0x6edb90
// 00773424  50                   push eax
// 00773425  e8e6cef7ff           call 0x6f0310
// 0077342a  83c40c               add esp, 0xc
// 0077342d  84c0                 test al, al
// 0077342f  7508                 jne 0x773439
// 00773431  5f                   pop edi
// 00773432  32c0                 xor al, al
// 00773434  5e                   pop esi
// 00773435  83c460               add esp, 0x60
// 00773438  c3                   ret 
// 00773439  8b442474             mov eax, dword ptr [esp + 0x74]
// 0077343d  50                   push eax
// 0077343e  8d4c243c             lea ecx, [esp + 0x3c]
// 00773442  51                   push ecx
// 00773443  8bcf                 mov ecx, edi
// 00773445  e866a5f7ff           call 0x6ed9b0
// 0077344a  8b542478             mov edx, dword ptr [esp + 0x78]
// 0077344e  52                   push edx
// 0077344f  8d44240c             lea eax, [esp + 0xc]
// 00773453  50                   push eax
// 00773454  8bce                 mov ecx, esi
// 00773456  e855a5f7ff           call 0x6ed9b0
// 0077345b  d905648c9e00         fld dword ptr [0x9e8c64]
// 00773461  51                   push ecx
// 00773462  8d4c240c             lea ecx, [esp + 0xc]
// 00773466  d91c24               fstp dword ptr [esp]
// 00773469  51                   push ecx
// 0077346a  8d542440             lea edx, [esp + 0x40]
// 0077346e  52                   push edx
// 0077346f  e85cf40300           call 0x7b28d0
// 00773474  83c40c               add esp, 0xc
// 00773477  84c0                 test al, al
// 00773479  74b6                 je 0x773431
// 0077347b  d9842480000000       fld dword ptr [esp + 0x80]
// 00773482  51                   push ecx
// 00773483  8d44240c             lea eax, [esp + 0xc]
// 00773487  d91c24               fstp dword ptr [esp]
// 0077348a  50                   push eax
// 0077348b  8d4c2440             lea ecx, [esp + 0x40]
// 0077348f  51                   push ecx
// 00773490  e83bf90300           call 0x7b2dd0
// 00773495  83c40c               add esp, 0xc
// 00773498  84c0                 test al, al
// 0077349a  5f                   pop edi
// 0077349b  0f95c0               setne al
// 0077349e  5e                   pop esi
// 0077349f  83c460               add esp, 0x60
// 007734a2  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJoint@Joint@RBX@@CA_NPAVPrimitive@2@0W4NormalId@2@1MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp

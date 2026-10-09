// roc 2008-06 005fd960  unit: RBX::P8Tool::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd960
//
// 005fd960  8b442404             mov eax, dword ptr [esp + 4]
// 005fd964  8bd1                 mov edx, ecx
// 005fd966  85c0                 test eax, eax
// 005fd968  7405                 je 0x5fd96f
// 005fd96a  83c0ec               add eax, -0x14
// 005fd96d  eb02                 jmp 0x5fd971
// 005fd96f  33c0                 xor eax, eax
// 005fd971  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd975  8b09                 mov ecx, dword ptr [ecx]
// 005fd977  56                   push esi
// 005fd978  8b7220               mov esi, dword ptr [edx + 0x20]
// 005fd97b  51                   push ecx
// 005fd97c  8b88c0010000         mov ecx, dword ptr [eax + 0x1c0]
// 005fd982  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005fd985  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005fd988  8b5218               mov edx, dword ptr [edx + 0x18]
// 005fd98b  8d8c01c0010000       lea ecx, [ecx + eax + 0x1c0]
// 005fd992  ffd2                 call edx
// 005fd994  5e                   pop esi
// 005fd995  c20800               ret 8
// library openrbx-client/App\v8datamodel\Flag.cpp (function ?setValue@?$GetSetImpl@P8Flag@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlag@RBX@@VBrickColor@2@@Reflection@RBX@@UBEXPAVDescribedBase@34@ABVBrickColor@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Flag.cpp

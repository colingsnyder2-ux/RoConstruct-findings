// roc 2008-06 00563b00  unit: P8CRenderSettings::?$GetSetImpl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563b00
//
// 00563b00  8b442404             mov eax, dword ptr [esp + 4]
// 00563b04  8bd1                 mov edx, ecx
// 00563b06  85c0                 test eax, eax
// 00563b08  7417                 je 0x563b21
// 00563b0a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563b0e  8b09                 mov ecx, dword ptr [ecx]
// 00563b10  51                   push ecx
// 00563b11  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00563b14  8b5210               mov edx, dword ptr [edx + 0x10]
// 00563b17  83c0ec               add eax, -0x14
// 00563b1a  03c8                 add ecx, eax
// 00563b1c  ffd2                 call edx
// 00563b1e  c20800               ret 8
// 00563b21  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563b25  8b09                 mov ecx, dword ptr [ecx]
// 00563b27  51                   push ecx
// 00563b28  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00563b2b  8b5210               mov edx, dword ptr [edx + 0x10]
// 00563b2e  33c0                 xor eax, eax
// 00563b30  03c8                 add ecx, eax
// 00563b32  ffd2                 call edx
// 00563b34  c20800               ret 8
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ?setValue@?$GetSetImpl@P8Accoutrement@RBX@@BEHXZP812@AEXH@Z@?$PropDescriptor@VAccoutrement@RBX@@H@Reflection@RBX@@UBEXPAVDescribedBase@34@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp

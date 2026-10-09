// roc 2008-06 005cf660  unit: P8CRenderSettings::?$GetSetImpl  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf660
//
// 005cf660  8b442404             mov eax, dword ptr [esp + 4]
// 005cf664  8bd1                 mov edx, ecx
// 005cf666  85c0                 test eax, eax
// 005cf668  7410                 je 0x5cf67a
// 005cf66a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 005cf66d  83c0ec               add eax, -0x14
// 005cf670  03c8                 add ecx, eax
// 005cf672  8b4208               mov eax, dword ptr [edx + 8]
// 005cf675  ffd0                 call eax
// 005cf677  c20400               ret 4
// 005cf67a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 005cf67d  33c0                 xor eax, eax
// 005cf67f  03c8                 add ecx, eax
// 005cf681  8b4208               mov eax, dword ptr [edx + 8]
// 005cf684  ffd0                 call eax
// 005cf686  c20400               ret 4
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ?getValue@?$GetSetImpl@P8Accoutrement@RBX@@BEHXZP812@AEXH@Z@?$PropDescriptor@VAccoutrement@RBX@@H@Reflection@RBX@@UBEHPBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp

// roc 2007-08 005ad670  unit: P8CRenderSettings::?$GetSetImpl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ad670
//
// 005ad670  8b442404             mov eax, dword ptr [esp + 4]
// 005ad674  85c0                 test eax, eax
// 005ad676  8bd1                 mov edx, ecx
// 005ad678  7405                 je 0x5ad67f
// 005ad67a  83c0fc               add eax, -4
// 005ad67d  eb02                 jmp 0x5ad681
// 005ad67f  33c0                 xor eax, eax
// 005ad681  51                   push ecx
// 005ad682  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ad686  d901                 fld dword ptr [ecx]
// 005ad688  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005ad68b  8b5210               mov edx, dword ptr [edx + 0x10]
// 005ad68e  d91c24               fstp dword ptr [esp]
// 005ad691  03c8                 add ecx, eax
// 005ad693  ffd2                 call edx
// 005ad695  c20800               ret 8
// library rbxgs/v8datamodel\Decal.cpp (function ?setValue@?$GetSetImpl@P8Decal@RBX@@BEMXZP812@AEXM@Z@?$PropDescriptor@VDecal@RBX@@M@Reflection@RBX@@UBEXPAVDescribedBase@34@ABM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp

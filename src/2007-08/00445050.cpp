// roc 2007-08 00445050  unit: P8CRenderSettings::?$GetSetImpl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445050
//
// 00445050  8b442404             mov eax, dword ptr [esp + 4]
// 00445054  85c0                 test eax, eax
// 00445056  8bd1                 mov edx, ecx
// 00445058  7417                 je 0x445071
// 0044505a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044505e  8b09                 mov ecx, dword ptr [ecx]
// 00445060  51                   push ecx
// 00445061  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00445064  8b5210               mov edx, dword ptr [edx + 0x10]
// 00445067  83c0fc               add eax, -4
// 0044506a  03c8                 add ecx, eax
// 0044506c  ffd2                 call edx
// 0044506e  c20800               ret 8
// 00445071  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445075  8b09                 mov ecx, dword ptr [ecx]
// 00445077  51                   push ecx
// 00445078  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0044507b  8b5210               mov edx, dword ptr [edx + 0x10]
// 0044507e  33c0                 xor eax, eax
// 00445080  03c8                 add ecx, eax
// 00445082  ffd2                 call edx
// 00445084  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setValue@?$GetSetImpl@P8Camera@RBX@@BE?AW4CameraType@12@XZP812@AEXW4312@@Z@?$PropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBEXPAVDescribedBase@34@ABW4CameraType@Camera@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

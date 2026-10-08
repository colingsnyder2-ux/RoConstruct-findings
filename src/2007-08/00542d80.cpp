// roc 2007-08 00542d80  unit: P8CRenderSettings::?$GetSetImpl  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542d80
//
// 00542d80  8b442404             mov eax, dword ptr [esp + 4]
// 00542d84  85c0                 test eax, eax
// 00542d86  8bd1                 mov edx, ecx
// 00542d88  7410                 je 0x542d9a
// 00542d8a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00542d8d  83c0fc               add eax, -4
// 00542d90  03c8                 add ecx, eax
// 00542d92  8b4208               mov eax, dword ptr [edx + 8]
// 00542d95  ffd0                 call eax
// 00542d97  c20400               ret 4
// 00542d9a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00542d9d  33c0                 xor eax, eax
// 00542d9f  03c8                 add ecx, eax
// 00542da1  8b4208               mov eax, dword ptr [edx + 8]
// 00542da4  ffd0                 call eax
// 00542da6  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?getValue@?$GetSetImpl@P8Camera@RBX@@BE?AW4CameraType@12@XZP812@AEXW4312@@Z@?$PropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE?AW4CameraType@Camera@4@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

// roc 2008-06 005fd920  unit: RBX::P8Tool::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd920
//
// 005fd920  8b442404             mov eax, dword ptr [esp + 4]
// 005fd924  8bd1                 mov edx, ecx
// 005fd926  85c0                 test eax, eax
// 005fd928  7405                 je 0x5fd92f
// 005fd92a  83c0ec               add eax, -0x14
// 005fd92d  eb02                 jmp 0x5fd931
// 005fd92f  33c0                 xor eax, eax
// 005fd931  8b88c0010000         mov ecx, dword ptr [eax + 0x1c0]
// 005fd937  56                   push esi
// 005fd938  8b7210               mov esi, dword ptr [edx + 0x10]
// 005fd93b  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005fd93e  034a0c               add ecx, dword ptr [edx + 0xc]
// 005fd941  8b5208               mov edx, dword ptr [edx + 8]
// 005fd944  8d8c01c0010000       lea ecx, [ecx + eax + 0x1c0]
// 005fd94b  ffd2                 call edx
// 005fd94d  5e                   pop esi
// 005fd94e  c20400               ret 4
// library openrbx-client/App\v8datamodel\Tool.cpp (function ?getValue@?$GetSetImpl@P8Tool@RBX@@BEHXZP812@AEXH@Z@?$PropDescriptor@VTool@RBX@@H@Reflection@RBX@@UBEHPBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Tool.cpp

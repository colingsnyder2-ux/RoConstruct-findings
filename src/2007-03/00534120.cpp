// roc 2007-03 00534120  unit: seg_00530000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534120
//
// 00534120  83ec78               sub esp, 0x78
// 00534123  56                   push esi
// 00534124  8bf1                 mov esi, ecx
// 00534126  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0053412c  8b4808               mov ecx, dword ptr [eax + 8]
// 0053412f  57                   push edi
// 00534130  8dbc31f4000000       lea edi, [ecx + esi + 0xf4]
// 00534137  8d4c2420             lea ecx, [esp + 0x20]
// 0053413b  e83010f4ff           call 0x475170
// 00534140  8b17                 mov edx, dword ptr [edi]
// 00534142  8b12                 mov edx, dword ptr [edx]
// 00534144  50                   push eax
// 00534145  8d442454             lea eax, [esp + 0x54]
// 00534149  50                   push eax
// 0053414a  8bcf                 mov ecx, edi
// 0053414c  ffd2                 call edx
// 0053414e  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 00534155  50                   push eax
// 00534156  57                   push edi
// 00534157  8d442414             lea eax, [esp + 0x14]
// 0053415b  50                   push eax
// 0053415c  8d8ed0010000         lea ecx, [esi + 0x1d0]
// 00534162  e8c9faffff           call 0x533c30
// 00534167  8bc8                 mov ecx, eax
// 00534169  e8023a0800           call 0x5b7b70
// 0053416e  8bc7                 mov eax, edi
// 00534170  5f                   pop edi
// 00534171  5e                   pop esi
// 00534172  83c478               add esp, 0x78
// 00534175  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?computeWorldGridExtents@ModelInstance@RBX@@ABE?AVExtents@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp

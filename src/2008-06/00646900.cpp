// roc 2008-06 00646900  unit: RBX::RotatePJoint  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646900
//
// 00646900  56                   push esi
// 00646901  8bf1                 mov esi, ecx
// 00646903  e898edffff           call 0x6456a0
// 00646908  8b442408             mov eax, dword ptr [esp + 8]
// 0064690c  50                   push eax
// 0064690d  8bce                 mov ecx, esi
// 0064690f  c70614ae8400         mov dword ptr [esi], 0x84ae14
// 00646915  e886ffffff           call 0x6468a0
// 0064691a  8bc6                 mov eax, esi
// 0064691c  5e                   pop esi
// 0064691d  c20400               ret 4
// library rbxgs/v8world\MutilJoint.cpp (function ??0MultiJoint@RBX@@IAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MutilJoint.cpp

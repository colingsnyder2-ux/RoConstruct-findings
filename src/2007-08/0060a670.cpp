// roc 2007-08 0060a670  unit: RBX::MultiJoint  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a670
//
// 0060a670  56                   push esi
// 0060a671  8bf1                 mov esi, ecx
// 0060a673  e8d8fcffff           call 0x60a350
// 0060a678  8b442408             mov eax, dword ptr [esp + 8]
// 0060a67c  50                   push eax
// 0060a67d  8bce                 mov ecx, esi
// 0060a67f  c706ec2d7c00         mov dword ptr [esi], 0x7c2dec
// 0060a685  e836fdffff           call 0x60a3c0
// 0060a68a  8bc6                 mov eax, esi
// 0060a68c  5e                   pop esi
// 0060a68d  c20400               ret 4
// library rbxgs/v8world\MutilJoint.cpp (function ??0MultiJoint@RBX@@IAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MutilJoint.cpp

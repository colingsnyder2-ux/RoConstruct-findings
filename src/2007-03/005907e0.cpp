// roc 2007-03 005907e0  unit: seg_00590000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005907e0
//
// 005907e0  8b442404             mov eax, dword ptr [esp + 4]
// 005907e4  56                   push esi
// 005907e5  8bf1                 mov esi, ecx
// 005907e7  398694010000         cmp dword ptr [esi + 0x194], eax
// 005907ed  7424                 je 0x590813
// 005907ef  6834e78b00           push 0x8be734
// 005907f4  898694010000         mov dword ptr [esi + 0x194], eax
// 005907fa  e84136ebff           call 0x443e40
// 005907ff  8bce                 mov ecx, esi
// 00590801  e81adaffff           call 0x58e220
// 00590806  85c0                 test eax, eax
// 00590808  7409                 je 0x590813
// 0059080a  8b10                 mov edx, dword ptr [eax]
// 0059080c  8bc8                 mov ecx, eax
// 0059080e  8b420c               mov eax, dword ptr [edx + 0xc]
// 00590811  ffd0                 call eax
// 00590813  5e                   pop esi
// 00590814  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?setCameraType@Camera@RBX@@QAEXW4CameraType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

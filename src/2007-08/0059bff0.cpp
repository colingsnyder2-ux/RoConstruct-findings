// roc 2007-08 0059bff0  unit: RBX::Camera  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059bff0
//
// 0059bff0  56                   push esi
// 0059bff1  8bf1                 mov esi, ecx
// 0059bff3  e888d4ffff           call 0x599480
// 0059bff8  85c0                 test eax, eax
// 0059bffa  7421                 je 0x59c01d
// 0059bffc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059c000  8b10                 mov edx, dword ptr [eax]
// 0059c002  6a00                 push 0
// 0059c004  51                   push ecx
// 0059c005  83ec18               sub esp, 0x18
// 0059c008  8bc8                 mov ecx, eax
// 0059c00a  8b4210               mov eax, dword ptr [edx + 0x10]
// 0059c00d  54                   push esp
// 0059c00e  ffd0                 call eax
// 0059c010  8bce                 mov ecx, esi
// 0059c012  e869fdffff           call 0x59bd80
// 0059c017  b001                 mov al, 1
// 0059c019  5e                   pop esi
// 0059c01a  c20400               ret 4
// 0059c01d  32c0                 xor al, al
// 0059c01f  5e                   pop esi
// 0059c020  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?zoomExtents@Camera@RBX@@QAE_NABVRect2D@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

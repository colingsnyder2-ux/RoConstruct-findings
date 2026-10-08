// roc 2008-06 005ce400  unit: RBX::Camera  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ce400
//
// 005ce400  56                   push esi
// 005ce401  8bf1                 mov esi, ecx
// 005ce403  e848dbffff           call 0x5cbf50
// 005ce408  85c0                 test eax, eax
// 005ce40a  7421                 je 0x5ce42d
// 005ce40c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ce410  8b10                 mov edx, dword ptr [eax]
// 005ce412  6a00                 push 0
// 005ce414  51                   push ecx
// 005ce415  83ec18               sub esp, 0x18
// 005ce418  8bc8                 mov ecx, eax
// 005ce41a  8b4210               mov eax, dword ptr [edx + 0x10]
// 005ce41d  54                   push esp
// 005ce41e  ffd0                 call eax
// 005ce420  8bce                 mov ecx, esi
// 005ce422  e8a9fcffff           call 0x5ce0d0
// 005ce427  b001                 mov al, 1
// 005ce429  5e                   pop esi
// 005ce42a  c20400               ret 4
// 005ce42d  32c0                 xor al, al
// 005ce42f  5e                   pop esi
// 005ce430  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?zoomExtents@Camera@RBX@@QAE_NABVRect2D@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

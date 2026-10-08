// roc 2007-03 005910c0  unit: seg_00590000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005910c0
//
// 005910c0  56                   push esi
// 005910c1  8bf1                 mov esi, ecx
// 005910c3  e858d1ffff           call 0x58e220
// 005910c8  85c0                 test eax, eax
// 005910ca  7421                 je 0x5910ed
// 005910cc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005910d0  8b10                 mov edx, dword ptr [eax]
// 005910d2  6a00                 push 0
// 005910d4  51                   push ecx
// 005910d5  83ec18               sub esp, 0x18
// 005910d8  8bc8                 mov ecx, eax
// 005910da  8b4210               mov eax, dword ptr [edx + 0x10]
// 005910dd  54                   push esp
// 005910de  ffd0                 call eax
// 005910e0  8bce                 mov ecx, esi
// 005910e2  e8c9fdffff           call 0x590eb0
// 005910e7  b001                 mov al, 1
// 005910e9  5e                   pop esi
// 005910ea  c20400               ret 4
// 005910ed  32c0                 xor al, al
// 005910ef  5e                   pop esi
// 005910f0  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?zoomExtents@Camera@RBX@@QAE_NABVRect2D@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

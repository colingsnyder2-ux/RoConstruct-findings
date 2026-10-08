// roc 2007-03 00475090  unit: seg_00470000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475090
//
// 00475090  56                   push esi
// 00475091  8bf1                 mov esi, ecx
// 00475093  8b06                 mov eax, dword ptr [esi]
// 00475095  57                   push edi
// 00475096  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047509a  3bf8                 cmp edi, eax
// 0047509c  743d                 je 0x4750db
// 0047509e  85c0                 test eax, eax
// 004750a0  7429                 je 0x4750cb
// 004750a2  83c004               add eax, 4
// 004750a5  50                   push eax
// 004750a6  ff15a8d27700         call dword ptr [0x77d2a8]
// 004750ac  85c0                 test eax, eax
// 004750ae  7515                 jne 0x4750c5
// 004750b0  8b0e                 mov ecx, dword ptr [esi]
// 004750b2  e809e3feff           call 0x4633c0
// 004750b7  8b0e                 mov ecx, dword ptr [esi]
// 004750b9  85c9                 test ecx, ecx
// 004750bb  7408                 je 0x4750c5
// 004750bd  8b01                 mov eax, dword ptr [ecx]
// 004750bf  8b10                 mov edx, dword ptr [eax]
// 004750c1  6a01                 push 1
// 004750c3  ffd2                 call edx
// 004750c5  c70600000000         mov dword ptr [esi], 0
// 004750cb  85ff                 test edi, edi
// 004750cd  740c                 je 0x4750db
// 004750cf  893e                 mov dword ptr [esi], edi
// 004750d1  83c704               add edi, 4
// 004750d4  57                   push edi
// 004750d5  ff15acd27700         call dword ptr [0x77d2ac]
// 004750db  5f                   pop edi
// 004750dc  5e                   pop esi
// 004750dd  c20400               ret 4
// library rbxgs/gui\GuiDraw.cpp (function ?setPointer@?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@AAEXPAVTextureProxyBase@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp

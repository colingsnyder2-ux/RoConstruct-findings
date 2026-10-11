// roc 2008-06 005d3fa0  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3fa0
//
// 005d3fa0  51                   push ecx
// 005d3fa1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d3fa5  c7042400000000       mov dword ptr [esp], 0
// 005d3fac  85c0                 test eax, eax
// 005d3fae  7405                 je 0x5d3fb5
// 005d3fb0  83c0ec               add eax, -0x14
// 005d3fb3  eb02                 jmp 0x5d3fb7
// 005d3fb5  33c0                 xor eax, eax
// 005d3fb7  56                   push esi
// 005d3fb8  8b7108               mov esi, dword ptr [ecx + 8]
// 005d3fbb  57                   push edi
// 005d3fbc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005d3fc0  03f0                 add esi, eax
// 005d3fc2  56                   push esi
// 005d3fc3  8bcf                 mov ecx, edi
// 005d3fc5  ff155c248000         call dword ptr [0x80245c]
// 005d3fcb  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005d3fce  89471c               mov dword ptr [edi + 0x1c], eax
// 005d3fd1  8bc7                 mov eax, edi
// 005d3fd3  5f                   pop edi
// 005d3fd4  5e                   pop esi
// 005d3fd5  59                   pop ecx
// 005d3fd6  c20800               ret 8
// library openrbx-client/App\v8datamodel\Sky.cpp (function ?getValue@?$BoundPropGetSet@VSky@RBX@@@?$BoundProp@VTextureId@RBX@@$00@Reflection@RBX@@UBE?AVTextureId@4@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp

// roc 2007-03 005b1bc0  unit: seg_005b0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b1bc0
//
// 005b1bc0  8b442404             mov eax, dword ptr [esp + 4]
// 005b1bc4  83f805               cmp eax, 5
// 005b1bc7  772f                 ja 0x5b1bf8
// 005b1bc9  ff2485001c5b00       jmp dword ptr [eax*4 + 0x5b1c00]
// 005b1bd0  b8b0f98b00           mov eax, 0x8bf9b0
// 005b1bd5  c20400               ret 4
// 005b1bd8  b8e8f88b00           mov eax, 0x8bf8e8
// 005b1bdd  c20400               ret 4
// 005b1be0  b890f98b00           mov eax, 0x8bf990
// 005b1be5  c20400               ret 4
// 005b1be8  b8b4fb8b00           mov eax, 0x8bfbb4
// 005b1bed  c20400               ret 4
// 005b1bf0  b820fa8b00           mov eax, 0x8bfa20
// 005b1bf5  c20400               ret 4
// 005b1bf8  b808fb8b00           mov eax, 0x8bfb08
// 005b1bfd  c20400               ret 4
// 005b1c00  e81b5b00f8           call 0xf85b7720
// 005b1c05  1b5b00               sbb ebx, dword ptr [ebx]
// 005b1c08  d81b                 fcomp dword ptr [ebx]
// 005b1c0a  5b                   pop ebx
// 005b1c0b  00f0                 add al, dh
// 005b1c0d  1b5b00               sbb ebx, dword ptr [ebx]
// 005b1c10  d01b                 rcr byte ptr [ebx], 1
// 005b1c12  5b                   pop ebx
// 005b1c13  00e0                 add al, ah
// 005b1c15  1b5b00               sbb ebx, dword ptr [ebx]
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

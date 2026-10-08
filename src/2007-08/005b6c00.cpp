// roc 2007-08 005b6c00  unit: RBX::Sky  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6c00
//
// 005b6c00  8b442404             mov eax, dword ptr [esp + 4]
// 005b6c04  83f805               cmp eax, 5
// 005b6c07  772f                 ja 0x5b6c38
// 005b6c09  ff2485406c5b00       jmp dword ptr [eax*4 + 0x5b6c40]
// 005b6c10  b88c648c00           mov eax, 0x8c648c
// 005b6c15  c20400               ret 4
// 005b6c18  b838648c00           mov eax, 0x8c6438
// 005b6c1d  c20400               ret 4
// 005b6c20  b868638c00           mov eax, 0x8c6368
// 005b6c25  c20400               ret 4
// 005b6c28  b8c0618c00           mov eax, 0x8c61c0
// 005b6c2d  c20400               ret 4
// 005b6c30  b8a4638c00           mov eax, 0x8c63a4
// 005b6c35  c20400               ret 4
// 005b6c38  b84c638c00           mov eax, 0x8c634c
// 005b6c3d  c20400               ret 4
// 005b6c40  286c5b00             sub byte ptr [ebx + ebx*2], ch
// 005b6c44  386c5b00             cmp byte ptr [ebx + ebx*2], ch
// 005b6c48  186c5b00             sbb byte ptr [ebx + ebx*2], ch
// 005b6c4c  306c5b00             xor byte ptr [ebx + ebx*2], ch
// 005b6c50  106c5b00             adc byte ptr [ebx + ebx*2], ch
// 005b6c54  206c5b00             and byte ptr [ebx + ebx*2], ch
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

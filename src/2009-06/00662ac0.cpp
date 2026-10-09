// roc 2009-06 00662ac0  unit: DxUserInput  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00662ac0
//
// 00662ac0  8bc1                 mov eax, ecx
// 00662ac2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00662ac6  83f905               cmp ecx, 5
// 00662ac9  7722                 ja 0x662aed
// 00662acb  ff248df02a6600       jmp dword ptr [ecx*4 + 0x662af0]
// 00662ad2  83c008               add eax, 8
// 00662ad5  c20400               ret 4
// 00662ad8  83c028               add eax, 0x28
// 00662adb  c20400               ret 4
// 00662ade  83c020               add eax, 0x20
// 00662ae1  c20400               ret 4
// 00662ae4  83c018               add eax, 0x18
// 00662ae7  c20400               ret 4
// 00662aea  83c010               add eax, 0x10
// 00662aed  c20400               ret 4
// 00662af0  e42a                 in al, 0x2a
// 00662af2  6600ed               add ch, ch
// 00662af5  2a6600               sub ah, byte ptr [esi]
// 00662af8  d82a                 fsubr dword ptr [edx]
// 00662afa  6600ea               add dl, ch
// 00662afd  2a6600               sub ah, byte ptr [esi]
// 00662b00  d22a                 shr byte ptr [edx], cl
// 00662b02  6600de               add dh, bl
// 00662b05  2a6600               sub ah, byte ptr [esi]
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??ASurfaces@RBX@@QBEABVSurface@1@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

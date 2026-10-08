// roc 2007-03 00578fe0  unit: seg_00570000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578fe0
//
// 00578fe0  8b442404             mov eax, dword ptr [esp + 4]
// 00578fe4  3981f0000000         cmp dword ptr [ecx + 0xf0], eax
// 00578fea  7413                 je 0x578fff
// 00578fec  8981f0000000         mov dword ptr [ecx + 0xf0], eax
// 00578ff2  c744240434d18b00     mov dword ptr [esp + 4], 0x8bd134
// 00578ffa  e941aeecff           jmp 0x443e40
// 00578fff  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setFace@FaceInstance@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp

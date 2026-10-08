// roc 2007-03 00574130  unit: seg_00570000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574130
//
// 00574130  8b442408             mov eax, dword ptr [esp + 8]
// 00574134  8b542404             mov edx, dword ptr [esp + 4]
// 00574138  50                   push eax
// 00574139  52                   push edx
// 0057413a  81c17cfeffff         add ecx, 0xfffffe7c
// 00574140  e89bfcffff           call 0x573de0
// 00574145  50                   push eax
// 00574146  e845820a00           call 0x61c390
// 0057414b  83c40c               add esp, 0xc
// 0057414e  c20800               ret 8
// library rbxgs/v8datamodel\PartInstance.cpp (function ?render3dSelect@PartInstance@RBX@@UAEXPAVAdorn@2@W4SelectState@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

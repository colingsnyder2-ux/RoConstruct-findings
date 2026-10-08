// roc 2007-03 00576c30  unit: seg_00570000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00576c30
//
// 00576c30  8b442404             mov eax, dword ptr [esp + 4]
// 00576c34  56                   push esi
// 00576c35  8bf1                 mov esi, ecx
// 00576c37  3b869c010000         cmp eax, dword ptr [esi + 0x19c]
// 00576c3d  741c                 je 0x576c5b
// 00576c3f  6814cd8b00           push 0x8bcd14
// 00576c44  89869c010000         mov dword ptr [esi + 0x19c], eax
// 00576c4a  e8f1d1ecff           call 0x443e40
// 00576c4f  68eccb8b00           push 0x8bcbec
// 00576c54  8bce                 mov ecx, esi
// 00576c56  e8e5d1ecff           call 0x443e40
// 00576c5b  5e                   pop esi
// 00576c5c  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?setColor@PartInstance@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

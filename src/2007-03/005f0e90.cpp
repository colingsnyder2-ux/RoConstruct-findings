// roc 2007-03 005f0e90  unit: seg_005f0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f0e90
//
// 005f0e90  8b442404             mov eax, dword ptr [esp + 4]
// 005f0e94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f0e98  56                   push esi
// 005f0e99  8b30                 mov esi, dword ptr [eax]
// 005f0e9b  57                   push edi
// 005f0e9c  8b39                 mov edi, dword ptr [ecx]
// 005f0e9e  3bf7                 cmp esi, edi
// 005f0ea0  7507                 jne 0x5f0ea9
// 005f0ea2  5f                   pop edi
// 005f0ea3  33c0                 xor eax, eax
// 005f0ea5  5e                   pop esi
// 005f0ea6  c20800               ret 8
// 005f0ea9  8a5004               mov dl, byte ptr [eax + 4]
// 005f0eac  3a5104               cmp dl, byte ptr [ecx + 4]
// 005f0eaf  7513                 jne 0x5f0ec4
// 005f0eb1  8b5008               mov edx, dword ptr [eax + 8]
// 005f0eb4  3b5108               cmp edx, dword ptr [ecx + 8]
// 005f0eb7  750b                 jne 0x5f0ec4
// 005f0eb9  3bf7                 cmp esi, edi
// 005f0ebb  1bc0                 sbb eax, eax
// 005f0ebd  5f                   pop edi
// 005f0ebe  f7d8                 neg eax
// 005f0ec0  5e                   pop esi
// 005f0ec1  c20800               ret 8
// 005f0ec4  8a5104               mov dl, byte ptr [ecx + 4]
// 005f0ec7  385004               cmp byte ptr [eax + 4], dl
// 005f0eca  740b                 je 0x5f0ed7
// 005f0ecc  0fb6c2               movzx eax, dl
// 005f0ecf  5f                   pop edi
// 005f0ed0  0fb6c0               movzx eax, al
// 005f0ed3  5e                   pop esi
// 005f0ed4  c20800               ret 8
// 005f0ed7  8b4008               mov eax, dword ptr [eax + 8]
// 005f0eda  3b4108               cmp eax, dword ptr [ecx + 8]
// 005f0edd  5f                   pop edi
// 005f0ede  1bc0                 sbb eax, eax
// 005f0ee0  f7d8                 neg eax
// 005f0ee2  0fb6c0               movzx eax, al
// 005f0ee5  5e                   pop esi
// 005f0ee6  c20800               ret 8
// library rbxgs/v8world\ClumpStage.cpp (function ??RPrimitiveSortCriterion@RBX@@QBE_NABVPrimitiveEntry@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp

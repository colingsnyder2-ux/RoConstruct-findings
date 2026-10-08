// roc 2007-08 006048d0  unit: RBX::SleepStage  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006048d0
//
// 006048d0  8b442404             mov eax, dword ptr [esp + 4]
// 006048d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006048d8  56                   push esi
// 006048d9  8b30                 mov esi, dword ptr [eax]
// 006048db  57                   push edi
// 006048dc  8b39                 mov edi, dword ptr [ecx]
// 006048de  3bf7                 cmp esi, edi
// 006048e0  7507                 jne 0x6048e9
// 006048e2  5f                   pop edi
// 006048e3  33c0                 xor eax, eax
// 006048e5  5e                   pop esi
// 006048e6  c20800               ret 8
// 006048e9  8a5004               mov dl, byte ptr [eax + 4]
// 006048ec  3a5104               cmp dl, byte ptr [ecx + 4]
// 006048ef  7513                 jne 0x604904
// 006048f1  8b5008               mov edx, dword ptr [eax + 8]
// 006048f4  3b5108               cmp edx, dword ptr [ecx + 8]
// 006048f7  750b                 jne 0x604904
// 006048f9  3bf7                 cmp esi, edi
// 006048fb  1bc0                 sbb eax, eax
// 006048fd  5f                   pop edi
// 006048fe  f7d8                 neg eax
// 00604900  5e                   pop esi
// 00604901  c20800               ret 8
// 00604904  8a5104               mov dl, byte ptr [ecx + 4]
// 00604907  385004               cmp byte ptr [eax + 4], dl
// 0060490a  740b                 je 0x604917
// 0060490c  0fb6c2               movzx eax, dl
// 0060490f  5f                   pop edi
// 00604910  0fb6c0               movzx eax, al
// 00604913  5e                   pop esi
// 00604914  c20800               ret 8
// 00604917  8b4008               mov eax, dword ptr [eax + 8]
// 0060491a  3b4108               cmp eax, dword ptr [ecx + 8]
// 0060491d  5f                   pop edi
// 0060491e  1bc0                 sbb eax, eax
// 00604920  f7d8                 neg eax
// 00604922  0fb6c0               movzx eax, al
// 00604925  5e                   pop esi
// 00604926  c20800               ret 8
// library rbxgs/v8world\ClumpStage.cpp (function ??RPrimitiveSortCriterion@RBX@@QBE_NABVPrimitiveEntry@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp

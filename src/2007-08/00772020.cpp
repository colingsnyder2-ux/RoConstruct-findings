// roc 2007-08 00772020  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772020
//
// 00772020  53                   push ebx
// 00772021  55                   push ebp
// 00772022  56                   push esi
// 00772023  57                   push edi
// 00772024  6a05                 push 5
// 00772026  83ec0c               sub esp, 0xc
// 00772029  8bc4                 mov eax, esp
// 0077202b  b9b0845700           mov ecx, 0x5784b0
// 00772030  8908                 mov dword ptr [eax], ecx
// 00772032  33d2                 xor edx, edx
// 00772034  895004               mov dword ptr [eax + 4], edx
// 00772037  83ec0c               sub esp, 0xc
// 0077203a  33f6                 xor esi, esi
// 0077203c  897008               mov dword ptr [eax + 8], esi
// 0077203f  8bc4                 mov eax, esp
// 00772041  bf60fe4c00           mov edi, 0x4cfe60
// 00772046  8938                 mov dword ptr [eax], edi
// 00772048  6840a87a00           push 0x7aa840
// 0077204d  33db                 xor ebx, ebx
// 0077204f  33ed                 xor ebp, ebp
// 00772051  895804               mov dword ptr [eax + 4], ebx
// 00772054  6830a07a00           push 0x7aa030
// 00772059  b9442a8c00           mov ecx, 0x8c2a44
// 0077205e  896808               mov dword ptr [eax + 8], ebp
// 00772061  e81a55e0ff           call 0x577580
// 00772066  68d0a27700           push 0x77a2d0
// 0077206b  e8b3ecebff           call 0x630d23
// 00772070  83c404               add esp, 4
// 00772073  5f                   pop edi
// 00772074  5e                   pop esi
// 00772075  5d                   pop ebp
// 00772076  5b                   pop ebx
// 00772077  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_BrickColor@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@VBrickColor@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp

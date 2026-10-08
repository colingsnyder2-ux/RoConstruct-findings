// roc 2007-08 00772140  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772140
//
// 00772140  53                   push ebx
// 00772141  55                   push ebp
// 00772142  56                   push esi
// 00772143  57                   push edi
// 00772144  6a05                 push 5
// 00772146  83ec0c               sub esp, 0xc
// 00772149  8bc4                 mov eax, esp
// 0077214b  b950835700           mov ecx, 0x578350
// 00772150  8908                 mov dword ptr [eax], ecx
// 00772152  33d2                 xor edx, edx
// 00772154  895004               mov dword ptr [eax + 4], edx
// 00772157  83ec0c               sub esp, 0xc
// 0077215a  33f6                 xor esi, esi
// 0077215c  897008               mov dword ptr [eax + 8], esi
// 0077215f  8bc4                 mov eax, esp
// 00772161  bf30385700           mov edi, 0x573830
// 00772166  8938                 mov dword ptr [eax], edi
// 00772168  6848647a00           push 0x7a6448
// 0077216d  33db                 xor ebx, ebx
// 0077216f  33ed                 xor ebp, ebp
// 00772171  895804               mov dword ptr [eax + 4], ebx
// 00772174  6848b07a00           push 0x7ab048
// 00772179  b9e0288c00           mov ecx, 0x8c28e0
// 0077217e  896808               mov dword ptr [eax + 8], ebp
// 00772181  e87a55e0ff           call 0x577700
// 00772186  6830a37700           push 0x77a330
// 0077218b  e893ebebff           call 0x630d23
// 00772190  83c404               add esp, 4
// 00772193  5f                   pop edi
// 00772194  5e                   pop esi
// 00772195  5d                   pop ebp
// 00772196  5b                   pop ebx
// 00772197  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Locked@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp

// roc 2007-08 00772200  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772200
//
// 00772200  53                   push ebx
// 00772201  55                   push ebp
// 00772202  56                   push esi
// 00772203  57                   push edi
// 00772204  6a05                 push 5
// 00772206  83ec0c               sub esp, 0xc
// 00772209  8bc4                 mov eax, esp
// 0077220b  b980825700           mov ecx, 0x578280
// 00772210  8908                 mov dword ptr [eax], ecx
// 00772212  33d2                 xor edx, edx
// 00772214  895004               mov dword ptr [eax + 4], edx
// 00772217  83ec0c               sub esp, 0xc
// 0077221a  33f6                 xor esi, esi
// 0077221c  897008               mov dword ptr [eax + 8], esi
// 0077221f  8bc4                 mov eax, esp
// 00772221  bf60405700           mov edi, 0x574060
// 00772226  8938                 mov dword ptr [eax], edi
// 00772228  6848647a00           push 0x7a6448
// 0077222d  33db                 xor ebx, ebx
// 0077222f  33ed                 xor ebp, ebp
// 00772231  895804               mov dword ptr [eax + 4], ebx
// 00772234  685cb07a00           push 0x7ab05c
// 00772239  b92c288c00           mov ecx, 0x8c282c
// 0077223e  896808               mov dword ptr [eax + 8], ebp
// 00772241  e8ba54e0ff           call 0x577700
// 00772246  68f0a07700           push 0x77a0f0
// 0077224b  e8d3eaebff           call 0x630d23
// 00772250  83c404               add esp, 4
// 00772253  5f                   pop edi
// 00772254  5e                   pop esi
// 00772255  5d                   pop ebp
// 00772256  5b                   pop ebx
// 00772257  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_CanCollide@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp

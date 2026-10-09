// roc 2007-03 00772fe0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772fe0
//
// 00772fe0  53                   push ebx
// 00772fe1  55                   push ebp
// 00772fe2  56                   push esi
// 00772fe3  57                   push edi
// 00772fe4  6a05                 push 5
// 00772fe6  83ec0c               sub esp, 0xc
// 00772fe9  8bc4                 mov eax, esp
// 00772feb  b9306a5700           mov ecx, 0x576a30
// 00772ff0  8908                 mov dword ptr [eax], ecx
// 00772ff2  33d2                 xor edx, edx
// 00772ff4  895004               mov dword ptr [eax + 4], edx
// 00772ff7  83ec0c               sub esp, 0xc
// 00772ffa  33f6                 xor esi, esi
// 00772ffc  897008               mov dword ptr [eax + 8], esi
// 00772fff  8bc4                 mov eax, esp
// 00773001  bf702a5700           mov edi, 0x572a70
// 00773006  8938                 mov dword ptr [eax], edi
// 00773008  6864657a00           push 0x7a6564
// 0077300d  33db                 xor ebx, ebx
// 0077300f  33ed                 xor ebp, ebp
// 00773011  895804               mov dword ptr [eax + 4], ebx
// 00773014  68048a7a00           push 0x7a8a04
// 00773019  b9fcca8b00           mov ecx, 0x8bcafc
// 0077301e  896808               mov dword ptr [eax + 8], ebp
// 00773021  e8da2ee0ff           call 0x575f00
// 00773026  68809e7700           push 0x779e80
// 0077302b  e883c1eaff           call 0x61f1b3
// 00773030  83c404               add esp, 4
// 00773033  5f                   pop edi
// 00773034  5e                   pop esi
// 00773035  5d                   pop ebp
// 00773036  5b                   pop ebx
// 00773037  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_CanCollide@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp

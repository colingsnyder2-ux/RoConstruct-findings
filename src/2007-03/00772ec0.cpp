// roc 2007-03 00772ec0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772ec0
//
// 00772ec0  53                   push ebx
// 00772ec1  55                   push ebp
// 00772ec2  56                   push esi
// 00772ec3  57                   push edi
// 00772ec4  6a05                 push 5
// 00772ec6  83ec0c               sub esp, 0xc
// 00772ec9  8bc4                 mov eax, esp
// 00772ecb  b9006c5700           mov ecx, 0x576c00
// 00772ed0  8908                 mov dword ptr [eax], ecx
// 00772ed2  33d2                 xor edx, edx
// 00772ed4  895004               mov dword ptr [eax + 4], edx
// 00772ed7  83ec0c               sub esp, 0xc
// 00772eda  33f6                 xor esi, esi
// 00772edc  897008               mov dword ptr [eax + 8], esi
// 00772edf  8bc4                 mov eax, esp
// 00772ee1  bf60424c00           mov edi, 0x4c4260
// 00772ee6  8938                 mov dword ptr [eax], edi
// 00772ee8  6814bf7a00           push 0x7abf14
// 00772eed  33db                 xor ebx, ebx
// 00772eef  33ed                 xor ebp, ebp
// 00772ef1  895804               mov dword ptr [eax + 4], ebx
// 00772ef4  68f0c67a00           push 0x7ac6f0
// 00772ef9  b918cb8b00           mov ecx, 0x8bcb18
// 00772efe  896808               mov dword ptr [eax + 8], ebp
// 00772f01  e83a2fe0ff           call 0x575e40
// 00772f06  6820a07700           push 0x77a020
// 00772f0b  e8a3c2eaff           call 0x61f1b3
// 00772f10  83c404               add esp, 4
// 00772f13  5f                   pop edi
// 00772f14  5e                   pop esi
// 00772f15  5d                   pop ebp
// 00772f16  5b                   pop ebx
// 00772f17  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Reflectance@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp

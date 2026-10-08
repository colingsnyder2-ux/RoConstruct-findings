// roc 2007-08 00772080  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772080
//
// 00772080  53                   push ebx
// 00772081  55                   push ebp
// 00772082  56                   push esi
// 00772083  57                   push edi
// 00772084  6a05                 push 5
// 00772086  83ec0c               sub esp, 0xc
// 00772089  8bc4                 mov eax, esp
// 0077208b  b920845700           mov ecx, 0x578420
// 00772090  8908                 mov dword ptr [eax], ecx
// 00772092  33d2                 xor edx, edx
// 00772094  895004               mov dword ptr [eax + 4], edx
// 00772097  83ec0c               sub esp, 0xc
// 0077209a  33f6                 xor esi, esi
// 0077209c  897008               mov dword ptr [eax + 8], esi
// 0077209f  8bc4                 mov eax, esp
// 007720a1  bf00385700           mov edi, 0x573800
// 007720a6  8938                 mov dword ptr [eax], edi
// 007720a8  6840a87a00           push 0x7aa840
// 007720ad  33db                 xor ebx, ebx
// 007720af  33ed                 xor ebp, ebp
// 007720b1  895804               mov dword ptr [eax + 4], ebx
// 007720b4  682cb07a00           push 0x7ab02c
// 007720b9  b938298c00           mov ecx, 0x8c2938
// 007720be  896808               mov dword ptr [eax + 8], ebp
// 007720c1  e87a55e0ff           call 0x577640
// 007720c6  68b0a27700           push 0x77a2b0
// 007720cb  e853ecebff           call 0x630d23
// 007720d0  83c404               add esp, 4
// 007720d3  5f                   pop edi
// 007720d4  5e                   pop esi
// 007720d5  5d                   pop ebp
// 007720d6  5b                   pop ebx
// 007720d7  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Transparency@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp

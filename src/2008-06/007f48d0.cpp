// roc 2008-06 007f48d0  unit: seg_007f0000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f48d0
//
// 007f48d0  53                   push ebx
// 007f48d1  55                   push ebp
// 007f48d2  56                   push esi
// 007f48d3  57                   push edi
// 007f48d4  33ed                 xor ebp, ebp
// 007f48d6  55                   push ebp
// 007f48d7  83ec0c               sub esp, 0xc
// 007f48da  8bc4                 mov eax, esp
// 007f48dc  b950dd5900           mov ecx, 0x59dd50
// 007f48e1  8908                 mov dword ptr [eax], ecx
// 007f48e3  33d2                 xor edx, edx
// 007f48e5  895004               mov dword ptr [eax + 4], edx
// 007f48e8  83ec0c               sub esp, 0xc
// 007f48eb  33f6                 xor esi, esi
// 007f48ed  897008               mov dword ptr [eax + 8], esi
// 007f48f0  8bc4                 mov eax, esp
// 007f48f2  bf90f45d00           mov edi, 0x5df490
// 007f48f7  8938                 mov dword ptr [eax], edi
// 007f48f9  6844d98200           push 0x82d944
// 007f48fe  33db                 xor ebx, ebx
// 007f4900  895804               mov dword ptr [eax + 4], ebx
// 007f4903  688c318300           push 0x83318c
// 007f4908  b96c629700           mov ecx, 0x97626c
// 007f490d  896808               mov dword ptr [eax + 8], ebp
// 007f4910  e88b82daff           call 0x59cba0
// 007f4915  6850dc7f00           push 0x7fdc50
// 007f491a  e890ceeaff           call 0x6a17af
// 007f491f  83c404               add esp, 4
// 007f4922  5f                   pop edi
// 007f4923  5e                   pop esi
// 007f4924  5d                   pop ebp
// 007f4925  5b                   pop ebx
// 007f4926  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_RenderImportance@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp

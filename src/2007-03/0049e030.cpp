// roc 2007-03 0049e030  unit: seg_00490000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049e030
//
// 0049e030  56                   push esi
// 0049e031  8b7108               mov esi, dword ptr [ecx + 8]
// 0049e034  85f6                 test esi, esi
// 0049e036  742b                 je 0x49e063
// 0049e038  8d4604               lea eax, [esi + 4]
// 0049e03b  83c9ff               or ecx, 0xffffffff
// 0049e03e  f00fc108             lock xadd dword ptr [eax], ecx
// 0049e042  751f                 jne 0x49e063
// 0049e044  8b16                 mov edx, dword ptr [esi]
// 0049e046  8b4204               mov eax, dword ptr [edx + 4]
// 0049e049  8bce                 mov ecx, esi
// 0049e04b  ffd0                 call eax
// 0049e04d  8d4e08               lea ecx, [esi + 8]
// 0049e050  83caff               or edx, 0xffffffff
// 0049e053  f00fc111             lock xadd dword ptr [ecx], edx
// 0049e057  750a                 jne 0x49e063
// 0049e059  8b06                 mov eax, dword ptr [esi]
// 0049e05b  8b5008               mov edx, dword ptr [eax + 8]
// 0049e05e  8bce                 mov ecx, esi
// 0049e060  5e                   pop esi
// 0049e061  ffe2                 jmp edx
// 0049e063  5e                   pop esi
// 0049e064  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp

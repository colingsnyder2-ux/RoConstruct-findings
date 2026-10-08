// roc 2007-08 004d0950  unit: RBX::View::PartChunk  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0950
//
// 004d0950  6aff                 push -1
// 004d0952  68880a7500           push 0x750a88
// 004d0957  64a100000000         mov eax, dword ptr fs:[0]
// 004d095d  50                   push eax
// 004d095e  64892500000000       mov dword ptr fs:[0], esp
// 004d0965  51                   push ecx
// 004d0966  56                   push esi
// 004d0967  8bd1                 mov edx, ecx
// 004d0969  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d096d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d0971  83ec08               sub esp, 8
// 004d0974  85f6                 test esi, esi
// 004d0976  8bc4                 mov eax, esp
// 004d0978  8908                 mov dword ptr [eax], ecx
// 004d097a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004d0982  8964240c             mov dword ptr [esp + 0xc], esp
// 004d0986  897004               mov dword ptr [eax + 4], esi
// 004d0989  740c                 je 0x4d0997
// 004d098b  8d4604               lea eax, [esi + 4]
// 004d098e  b901000000           mov ecx, 1
// 004d0993  f00fc108             lock xadd dword ptr [eax], ecx
// 004d0997  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d099b  8b12                 mov edx, dword ptr [edx]
// 004d099d  ffd2                 call edx
// 004d099f  85f6                 test esi, esi
// 004d09a1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004d09a9  742a                 je 0x4d09d5
// 004d09ab  8d4604               lea eax, [esi + 4]
// 004d09ae  83c9ff               or ecx, 0xffffffff
// 004d09b1  f00fc108             lock xadd dword ptr [eax], ecx
// 004d09b5  751e                 jne 0x4d09d5
// 004d09b7  8b16                 mov edx, dword ptr [esi]
// 004d09b9  8b4204               mov eax, dword ptr [edx + 4]
// 004d09bc  8bce                 mov ecx, esi
// 004d09be  ffd0                 call eax
// 004d09c0  8d4e08               lea ecx, [esi + 8]
// 004d09c3  83caff               or edx, 0xffffffff
// 004d09c6  f00fc111             lock xadd dword ptr [ecx], edx
// 004d09ca  7509                 jne 0x4d09d5
// 004d09cc  8b06                 mov eax, dword ptr [esi]
// 004d09ce  8b5008               mov edx, dword ptr [eax + 8]
// 004d09d1  8bce                 mov ecx, esi
// 004d09d3  ffd2                 call edx
// 004d09d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d09d9  64890d00000000       mov dword ptr fs:[0], ecx
// 004d09e0  5e                   pop esi
// 004d09e1  83c410               add esp, 0x10
// 004d09e4  c20c00               ret 0xc
// library rbxgs-view/Part.cpp (function ??R?$mf1@XVPartChunk@View@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@QBEXPAVPartChunk@View@RBX@@V?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp

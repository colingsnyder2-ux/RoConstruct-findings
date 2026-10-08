// roc 2009-12 005fa7a0  unit: G3D::LineSegment  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa7a0
//
// 005fa7a0  8b442404             mov eax, dword ptr [esp + 4]
// 005fa7a4  83781400             cmp dword ptr [eax + 0x14], 0
// 005fa7a8  56                   push esi
// 005fa7a9  57                   push edi
// 005fa7aa  8bf1                 mov esi, ecx
// 005fa7ac  bf10000000           mov edi, 0x10
// 005fa7b1  761c                 jbe 0x5fa7cf
// 005fa7b3  397818               cmp dword ptr [eax + 0x18], edi
// 005fa7b6  7205                 jb 0x5fa7bd
// 005fa7b8  8b4004               mov eax, dword ptr [eax + 4]
// 005fa7bb  eb03                 jmp 0x5fa7c0
// 005fa7bd  83c004               add eax, 4
// 005fa7c0  50                   push eax
// 005fa7c1  6800299c00           push 0x9c2900
// 005fa7c6  56                   push esi
// 005fa7c7  e814ffffff           call 0x5fa6e0
// 005fa7cc  83c40c               add esp, 0xc
// 005fa7cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 005fa7d3  83781400             cmp dword ptr [eax + 0x14], 0
// 005fa7d7  761c                 jbe 0x5fa7f5
// 005fa7d9  397818               cmp dword ptr [eax + 0x18], edi
// 005fa7dc  7205                 jb 0x5fa7e3
// 005fa7de  8b4004               mov eax, dword ptr [eax + 4]
// 005fa7e1  eb03                 jmp 0x5fa7e6
// 005fa7e3  83c004               add eax, 4
// 005fa7e6  50                   push eax
// 005fa7e7  6800299c00           push 0x9c2900
// 005fa7ec  56                   push esi
// 005fa7ed  e8eefeffff           call 0x5fa6e0
// 005fa7f2  83c40c               add esp, 0xc
// 005fa7f5  8b442414             mov eax, dword ptr [esp + 0x14]
// 005fa7f9  83781400             cmp dword ptr [eax + 0x14], 0
// 005fa7fd  761c                 jbe 0x5fa81b
// 005fa7ff  397818               cmp dword ptr [eax + 0x18], edi
// 005fa802  7205                 jb 0x5fa809
// 005fa804  8b4004               mov eax, dword ptr [eax + 4]
// 005fa807  eb03                 jmp 0x5fa80c
// 005fa809  83c004               add eax, 4
// 005fa80c  50                   push eax
// 005fa80d  6800299c00           push 0x9c2900
// 005fa812  56                   push esi
// 005fa813  e8c8feffff           call 0x5fa6e0
// 005fa818  83c40c               add esp, 0xc
// 005fa81b  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fa81f  83781400             cmp dword ptr [eax + 0x14], 0
// 005fa823  761c                 jbe 0x5fa841
// 005fa825  397818               cmp dword ptr [eax + 0x18], edi
// 005fa828  7205                 jb 0x5fa82f
// 005fa82a  8b4004               mov eax, dword ptr [eax + 4]
// 005fa82d  eb03                 jmp 0x5fa832
// 005fa82f  83c004               add eax, 4
// 005fa832  50                   push eax
// 005fa833  6800299c00           push 0x9c2900
// 005fa838  56                   push esi
// 005fa839  e8a2feffff           call 0x5fa6e0
// 005fa83e  83c40c               add esp, 0xc
// 005fa841  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005fa845  83781400             cmp dword ptr [eax + 0x14], 0
// 005fa849  761c                 jbe 0x5fa867
// 005fa84b  397818               cmp dword ptr [eax + 0x18], edi
// 005fa84e  7205                 jb 0x5fa855
// 005fa850  8b4004               mov eax, dword ptr [eax + 4]
// 005fa853  eb03                 jmp 0x5fa858
// 005fa855  83c004               add eax, 4
// 005fa858  50                   push eax
// 005fa859  6800299c00           push 0x9c2900
// 005fa85e  56                   push esi
// 005fa85f  e87cfeffff           call 0x5fa6e0
// 005fa864  83c40c               add esp, 0xc
// 005fa867  8b442420             mov eax, dword ptr [esp + 0x20]
// 005fa86b  83781400             cmp dword ptr [eax + 0x14], 0
// 005fa86f  762e                 jbe 0x5fa89f
// 005fa871  397818               cmp dword ptr [eax + 0x18], edi
// 005fa874  7217                 jb 0x5fa88d
// 005fa876  8b4004               mov eax, dword ptr [eax + 4]
// 005fa879  50                   push eax
// 005fa87a  6800299c00           push 0x9c2900
// 005fa87f  56                   push esi
// 005fa880  e85bfeffff           call 0x5fa6e0
// 005fa885  83c40c               add esp, 0xc
// 005fa888  5f                   pop edi
// 005fa889  5e                   pop esi
// 005fa88a  c21800               ret 0x18
// 005fa88d  83c004               add eax, 4
// 005fa890  50                   push eax
// 005fa891  6800299c00           push 0x9c2900
// 005fa896  56                   push esi
// 005fa897  e844feffff           call 0x5fa6e0
// 005fa89c  83c40c               add esp, 0xc
// 005fa89f  5f                   pop edi
// 005fa8a0  5e                   pop esi
// 005fa8a1  c21800               ret 0x18
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeSymbols@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp

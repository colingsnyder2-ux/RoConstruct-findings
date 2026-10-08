// roc 2009-06 00695830  unit: RBX::Lua::FunctionRef  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695830
//
// 00695830  6aff                 push -1
// 00695832  68bbea8600           push 0x86eabb
// 00695837  64a100000000         mov eax, dword ptr fs:[0]
// 0069583d  50                   push eax
// 0069583e  64892500000000       mov dword ptr fs:[0], esp
// 00695845  51                   push ecx
// 00695846  56                   push esi
// 00695847  8bf1                 mov esi, ecx
// 00695849  89742404             mov dword ptr [esp + 4], esi
// 0069584d  c7064cb48d00         mov dword ptr [esi], 0x8db44c
// 00695853  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0069585b  e8a0fbffff           call 0x695400
// 00695860  8b7608               mov esi, dword ptr [esi + 8]
// 00695863  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0069586b  85f6                 test esi, esi
// 0069586d  742a                 je 0x695899
// 0069586f  8d4604               lea eax, [esi + 4]
// 00695872  83c9ff               or ecx, 0xffffffff
// 00695875  f00fc108             lock xadd dword ptr [eax], ecx
// 00695879  751e                 jne 0x695899
// 0069587b  8b16                 mov edx, dword ptr [esi]
// 0069587d  8b4204               mov eax, dword ptr [edx + 4]
// 00695880  8bce                 mov ecx, esi
// 00695882  ffd0                 call eax
// 00695884  8d4e08               lea ecx, [esi + 8]
// 00695887  83caff               or edx, 0xffffffff
// 0069588a  f00fc111             lock xadd dword ptr [ecx], edx
// 0069588e  7509                 jne 0x695899
// 00695890  8b06                 mov eax, dword ptr [esi]
// 00695892  8b5008               mov edx, dword ptr [eax + 8]
// 00695895  8bce                 mov ecx, esi
// 00695897  ffd2                 call edx
// 00695899  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069589d  5e                   pop esi
// 0069589e  64890d00000000       mov dword ptr fs:[0], ecx
// 006958a5  83c410               add esp, 0x10
// 006958a8  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1ThreadRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

// roc 2009-06 00695620  unit: RBX::Lua::FunctionRef  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695620
//
// 00695620  6aff                 push -1
// 00695622  68bbea8600           push 0x86eabb
// 00695627  64a100000000         mov eax, dword ptr fs:[0]
// 0069562d  50                   push eax
// 0069562e  64892500000000       mov dword ptr fs:[0], esp
// 00695635  51                   push ecx
// 00695636  56                   push esi
// 00695637  8bf1                 mov esi, ecx
// 00695639  89742404             mov dword ptr [esp + 4], esi
// 0069563d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00695645  e856ffffff           call 0x6955a0
// 0069564a  8b7608               mov esi, dword ptr [esi + 8]
// 0069564d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00695655  85f6                 test esi, esi
// 00695657  742a                 je 0x695683
// 00695659  8d4604               lea eax, [esi + 4]
// 0069565c  83c9ff               or ecx, 0xffffffff
// 0069565f  f00fc108             lock xadd dword ptr [eax], ecx
// 00695663  751e                 jne 0x695683
// 00695665  8b16                 mov edx, dword ptr [esi]
// 00695667  8b4204               mov eax, dword ptr [edx + 4]
// 0069566a  8bce                 mov ecx, esi
// 0069566c  ffd0                 call eax
// 0069566e  8d4e08               lea ecx, [esi + 8]
// 00695671  83caff               or edx, 0xffffffff
// 00695674  f00fc111             lock xadd dword ptr [ecx], edx
// 00695678  7509                 jne 0x695683
// 0069567a  8b06                 mov eax, dword ptr [esi]
// 0069567c  8b5008               mov edx, dword ptr [eax + 8]
// 0069567f  8bce                 mov ecx, esi
// 00695681  ffd2                 call edx
// 00695683  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00695687  5e                   pop esi
// 00695688  64890d00000000       mov dword ptr fs:[0], ecx
// 0069568f  83c410               add esp, 0x10
// 00695692  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1Node@ThreadRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

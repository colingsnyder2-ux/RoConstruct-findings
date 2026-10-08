// roc 2007-08 0056cd90  unit: RBX::Lua::FunctionRef  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056cd90
//
// 0056cd90  6aff                 push -1
// 0056cd92  68abab7500           push 0x75abab
// 0056cd97  64a100000000         mov eax, dword ptr fs:[0]
// 0056cd9d  50                   push eax
// 0056cd9e  64892500000000       mov dword ptr fs:[0], esp
// 0056cda5  51                   push ecx
// 0056cda6  56                   push esi
// 0056cda7  8bf1                 mov esi, ecx
// 0056cda9  89742404             mov dword ptr [esp + 4], esi
// 0056cdad  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cdb5  e856ffffff           call 0x56cd10
// 0056cdba  8b7608               mov esi, dword ptr [esi + 8]
// 0056cdbd  85f6                 test esi, esi
// 0056cdbf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0056cdc7  742a                 je 0x56cdf3
// 0056cdc9  8d4604               lea eax, [esi + 4]
// 0056cdcc  83c9ff               or ecx, 0xffffffff
// 0056cdcf  f00fc108             lock xadd dword ptr [eax], ecx
// 0056cdd3  751e                 jne 0x56cdf3
// 0056cdd5  8b16                 mov edx, dword ptr [esi]
// 0056cdd7  8b4204               mov eax, dword ptr [edx + 4]
// 0056cdda  8bce                 mov ecx, esi
// 0056cddc  ffd0                 call eax
// 0056cdde  8d4e08               lea ecx, [esi + 8]
// 0056cde1  83caff               or edx, 0xffffffff
// 0056cde4  f00fc111             lock xadd dword ptr [ecx], edx
// 0056cde8  7509                 jne 0x56cdf3
// 0056cdea  8b06                 mov eax, dword ptr [esi]
// 0056cdec  8b5008               mov edx, dword ptr [eax + 8]
// 0056cdef  8bce                 mov ecx, esi
// 0056cdf1  ffd2                 call edx
// 0056cdf3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056cdf7  5e                   pop esi
// 0056cdf8  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cdff  83c410               add esp, 0x10
// 0056ce02  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1Node@ThreadRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

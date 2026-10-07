// roc 2008-06 0048dba0  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048dba0
//
// 0048dba0  6aff                 push -1
// 0048dba2  6898987d00           push 0x7d9898
// 0048dba7  64a100000000         mov eax, dword ptr fs:[0]
// 0048dbad  50                   push eax
// 0048dbae  64892500000000       mov dword ptr fs:[0], esp
// 0048dbb5  51                   push ecx
// 0048dbb6  56                   push esi
// 0048dbb7  57                   push edi
// 0048dbb8  8bf9                 mov edi, ecx
// 0048dbba  897c2408             mov dword ptr [esp + 8], edi
// 0048dbbe  8b7708               mov esi, dword ptr [edi + 8]
// 0048dbc1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0048dbc9  85f6                 test esi, esi
// 0048dbcb  742a                 je 0x48dbf7
// 0048dbcd  8d4604               lea eax, [esi + 4]
// 0048dbd0  83c9ff               or ecx, 0xffffffff
// 0048dbd3  f00fc108             lock xadd dword ptr [eax], ecx
// 0048dbd7  751e                 jne 0x48dbf7
// 0048dbd9  8b16                 mov edx, dword ptr [esi]
// 0048dbdb  8b4204               mov eax, dword ptr [edx + 4]
// 0048dbde  8bce                 mov ecx, esi
// 0048dbe0  ffd0                 call eax
// 0048dbe2  8d4e08               lea ecx, [esi + 8]
// 0048dbe5  83caff               or edx, 0xffffffff
// 0048dbe8  f00fc111             lock xadd dword ptr [ecx], edx
// 0048dbec  7509                 jne 0x48dbf7
// 0048dbee  8b06                 mov eax, dword ptr [esi]
// 0048dbf0  8b5008               mov edx, dword ptr [eax + 8]
// 0048dbf3  8bce                 mov ecx, esi
// 0048dbf5  ffd2                 call edx
// 0048dbf7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048dbfb  c7071cba8000         mov dword ptr [edi], 0x80ba1c
// 0048dc01  5f                   pop edi
// 0048dc02  5e                   pop esi
// 0048dc03  64890d00000000       mov dword ptr fs:[0], ecx
// 0048dc0a  83c410               add esp, 0x10
// 0048dc0d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

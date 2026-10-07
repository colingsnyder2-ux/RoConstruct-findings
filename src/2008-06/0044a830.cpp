// roc 2008-06 0044a830  unit: CRbxPlayDocTemplate  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a830
//
// 0044a830  6aff                 push -1
// 0044a832  6838077d00           push 0x7d0738
// 0044a837  64a100000000         mov eax, dword ptr fs:[0]
// 0044a83d  50                   push eax
// 0044a83e  64892500000000       mov dword ptr fs:[0], esp
// 0044a845  51                   push ecx
// 0044a846  56                   push esi
// 0044a847  8bf1                 mov esi, ecx
// 0044a849  89742404             mov dword ptr [esp + 4], esi
// 0044a84d  8d4e08               lea ecx, [esi + 8]
// 0044a850  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044a858  e853b41400           call 0x595cb0
// 0044a85d  8b7604               mov esi, dword ptr [esi + 4]
// 0044a860  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044a868  85f6                 test esi, esi
// 0044a86a  742a                 je 0x44a896
// 0044a86c  8d4604               lea eax, [esi + 4]
// 0044a86f  83c9ff               or ecx, 0xffffffff
// 0044a872  f00fc108             lock xadd dword ptr [eax], ecx
// 0044a876  751e                 jne 0x44a896
// 0044a878  8b16                 mov edx, dword ptr [esi]
// 0044a87a  8b4204               mov eax, dword ptr [edx + 4]
// 0044a87d  8bce                 mov ecx, esi
// 0044a87f  ffd0                 call eax
// 0044a881  8d4e08               lea ecx, [esi + 8]
// 0044a884  83caff               or edx, 0xffffffff
// 0044a887  f00fc111             lock xadd dword ptr [ecx], edx
// 0044a88b  7509                 jne 0x44a896
// 0044a88d  8b06                 mov eax, dword ptr [esi]
// 0044a88f  8b5008               mov edx, dword ptr [eax + 8]
// 0044a892  8bce                 mov ecx, esi
// 0044a894  ffd2                 call edx
// 0044a896  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044a89a  5e                   pop esi
// 0044a89b  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a8a2  83c410               add esp, 0x10
// 0044a8a5  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

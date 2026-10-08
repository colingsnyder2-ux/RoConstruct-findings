// roc 2007-03 0047db80  unit: seg_00470000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047db80
//
// 0047db80  6aff                 push -1
// 0047db82  686b3a7600           push 0x763a6b
// 0047db87  64a100000000         mov eax, dword ptr fs:[0]
// 0047db8d  50                   push eax
// 0047db8e  51                   push ecx
// 0047db8f  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047db94  33c4                 xor eax, esp
// 0047db96  50                   push eax
// 0047db97  8d442408             lea eax, [esp + 8]
// 0047db9b  64a300000000         mov dword ptr fs:[0], eax
// 0047dba1  68f0010000           push 0x1f0
// 0047dba6  e85d051a00           call 0x61e108
// 0047dbab  83c404               add esp, 4
// 0047dbae  89442404             mov dword ptr [esp + 4], eax
// 0047dbb2  85c0                 test eax, eax
// 0047dbb4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0047dbbc  7421                 je 0x47dbdf
// 0047dbbe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047dbc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047dbc6  51                   push ecx
// 0047dbc7  52                   push edx
// 0047dbc8  8bc8                 mov ecx, eax
// 0047dbca  e881feffff           call 0x47da50
// 0047dbcf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047dbd3  64890d00000000       mov dword ptr fs:[0], ecx
// 0047dbda  59                   pop ecx
// 0047dbdb  83c410               add esp, 0x10
// 0047dbde  c3                   ret 
// 0047dbdf  33c0                 xor eax, eax
// 0047dbe1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047dbe5  64890d00000000       mov dword ptr fs:[0], ecx
// 0047dbec  59                   pop ecx
// 0047dbed  83c410               add esp, 0x10
// 0047dbf0  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?create@Win32Window@G3D@@SAPAV12@ABVSettings@GWindow@2@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

// roc 2007-08 0049a1f0  unit: RBX::Network::Client  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049a1f0
//
// 0049a1f0  56                   push esi
// 0049a1f1  6a08                 push 8
// 0049a1f3  8bf1                 mov esi, ecx
// 0049a1f5  e8fc5c1900           call 0x62fef6
// 0049a1fa  83c404               add esp, 4
// 0049a1fd  85c0                 test eax, eax
// 0049a1ff  7411                 je 0x49a212
// 0049a201  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049a205  c70098717800         mov dword ptr [eax], 0x787198
// 0049a20b  8b11                 mov edx, dword ptr [ecx]
// 0049a20d  895004               mov dword ptr [eax + 4], edx
// 0049a210  eb02                 jmp 0x49a214
// 0049a212  33c0                 xor eax, eax
// 0049a214  8b0e                 mov ecx, dword ptr [esi]
// 0049a216  85c9                 test ecx, ecx
// 0049a218  8906                 mov dword ptr [esi], eax
// 0049a21a  7408                 je 0x49a224
// 0049a21c  8b01                 mov eax, dword ptr [ecx]
// 0049a21e  8b10                 mov edx, dword ptr [eax]
// 0049a220  6a01                 push 1
// 0049a222  ffd2                 call edx
// 0049a224  8bc6                 mov eax, esi
// 0049a226  5e                   pop esi
// 0049a227  c20400               ret 4
// library rbxgs-net/Server.cpp (function ??$?4H@any@boost@@QAEAAV01@ABH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp

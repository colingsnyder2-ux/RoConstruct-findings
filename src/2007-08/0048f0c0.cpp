// roc 2007-08 0048f0c0  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048f0c0
//
// 0048f0c0  e8cbc0fbff           call 0x44b190
// 0048f0c5  8bc8                 mov ecx, eax
// 0048f0c7  e8a46e2900           call 0x725f70
// 0048f0cc  85c0                 test eax, eax
// 0048f0ce  754a                 jne 0x48f11a
// 0048f0d0  56                   push esi
// 0048f0d1  6a04                 push 4
// 0048f0d3  e81e0e1a00           call 0x62fef6
// 0048f0d8  83c404               add esp, 4
// 0048f0db  85c0                 test eax, eax
// 0048f0dd  740a                 je 0x48f0e9
// 0048f0df  c70000000000         mov dword ptr [eax], 0
// 0048f0e5  8bf0                 mov esi, eax
// 0048f0e7  eb02                 jmp 0x48f0eb
// 0048f0e9  33f6                 xor esi, esi
// 0048f0eb  53                   push ebx
// 0048f0ec  57                   push edi
// 0048f0ed  e89ec0fbff           call 0x44b190
// 0048f0f2  8bf8                 mov edi, eax
// 0048f0f4  8bcf                 mov ecx, edi
// 0048f0f6  e8756e2900           call 0x725f70
// 0048f0fb  8bd8                 mov ebx, eax
// 0048f0fd  3bde                 cmp ebx, esi
// 0048f0ff  7414                 je 0x48f115
// 0048f101  56                   push esi
// 0048f102  8bcf                 mov ecx, edi
// 0048f104  e807712900           call 0x726210
// 0048f109  85db                 test ebx, ebx
// 0048f10b  7408                 je 0x48f115
// 0048f10d  53                   push ebx
// 0048f10e  8bcf                 mov ecx, edi
// 0048f110  e80b692900           call 0x725a20
// 0048f115  5f                   pop edi
// 0048f116  5b                   pop ebx
// 0048f117  8bc6                 mov eax, esi
// 0048f119  5e                   pop esi
// 0048f11a  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?current@Context@Security@RBX@@SAAAV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

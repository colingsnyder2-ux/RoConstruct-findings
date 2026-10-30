// roc 2012-06 00a14490  unit: CXTPControlEdit  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a14490
//
// 00a14490  8b542404             mov edx, dword ptr [esp + 4]
// 00a14494  56                   push esi
// 00a14495  8bf1                 mov esi, ecx
// 00a14497  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 00a1449d  744e                 je 0xa144ed
// 00a1449f  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00a144a5  89969c000000         mov dword ptr [esi + 0x9c], edx
// 00a144ab  85c0                 test eax, eax
// 00a144ad  7435                 je 0xa144e4
// 00a144af  83782000             cmp dword ptr [eax + 0x20], 0
// 00a144b3  742f                 je 0xa144e4
// 00a144b5  83faff               cmp edx, -1
// 00a144b8  7511                 jne 0xa144cb
// 00a144ba  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00a144c0  85c9                 test ecx, ecx
// 00a144c2  7407                 je 0xa144cb
// 00a144c4  e8570af7ff           call 0x984f20
// 00a144c9  eb02                 jmp 0xa144cd
// 00a144cb  8bc2                 mov eax, edx
// 00a144cd  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00a144d3  50                   push eax
// 00a144d4  e883e2f6ff           call 0x98275c
// 00a144d9  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00a144df  e81cfbffff           call 0xa14000
// 00a144e4  6a01                 push 1
// 00a144e6  8bce                 mov ecx, esi
// 00a144e8  e8430bf7ff           call 0x985030
// 00a144ed  5e                   pop esi
// 00a144ee  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetEnabled@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp

// roc 2010-06 0083ee90  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083ee90
//
// 0083ee90  8b542404             mov edx, dword ptr [esp + 4]
// 0083ee94  56                   push esi
// 0083ee95  8bf1                 mov esi, ecx
// 0083ee97  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 0083ee9d  744e                 je 0x83eeed
// 0083ee9f  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0083eea5  89969c000000         mov dword ptr [esi + 0x9c], edx
// 0083eeab  85c0                 test eax, eax
// 0083eead  7435                 je 0x83eee4
// 0083eeaf  83782000             cmp dword ptr [eax + 0x20], 0
// 0083eeb3  742f                 je 0x83eee4
// 0083eeb5  83faff               cmp edx, -1
// 0083eeb8  7511                 jne 0x83eecb
// 0083eeba  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083eec0  85c9                 test ecx, ecx
// 0083eec2  7407                 je 0x83eecb
// 0083eec4  e8c7b7f6ff           call 0x7aa690
// 0083eec9  eb02                 jmp 0x83eecd
// 0083eecb  8bc2                 mov eax, edx
// 0083eecd  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0083eed3  50                   push eax
// 0083eed4  e84591f6ff           call 0x7a801e
// 0083eed9  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0083eedf  e8dcfaffff           call 0x83e9c0
// 0083eee4  6a01                 push 1
// 0083eee6  8bce                 mov ecx, esi
// 0083eee8  e8b3b8f6ff           call 0x7aa7a0
// 0083eeed  5e                   pop esi
// 0083eeee  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetEnabled@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp

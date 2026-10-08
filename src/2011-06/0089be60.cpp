// roc 2011-06 0089be60  unit: CXTPControlEdit  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089be60
//
// 0089be60  8b542404             mov edx, dword ptr [esp + 4]
// 0089be64  56                   push esi
// 0089be65  8bf1                 mov esi, ecx
// 0089be67  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 0089be6d  744e                 je 0x89bebd
// 0089be6f  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0089be75  89969c000000         mov dword ptr [esi + 0x9c], edx
// 0089be7b  85c0                 test eax, eax
// 0089be7d  7435                 je 0x89beb4
// 0089be7f  83782000             cmp dword ptr [eax + 0x20], 0
// 0089be83  742f                 je 0x89beb4
// 0089be85  83faff               cmp edx, -1
// 0089be88  7511                 jne 0x89be9b
// 0089be8a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0089be90  85c9                 test ecx, ecx
// 0089be92  7407                 je 0x89be9b
// 0089be94  e8c70df7ff           call 0x80cc60
// 0089be99  eb02                 jmp 0x89be9d
// 0089be9b  8bc2                 mov eax, edx
// 0089be9d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0089bea3  50                   push eax
// 0089bea4  e833e8f6ff           call 0x80a6dc
// 0089bea9  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0089beaf  e8dcfaffff           call 0x89b990
// 0089beb4  6a01                 push 1
// 0089beb6  8bce                 mov ecx, esi
// 0089beb8  e8d30ef7ff           call 0x80cd90
// 0089bebd  5e                   pop esi
// 0089bebe  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetEnabled@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp

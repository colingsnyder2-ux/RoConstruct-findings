// roc 2008-06 00742340  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742340
//
// 00742340  8b542404             mov edx, dword ptr [esp + 4]
// 00742344  56                   push esi
// 00742345  8bf1                 mov esi, ecx
// 00742347  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 0074234d  744e                 je 0x74239d
// 0074234f  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00742355  89969c000000         mov dword ptr [esi + 0x9c], edx
// 0074235b  85c0                 test eax, eax
// 0074235d  7435                 je 0x742394
// 0074235f  83782000             cmp dword ptr [eax + 0x20], 0
// 00742363  742f                 je 0x742394
// 00742365  83faff               cmp edx, -1
// 00742368  7511                 jne 0x74237b
// 0074236a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00742370  85c9                 test ecx, ecx
// 00742372  7407                 je 0x74237b
// 00742374  e84794f6ff           call 0x6ab7c0
// 00742379  eb02                 jmp 0x74237d
// 0074237b  8bc2                 mov eax, edx
// 0074237d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00742383  50                   push eax
// 00742384  e88de9f5ff           call 0x6a0d16
// 00742389  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0074238f  e8dcfaffff           call 0x741e70
// 00742394  6a01                 push 1
// 00742396  8bce                 mov ecx, esi
// 00742398  e83395f6ff           call 0x6ab8d0
// 0074239d  5e                   pop esi
// 0074239e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetEnabled@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp

// roc 2009-12 0088b820  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b820
//
// 0088b820  8b542404             mov edx, dword ptr [esp + 4]
// 0088b824  56                   push esi
// 0088b825  8bf1                 mov esi, ecx
// 0088b827  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 0088b82d  744e                 je 0x88b87d
// 0088b82f  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088b835  89969c000000         mov dword ptr [esi + 0x9c], edx
// 0088b83b  85c0                 test eax, eax
// 0088b83d  7435                 je 0x88b874
// 0088b83f  83782000             cmp dword ptr [eax + 0x20], 0
// 0088b843  742f                 je 0x88b874
// 0088b845  83faff               cmp edx, -1
// 0088b848  7511                 jne 0x88b85b
// 0088b84a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0088b850  85c9                 test ecx, ecx
// 0088b852  7407                 je 0x88b85b
// 0088b854  e857adf6ff           call 0x7f65b0
// 0088b859  eb02                 jmp 0x88b85d
// 0088b85b  8bc2                 mov eax, edx
// 0088b85d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088b863  50                   push eax
// 0088b864  e87586f6ff           call 0x7f3ede
// 0088b869  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088b86f  e84cfbffff           call 0x88b3c0
// 0088b874  6a01                 push 1
// 0088b876  8bce                 mov ecx, esi
// 0088b878  e843aef6ff           call 0x7f66c0
// 0088b87d  5e                   pop esi
// 0088b87e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetEnabled@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp

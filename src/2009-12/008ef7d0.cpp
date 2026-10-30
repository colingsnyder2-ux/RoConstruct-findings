// roc 2009-12 008ef7d0  unit: CXTPRibbonTabPopupToolBar  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef7d0
//
// 008ef7d0  56                   push esi
// 008ef7d1  57                   push edi
// 008ef7d2  8bf1                 mov esi, ecx
// 008ef7d4  e8f74cf1ff           call 0x8044d0
// 008ef7d9  8bc8                 mov ecx, eax
// 008ef7db  e89063f2ff           call 0x815b70
// 008ef7e0  8bf8                 mov edi, eax
// 008ef7e2  837f0400             cmp dword ptr [edi + 4], 0
// 008ef7e6  7f56                 jg 0x8ef83e
// 008ef7e8  8b4620               mov eax, dword ptr [esi + 0x20]
// 008ef7eb  50                   push eax
// 008ef7ec  e8eff5f7ff           call 0x86ede0
// 008ef7f1  83c404               add esp, 4
// 008ef7f4  85c0                 test eax, eax
// 008ef7f6  7446                 je 0x8ef83e
// 008ef7f8  56                   push esi
// 008ef7f9  8bcf                 mov ecx, edi
// 008ef7fb  e8a0f7f7ff           call 0x86efa0
// 008ef800  85c0                 test eax, eax
// 008ef802  753a                 jne 0x8ef83e
// 008ef804  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 008ef80b  7531                 jne 0x8ef83e
// 008ef80d  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008ef813  e85854faff           call 0x894c70
// 008ef818  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 008ef81f  741d                 je 0x8ef83e
// 008ef821  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ef825  8b965c020000         mov edx, dword ptr [esi + 0x25c]
// 008ef82b  8b5208               mov edx, dword ptr [edx + 8]
// 008ef82e  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008ef834  50                   push eax
// 008ef835  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ef839  50                   push eax
// 008ef83a  ffd2                 call edx
// 008ef83c  eb02                 jmp 0x8ef840
// 008ef83e  33c0                 xor eax, eax
// 008ef840  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 008ef846  7420                 je 0x8ef868
// 008ef848  50                   push eax
// 008ef849  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008ef84f  e8ecfeffff           call 0x8ef740
// 008ef854  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 008ef85b  740b                 je 0x8ef868
// 008ef85d  8b4620               mov eax, dword ptr [esi + 0x20]
// 008ef860  50                   push eax
// 008ef861  8bcf                 mov ecx, edi
// 008ef863  e8e8f6f7ff           call 0x86ef50
// 008ef868  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ef86c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ef870  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008ef874  50                   push eax
// 008ef875  51                   push ecx
// 008ef876  52                   push edx
// 008ef877  8bce                 mov ecx, esi
// 008ef879  e89246f5ff           call 0x843f10
// 008ef87e  5f                   pop edi
// 008ef87f  5e                   pop esi
// 008ef880  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonTabPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

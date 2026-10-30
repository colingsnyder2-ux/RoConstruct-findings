// roc 2009-12 008383a0  unit: CXTPControls  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008383a0
//
// 008383a0  56                   push esi
// 008383a1  57                   push edi
// 008383a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008383a6  8b4720               mov eax, dword ptr [edi + 0x20]
// 008383a9  50                   push eax
// 008383aa  8bf1                 mov esi, ecx
// 008383ac  ff1584cc9800         call dword ptr [0x98cc84]
// 008383b2  85c0                 test eax, eax
// 008383b4  7427                 je 0x8383dd
// 008383b6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008383ba  8b542410             mov edx, dword ptr [esp + 0x10]
// 008383be  51                   push ecx
// 008383bf  52                   push edx
// 008383c0  8bce                 mov ecx, esi
// 008383c2  e879feffff           call 0x838240
// 008383c7  85c0                 test eax, eax
// 008383c9  7412                 je 0x8383dd
// 008383cb  56                   push esi
// 008383cc  8bcf                 mov ecx, edi
// 008383ce  e8ede30e00           call 0x9267c0
// 008383d3  5f                   pop edi
// 008383d4  b801000000           mov eax, 1
// 008383d9  5e                   pop esi
// 008383da  c20c00               ret 0xc
// 008383dd  5f                   pop edi
// 008383de  33c0                 xor eax, eax
// 008383e0  5e                   pop esi
// 008383e1  c20c00               ret 0xc
// copied from an identical function in another client (function ?LoadWindowPos@CXTPWindowPos@@QAEHPAVCWnd@@PBD1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPWindowPos.cpp
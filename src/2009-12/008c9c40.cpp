// roc 2009-12 008c9c40  unit: CXTPPropertyGridPaintManager  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9c40
//
// 008c9c40  6aff                 push -1
// 008c9c42  68c7499600           push 0x9649c7
// 008c9c47  64a100000000         mov eax, dword ptr fs:[0]
// 008c9c4d  50                   push eax
// 008c9c4e  51                   push ecx
// 008c9c4f  56                   push esi
// 008c9c50  a10052b600           mov eax, dword ptr [0xb65200]
// 008c9c55  33c4                 xor eax, esp
// 008c9c57  50                   push eax
// 008c9c58  8d44240c             lea eax, [esp + 0xc]
// 008c9c5c  64a300000000         mov dword ptr fs:[0], eax
// 008c9c62  8bf1                 mov esi, ecx
// 008c9c64  89742408             mov dword ptr [esp + 8], esi
// 008c9c68  c706e4a0a000         mov dword ptr [esi], 0xa0a0e4
// 008c9c6e  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008c9c71  c744241404000000     mov dword ptr [esp + 0x14], 4
// 008c9c79  85c9                 test ecx, ecx
// 008c9c7b  740c                 je 0x8c9c89
// 008c9c7d  e85aa1f2ff           call 0x7f3ddc
// 008c9c82  c7467400000000       mov dword ptr [esi + 0x74], 0
// 008c9c89  8d4e6c               lea ecx, [esi + 0x6c]
// 008c9c8c  c644241403           mov byte ptr [esp + 0x14], 3
// 008c9c91  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008c9c97  e89455b4ff           call 0x40f230
// 008c9c9c  8d4e64               lea ecx, [esi + 0x64]
// 008c9c9f  c644241402           mov byte ptr [esp + 0x14], 2
// 008c9ca4  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008c9caa  e88155b4ff           call 0x40f230
// 008c9caf  8d4e20               lea ecx, [esi + 0x20]
// 008c9cb2  c644241401           mov byte ptr [esp + 0x14], 1
// 008c9cb7  e85424faff           call 0x86c110
// 008c9cbc  8d4e14               lea ecx, [esi + 0x14]
// 008c9cbf  c644241400           mov byte ptr [esp + 0x14], 0
// 008c9cc4  e84724faff           call 0x86c110
// 008c9cc9  8d4e08               lea ecx, [esi + 8]
// 008c9ccc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008c9cd4  e83724faff           call 0x86c110
// 008c9cd9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c9cdd  64890d00000000       mov dword ptr fs:[0], ecx
// 008c9ce4  59                   pop ecx
// 008c9ce5  5e                   pop esi
// 008c9ce6  83c410               add esp, 0x10
// 008c9ce9  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridPaintManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
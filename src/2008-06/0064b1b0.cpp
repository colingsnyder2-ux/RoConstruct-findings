// roc 2008-06 0064b1b0  unit: RBX::SleepStage  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064b1b0
//
// 0064b1b0  56                   push esi
// 0064b1b1  8b742408             mov esi, dword ptr [esp + 8]
// 0064b1b5  57                   push edi
// 0064b1b6  8bf9                 mov edi, ecx
// 0064b1b8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0064b1bb  e8a0c3f9ff           call 0x5e7560
// 0064b1c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0064b1c3  e898c3f9ff           call 0x5e7560
// 0064b1c8  57                   push edi
// 0064b1c9  8bce                 mov ecx, esi
// 0064b1cb  e860a6ffff           call 0x645830
// 0064b1d0  8b06                 mov eax, dword ptr [esi]
// 0064b1d2  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064b1d5  8bce                 mov ecx, esi
// 0064b1d7  ffd2                 call edx
// 0064b1d9  83f801               cmp eax, 1
// 0064b1dc  752f                 jne 0x64b20d
// 0064b1de  8b87a4010000         mov eax, dword ptr [edi + 0x1a4]
// 0064b1e4  8d8fa0010000         lea ecx, [edi + 0x1a0]
// 0064b1ea  8d54240c             lea edx, [esp + 0xc]
// 0064b1ee  52                   push edx
// 0064b1ef  89742410             mov dword ptr [esp + 0x10], esi
// 0064b1f3  894624               mov dword ptr [esi + 0x24], eax
// 0064b1f6  e8d51efcff           call 0x60d0d0
// 0064b1fb  c7460801000000       mov dword ptr [esi + 8], 1
// 0064b202  ff87d0000000         inc dword ptr [edi + 0xd0]
// 0064b208  5f                   pop edi
// 0064b209  5e                   pop esi
// 0064b20a  c20400               ret 4
// 0064b20d  6a01                 push 1
// 0064b20f  56                   push esi
// 0064b210  8bcf                 mov ecx, edi
// 0064b212  c7460802000000       mov dword ptr [esi + 8], 2
// 0064b219  e8f2fbffff           call 0x64ae10
// 0064b21e  5f                   pop edi
// 0064b21f  5e                   pop esi
// 0064b220  c20400               ret 4
// library rbxgs/roc_unit_4182866eef5838cb.cpp (function ?onEdgeAdded@SleepStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4182866eef5838cb.cpp

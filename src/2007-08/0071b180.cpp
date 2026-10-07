// roc 2007-08 0071b180  unit: CXTPTabPaintManager::CColorSetWinXP  size: 362 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071b180
//
// 0071b180  56                   push esi
// 0071b181  8bf1                 mov esi, ecx
// 0071b183  57                   push edi
// 0071b184  8d4e04               lea ecx, [esi + 4]
// 0071b187  c706c00c7e00         mov dword ptr [esi], 0x7e0cc0
// 0071b18d  e82ed3f4ff           call 0x6684c0
// 0071b192  8d4e24               lea ecx, [esi + 0x24]
// 0071b195  e826d3f4ff           call 0x6684c0
// 0071b19a  8d4e44               lea ecx, [esi + 0x44]
// 0071b19d  e8fed2f4ff           call 0x6684a0
// 0071b1a2  8d4e50               lea ecx, [esi + 0x50]
// 0071b1a5  e8f6d2f4ff           call 0x6684a0
// 0071b1aa  8d4e5c               lea ecx, [esi + 0x5c]
// 0071b1ad  e8eed2f4ff           call 0x6684a0
// 0071b1b2  8d4e68               lea ecx, [esi + 0x68]
// 0071b1b5  e8e6d2f4ff           call 0x6684a0
// 0071b1ba  8d4e74               lea ecx, [esi + 0x74]
// 0071b1bd  e8ded2f4ff           call 0x6684a0
// 0071b1c2  8d8e80000000         lea ecx, [esi + 0x80]
// 0071b1c8  e8d3d2f4ff           call 0x6684a0
// 0071b1cd  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0071b1d3  e8c8d2f4ff           call 0x6684a0
// 0071b1d8  8d8e98000000         lea ecx, [esi + 0x98]
// 0071b1de  e8bdd2f4ff           call 0x6684a0
// 0071b1e3  8d8ea4000000         lea ecx, [esi + 0xa4]
// 0071b1e9  e8b2d2f4ff           call 0x6684a0
// 0071b1ee  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0071b1f4  e8a7d2f4ff           call 0x6684a0
// 0071b1f9  8d8ebc000000         lea ecx, [esi + 0xbc]
// 0071b1ff  e89cd2f4ff           call 0x6684a0
// 0071b204  8d8ec8000000         lea ecx, [esi + 0xc8]
// 0071b20a  e891d2f4ff           call 0x6684a0
// 0071b20f  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0071b215  e886d2f4ff           call 0x6684a0
// 0071b21a  8dbee0000000         lea edi, [esi + 0xe0]
// 0071b220  8bcf                 mov ecx, edi
// 0071b222  e899d2f4ff           call 0x6684c0
// 0071b227  8d4f20               lea ecx, [edi + 0x20]
// 0071b22a  e891d2f4ff           call 0x6684c0
// 0071b22f  8dbe20010000         lea edi, [esi + 0x120]
// 0071b235  8bcf                 mov ecx, edi
// 0071b237  e864d2f4ff           call 0x6684a0
// 0071b23c  8d4f0c               lea ecx, [edi + 0xc]
// 0071b23f  e85cd2f4ff           call 0x6684a0
// 0071b244  8d4f18               lea ecx, [edi + 0x18]
// 0071b247  e854d2f4ff           call 0x6684a0
// 0071b24c  8dbe44010000         lea edi, [esi + 0x144]
// 0071b252  8bcf                 mov ecx, edi
// 0071b254  e847d2f4ff           call 0x6684a0
// 0071b259  8d4f0c               lea ecx, [edi + 0xc]
// 0071b25c  e83fd2f4ff           call 0x6684a0
// 0071b261  8d4f18               lea ecx, [edi + 0x18]
// 0071b264  e837d2f4ff           call 0x6684a0
// 0071b269  8d4f24               lea ecx, [edi + 0x24]
// 0071b26c  e82fd2f4ff           call 0x6684a0
// 0071b271  8dbe74010000         lea edi, [esi + 0x174]
// 0071b277  8bcf                 mov ecx, edi
// 0071b279  e822d2f4ff           call 0x6684a0
// 0071b27e  8d4f0c               lea ecx, [edi + 0xc]
// 0071b281  e81ad2f4ff           call 0x6684a0
// 0071b286  8d4f18               lea ecx, [edi + 0x18]
// 0071b289  e812d2f4ff           call 0x6684a0
// 0071b28e  8d4f24               lea ecx, [edi + 0x24]
// 0071b291  e80ad2f4ff           call 0x6684a0
// 0071b296  8d4f30               lea ecx, [edi + 0x30]
// 0071b299  e802d2f4ff           call 0x6684a0
// 0071b29e  8d4f3c               lea ecx, [edi + 0x3c]
// 0071b2a1  e8fad1f4ff           call 0x6684a0
// 0071b2a6  8dbebc010000         lea edi, [esi + 0x1bc]
// 0071b2ac  8bcf                 mov ecx, edi
// 0071b2ae  e8edd1f4ff           call 0x6684a0
// 0071b2b3  8d4f0c               lea ecx, [edi + 0xc]
// 0071b2b6  e8e5d1f4ff           call 0x6684a0
// 0071b2bb  8d4f18               lea ecx, [edi + 0x18]
// 0071b2be  e8ddd1f4ff           call 0x6684a0
// 0071b2c3  8d4f24               lea ecx, [edi + 0x24]
// 0071b2c6  e8d5d1f4ff           call 0x6684a0
// 0071b2cb  8d4f30               lea ecx, [edi + 0x30]
// 0071b2ce  e8cdd1f4ff           call 0x6684a0
// 0071b2d3  8d4f3c               lea ecx, [edi + 0x3c]
// 0071b2d6  e8c5d1f4ff           call 0x6684a0
// 0071b2db  5f                   pop edi
// 0071b2dc  c7860402000000000000 mov dword ptr [esi + 0x204], 0
// 0071b2e6  8bc6                 mov eax, esi
// 0071b2e8  5e                   pop esi
// 0071b2e9  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ??0CColorSet@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp

// roc 2007-08 00666db0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666db0
//
// 00666db0  53                   push ebx
// 00666db1  56                   push esi
// 00666db2  8bf1                 mov esi, ecx
// 00666db4  33db                 xor ebx, ebx
// 00666db6  6a0a                 push 0xa
// 00666db8  8d4e18               lea ecx, [esi + 0x18]
// 00666dbb  c706fca57c00         mov dword ptr [esi], 0x7ca5fc
// 00666dc1  895e04               mov dword ptr [esi + 4], ebx
// 00666dc4  c7460801000000       mov dword ptr [esi + 8], 1
// 00666dcb  895e0c               mov dword ptr [esi + 0xc], ebx
// 00666dce  895e10               mov dword ptr [esi + 0x10], ebx
// 00666dd1  895e14               mov dword ptr [esi + 0x14], ebx
// 00666dd4  e8e7fdffff           call 0x666bc0
// 00666dd9  885e38               mov byte ptr [esi + 0x38], bl
// 00666ddc  895e34               mov dword ptr [esi + 0x34], ebx
// 00666ddf  c6463901             mov byte ptr [esi + 0x39], 1
// 00666de3  8bc6                 mov eax, esi
// 00666de5  5e                   pop esi
// 00666de6  5b                   pop ebx
// 00666de7  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ??0CXTTreeBase@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp

// roc 2009-06 0079af00  unit: CXTPResourceManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079af00
//
// 0079af00  56                   push esi
// 0079af01  8bf1                 mov esi, ecx
// 0079af03  6809040000           push 0x409
// 0079af08  c70634129000         mov dword ptr [esi], 0x901234
// 0079af0e  c7460401000000       mov dword ptr [esi + 4], 1
// 0079af15  c7460800000000       mov dword ptr [esi + 8], 0
// 0079af1c  e81ffdffff           call 0x79ac40
// 0079af21  89460c               mov dword ptr [esi + 0xc], eax
// 0079af24  83c404               add esp, 4
// 0079af27  8bc6                 mov eax, esi
// 0079af29  5e                   pop esi
// 0079af2a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ??0CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

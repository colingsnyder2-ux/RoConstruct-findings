// roc 2011-06 0087fd00  unit: CXTPResourceManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087fd00
//
// 0087fd00  56                   push esi
// 0087fd01  8bf1                 mov esi, ecx
// 0087fd03  6809040000           push 0x409
// 0087fd08  c706b4f9ac00         mov dword ptr [esi], 0xacf9b4
// 0087fd0e  c7460401000000       mov dword ptr [esi + 4], 1
// 0087fd15  c7460800000000       mov dword ptr [esi + 8], 0
// 0087fd1c  e81ffdffff           call 0x87fa40
// 0087fd21  89460c               mov dword ptr [esi + 0xc], eax
// 0087fd24  83c404               add esp, 4
// 0087fd27  8bc6                 mov eax, esi
// 0087fd29  5e                   pop esi
// 0087fd2a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ??0CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

// roc 2008-06 00401150  unit: CInsertObjectDialog  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401150
//
// 00401150  56                   push esi
// 00401151  8bf1                 mov esi, ecx
// 00401153  833e00               cmp dword ptr [esi], 0
// 00401156  741a                 je 0x401172
// 00401158  57                   push edi
// 00401159  8b3dc0288000         mov edi, dword ptr [0x8028c0]
// 0040115f  90                   nop 
// 00401160  8b06                 mov eax, dword ptr [esi]
// 00401162  8b08                 mov ecx, dword ptr [eax]
// 00401164  50                   push eax
// 00401165  890e                 mov dword ptr [esi], ecx
// 00401167  ffd7                 call edi
// 00401169  83c404               add esp, 4
// 0040116c  833e00               cmp dword ptr [esi], 0
// 0040116f  75ef                 jne 0x401160
// 00401171  5f                   pop edi
// 00401172  5e                   pop esi
// 00401173  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp

// from server: 100% by auto
// roc 2011-06 0086ba10  unit: CXTThemeManagerStyle  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ba10
//
// 0086ba10  56                   push esi
// 0086ba11  8b742408             mov esi, dword ptr [esp + 8]
// 0086ba15  85f6                 test esi, esi
// 0086ba17  7506                 jne 0x86ba1f
// 0086ba19  33c0                 xor eax, eax
// 0086ba1b  5e                   pop esi
// 0086ba1c  c20400               ret 4
// 0086ba1f  57                   push edi
// 0086ba20  8d44240c             lea eax, [esp + 0xc]
// 0086ba24  8d7904               lea edi, [ecx + 4]
// 0086ba27  50                   push eax
// 0086ba28  56                   push esi
// 0086ba29  8bcf                 mov ecx, edi
// 0086ba2b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0086ba33  e89c101600           call 0x9ccad4
// 0086ba38  85c0                 test eax, eax
// 0086ba3a  7519                 jne 0x86ba55
// 0086ba3c  53                   push ebx
// 0086ba3d  8bce                 mov ecx, esi
// 0086ba3f  e822f0f9ff           call 0x80aa66
// 0086ba44  56                   push esi
// 0086ba45  8bcf                 mov ecx, edi
// 0086ba47  89442414             mov dword ptr [esp + 0x14], eax
// 0086ba4b  8bd8                 mov ebx, eax
// 0086ba4d  e83e0f1600           call 0x9cc990
// 0086ba52  8918                 mov dword ptr [eax], ebx
// 0086ba54  5b                   pop ebx
// 0086ba55  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086ba59  5f                   pop edi
// 0086ba5a  5e                   pop esi
// 0086ba5b  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ?GetDefaultThemeFactory@CXTThemeManager@@QAEPAVCXTThemeManagerStyleFactory@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp

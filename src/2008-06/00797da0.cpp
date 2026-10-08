// from server: 100% by auto
// roc 2008-06 00797da0  unit: CXTPRibbonGroupControlPopup  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797da0
//
// 00797da0  8b442408             mov eax, dword ptr [esp + 8]
// 00797da4  56                   push esi
// 00797da5  57                   push edi
// 00797da6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00797daa  50                   push eax
// 00797dab  57                   push edi
// 00797dac  8bf1                 mov esi, ecx
// 00797dae  e86dd9faff           call 0x745720
// 00797db3  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 00797dba  743f                 je 0x797dfb
// 00797dbc  83bf0001000000       cmp dword ptr [edi + 0x100], 0
// 00797dc3  7436                 je 0x797dfb
// 00797dc5  53                   push ebx
// 00797dc6  8bcf                 mov ecx, edi
// 00797dc8  e833ffffff           call 0x797d00
// 00797dcd  8bce                 mov ecx, esi
// 00797dcf  8bd8                 mov ebx, eax
// 00797dd1  e82affffff           call 0x797d00
// 00797dd6  3bc3                 cmp eax, ebx
// 00797dd8  5b                   pop ebx
// 00797dd9  7420                 je 0x797dfb
// 00797ddb  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00797de1  50                   push eax
// 00797de2  8bce                 mov ecx, esi
// 00797de4  e817ffffff           call 0x797d00
// 00797de9  8bc8                 mov ecx, eax
// 00797deb  e8a0dff8ff           call 0x725d90
// 00797df0  5f                   pop edi
// 00797df1  898684010000         mov dword ptr [esi + 0x184], eax
// 00797df7  5e                   pop esi
// 00797df8  c20800               ret 8
// 00797dfb  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 00797e01  5f                   pop edi
// 00797e02  898e84010000         mov dword ptr [esi + 0x184], ecx
// 00797e08  5e                   pop esi
// 00797e09  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?Copy@CXTPRibbonGroupControlPopup@@UAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp

// from server: 100% by auto
// roc 2012-06 009ea480  unit: CXTPToolTipContextToolTip  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ea480
//
// 009ea480  83ec18               sub esp, 0x18
// 009ea483  56                   push esi
// 009ea484  8d44240c             lea eax, [esp + 0xc]
// 009ea488  57                   push edi
// 009ea489  50                   push eax
// 009ea48a  e84101feff           call 0x9ca5d0
// 009ea48f  8bc8                 mov ecx, eax
// 009ea491  e80afdfdff           call 0x9ca1a0
// 009ea496  8b742424             mov esi, dword ptr [esp + 0x24]
// 009ea49a  8b442418             mov eax, dword ptr [esp + 0x18]
// 009ea49e  8b4e08               mov ecx, dword ptr [esi + 8]
// 009ea4a1  8b3df43ab200         mov edi, dword ptr [0xb23af4]
// 009ea4a7  8d50fc               lea edx, [eax - 4]
// 009ea4aa  3bd1                 cmp edx, ecx
// 009ea4ac  7d0b                 jge 0x9ea4b9
// 009ea4ae  2bc1                 sub eax, ecx
// 009ea4b0  6a00                 push 0
// 009ea4b2  83e804               sub eax, 4
// 009ea4b5  50                   push eax
// 009ea4b6  56                   push esi
// 009ea4b7  ffd7                 call edi
// 009ea4b9  8b0e                 mov ecx, dword ptr [esi]
// 009ea4bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 009ea4bf  3bc1                 cmp eax, ecx
// 009ea4c1  7e08                 jle 0x9ea4cb
// 009ea4c3  6a00                 push 0
// 009ea4c5  2bc1                 sub eax, ecx
// 009ea4c7  50                   push eax
// 009ea4c8  56                   push esi
// 009ea4c9  ffd7                 call edi
// 009ea4cb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009ea4cf  83c0fc               add eax, -4
// 009ea4d2  3b460c               cmp eax, dword ptr [esi + 0xc]
// 009ea4d5  7d1b                 jge 0x9ea4f2
// 009ea4d7  8d4c2408             lea ecx, [esp + 8]
// 009ea4db  51                   push ecx
// 009ea4dc  ff158c3ab200         call dword ptr [0xb23a8c]
// 009ea4e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009ea4e6  2b560c               sub edx, dword ptr [esi + 0xc]
// 009ea4e9  83ea03               sub edx, 3
// 009ea4ec  52                   push edx
// 009ea4ed  6a00                 push 0
// 009ea4ef  56                   push esi
// 009ea4f0  ffd7                 call edi
// 009ea4f2  5f                   pop edi
// 009ea4f3  5e                   pop esi
// 009ea4f4  83c418               add esp, 0x18
// 009ea4f7  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?EnsureVisible@CXTPToolTipContextToolTip@@IAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp

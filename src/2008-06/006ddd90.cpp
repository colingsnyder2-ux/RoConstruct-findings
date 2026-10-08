// from server: 100% by auto
// roc 2008-06 006ddd90  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddd90
//
// 006ddd90  83ec10               sub esp, 0x10
// 006ddd93  57                   push edi
// 006ddd94  8bf9                 mov edi, ecx
// 006ddd96  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006ddd99  e8ca2efcff           call 0x6a0c68
// 006ddd9e  837f0400             cmp dword ptr [edi + 4], 0
// 006ddda2  744c                 je 0x6dddf0
// 006ddda4  56                   push esi
// 006ddda5  8bcf                 mov ecx, edi
// 006ddda7  e864f0ffff           call 0x6dce10
// 006dddac  8bf0                 mov esi, eax
// 006dddae  85f6                 test esi, esi
// 006dddb0  743d                 je 0x6dddef
// 006dddb2  53                   push ebx
// 006dddb3  8b1d182e8000         mov ebx, dword ptr [0x802e18]
// 006dddb9  8da42400000000       lea esp, [esp]
// 006dddc0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dddc3  6a01                 push 1
// 006dddc5  8d442410             lea eax, [esp + 0x10]
// 006dddc9  50                   push eax
// 006dddca  56                   push esi
// 006dddcb  e86231fcff           call 0x6a0f32
// 006dddd0  8b5734               mov edx, dword ptr [edi + 0x34]
// 006dddd3  8b4220               mov eax, dword ptr [edx + 0x20]
// 006dddd6  6a01                 push 1
// 006dddd8  8d4c2410             lea ecx, [esp + 0x10]
// 006ddddc  51                   push ecx
// 006ddddd  50                   push eax
// 006dddde  ffd3                 call ebx
// 006ddde0  56                   push esi
// 006ddde1  8bcf                 mov ecx, edi
// 006ddde3  e878f0ffff           call 0x6dce60
// 006ddde8  8bf0                 mov esi, eax
// 006dddea  85f6                 test esi, esi
// 006dddec  75d2                 jne 0x6dddc0
// 006dddee  5b                   pop ebx
// 006dddef  5e                   pop esi
// 006dddf0  5f                   pop edi
// 006dddf1  83c410               add esp, 0x10
// 006dddf4  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnKillFocus@CXTTreeBase@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp

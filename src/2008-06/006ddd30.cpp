// roc 2008-06 006ddd30  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddd30
//
// 006ddd30  83ec10               sub esp, 0x10
// 006ddd33  57                   push edi
// 006ddd34  8bf9                 mov edi, ecx
// 006ddd36  837f0400             cmp dword ptr [edi + 4], 0
// 006ddd3a  7444                 je 0x6ddd80
// 006ddd3c  56                   push esi
// 006ddd3d  e8cef0ffff           call 0x6dce10
// 006ddd42  8bf0                 mov esi, eax
// 006ddd44  85f6                 test esi, esi
// 006ddd46  7437                 je 0x6ddd7f
// 006ddd48  53                   push ebx
// 006ddd49  8b1d182e8000         mov ebx, dword ptr [0x802e18]
// 006ddd4f  90                   nop 
// 006ddd50  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006ddd53  6a01                 push 1
// 006ddd55  8d442410             lea eax, [esp + 0x10]
// 006ddd59  50                   push eax
// 006ddd5a  56                   push esi
// 006ddd5b  e8d231fcff           call 0x6a0f32
// 006ddd60  8b5734               mov edx, dword ptr [edi + 0x34]
// 006ddd63  8b4220               mov eax, dword ptr [edx + 0x20]
// 006ddd66  6a01                 push 1
// 006ddd68  8d4c2410             lea ecx, [esp + 0x10]
// 006ddd6c  51                   push ecx
// 006ddd6d  50                   push eax
// 006ddd6e  ffd3                 call ebx
// 006ddd70  56                   push esi
// 006ddd71  8bcf                 mov ecx, edi
// 006ddd73  e8e8f0ffff           call 0x6dce60
// 006ddd78  8bf0                 mov esi, eax
// 006ddd7a  85f6                 test esi, esi
// 006ddd7c  75d2                 jne 0x6ddd50
// 006ddd7e  5b                   pop ebx
// 006ddd7f  5e                   pop esi
// 006ddd80  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006ddd83  e8e02efcff           call 0x6a0c68
// 006ddd88  5f                   pop edi
// 006ddd89  83c410               add esp, 0x10
// 006ddd8c  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnSetFocus@CXTTreeBase@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp

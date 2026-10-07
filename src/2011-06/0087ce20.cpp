// roc 2011-06 0087ce20  unit: CXTPPropertyGridItemEnum  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087ce20
//
// 0087ce20  56                   push esi
// 0087ce21  8bf1                 mov esi, ecx
// 0087ce23  e89842fdff           call 0x8510c0
// 0087ce28  8bc8                 mov ecx, eax
// 0087ce2a  e86152fdff           call 0x852090
// 0087ce2f  68d0000000           push 0xd0
// 0087ce34  6a00                 push 0
// 0087ce36  56                   push esi
// 0087ce37  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 0087ce3d  e8a2e4f8ff           call 0x80b2e4
// 0087ce42  83c40c               add esp, 0xc
// 0087ce45  6828edac00           push 0xaced28
// 0087ce4a  ff152403a400         call dword ptr [0xa40324]
// 0087ce50  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0087ce56  8bc6                 mov eax, esi
// 0087ce58  5e                   pop esi
// 0087ce59  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPWinThemeWrapper.cpp (function ??0CSharedData@CXTPWinThemeWrapper@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPWinThemeWrapper.cpp

// roc 2008-06 006dfb40  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dfb40
//
// 006dfb40  8b8164040000         mov eax, dword ptr [ecx + 0x464]
// 006dfb46  83f806               cmp eax, 6
// 006dfb49  7405                 je 0x6dfb50
// 006dfb4b  83f807               cmp eax, 7
// 006dfb4e  7506                 jne 0x6dfb56
// 006dfb50  8b8168040000         mov eax, dword ptr [ecx + 0x468]
// 006dfb56  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?GetCurrentSystemTheme@CXTPColorManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp

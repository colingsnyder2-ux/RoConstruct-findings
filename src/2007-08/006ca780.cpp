// roc 2007-08 006ca780  unit: CXTPDockContext  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca780
//
// 006ca780  83ec10               sub esp, 0x10
// 006ca783  56                   push esi
// 006ca784  8d442404             lea eax, [esp + 4]
// 006ca788  57                   push edi
// 006ca789  50                   push eax
// 006ca78a  e8217afaff           call 0x6721b0
// 006ca78f  8bc8                 mov ecx, eax
// 006ca791  e8ea75faff           call 0x671d80
// 006ca796  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ca79a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006ca79e  2b4604               sub eax, dword ptr [esi + 4]
// 006ca7a1  8b3dd8ed7700         mov edi, dword ptr [0x77edd8]
// 006ca7a7  83f80a               cmp eax, 0xa
// 006ca7aa  7d09                 jge 0x6ca7b5
// 006ca7ac  83c0f6               add eax, -0xa
// 006ca7af  50                   push eax
// 006ca7b0  6a00                 push 0
// 006ca7b2  56                   push esi
// 006ca7b3  ffd7                 call edi
// 006ca7b5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006ca7b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ca7bc  8bd1                 mov edx, ecx
// 006ca7be  2bd0                 sub edx, eax
// 006ca7c0  83fa0a               cmp edx, 0xa
// 006ca7c3  7d0b                 jge 0x6ca7d0
// 006ca7c5  2bc1                 sub eax, ecx
// 006ca7c7  83c00a               add eax, 0xa
// 006ca7ca  50                   push eax
// 006ca7cb  6a00                 push 0
// 006ca7cd  56                   push esi
// 006ca7ce  ffd7                 call edi
// 006ca7d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ca7d4  2b06                 sub eax, dword ptr [esi]
// 006ca7d6  83f80a               cmp eax, 0xa
// 006ca7d9  7d09                 jge 0x6ca7e4
// 006ca7db  6a00                 push 0
// 006ca7dd  83c0f6               add eax, -0xa
// 006ca7e0  50                   push eax
// 006ca7e1  56                   push esi
// 006ca7e2  ffd7                 call edi
// 006ca7e4  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ca7e7  8b442408             mov eax, dword ptr [esp + 8]
// 006ca7eb  8bd1                 mov edx, ecx
// 006ca7ed  2bd0                 sub edx, eax
// 006ca7ef  83fa0a               cmp edx, 0xa
// 006ca7f2  7d0b                 jge 0x6ca7ff
// 006ca7f4  2bc1                 sub eax, ecx
// 006ca7f6  6a00                 push 0
// 006ca7f8  83c00a               add eax, 0xa
// 006ca7fb  50                   push eax
// 006ca7fc  56                   push esi
// 006ca7fd  ffd7                 call edi
// 006ca7ff  5f                   pop edi
// 006ca800  5e                   pop esi
// 006ca801  83c410               add esp, 0x10
// 006ca804  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockContext.cpp (function ?EnsureVisible@CXTPDockContext@@AAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockContext.cpp

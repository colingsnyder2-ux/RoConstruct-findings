// roc 2011-06 00903905  unit: CXTIconHandle  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903905
//
// 00903905  8bff                 mov edi, edi
// 00903907  55                   push ebp
// 00903908  8bec                 mov ebp, esp
// 0090390a  56                   push esi
// 0090390b  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0090390e  57                   push edi
// 0090390f  ff7510               push dword ptr [ebp + 0x10]
// 00903912  83c608               add esi, 8
// 00903915  83e6f8               and esi, 0xfffffff8
// 00903918  8d450c               lea eax, [ebp + 0xc]
// 0090391b  56                   push esi
// 0090391c  50                   push eax
// 0090391d  8bf9                 mov edi, ecx
// 0090391f  e8acfbafff           call 0x4034d0
// 00903924  83c40c               add esp, 0xc
// 00903927  85c0                 test eax, eax
// 00903929  7c2d                 jl 0x903958
// 0090392b  ff750c               push dword ptr [ebp + 0xc]
// 0090392e  8d450c               lea eax, [ebp + 0xc]
// 00903931  6a10                 push 0x10
// 00903933  50                   push eax
// 00903934  e8470ab0ff           call 0x404380
// 00903939  83c40c               add esp, 0xc
// 0090393c  85c0                 test eax, eax
// 0090393e  7c18                 jl 0x903958
// 00903940  ff750c               push dword ptr [ebp + 0xc]
// 00903943  8b4f04               mov ecx, dword ptr [edi + 4]
// 00903946  ff7508               push dword ptr [ebp + 8]
// 00903949  8b01                 mov eax, dword ptr [ecx]
// 0090394b  ff5008               call dword ptr [eax + 8]
// 0090394e  85c0                 test eax, eax
// 00903950  7406                 je 0x903958
// 00903952  4e                   dec esi
// 00903953  897008               mov dword ptr [eax + 8], esi
// 00903956  eb02                 jmp 0x90395a
// 00903958  33c0                 xor eax, eax
// 0090395a  5f                   pop edi
// 0090395b  5e                   pop esi
// 0090395c  5d                   pop ebp
// 0090395d  c20c00               ret 0xc
// copied from an identical function in another client (function ?Reallocate@CAtlStringMgr@ATL@@UAEPAUCStringData@2@PAU32@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj
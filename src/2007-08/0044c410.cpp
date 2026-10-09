// from server: 93% by colin
// roc 2007-08 0044c410  unit: CRobloxControlColorSelector  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044c410
//
// 0044c410  53                   push ebx
// 0044c411  8bd9                 mov ebx, ecx
// 0044c413  56                   push esi
// 0044c414  8b7304               mov esi, dword ptr [ebx + 4]
// 0044c417  85f6                 test esi, esi
// 0044c419  7425                 je 0x44c440
// 0044c41b  57                   push edi
// 0044c41c  8b7b08               mov edi, dword ptr [ebx + 8]
// 0044c41f  3bf7                 cmp esi, edi
// 0044c421  7410                 je 0x44c433
// 0044c423  8d4e08               lea ecx, [esi + 8]
// 0044c426  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0044c42c  83c60c               add esi, 0xc
// 0044c42f  3bf7                 cmp esi, edi
// 0044c431  75f0                 jne 0x44c423
// 0044c433  8b4304               mov eax, dword ptr [ebx + 4]
// 0044c436  50                   push eax
// 0044c437  e826381e00           call 0x62fc62
// 0044c43c  83c404               add esp, 4
// 0044c43f  5f                   pop edi
// 0044c440  5e                   pop esi
// 0044c441  c7430400000000       mov dword ptr [ebx + 4], 0
// 0044c448  c7430800000000       mov dword ptr [ebx + 8], 0
// 0044c44f  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 0044c456  5b                   pop ebx
// 0044c457  c3                   ret 

struct CRobloxControlColorSelector {
    char pad[4];
    int* begin;
    int* end;
    int* capacity;
    void clear();
};

extern "C" void __stdcall sub_77DDBC(int*);
extern "C" void __cdecl sub_62FC62(void*);

void CRobloxControlColorSelector::clear()
{
    if (begin != 0) {
        int* p = begin;
        int* e = end;
        while (p != e) {
            sub_77DDBC(p + 2);
            p += 3;
        }
        sub_62FC62(begin);
    }
    begin = 0;
    end = 0;
    capacity = 0;
}

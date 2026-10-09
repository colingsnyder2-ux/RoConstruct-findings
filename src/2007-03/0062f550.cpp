// roc 2007-03 0062f550  unit: seg_00620000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f550
//
// 0062f550  8bc1                 mov eax, ecx
// 0062f552  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0062f558  85c9                 test ecx, ecx
// 0062f55a  7405                 je 0x62f561
// 0062f55c  e96f980000           jmp 0x638dd0
// 0062f561  8b88f4000000         mov ecx, dword ptr [eax + 0xf4]
// 0062f567  85c9                 test ecx, ecx
// 0062f569  7410                 je 0x62f57b
// 0062f56b  e800300400           call 0x672570
// 0062f570  85c0                 test eax, eax
// 0062f572  7407                 je 0x62f57b
// 0062f574  8bc8                 mov ecx, eax
// 0062f576  e9e5c3ffff           jmp 0x62b960
// 0062f57b  833dd4178c0000       cmp dword ptr [0x8c17d4], 0
// 0062f582  750a                 jne 0x62f58e
// 0062f584  6a00                 push 0
// 0062f586  e8353a0000           call 0x632fc0
// 0062f58b  83c404               add esp, 4
// 0062f58e  a1d4178c00           mov eax, dword ptr [0x8c17d4]
// 0062f593  c3                   ret 
// copied from an identical function in another client (function ?get@CRobloxControlColorSelector@ns_ROCX000004@@QAEPAXXZ)

namespace ns_ROCX000004 {
struct CRobloxControlColorSelector
{
    char pad[0xf4];
    void* field_f4;
    char pad2[4];
    void* field_fc;
    void* get();
};

extern void* G_8c86d8;

extern void* __fastcall fn_ROCX000004(void*);
extern void* __fastcall fn_ROCX000004(void*);
extern void* __fastcall fn_ROCX000004(void*);
extern void __cdecl fn_ROCX000004(int);

void* CRobloxControlColorSelector::get()
{
    if (field_fc != 0)
        return fn_ROCX000004(field_fc);

    if (field_f4 != 0)
    {
        void* p = fn_ROCX000004(field_f4);
        if (p != 0)
            return fn_ROCX000004(p);
    }

    if (G_8c86d8 == 0)
        fn_ROCX000004(0);

    return G_8c86d8;
}
}

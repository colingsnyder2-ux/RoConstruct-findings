// roc 2009-12 0045f290  unit: InsertModelFromRobloxVerb  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045f290
//
// 0045f290  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0045f293  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0045f296  6a00                 push 0
// 0045f298  68fe800000           push 0x80fe
// 0045f29d  6811010000           push 0x111
// 0045f2a2  51                   push ecx
// 0045f2a3  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0045f2a9  c20400               ret 4
// copied from an identical function in another client (function ?Run@InsertModelFromRobloxVerb@ns_ROCX00005b@@QAEXH@Z)

namespace ns_ROCX00005b {
struct InsertModelFromRobloxVerb {
    char pad[0xc];
    void** field_c;
    void Run(int arg);
};

extern "C" int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);

void InsertModelFromRobloxVerb::Run(int)
{
    PostMessageA(field_c[8], 0x111, 0x80fe, 0);
}
}

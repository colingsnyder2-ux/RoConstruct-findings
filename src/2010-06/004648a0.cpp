// roc 2010-06 004648a0  unit: InsertModelFromRobloxVerb  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004648a0
//
// 004648a0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004648a3  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004648a6  6a00                 push 0
// 004648a8  68fe800000           push 0x80fe
// 004648ad  6811010000           push 0x111
// 004648b2  51                   push ecx
// 004648b3  ff1548ba9e00         call dword ptr [0x9eba48]
// 004648b9  c20400               ret 4
// copied from an identical function in another client (function ?Run@InsertModelFromRobloxVerb@ns_ROCX000057@@QAEXH@Z)

namespace ns_ROCX000057 {
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

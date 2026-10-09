// roc 2008-06 00458fb0  unit: InsertModelFromRobloxVerb  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458fb0
//
// 00458fb0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00458fb3  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00458fb6  6a00                 push 0
// 00458fb8  68fe800000           push 0x80fe
// 00458fbd  6811010000           push 0x111
// 00458fc2  51                   push ecx
// 00458fc3  ff150c2e8000         call dword ptr [0x802e0c]
// 00458fc9  c20400               ret 4
// copied from an identical function in another client (function ?Run@InsertModelFromRobloxVerb@ns_ROCX000066@@QAEXH@Z)

namespace ns_ROCX000066 {
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

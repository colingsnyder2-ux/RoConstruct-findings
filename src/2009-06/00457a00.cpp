// roc 2009-06 00457a00  unit: InsertModelFromRobloxVerb  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00457a00
//
// 00457a00  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00457a03  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00457a06  6a00                 push 0
// 00457a08  68fe800000           push 0x80fe
// 00457a0d  6811010000           push 0x111
// 00457a12  51                   push ecx
// 00457a13  ff159cee8900         call dword ptr [0x89ee9c]
// 00457a19  c20400               ret 4
// copied from an identical function in another client (function ?Run@InsertModelFromRobloxVerb@ns_ROCX00004d@@QAEXH@Z)

namespace ns_ROCX00004d {
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

// from server: 100% by colin
// roc 2007-08 00455f40  unit: InsertModelFromRobloxVerb  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00455f40
//
// 00455f40  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00455f43  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00455f46  6a00                 push 0
// 00455f48  68fe800000           push 0x80fe
// 00455f4d  6811010000           push 0x111
// 00455f52  51                   push ecx
// 00455f53  ff15d0ec7700         call dword ptr [0x77ecd0]
// 00455f59  c20400               ret 4

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

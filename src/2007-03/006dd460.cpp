// roc 2007-03 006dd460  unit: seg_006d0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dd460
//
// 006dd460  56                   push esi
// 006dd461  8bf1                 mov esi, ecx
// 006dd463  8d8e84000000         lea ecx, [esi + 0x84]
// 006dd469  ff1578dd7700         call dword ptr [0x77dd78]
// 006dd46f  8d8e80000000         lea ecx, [esi + 0x80]
// 006dd475  ff1578dd7700         call dword ptr [0x77dd78]
// 006dd47b  8d4e7c               lea ecx, [esi + 0x7c]
// 006dd47e  ff1578dd7700         call dword ptr [0x77dd78]
// 006dd484  8d4e78               lea ecx, [esi + 0x78]
// 006dd487  ff1578dd7700         call dword ptr [0x77dd78]
// 006dd48d  8d4e74               lea ecx, [esi + 0x74]
// 006dd490  ff1578dd7700         call dword ptr [0x77dd78]
// 006dd496  8d4e70               lea ecx, [esi + 0x70]
// 006dd499  ff1578dd7700         call dword ptr [0x77dd78]
// 006dd49f  8bce                 mov ecx, esi
// 006dd4a1  5e                   pop esi
// 006dd4a2  e9bbd50500           jmp 0x73aa62
// copied from an identical function in another client (function ?func@CXTPPropertyGridInplaceButtons@ns_ROCX000037@@QAEXXZ)

namespace ns_ROCX000037 {
struct CXTPPropertyGridInplaceButtons
{
    char pad[0x70];
    int field70;
    int field74;
    int field78;
    int field7c;
    int field80;
    int field84;
    void sub_738382();
    void func();
};

typedef void (__thiscall *FnPtr)(void*);
extern FnPtr g_fn_77ddbc;

void CXTPPropertyGridInplaceButtons::func()
{
    g_fn_77ddbc(&field84);
    g_fn_77ddbc(&field80);
    g_fn_77ddbc(&field7c);
    g_fn_77ddbc(&field78);
    g_fn_77ddbc(&field74);
    g_fn_77ddbc(&field70);
    sub_738382();
}
}

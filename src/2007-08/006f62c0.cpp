// from server: 100% by colin
// roc 2007-08 006f62c0  unit: CXTPPropertyGridInplaceButtons  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f62c0
//
// 006f62c0  56                   push esi
// 006f62c1  8bf1                 mov esi, ecx
// 006f62c3  8d8e84000000         lea ecx, [esi + 0x84]
// 006f62c9  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f62cf  8d8e80000000         lea ecx, [esi + 0x80]
// 006f62d5  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f62db  8d4e7c               lea ecx, [esi + 0x7c]
// 006f62de  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f62e4  8d4e78               lea ecx, [esi + 0x78]
// 006f62e7  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f62ed  8d4e74               lea ecx, [esi + 0x74]
// 006f62f0  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f62f6  8d4e70               lea ecx, [esi + 0x70]
// 006f62f9  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f62ff  8bce                 mov ecx, esi
// 006f6301  5e                   pop esi
// 006f6302  e97b200400           jmp 0x738382

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

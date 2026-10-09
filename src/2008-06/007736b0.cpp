// roc 2008-06 007736b0  unit: CXTPPropertyGridInplaceButtons  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007736b0
//
// 007736b0  56                   push esi
// 007736b1  8bf1                 mov esi, ecx
// 007736b3  8d8e84000000         lea ecx, [esi + 0x84]
// 007736b9  ff15143f8000         call dword ptr [0x803f14]
// 007736bf  8d8e80000000         lea ecx, [esi + 0x80]
// 007736c5  ff15143f8000         call dword ptr [0x803f14]
// 007736cb  8d4e7c               lea ecx, [esi + 0x7c]
// 007736ce  ff15143f8000         call dword ptr [0x803f14]
// 007736d4  8d4e78               lea ecx, [esi + 0x78]
// 007736d7  ff15143f8000         call dword ptr [0x803f14]
// 007736dd  8d4e74               lea ecx, [esi + 0x74]
// 007736e0  ff15143f8000         call dword ptr [0x803f14]
// 007736e6  8d4e70               lea ecx, [esi + 0x70]
// 007736e9  ff15143f8000         call dword ptr [0x803f14]
// 007736ef  8bce                 mov ecx, esi
// 007736f1  5e                   pop esi
// 007736f2  e9f5880400           jmp 0x7bbfec
// copied from an identical function in another client (function ?func@CXTPPropertyGridInplaceButtons@ns_ROCX000026@@QAEXXZ)

namespace ns_ROCX000026 {
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

// roc 2009-06 007ebde0  unit: CXTPPropertyGridInplaceButtons  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ebde0
//
// 007ebde0  56                   push esi
// 007ebde1  8bf1                 mov esi, ecx
// 007ebde3  8d8e84000000         lea ecx, [esi + 0x84]
// 007ebde9  ff1510fd8900         call dword ptr [0x89fd10]
// 007ebdef  8d8e80000000         lea ecx, [esi + 0x80]
// 007ebdf5  ff1510fd8900         call dword ptr [0x89fd10]
// 007ebdfb  8d4e7c               lea ecx, [esi + 0x7c]
// 007ebdfe  ff1510fd8900         call dword ptr [0x89fd10]
// 007ebe04  8d4e78               lea ecx, [esi + 0x78]
// 007ebe07  ff1510fd8900         call dword ptr [0x89fd10]
// 007ebe0d  8d4e74               lea ecx, [esi + 0x74]
// 007ebe10  ff1510fd8900         call dword ptr [0x89fd10]
// 007ebe16  8d4e70               lea ecx, [esi + 0x70]
// 007ebe19  ff1510fd8900         call dword ptr [0x89fd10]
// 007ebe1f  8bce                 mov ecx, esi
// 007ebe21  5e                   pop esi
// 007ebe22  e98b000600           jmp 0x84beb2
// copied from an identical function in another client (function ?func@CXTPPropertyGridInplaceButtons@ns_ROCX000036@@QAEXXZ)

namespace ns_ROCX000036 {
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

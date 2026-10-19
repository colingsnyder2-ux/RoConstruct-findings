// from server: 66% by colin
// from server: 62% by king_originala
// roc 2008-06 00433e30  unit: CMemberTreeView  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433e30
//
// 00433e30  8b442404             mov eax, dword ptr [esp + 4]
// 00433e34  57                   push edi
// 00433e35  50                   push eax
// 00433e36  8bf9                 mov edi, ecx
// 00433e38  e8a5d22600           call 0x6a10e2
// 00433e3d  83f8ff               cmp eax, -1
// 00433e40  742b                 je 0x433e6d
// 00433e42  8b5760               mov edx, dword ptr [edi + 0x60]
// 00433e45  8b4248               mov eax, dword ptr [edx + 0x48]
// 00433e48  8d4f60               lea ecx, [edi + 0x60]
// 00433e4b  ffd0                 call eax
// 00433e4d  56                   push esi
// 00433e4e  8db7a0000000         lea esi, [edi + 0xa0]
// 00433e54  68c4000000           push 0xc4
// 00433e59  e852fcffff           call 0x433ab0
// 00433e5e  83c404               add esp, 4
// 00433e61  85c0                 test eax, eax
// 00433e63  750f                 jne 0x433e74
// 00433e65  5e                   pop esi
// 00433e66  83c8ff               or eax, 0xffffffff
// 00433e69  5f                   pop edi
// 00433e6a  c20400               ret 4
// 00433e6d  83c8ff               or eax, 0xffffffff
// 00433e70  5f                   pop edi
// 00433e71  c20400               ret 4
// 00433e74  85f6                 test esi, esi
// 00433e76  7403                 je 0x433e7b
// 00433e78  8b7604               mov esi, dword ptr [esi + 4]
// 00433e7b  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00433e7e  56                   push esi
// 00433e7f  6a00                 push 0
// 00433e81  6809110000           push 0x1109
// 00433e86  51                   push ecx
// 00433e87  ff15142e8000         call dword ptr [0x802e14]
// 00433e8d  50                   push eax
// 00433e8e  e827d02600           call 0x6a0eba
// 00433e93  5e                   pop esi
// 00433e94  33c0                 xor eax, eax
// 00433e96  5f                   pop edi
// 00433e97  c20400               ret 4
#include <intrin.h>

extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, void*);
extern "C" void* __stdcall func_006a0eba(long);
void* __cdecl func_00433ab0(unsigned int);

struct Control
{
    typedef void (__thiscall *Method)(Control*);
    Method* table;
};

struct ImageList
{
    void* table;
    void* handle;
};

struct S
{
    char padding0[0x20];
    void* window;
    char padding1[0x3C];
    Control control;
    char padding2[0x3C];
    ImageList images;

    int func_006a10e2(void*);
    int func_00433e30(void*);
};

int S::func_00433e30(void* argument)
{
    if (func_006a10e2(argument) != -1)
        return -1;

    control.table[18](&control);

    ImageList* list = &images;
    _ReadWriteBarrier();
    if (!func_00433ab0(0xC4))
        return -1;

    void* handle = list ? list->handle : 0;
    func_006a0eba(SendMessageA(window, 0x1109, 0, handle));
    return 0;
}

// from server: 61% by colin
// roc 2007-08 006bc260  unit: CXTPOffice2007Theme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bc260
//
// 006bc260  56                   push esi
// 006bc261  8b742408             mov esi, dword ptr [esp + 8]
// 006bc265  85f6                 test esi, esi
// 006bc267  7506                 jne 0x6bc26f
// 006bc269  33c0                 xor eax, eax
// 006bc26b  5e                   pop esi
// 006bc26c  c20400               ret 4
// 006bc26f  8b4620               mov eax, dword ptr [esi + 0x20]
// 006bc272  6a00                 push 0
// 006bc274  6a01                 push 1
// 006bc276  6a7f                 push 0x7f
// 006bc278  50                   push eax
// 006bc279  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006bc27f  85c0                 test eax, eax
// 006bc281  750c                 jne 0x6bc28f
// 006bc283  8b7620               mov esi, dword ptr [esi + 0x20]
// 006bc286  6af2                 push -0xe
// 006bc288  56                   push esi
// 006bc289  ff15bcec7700         call dword ptr [0x77ecbc]
// 006bc28f  5e                   pop esi
// 006bc290  c20400               ret 4

extern "C" unsigned long __stdcall GetClassLongA(void*, int);
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTPOffice2007Theme
{
    int sub_6BC260(void*);
};

int CXTPOffice2007Theme::sub_6BC260(void* p)
{
    if (p == 0)
        return 0;

    unsigned long v = GetClassLongA(*(void**)((char*)p + 0x20), -12);
    if (v == 0)
        SendMessageA(*(void**)((char*)p + 0x20), 0x7f, 1, 0);

    return 0;
}

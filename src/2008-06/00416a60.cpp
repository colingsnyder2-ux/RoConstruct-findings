// from server: 100% by king_originala
// roc 2008-06 00416a60  unit: VCContent::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416a60
//
// 00416a60  8b0d94c19200         mov ecx, dword ptr [0x92c194]
// 00416a66  33c0                 xor eax, eax
// 00416a68  85c9                 test ecx, ecx
// 00416a6a  7408                 je 0x416a74
// 00416a6c  39059cc19200         cmp dword ptr [0x92c19c], eax
// 00416a72  7515                 jne 0x416a89
// 00416a74  8b442410             mov eax, dword ptr [esp + 0x10]
// 00416a78  50                   push eax
// 00416a79  b988c19200           mov ecx, 0x92c188
// 00416a7e  e8fddffeff           call 0x404a80
// 00416a83  8b0d94c19200         mov ecx, dword ptr [0x92c194]
// 00416a89  85c9                 test ecx, ecx
// 00416a8b  742b                 je 0x416ab8
// 00416a8d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416a91  8b11                 mov edx, dword ptr [ecx]
// 00416a93  50                   push eax
// 00416a94  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416a98  50                   push eax
// 00416a99  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416a9d  50                   push eax
// 00416a9e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416aa2  50                   push eax
// 00416aa3  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416aa7  50                   push eax
// 00416aa8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00416aac  50                   push eax
// 00416aad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00416ab1  50                   push eax
// 00416ab2  51                   push ecx
// 00416ab3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00416ab6  ffd1                 call ecx
// 00416ab8  c22400               ret 0x24

struct Interface
{
    virtual void __stdcall slot0() = 0;
    virtual void __stdcall slot1() = 0;
    virtual void __stdcall slot2() = 0;
    virtual void __stdcall slot3() = 0;
    virtual void __stdcall slot4() = 0;
    virtual void __stdcall slot5() = 0;
    virtual void __stdcall slot6() = 0;
    virtual void __stdcall slot7() = 0;
    virtual void __stdcall slot8() = 0;
    virtual void __stdcall slot9() = 0;
    virtual void __stdcall slot10() = 0;
    virtual int __stdcall forward(int, int, int, int, int, int, int) = 0;
};

struct State
{
    unsigned char reserved[12];
    Interface* object;
    unsigned char reserved2[4];
    int ready;

    int initialize(int);
};

extern State state;

int __stdcall dispatch(int a1, int a2, int a3, int a4,
                       int a5, int a6, int a7, int a8, int a9)
{
    int result = 0;
    if (!state.object || !state.ready)
        result = state.initialize(a4);

    if (state.object)
        result = state.object->forward(a1, a2, a5, a6, a7, a8, a9);

    return result;
}

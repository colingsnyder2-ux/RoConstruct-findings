// from server: 100% by king_originala
// roc 2008-06 00419110  unit: VCLuaFunction::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419110
//
// 00419110  8b0d24c69200         mov ecx, dword ptr [0x92c624]
// 00419116  33c0                 xor eax, eax
// 00419118  85c9                 test ecx, ecx
// 0041911a  7408                 je 0x419124
// 0041911c  39052cc69200         cmp dword ptr [0x92c62c], eax
// 00419122  7515                 jne 0x419139
// 00419124  8b442410             mov eax, dword ptr [esp + 0x10]
// 00419128  50                   push eax
// 00419129  b918c69200           mov ecx, 0x92c618
// 0041912e  e84db9feff           call 0x404a80
// 00419133  8b0d24c69200         mov ecx, dword ptr [0x92c624]
// 00419139  85c9                 test ecx, ecx
// 0041913b  742b                 je 0x419168
// 0041913d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00419141  8b11                 mov edx, dword ptr [ecx]
// 00419143  50                   push eax
// 00419144  8b442424             mov eax, dword ptr [esp + 0x24]
// 00419148  50                   push eax
// 00419149  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041914d  50                   push eax
// 0041914e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00419152  50                   push eax
// 00419153  8b442424             mov eax, dword ptr [esp + 0x24]
// 00419157  50                   push eax
// 00419158  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041915c  50                   push eax
// 0041915d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00419161  50                   push eax
// 00419162  51                   push ecx
// 00419163  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00419166  ffd1                 call ecx
// 00419168  c22400               ret 0x24

typedef int (__stdcall *DispatchFunction)(
    void *, int, int, int, int, int, int, int);

struct Interface {
    DispatchFunction *vtable;
};

struct State {
    unsigned char reserved[12];
    Interface *object;
    int reserved2;
    int ready;

    int initialize(int);
};

extern State state;

int __stdcall dispatch(
    int a1, int a2, int a3, int a4, int a5,
    int a6, int a7, int a8, int a9)
{
    int result = 0;
    if (!state.object || !state.ready)
        result = state.initialize(a4);

    if (state.object)
        result = state.object->vtable[11](
            state.object, a1, a2, a5, a6, a7, a8, a9);

    return result;
}

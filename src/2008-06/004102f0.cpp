// from server: 100% by king_originala
// roc 2008-06 004102f0  unit: VCBrowserViewExternal::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004102f0
//
// 004102f0  8b0d50b79200         mov ecx, dword ptr [0x92b750]
// 004102f6  33c0                 xor eax, eax
// 004102f8  85c9                 test ecx, ecx
// 004102fa  7408                 je 0x410304
// 004102fc  390558b79200         cmp dword ptr [0x92b758], eax
// 00410302  7515                 jne 0x410319
// 00410304  8b442410             mov eax, dword ptr [esp + 0x10]
// 00410308  50                   push eax
// 00410309  b944b79200           mov ecx, 0x92b744
// 0041030e  e86d47ffff           call 0x404a80
// 00410313  8b0d50b79200         mov ecx, dword ptr [0x92b750]
// 00410319  85c9                 test ecx, ecx
// 0041031b  742b                 je 0x410348
// 0041031d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00410321  8b11                 mov edx, dword ptr [ecx]
// 00410323  50                   push eax
// 00410324  8b442424             mov eax, dword ptr [esp + 0x24]
// 00410328  50                   push eax
// 00410329  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041032d  50                   push eax
// 0041032e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00410332  50                   push eax
// 00410333  8b442424             mov eax, dword ptr [esp + 0x24]
// 00410337  50                   push eax
// 00410338  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041033c  50                   push eax
// 0041033d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00410341  50                   push eax
// 00410342  51                   push ecx
// 00410343  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00410346  ffd1                 call ecx
// 00410348  c22400               ret 0x24

typedef int (__stdcall *Method)(void *, int, int, int, int, int, int, int);

struct Interface {
    Method *table;
};

struct State {
    char padding[12];
    Interface *object;
    int reserved;
    int ready;
    int initialize(int);
};

extern State state;

int __stdcall func(int a1, int a2, int a3, int a4, int a5,
                   int a6, int a7, int a8, int a9)
{
    int result = 0;
    if (!state.object || !state.ready)
        result = state.initialize(a4);
    if (state.object)
        result = state.object->table[11](state.object, a1, a2,
                                         a5, a6, a7, a8, a9);
    return result;
}

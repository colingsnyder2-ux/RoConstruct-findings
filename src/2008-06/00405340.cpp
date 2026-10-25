// from server: 100% by king_originala
// roc 2008-06 00405340  unit: VCWorkspace::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405340
//
// 00405340  8b0d60879200         mov ecx, dword ptr [0x928760]
// 00405346  33c0                 xor eax, eax
// 00405348  85c9                 test ecx, ecx
// 0040534a  7408                 je 0x405354
// 0040534c  390568879200         cmp dword ptr [0x928768], eax
// 00405352  7515                 jne 0x405369
// 00405354  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405358  50                   push eax
// 00405359  b954879200           mov ecx, 0x928754
// 0040535e  e81df7ffff           call 0x404a80
// 00405363  8b0d60879200         mov ecx, dword ptr [0x928760]
// 00405369  85c9                 test ecx, ecx
// 0040536b  742b                 je 0x405398
// 0040536d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00405371  8b11                 mov edx, dword ptr [ecx]
// 00405373  50                   push eax
// 00405374  8b442424             mov eax, dword ptr [esp + 0x24]
// 00405378  50                   push eax
// 00405379  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040537d  50                   push eax
// 0040537e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00405382  50                   push eax
// 00405383  8b442424             mov eax, dword ptr [esp + 0x24]
// 00405387  50                   push eax
// 00405388  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040538c  50                   push eax
// 0040538d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00405391  50                   push eax
// 00405392  51                   push ecx
// 00405393  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00405396  ffd1                 call ecx
// 00405398  c22400               ret 0x24

struct Interface;

typedef int (__stdcall *Method)(
    Interface *, int, int, int, int, int, int, int);

struct Interface {
    Method *vtable;
};

struct State {
    unsigned char reserved[12];
    Interface *object;
    int reserved16;
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

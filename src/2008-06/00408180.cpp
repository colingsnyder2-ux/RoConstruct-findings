// from server: 100% by colin
// roc 2008-06 00408180  unit: VCApp::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408180
//
// 00408180  8b0de48b9200         mov ecx, dword ptr [0x928be4]
// 00408186  33c0                 xor eax, eax
// 00408188  85c9                 test ecx, ecx
// 0040818a  7408                 je 0x408194
// 0040818c  3905ec8b9200         cmp dword ptr [0x928bec], eax
// 00408192  7515                 jne 0x4081a9
// 00408194  8b442410             mov eax, dword ptr [esp + 0x10]
// 00408198  50                   push eax
// 00408199  b9d88b9200           mov ecx, 0x928bd8
// 0040819e  e8ddc8ffff           call 0x404a80
// 004081a3  8b0de48b9200         mov ecx, dword ptr [0x928be4]
// 004081a9  85c9                 test ecx, ecx
// 004081ab  742b                 je 0x4081d8
// 004081ad  8b442424             mov eax, dword ptr [esp + 0x24]
// 004081b1  8b11                 mov edx, dword ptr [ecx]
// 004081b3  50                   push eax
// 004081b4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004081b8  50                   push eax
// 004081b9  8b442424             mov eax, dword ptr [esp + 0x24]
// 004081bd  50                   push eax
// 004081be  8b442424             mov eax, dword ptr [esp + 0x24]
// 004081c2  50                   push eax
// 004081c3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004081c7  50                   push eax
// 004081c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004081cc  50                   push eax
// 004081cd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004081d1  50                   push eax
// 004081d2  51                   push ecx
// 004081d3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 004081d6  ffd1                 call ecx
// 004081d8  c22400               ret 0x24

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

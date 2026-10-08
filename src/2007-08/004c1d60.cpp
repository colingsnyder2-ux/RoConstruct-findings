// from server: 96% by colin
// roc 2007-08 004c1d60  unit: RakPeer  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c1d60
//
// 004c1d60  56                   push esi
// 004c1d61  57                   push edi
// 004c1d62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c1d66  33f6                 xor esi, esi
// 004c1d68  e8d3850000           call 0x4ca340
// 004c1d6d  8904b7               mov dword ptr [edi + esi*4], eax
// 004c1d70  83c601               add esi, 1
// 004c1d73  83fe04               cmp esi, 4
// 004c1d76  7cf0                 jl 0x4c1d68
// 004c1d78  814f0c00000080       or dword ptr [edi + 0xc], 0x80000000
// 004c1d7f  830f01               or dword ptr [edi], 1
// 004c1d82  6a05                 push 5
// 004c1d84  57                   push edi
// 004c1d85  e8c6efffff           call 0x4c0d50
// 004c1d8a  83c408               add esp, 8
// 004c1d8d  84c0                 test al, al
// 004c1d8f  74d5                 je 0x4c1d66
// 004c1d91  5f                   pop edi
// 004c1d92  5e                   pop esi
// 004c1d93  c3                   ret 

extern "C" int __cdecl sub_4ca340();
extern "C" char __cdecl sub_4c0d50(void* p, int n);

struct RakPeer {
    void f(void* p);
};

void RakPeer::f(void* p) {
    int* arr = (int*)p;
    for (;;) {
        int i = 0;
        do {
            arr[i] = sub_4ca340();
            i++;
        } while (i < 4);
        *(unsigned int*)((char*)p + 0xc) |= 0x80000000u;
        *(unsigned int*)p |= 1u;
        if (sub_4c0d50(p, 5))
            break;
    }
}

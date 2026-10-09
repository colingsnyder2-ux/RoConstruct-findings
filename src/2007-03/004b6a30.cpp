// roc 2007-03 004b6a30  unit: seg_004b0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b6a30
//
// 004b6a30  56                   push esi
// 004b6a31  57                   push edi
// 004b6a32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004b6a36  33f6                 xor esi, esi
// 004b6a38  e8e32e0000           call 0x4b9920
// 004b6a3d  8904b7               mov dword ptr [edi + esi*4], eax
// 004b6a40  83c601               add esi, 1
// 004b6a43  83fe04               cmp esi, 4
// 004b6a46  7cf0                 jl 0x4b6a38
// 004b6a48  814f0c00000080       or dword ptr [edi + 0xc], 0x80000000
// 004b6a4f  830f01               or dword ptr [edi], 1
// 004b6a52  6a05                 push 5
// 004b6a54  57                   push edi
// 004b6a55  e8b6efffff           call 0x4b5a10
// 004b6a5a  83c408               add esp, 8
// 004b6a5d  84c0                 test al, al
// 004b6a5f  74d5                 je 0x4b6a36
// 004b6a61  5f                   pop edi
// 004b6a62  5e                   pop esi
// 004b6a63  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000000@@YAXPAX@Z)

namespace ns_ROCX000000 {
extern "C" int __cdecl sub_4ca340();
extern "C" char __cdecl sub_4c0d50(void* p, int n);

struct RakPeer {
};

void __cdecl f(void* p) {
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
}

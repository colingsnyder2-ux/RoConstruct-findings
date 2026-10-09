// roc 2007-03 0040db50  unit: seg_00400000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040db50
//
// 0040db50  8b542408             mov edx, dword ptr [esp + 8]
// 0040db54  56                   push esi
// 0040db55  8b32                 mov esi, dword ptr [edx]
// 0040db57  57                   push edi
// 0040db58  33c9                 xor ecx, ecx
// 0040db5a  8d9b00000000         lea ebx, [ebx]
// 0040db60  8b81f00e8800         mov eax, dword ptr [ecx + 0x880ef0]
// 0040db66  3930                 cmp dword ptr [eax], esi
// 0040db68  7518                 jne 0x40db82
// 0040db6a  8b7804               mov edi, dword ptr [eax + 4]
// 0040db6d  3b7a04               cmp edi, dword ptr [edx + 4]
// 0040db70  7510                 jne 0x40db82
// 0040db72  8b7808               mov edi, dword ptr [eax + 8]
// 0040db75  3b7a08               cmp edi, dword ptr [edx + 8]
// 0040db78  7508                 jne 0x40db82
// 0040db7a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0040db7d  3b420c               cmp eax, dword ptr [edx + 0xc]
// 0040db80  7412                 je 0x40db94
// 0040db82  83c104               add ecx, 4
// 0040db85  83f904               cmp ecx, 4
// 0040db88  72d6                 jb 0x40db60
// 0040db8a  5f                   pop edi
// 0040db8b  b801000000           mov eax, 1
// 0040db90  5e                   pop esi
// 0040db91  c20800               ret 8
// 0040db94  5f                   pop edi
// 0040db95  33c0                 xor eax, eax
// 0040db97  5e                   pop esi
// 0040db98  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_00408410@ns_ROCX000004@@QAEHHPAH@Z)

namespace ns_ROCX000004 {
struct S_func_00408410 {
    static int* table[4];
    int f(int, int*);
};

int* S_func_00408410::table[4];

int S_func_00408410::f(int, int* p)
{
    unsigned int i = 0;
    do {
        int* e = *(int**)((char*)table + i);
        if (e[0] == p[0] && e[1] == p[1] && e[2] == p[2] && e[3] == p[3])
            return 0;
        i += 4;
    } while (i < 4);
    return 1;
}
}

// roc 2007-03 00408250  unit: seg_00400000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408250
//
// 00408250  8b542408             mov edx, dword ptr [esp + 8]
// 00408254  56                   push esi
// 00408255  8b32                 mov esi, dword ptr [edx]
// 00408257  57                   push edi
// 00408258  33c9                 xor ecx, ecx
// 0040825a  8d9b00000000         lea ebx, [ebx]
// 00408260  8b8198038800         mov eax, dword ptr [ecx + 0x880398]
// 00408266  3930                 cmp dword ptr [eax], esi
// 00408268  7518                 jne 0x408282
// 0040826a  8b7804               mov edi, dword ptr [eax + 4]
// 0040826d  3b7a04               cmp edi, dword ptr [edx + 4]
// 00408270  7510                 jne 0x408282
// 00408272  8b7808               mov edi, dword ptr [eax + 8]
// 00408275  3b7a08               cmp edi, dword ptr [edx + 8]
// 00408278  7508                 jne 0x408282
// 0040827a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0040827d  3b420c               cmp eax, dword ptr [edx + 0xc]
// 00408280  7412                 je 0x408294
// 00408282  83c104               add ecx, 4
// 00408285  83f904               cmp ecx, 4
// 00408288  72d6                 jb 0x408260
// 0040828a  5f                   pop edi
// 0040828b  b801000000           mov eax, 1
// 00408290  5e                   pop esi
// 00408291  c20800               ret 8
// 00408294  5f                   pop edi
// 00408295  33c0                 xor eax, eax
// 00408297  5e                   pop esi
// 00408298  c20800               ret 8
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

// roc 2007-03 00631200  unit: seg_00630000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00631200
//
// 00631200  53                   push ebx
// 00631201  56                   push esi
// 00631202  8bd9                 mov ebx, ecx
// 00631204  33f6                 xor esi, esi
// 00631206  e8d53dffff           call 0x624fe0
// 0063120b  85c0                 test eax, eax
// 0063120d  7e28                 jle 0x631237
// 0063120f  57                   push edi
// 00631210  56                   push esi
// 00631211  8bcb                 mov ecx, ebx
// 00631213  e8380e0100           call 0x642050
// 00631218  8bf8                 mov edi, eax
// 0063121a  8bcf                 mov ecx, edi
// 0063121c  e8bffeffff           call 0x6310e0
// 00631221  8bcf                 mov ecx, edi
// 00631223  e84ad4feff           call 0x61e672
// 00631228  8bcb                 mov ecx, ebx
// 0063122a  83c601               add esi, 1
// 0063122d  e8ae3dffff           call 0x624fe0
// 00631232  3bf0                 cmp esi, eax
// 00631234  7cda                 jl 0x631210
// 00631236  5f                   pop edi
// 00631237  6aff                 push -1
// 00631239  6a00                 push 0
// 0063123b  8d4b20               lea ecx, [ebx + 0x20]
// 0063123e  e8dd9fe2ff           call 0x45b220
// 00631243  5e                   pop esi
// 00631244  5b                   pop ebx
// 00631245  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@Outer@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
struct Inner {
    void f1();
    void f2();
};

struct Outer {
    int GetCount();
    Inner* GetAt(int index);
    void RemoveAll();
};

struct Tail {
    char pad[0x20];
    void Clear(int a, int b);
};

void Outer::RemoveAll()
{
    int i = 0;
    while (i < GetCount()) {
        Inner* p = GetAt(i);
        p->f1();
        p->f2();
        i++;
    }
    ((Tail*)((char*)this + 0x20))->Clear(0, -1);
}
}

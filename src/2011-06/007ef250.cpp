// roc 2011-06 007ef250  unit: RBX::SpatialFilter  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ef250
//
// 007ef250  53                   push ebx
// 007ef251  56                   push esi
// 007ef252  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007ef256  8b06                 mov eax, dword ptr [esi]
// 007ef258  8b5010               mov edx, dword ptr [eax + 0x10]
// 007ef25b  57                   push edi
// 007ef25c  6a00                 push 0
// 007ef25e  8bce                 mov ecx, esi
// 007ef260  ffd2                 call edx
// 007ef262  8bf8                 mov edi, eax
// 007ef264  8b06                 mov eax, dword ptr [esi]
// 007ef266  8b5010               mov edx, dword ptr [eax + 0x10]
// 007ef269  6a01                 push 1
// 007ef26b  8bce                 mov ecx, esi
// 007ef26d  ffd2                 call edx
// 007ef26f  8bd8                 mov ebx, eax
// 007ef271  85ff                 test edi, edi
// 007ef273  7504                 jne 0x7ef279
// 007ef275  33f6                 xor esi, esi
// 007ef277  eb18                 jmp 0x7ef291
// 007ef279  8b4704               mov eax, dword ptr [edi + 4]
// 007ef27c  85c0                 test eax, eax
// 007ef27e  7505                 jne 0x7ef285
// 007ef280  8d7001               lea esi, [eax + 1]
// 007ef283  eb0c                 jmp 0x7ef291
// 007ef285  50                   push eax
// 007ef286  e865feffff           call 0x7ef0f0
// 007ef28b  8bf0                 mov esi, eax
// 007ef28d  83c404               add esp, 4
// 007ef290  46                   inc esi
// 007ef291  85db                 test ebx, ebx
// 007ef293  7504                 jne 0x7ef299
// 007ef295  33c0                 xor eax, eax
// 007ef297  eb18                 jmp 0x7ef2b1
// 007ef299  8b4304               mov eax, dword ptr [ebx + 4]
// 007ef29c  85c0                 test eax, eax
// 007ef29e  7507                 jne 0x7ef2a7
// 007ef2a0  b801000000           mov eax, 1
// 007ef2a5  eb0a                 jmp 0x7ef2b1
// 007ef2a7  50                   push eax
// 007ef2a8  e843feffff           call 0x7ef0f0
// 007ef2ad  83c404               add esp, 4
// 007ef2b0  40                   inc eax
// 007ef2b1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ef2b5  8b542414             mov edx, dword ptr [esp + 0x14]
// 007ef2b9  51                   push ecx
// 007ef2ba  52                   push edx
// 007ef2bb  50                   push eax
// 007ef2bc  56                   push esi
// 007ef2bd  53                   push ebx
// 007ef2be  57                   push edi
// 007ef2bf  e89cfeffff           call 0x7ef160
// 007ef2c4  83c418               add esp, 0x18
// 007ef2c7  5f                   pop edi
// 007ef2c8  5e                   pop esi
// 007ef2c9  5b                   pop ebx
// 007ef2ca  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000002@ns_ROCX000002@@YAHPAUSpatialFilter@1@HHH@Z)

namespace ns_ROCX000002 {
// from server: 100% by atomic.potato
int fn_ROCX000002(void *p);

struct SpatialFilter {
    virtual void *getFilter(int index);
    virtual void *getFilter2(int index);
    virtual void *getFilter3(int index);
    virtual void *getFilter4(int index);
    virtual void *getFilter5(int index);
};

int fn_ROCX000002(void *a, void *b, int c, int d, int e, int f);

int fn_ROCX000002(SpatialFilter *self, int a, int b, int c)
{
    void *p0 = self->getFilter5(0);
    void *p1 = self->getFilter5(1);

    int n0;
    if (!p0)
        n0 = 0;
    else if (!*(void **)((char *)p0 + 4))
        n0 = 1;
    else
        n0 = fn_ROCX000002(*(void **)((char *)p0 + 4)) + 1;

    int n1;
    if (!p1)
        n1 = 0;
    else if (!*(void **)((char *)p1 + 4))
        n1 = 1;
    else
        n1 = fn_ROCX000002(*(void **)((char *)p1 + 4)) + 1;

    return fn_ROCX000002(p0, p1, n0, n1, a, b);
}
}
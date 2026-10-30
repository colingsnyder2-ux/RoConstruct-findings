// roc 2009-12 007da460  unit: RBX::SpatialFilter  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da460
//
// 007da460  53                   push ebx
// 007da461  56                   push esi
// 007da462  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007da466  8b06                 mov eax, dword ptr [esi]
// 007da468  8b5010               mov edx, dword ptr [eax + 0x10]
// 007da46b  57                   push edi
// 007da46c  6a00                 push 0
// 007da46e  8bce                 mov ecx, esi
// 007da470  ffd2                 call edx
// 007da472  8bf8                 mov edi, eax
// 007da474  8b06                 mov eax, dword ptr [esi]
// 007da476  8b5010               mov edx, dword ptr [eax + 0x10]
// 007da479  6a01                 push 1
// 007da47b  8bce                 mov ecx, esi
// 007da47d  ffd2                 call edx
// 007da47f  8bd8                 mov ebx, eax
// 007da481  85ff                 test edi, edi
// 007da483  7504                 jne 0x7da489
// 007da485  33f6                 xor esi, esi
// 007da487  eb18                 jmp 0x7da4a1
// 007da489  8b4704               mov eax, dword ptr [edi + 4]
// 007da48c  85c0                 test eax, eax
// 007da48e  7505                 jne 0x7da495
// 007da490  8d7001               lea esi, [eax + 1]
// 007da493  eb0c                 jmp 0x7da4a1
// 007da495  50                   push eax
// 007da496  e865feffff           call 0x7da300
// 007da49b  8bf0                 mov esi, eax
// 007da49d  83c404               add esp, 4
// 007da4a0  46                   inc esi
// 007da4a1  85db                 test ebx, ebx
// 007da4a3  7504                 jne 0x7da4a9
// 007da4a5  33c0                 xor eax, eax
// 007da4a7  eb18                 jmp 0x7da4c1
// 007da4a9  8b4304               mov eax, dword ptr [ebx + 4]
// 007da4ac  85c0                 test eax, eax
// 007da4ae  7507                 jne 0x7da4b7
// 007da4b0  b801000000           mov eax, 1
// 007da4b5  eb0a                 jmp 0x7da4c1
// 007da4b7  50                   push eax
// 007da4b8  e843feffff           call 0x7da300
// 007da4bd  83c404               add esp, 4
// 007da4c0  40                   inc eax
// 007da4c1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007da4c5  8b542414             mov edx, dword ptr [esp + 0x14]
// 007da4c9  51                   push ecx
// 007da4ca  52                   push edx
// 007da4cb  50                   push eax
// 007da4cc  56                   push esi
// 007da4cd  53                   push ebx
// 007da4ce  57                   push edi
// 007da4cf  e89cfeffff           call 0x7da370
// 007da4d4  83c418               add esp, 0x18
// 007da4d7  5f                   pop edi
// 007da4d8  5e                   pop esi
// 007da4d9  5b                   pop ebx
// 007da4da  c3                   ret 
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
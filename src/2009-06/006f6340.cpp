// roc 2009-06 006f6340  unit: Ogre::RbxMeshLoader  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f6340
//
// 006f6340  53                   push ebx
// 006f6341  56                   push esi
// 006f6342  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f6346  8b06                 mov eax, dword ptr [esi]
// 006f6348  8b5010               mov edx, dword ptr [eax + 0x10]
// 006f634b  57                   push edi
// 006f634c  6a00                 push 0
// 006f634e  8bce                 mov ecx, esi
// 006f6350  ffd2                 call edx
// 006f6352  8bf8                 mov edi, eax
// 006f6354  8b06                 mov eax, dword ptr [esi]
// 006f6356  8b5010               mov edx, dword ptr [eax + 0x10]
// 006f6359  6a01                 push 1
// 006f635b  8bce                 mov ecx, esi
// 006f635d  ffd2                 call edx
// 006f635f  8bd8                 mov ebx, eax
// 006f6361  85ff                 test edi, edi
// 006f6363  7504                 jne 0x6f6369
// 006f6365  33f6                 xor esi, esi
// 006f6367  eb18                 jmp 0x6f6381
// 006f6369  8b4704               mov eax, dword ptr [edi + 4]
// 006f636c  85c0                 test eax, eax
// 006f636e  7505                 jne 0x6f6375
// 006f6370  8d7001               lea esi, [eax + 1]
// 006f6373  eb0c                 jmp 0x6f6381
// 006f6375  50                   push eax
// 006f6376  e865feffff           call 0x6f61e0
// 006f637b  8bf0                 mov esi, eax
// 006f637d  83c404               add esp, 4
// 006f6380  46                   inc esi
// 006f6381  85db                 test ebx, ebx
// 006f6383  7504                 jne 0x6f6389
// 006f6385  33c0                 xor eax, eax
// 006f6387  eb18                 jmp 0x6f63a1
// 006f6389  8b4304               mov eax, dword ptr [ebx + 4]
// 006f638c  85c0                 test eax, eax
// 006f638e  7507                 jne 0x6f6397
// 006f6390  b801000000           mov eax, 1
// 006f6395  eb0a                 jmp 0x6f63a1
// 006f6397  50                   push eax
// 006f6398  e843feffff           call 0x6f61e0
// 006f639d  83c404               add esp, 4
// 006f63a0  40                   inc eax
// 006f63a1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f63a5  8b542414             mov edx, dword ptr [esp + 0x14]
// 006f63a9  51                   push ecx
// 006f63aa  52                   push edx
// 006f63ab  50                   push eax
// 006f63ac  56                   push esi
// 006f63ad  53                   push ebx
// 006f63ae  57                   push edi
// 006f63af  e89cfeffff           call 0x6f6250
// 006f63b4  83c418               add esp, 0x18
// 006f63b7  5f                   pop edi
// 006f63b8  5e                   pop esi
// 006f63b9  5b                   pop ebx
// 006f63ba  c3                   ret 
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

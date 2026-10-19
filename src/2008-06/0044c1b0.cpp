// from server: 53% by colin
// from server: 52% by colin
// roc 2008-06 0044c1b0  unit: CRobloxModule  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044c1b0
//
// 0044c1b0  6aff                 push -1
// 0044c1b2  68fc117c00           push 0x7c11fc
// 0044c1b7  64a100000000         mov eax, dword ptr fs:[0]
// 0044c1bd  50                   push eax
// 0044c1be  64892500000000       mov dword ptr fs:[0], esp
// 0044c1c5  83ec2c               sub esp, 0x2c
// 0044c1c8  53                   push ebx
// 0044c1c9  56                   push esi
// 0044c1ca  8bf1                 mov esi, ecx
// 0044c1cc  57                   push edi
// 0044c1cd  89742410             mov dword ptr [esp + 0x10], esi
// 0044c1d1  e88c502500           call 0x6a1262
// 0044c1d6  33db                 xor ebx, ebx
// 0044c1d8  6a04                 push 4
// 0044c1da  895c2444             mov dword ptr [esp + 0x44], ebx
// 0044c1de  c706446a8100         mov dword ptr [esi], 0x816a44
// 0044c1e4  885e28               mov byte ptr [esi + 0x28], bl
// 0044c1e7  885e29               mov byte ptr [esi + 0x29], bl
// 0044c1ea  885e2a               mov byte ptr [esi + 0x2a], bl
// 0044c1ed  885e2b               mov byte ptr [esi + 0x2b], bl
// 0044c1f0  885e2c               mov byte ptr [esi + 0x2c], bl
// 0044c1f3  885e2d               mov byte ptr [esi + 0x2d], bl
// 0044c1f6  885e2e               mov byte ptr [esi + 0x2e], bl
// 0044c1f9  885e2f               mov byte ptr [esi + 0x2f], bl
// 0044c1fc  8d7e30               lea edi, [esi + 0x30]
// 0044c1ff  e81c472500           call 0x6a0920
// 0044c204  83c404               add esp, 4
// 0044c207  3bc3                 cmp eax, ebx
// 0044c209  7404                 je 0x44c20f
// 0044c20b  8938                 mov dword ptr [eax], edi
// 0044c20d  eb02                 jmp 0x44c211
// 0044c20f  33c0                 xor eax, eax
// 0044c211  8907                 mov dword ptr [edi], eax
// 0044c213  895f0c               mov dword ptr [edi + 0xc], ebx
// 0044c216  895f10               mov dword ptr [edi + 0x10], ebx
// 0044c219  895f14               mov dword ptr [edi + 0x14], ebx
// 0044c21c  a120288000           mov eax, dword ptr [0x802820]
// 0044c221  3918                 cmp dword ptr [eax], ebx
// 0044c223  c644244002           mov byte ptr [esp + 0x40], 2
// 0044c228  0f8ec8000000         jle 0x44c2f6
// 0044c22e  8d4c241c             lea ecx, [esp + 0x1c]
// 0044c232  ff1560248000         call dword ptr [0x802460]
// 0044c238  8b0d20288000         mov ecx, dword ptr [0x802820]
// 0044c23e  33ff                 xor edi, edi
// 0044c240  3919                 cmp dword ptr [ecx], ebx
// 0044c242  c644244003           mov byte ptr [esp + 0x40], 3
// 0044c247  7e3b                 jle 0x44c284
// 0044c249  8da42400000000       lea esp, [esp]
// 0044c250  3bfb                 cmp edi, ebx
// 0044c252  740f                 je 0x44c263
// 0044c254  68582e8100           push 0x812e58
// 0044c259  8d4c2420             lea ecx, [esp + 0x20]
// 0044c25d  ff1548248000         call dword ptr [0x802448]
// 0044c263  8b1524288000         mov edx, dword ptr [0x802824]
// 0044c269  8b02                 mov eax, dword ptr [edx]
// 0044c26b  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0044c26e  51                   push ecx
// 0044c26f  8d4c2420             lea ecx, [esp + 0x20]
// 0044c273  ff1548248000         call dword ptr [0x802448]
// 0044c279  8b1520288000         mov edx, dword ptr [0x802820]
// 0044c27f  47                   inc edi
// 0044c280  3b3a                 cmp edi, dword ptr [edx]
// 0044c282  7ccc                 jl 0x44c250
// 0044c284  8d442414             lea eax, [esp + 0x14]
// 0044c288  50                   push eax
// 0044c289  e892d31100           call 0x569620
// 0044c28e  83c404               add esp, 4
// 0044c291  8b38                 mov edi, dword ptr [eax]
// 0044c293  8d4c241c             lea ecx, [esp + 0x1c]
// 0044c297  c644244004           mov byte ptr [esp + 0x40], 4
// 0044c29c  ff1564248000         call dword ptr [0x802464]
// 0044c2a2  50                   push eax
// 0044c2a3  6a01                 push 1
// 0044c2a5  57                   push edi
// 0044c2a6  e8f5d01100           call 0x5693a0
// 0044c2ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044c2af  83c40c               add esp, 0xc
// 0044c2b2  c644244003           mov byte ptr [esp + 0x40], 3
// 0044c2b7  3bc3                 cmp eax, ebx
// 0044c2b9  742c                 je 0x44c2e7
// 0044c2bb  8bf8                 mov edi, eax
// 0044c2bd  83c004               add eax, 4
// 0044c2c0  83c9ff               or ecx, 0xffffffff
// 0044c2c3  f00fc108             lock xadd dword ptr [eax], ecx
// 0044c2c7  751e                 jne 0x44c2e7
// 0044c2c9  8b17                 mov edx, dword ptr [edi]
// 0044c2cb  8b4204               mov eax, dword ptr [edx + 4]
// 0044c2ce  8bcf                 mov ecx, edi
// 0044c2d0  ffd0                 call eax
// 0044c2d2  8d4f08               lea ecx, [edi + 8]
// 0044c2d5  83caff               or edx, 0xffffffff
// 0044c2d8  f00fc111             lock xadd dword ptr [ecx], edx
// 0044c2dc  7509                 jne 0x44c2e7
// 0044c2de  8b07                 mov eax, dword ptr [edi]
// 0044c2e0  8b5008               mov edx, dword ptr [eax + 8]
// 0044c2e3  8bcf                 mov ecx, edi
// 0044c2e5  ffd2                 call edx
// 0044c2e7  8d4c241c             lea ecx, [esp + 0x1c]
// 0044c2eb  c644244002           mov byte ptr [esp + 0x40], 2
// 0044c2f0  ff1568248000         call dword ptr [0x802468]
// 0044c2f6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0044c2fa  5f                   pop edi
// 0044c2fb  8bc6                 mov eax, esi
// 0044c2fd  5e                   pop esi
// 0044c2fe  5b                   pop ebx
// 0044c2ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c306  83c438               add esp, 0x38
// 0044c309  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char pad[0x1c];
    String();
    __declspec(dllimport) ~String() throw();
    String& operator+=(const char*);
    const char* c_str() const;
};

struct RefCounted {
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    volatile long ref1;
    volatile long ref2;
};

struct Inner {
    void* p0;
    char pad[8];
    int i0;
    int i1;
    int i2;
};

struct Target {
    char pad[0x28];
    char b28, b29, b2a, b2b, b2c, b2d, b2e, b2f;
    Inner inner;
    void ctor();
};

extern "C" void __cdecl sub_6a1262();
extern "C" void* __cdecl sub_6a0920(int);
extern "C" void* __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693a0(void*, int, void*);

extern int* g_802820;
extern int* g_802824;
extern char g_812e58;
extern void* g_816a44;

extern "C" void __stdcall mfc_802460(void*);
extern "C" void __stdcall mfc_802448(void*, const char*);
extern "C" void* __stdcall mfc_802464(void*);
extern "C" void __stdcall mfc_802468(void*);

struct CRobloxModule {
    void f();
};

void CRobloxModule::f()
{
    sub_6a1262();
    *(void**)this = &g_816a44;
    char* base = (char*)this;
    base[0x28] = 0;
    base[0x29] = 0;
    base[0x2a] = 0;
    base[0x2b] = 0;
    base[0x2c] = 0;
    base[0x2d] = 0;
    base[0x2e] = 0;
    base[0x2f] = 0;
    Inner* inner = (Inner*)(base + 0x30);
    void* r = sub_6a0920(4);
    if (r != 0) {
        *(void**)r = inner;
    } else {
        r = 0;
    }
    inner->p0 = r;
    inner->i0 = 0;
    inner->i1 = 0;
    inner->i2 = 0;

    if (*g_802820 > 0) {
        String s;
        int i = 0;
        if (*g_802820 > 0) {
            do {
                if (i != 0) {
                    s += &g_812e58;
                }
                s += *(const char**)(*g_802824 + i * 4);
                i++;
            } while (i < *g_802820);
        }
        void* tmp = sub_569620(&s);
        RefCounted* rc = *(RefCounted**)tmp;
        const char* cs = s.c_str();
        sub_5693a0(rc, 1, (void*)cs);
        if (rc != 0) {
            if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
                rc->slot2();
                if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                    rc->slot3();
                }
            }
        }
        mfc_802468(&s);
    }
}

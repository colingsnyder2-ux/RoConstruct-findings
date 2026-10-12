// from server: 100% by king_originala
// roc 2008-06 00421bc0  unit: CInstanceExplorer  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421bc0
//
// 00421bc0  6aff                 push -1
// 00421bc2  6832e97b00           push 0x7be932
// 00421bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00421bcd  50                   push eax
// 00421bce  64892500000000       mov dword ptr fs:[0], esp
// 00421bd5  51                   push ecx
// 00421bd6  53                   push ebx
// 00421bd7  55                   push ebp
// 00421bd8  56                   push esi
// 00421bd9  8bf1                 mov esi, ecx
// 00421bdb  8d9e78030000         lea ebx, [esi + 0x378]
// 00421be1  8dae9c030000         lea ebp, [esi + 0x39c]
// 00421be7  57                   push edi
// 00421be8  89742410             mov dword ptr [esp + 0x10], esi
// 00421bec  c706c4f88000         mov dword ptr [esi], 0x80f8c4
// 00421bf2  c703acf88000         mov dword ptr [ebx], 0x80f8ac
// 00421bf8  c7450098f88000       mov dword ptr [ebp], 0x80f898
// 00421bff  6a00                 push 0
// 00421c01  c744242003000000     mov dword ptr [esp + 0x20], 3
// 00421c09  e842feffff           call 0x421a50
// 00421c0e  8bbec4030000         mov edi, dword ptr [esi + 0x3c4]
// 00421c14  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00421c19  85ff                 test edi, edi
// 00421c1b  742a                 je 0x421c47
// 00421c1d  8d4704               lea eax, [edi + 4]
// 00421c20  83c9ff               or ecx, 0xffffffff
// 00421c23  f00fc108             lock xadd dword ptr [eax], ecx
// 00421c27  751e                 jne 0x421c47
// 00421c29  8b17                 mov edx, dword ptr [edi]
// 00421c2b  8b4204               mov eax, dword ptr [edx + 4]
// 00421c2e  8bcf                 mov ecx, edi
// 00421c30  ffd0                 call eax
// 00421c32  8d4f08               lea ecx, [edi + 8]
// 00421c35  83caff               or edx, 0xffffffff
// 00421c38  f00fc111             lock xadd dword ptr [ecx], edx
// 00421c3c  7509                 jne 0x421c47
// 00421c3e  8b07                 mov eax, dword ptr [edi]
// 00421c40  8b5008               mov edx, dword ptr [eax + 8]
// 00421c43  8bcf                 mov ecx, edi
// 00421c45  ffd2                 call edx
// 00421c47  8bcd                 mov ecx, ebp
// 00421c49  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00421c4e  e8edfaffff           call 0x421740
// 00421c53  8bcb                 mov ecx, ebx
// 00421c55  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00421c5a  e8c1f9ffff           call 0x421620
// 00421c5f  8bce                 mov ecx, esi
// 00421c61  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00421c69  e8e2342a00           call 0x6c5150
// 00421c6e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00421c72  5f                   pop edi
// 00421c73  5e                   pop esi
// 00421c74  5d                   pop ebp
// 00421c75  5b                   pop ebx
// 00421c76  64890d00000000       mov dword ptr fs:[0], ecx
// 00421c7d  83c410               add esp, 0x10
// 00421c80  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Base
{
    virtual ~Base();
    char storage[0x374];
};

struct Base2
{
    virtual ~Base2();
    char storage[0x20];
};

struct Base3
{
    virtual ~Base3();
    char storage[0x20];
};

struct CInstanceExplorer : Base, Base2, Base3
{
    Shared shared;
    virtual ~CInstanceExplorer();
    void reset(int);
};

CInstanceExplorer::~CInstanceExplorer()
{
    reset(0);
}

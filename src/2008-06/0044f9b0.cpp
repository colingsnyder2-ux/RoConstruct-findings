// from server: 88% by colin
// from server: 87% by colin
// roc 2008-06 0044f9b0  unit: CRobloxDoc  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f9b0
//
// 0044f9b0  6aff                 push -1
// 0044f9b2  6830177c00           push 0x7c1730
// 0044f9b7  64a100000000         mov eax, dword ptr fs:[0]
// 0044f9bd  50                   push eax
// 0044f9be  64892500000000       mov dword ptr fs:[0], esp
// 0044f9c5  83ec08               sub esp, 8
// 0044f9c8  53                   push ebx
// 0044f9c9  56                   push esi
// 0044f9ca  57                   push edi
// 0044f9cb  8bf1                 mov esi, ecx
// 0044f9cd  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0044f9d3  8d44240c             lea eax, [esp + 0xc]
// 0044f9d7  50                   push eax
// 0044f9d8  e863af0100           call 0x46a940
// 0044f9dd  8b38                 mov edi, dword ptr [eax]
// 0044f9df  6a01                 push 1
// 0044f9e1  57                   push edi
// 0044f9e2  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0044f9ea  e871640400           call 0x495e60
// 0044f9ef  83c408               add esp, 8
// 0044f9f2  84c0                 test al, al
// 0044f9f4  740f                 je 0x44fa05
// 0044f9f6  6a01                 push 1
// 0044f9f8  57                   push edi
// 0044f9f9  e872640400           call 0x495e70
// 0044f9fe  83c408               add esp, 8
// 0044fa01  84c0                 test al, al
// 0044fa03  7402                 je 0x44fa07
// 0044fa05  b001                 mov al, 1
// 0044fa07  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044fa0b  84c0                 test al, al
// 0044fa0d  0f94c3               sete bl
// 0044fa10  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0044fa18  85ff                 test edi, edi
// 0044fa1a  742a                 je 0x44fa46
// 0044fa1c  8d4f04               lea ecx, [edi + 4]
// 0044fa1f  83caff               or edx, 0xffffffff
// 0044fa22  f00fc111             lock xadd dword ptr [ecx], edx
// 0044fa26  751e                 jne 0x44fa46
// 0044fa28  8b07                 mov eax, dword ptr [edi]
// 0044fa2a  8b5004               mov edx, dword ptr [eax + 4]
// 0044fa2d  8bcf                 mov ecx, edi
// 0044fa2f  ffd2                 call edx
// 0044fa31  8d4708               lea eax, [edi + 8]
// 0044fa34  83c9ff               or ecx, 0xffffffff
// 0044fa37  f00fc108             lock xadd dword ptr [eax], ecx
// 0044fa3b  7509                 jne 0x44fa46
// 0044fa3d  8b17                 mov edx, dword ptr [edi]
// 0044fa3f  8b4208               mov eax, dword ptr [edx + 8]
// 0044fa42  8bcf                 mov ecx, edi
// 0044fa44  ffd0                 call eax
// 0044fa46  84db                 test bl, bl
// 0044fa48  7416                 je 0x44fa60
// 0044fa4a  5f                   pop edi
// 0044fa4b  5e                   pop esi
// 0044fa4c  33c0                 xor eax, eax
// 0044fa4e  5b                   pop ebx
// 0044fa4f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044fa53  64890d00000000       mov dword ptr fs:[0], ecx
// 0044fa5a  83c414               add esp, 0x14
// 0044fa5d  c20400               ret 4
// 0044fa60  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044fa64  51                   push ecx
// 0044fa65  8d4c2428             lea ecx, [esp + 0x28]
// 0044fa69  e81217fbff           call 0x401180
// 0044fa6e  8b08                 mov ecx, dword ptr [eax]
// 0044fa70  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0044fa76  8b10                 mov edx, dword ptr [eax]
// 0044fa78  51                   push ecx
// 0044fa79  50                   push eax
// 0044fa7a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0044fa7d  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0044fa85  ffd0                 call eax
// 0044fa87  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044fa8b  85c0                 test eax, eax
// 0044fa8d  51                   push ecx
// 0044fa8e  0f95c3               setne bl
// 0044fa91  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0044fa99  ff1544298000         call dword ptr [0x802944]
// 0044fa9f  84db                 test bl, bl
// 0044faa1  75a7                 jne 0x44fa4a
// 0044faa3  8b16                 mov edx, dword ptr [esi]
// 0044faa5  8b4264               mov eax, dword ptr [edx + 0x64]
// 0044faa8  6a00                 push 0
// 0044faaa  8bce                 mov ecx, esi
// 0044faac  ffd0                 call eax
// 0044faae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044fab2  5f                   pop edi
// 0044fab3  5e                   pop esi
// 0044fab4  b801000000           mov eax, 1
// 0044fab9  5b                   pop ebx
// 0044faba  64890d00000000       mov dword ptr fs:[0], ecx
// 0044fac1  83c414               add esp, 0x14
// 0044fac4  c20400               ret 4
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __stdcall SysFreeString(wchar_t*);

struct RefCount
{
    virtual ~RefCount();
    virtual void dispose();
    virtual void destroy();

    volatile long use_count;
    volatile long weak_count;
};

struct Shared
{
    void* object;
    RefCount* count;

    ~Shared();
};

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p && _InterlockedDecrement(&p->use_count) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak_count) == 0)
            p->destroy();
    }
}

struct Owner;

struct OwnerTable
{
    void* slots[7];
    long (__stdcall *invoke)(Owner*, wchar_t*);
};

struct Owner
{
    OwnerTable* table;
    Shared get();
};

extern bool __cdecl checkFirst(void*, int);
extern bool __cdecl checkSecond(void*, int);

struct String
{
    wchar_t* value;

    String(const wchar_t*);
    ~String();
};

inline String::~String()
{
    SysFreeString(value);
}

struct CRobloxDoc;

struct DocumentTable
{
    void* slots[25];
    void (__thiscall *notify)(CRobloxDoc*, int);
};

struct CRobloxDoc
{
    DocumentTable* table;
    char padding[0x90];
    Owner* owner;

    int func_0044f9b0(const wchar_t*);
};

int CRobloxDoc::func_0044f9b0(const wchar_t* text)
{
    bool rejected;
    {
        Shared state = owner->get();
        void* object = state.object;
        _ReadWriteBarrier();
        rejected = !(checkFirst(object, 1) && checkSecond(object, 1));
    }

    if (rejected)
        return 0;

    bool failed =
        owner->table->invoke(owner, String(text).value) != 0;

    if (failed)
        return 0;

    table->notify(this, 0);
    return 1;
}

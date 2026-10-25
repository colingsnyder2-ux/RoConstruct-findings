// from server: 100% by king_originala
// roc 2008-06 00420ee0  unit: CInstanceExplorer  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420ee0
//
// 00420ee0  6aff                 push -1
// 00420ee2  6848e87b00           push 0x7be848
// 00420ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00420eed  50                   push eax
// 00420eee  64892500000000       mov dword ptr fs:[0], esp
// 00420ef5  51                   push ecx
// 00420ef6  56                   push esi
// 00420ef7  57                   push edi
// 00420ef8  8bf9                 mov edi, ecx
// 00420efa  897c2408             mov dword ptr [esp + 8], edi
// 00420efe  c707e4f78000         mov dword ptr [edi], 0x80f7e4
// 00420f04  8b7758               mov esi, dword ptr [edi + 0x58]
// 00420f07  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00420f0f  85f6                 test esi, esi
// 00420f11  742a                 je 0x420f3d
// 00420f13  8d4604               lea eax, [esi + 4]
// 00420f16  83c9ff               or ecx, 0xffffffff
// 00420f19  f00fc108             lock xadd dword ptr [eax], ecx
// 00420f1d  751e                 jne 0x420f3d
// 00420f1f  8b16                 mov edx, dword ptr [esi]
// 00420f21  8b4204               mov eax, dword ptr [edx + 4]
// 00420f24  8bce                 mov ecx, esi
// 00420f26  ffd0                 call eax
// 00420f28  8d4e08               lea ecx, [esi + 8]
// 00420f2b  83caff               or edx, 0xffffffff
// 00420f2e  f00fc111             lock xadd dword ptr [ecx], edx
// 00420f32  7509                 jne 0x420f3d
// 00420f34  8b06                 mov eax, dword ptr [esi]
// 00420f36  8b5008               mov edx, dword ptr [eax + 8]
// 00420f39  8bce                 mov ecx, esi
// 00420f3b  ffd2                 call edx
// 00420f3d  8bcf                 mov ecx, edi
// 00420f3f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00420f47  e8b4712b00           call 0x6d8100
// 00420f4c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00420f50  5f                   pop edi
// 00420f51  5e                   pop esi
// 00420f52  64890d00000000       mov dword ptr fs:[0], ecx
// 00420f59  83c410               add esp, 0x10
// 00420f5c  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Base
{
    virtual ~Base();
    char padding[0x50];
};

struct CInstanceExplorer : Base
{
    void* object;
    Control* control;
    virtual ~CInstanceExplorer();
};

CInstanceExplorer::~CInstanceExplorer()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

// from server: 100% by king_originala
// roc 2008-06 00417120  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417120
//
// 00417120  6aff                 push -1
// 00417122  685bdb7b00           push 0x7bdb5b
// 00417127  64a100000000         mov eax, dword ptr fs:[0]
// 0041712d  50                   push eax
// 0041712e  64892500000000       mov dword ptr fs:[0], esp
// 00417135  51                   push ecx
// 00417136  56                   push esi
// 00417137  8bf1                 mov esi, ecx
// 00417139  89742404             mov dword ptr [esp + 4], esi
// 0041713d  8d4e14               lea ecx, [esi + 0x14]
// 00417140  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00417148  e823d31700           call 0x594470
// 0041714d  8b7610               mov esi, dword ptr [esi + 0x10]
// 00417150  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00417158  85f6                 test esi, esi
// 0041715a  742a                 je 0x417186
// 0041715c  8d4604               lea eax, [esi + 4]
// 0041715f  83c9ff               or ecx, 0xffffffff
// 00417162  f00fc108             lock xadd dword ptr [eax], ecx
// 00417166  751e                 jne 0x417186
// 00417168  8b16                 mov edx, dword ptr [esi]
// 0041716a  8b4204               mov eax, dword ptr [edx + 4]
// 0041716d  8bce                 mov ecx, esi
// 0041716f  ffd0                 call eax
// 00417171  8d4e08               lea ecx, [esi + 8]
// 00417174  83caff               or edx, 0xffffffff
// 00417177  f00fc111             lock xadd dword ptr [ecx], edx
// 0041717b  7509                 jne 0x417186
// 0041717d  8b06                 mov eax, dword ptr [esi]
// 0041717f  8b5008               mov edx, dword ptr [eax + 8]
// 00417182  8bce                 mov ecx, esi
// 00417184  ffd2                 call edx
// 00417186  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041718a  5e                   pop esi
// 0041718b  64890d00000000       mov dword ptr fs:[0], ecx
// 00417192  83c410               add esp, 0x10
// 00417195  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedCount {
    Control* control;
    ~SharedCount();
};

inline SharedCount::~SharedCount()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Mutex {
    ~Mutex();
};

struct Holder {
    char padding[16];
    SharedCount count;
    Mutex mutex;
    ~Holder();
};

Holder::~Holder()
{
}

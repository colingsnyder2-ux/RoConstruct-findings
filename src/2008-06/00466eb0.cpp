// from server: 87% by king_originala
// roc 2008-06 00466eb0  unit: CSettingsDialog  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466eb0
//
// 00466eb0  64a100000000         mov eax, dword ptr fs:[0]
// 00466eb6  6aff                 push -1
// 00466eb8  68b6357c00           push 0x7c35b6
// 00466ebd  50                   push eax
// 00466ebe  64892500000000       mov dword ptr fs:[0], esp
// 00466ec5  81ecdc030000         sub esp, 0x3dc
// 00466ecb  6aff                 push -1
// 00466ecd  6a31                 push 0x31
// 00466ecf  6888000000           push 0x88
// 00466ed4  e887a22300           call 0x6a1160
// 00466ed9  83f801               cmp eax, 1
// 00466edc  0f85a5000000         jne 0x466f87
// 00466ee2  8b8424ec030000       mov eax, dword ptr [esp + 0x3ec]
// 00466ee9  50                   push eax
// 00466eea  8d4c240c             lea ecx, [esp + 0xc]
// 00466eee  e81dffffff           call 0x466e10
// 00466ef3  8d4c2408             lea ecx, [esp + 8]
// 00466ef7  c78424e403000000000000 mov dword ptr [esp + 0x3e4], 0
// 00466f02  e847992300           call 0x6a084e
// 00466f07  83f801               cmp eax, 1
// 00466f0a  7567                 jne 0x466f73
// 00466f0c  6aff                 push -1
// 00466f0e  6a40                 push 0x40
// 00466f10  688e000000           push 0x8e
// 00466f15  e846a22300           call 0x6a1160
// 00466f1a  8d0c24               lea ecx, [esp]
// 00466f1d  51                   push ecx
// 00466f1e  e8cd211000           call 0x5690f0
// 00466f23  83c404               add esp, 4
// 00466f26  8b08                 mov ecx, dword ptr [eax]
// 00466f28  c68424e403000001     mov byte ptr [esp + 0x3e4], 1
// 00466f30  e8db191000           call 0x568910
// 00466f35  8b442404             mov eax, dword ptr [esp + 4]
// 00466f39  c68424e403000000     mov byte ptr [esp + 0x3e4], 0
// 00466f41  85c0                 test eax, eax
// 00466f43  742e                 je 0x466f73
// 00466f45  56                   push esi
// 00466f46  8bf0                 mov esi, eax
// 00466f48  83c004               add eax, 4
// 00466f4b  83caff               or edx, 0xffffffff
// 00466f4e  f00fc110             lock xadd dword ptr [eax], edx
// 00466f52  751e                 jne 0x466f72
// 00466f54  8b06                 mov eax, dword ptr [esi]
// 00466f56  8b5004               mov edx, dword ptr [eax + 4]
// 00466f59  8bce                 mov ecx, esi
// 00466f5b  ffd2                 call edx
// 00466f5d  8d4608               lea eax, [esi + 8]
// 00466f60  83c9ff               or ecx, 0xffffffff
// 00466f63  f00fc108             lock xadd dword ptr [eax], ecx
// 00466f67  7509                 jne 0x466f72
// 00466f69  8b16                 mov edx, dword ptr [esi]
// 00466f6b  8b4208               mov eax, dword ptr [edx + 8]
// 00466f6e  8bce                 mov ecx, esi
// 00466f70  ffd0                 call eax
// 00466f72  5e                   pop esi
// 00466f73  8d4c2408             lea ecx, [esp + 8]
// 00466f77  c78424e4030000ffffffff mov dword ptr [esp + 0x3e4], 0xffffffff
// 00466f82  e819fdffff           call 0x466ca0
// 00466f87  8b8c24dc030000       mov ecx, dword ptr [esp + 0x3dc]
// 00466f8e  64890d00000000       mov dword ptr fs:[0], ecx
// 00466f95  81c4e8030000         add esp, 0x3e8
// 00466f9b  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall query(int, int, int);

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Service {
    void action();
};

struct Shared {
    Service* ptr;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

Shared __cdecl getService();

struct Dialog {
    char storage[0x3d4];
    Dialog(void*);
    ~Dialog();
    int run();
};

void __cdecl settings(void* argument)
{
    if (query(0x88, 0x31, -1) == 1) {
        Dialog dialog(argument);
        if (dialog.run() == 1) {
            query(0x8e, 0x40, -1);
            getService().ptr->action();
        }
    }
}

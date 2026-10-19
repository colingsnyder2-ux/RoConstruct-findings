// from server: 76% by colin
// from server: 74% by colin
// roc 2008-06 006300d0  unit: RBX::BodyGyro  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006300d0
//
// 006300d0  83ec08               sub esp, 8
// 006300d3  53                   push ebx
// 006300d4  56                   push esi
// 006300d5  57                   push edi
// 006300d6  8bf9                 mov edi, ecx
// 006300d8  8d44240c             lea eax, [esp + 0xc]
// 006300dc  50                   push eax
// 006300dd  8d4f10               lea ecx, [edi + 0x10]
// 006300e0  e81baaf9ff           call 0x5cab00
// 006300e5  8b742410             mov esi, dword ptr [esp + 0x10]
// 006300e9  8b08                 mov ecx, dword ptr [eax]
// 006300eb  8b99c8020000         mov ebx, dword ptr [ecx + 0x2c8]
// 006300f1  85f6                 test esi, esi
// 006300f3  742a                 je 0x63011f
// 006300f5  8d5604               lea edx, [esi + 4]
// 006300f8  83c8ff               or eax, 0xffffffff
// 006300fb  f00fc102             lock xadd dword ptr [edx], eax
// 006300ff  751e                 jne 0x63011f
// 00630101  8b16                 mov edx, dword ptr [esi]
// 00630103  8b4204               mov eax, dword ptr [edx + 4]
// 00630106  8bce                 mov ecx, esi
// 00630108  ffd0                 call eax
// 0063010a  8d4e08               lea ecx, [esi + 8]
// 0063010d  83caff               or edx, 0xffffffff
// 00630110  f00fc111             lock xadd dword ptr [ecx], edx
// 00630114  7509                 jne 0x63011f
// 00630116  8b06                 mov eax, dword ptr [esi]
// 00630118  8b5008               mov edx, dword ptr [eax + 8]
// 0063011b  8bce                 mov ecx, esi
// 0063011d  ffd2                 call edx
// 0063011f  8db7d0feffff         lea esi, [edi - 0x130]
// 00630125  53                   push ebx
// 00630126  8bce                 mov ecx, esi
// 00630128  e813ebffff           call 0x62ec40
// 0063012d  53                   push ebx
// 0063012e  8bce                 mov ecx, esi
// 00630130  e8dbe7ffff           call 0x62e910
// 00630135  5f                   pop edi
// 00630136  5e                   pop esi
// 00630137  5b                   pop ebx
// 00630138  83c408               add esp, 8
// 0063013b  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refcount1;
    volatile long refcount2;
};

struct VControllerService {
    void* getSomething(void** out);
};

struct BodyGyro {
    char pad[0x10];
    VControllerService svc;
    char pad2[0x2c8 - 0x10 - sizeof(VControllerService)];
    void* field2c8;
    void call1(void*);
    void call2(void*);
    void method(int a, int b);
};

void BodyGyro::method(int a, int b) {
    void* out;
    svc.getSomething(&out);
    void* v = *(void**)&out;
    void* ebx = *(void**)((char*)v + 0x2c8);
    RefCounted* rc = (RefCounted*)out;
    if (rc) {
        if (_InterlockedDecrement(&rc->refcount1) == 0) {
            rc->unknown1();
            if (_InterlockedDecrement(&rc->refcount2) == 0) {
                rc->unknown2();
            }
        }
    }
    BodyGyro* self = (BodyGyro*)((char*)this - 0x130);
    self->call1(ebx);
    self->call2(ebx);
}

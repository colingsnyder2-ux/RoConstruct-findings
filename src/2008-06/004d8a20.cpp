// from server: 100% by king_originala
// roc 2008-06 004d8a20  unit: G3D::VVector3::?$Table  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8a20
//
// 004d8a20  33c0                 xor eax, eax
// 004d8a22  56                   push esi
// 004d8a23  8bf1                 mov esi, ecx
// 004d8a25  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d8a29  c706246c8200         mov dword ptr [esi], 0x826c24
// 004d8a2f  894604               mov dword ptr [esi + 4], eax
// 004d8a32  894608               mov dword ptr [esi + 8], eax
// 004d8a35  89460c               mov dword ptr [esi + 0xc], eax
// 004d8a38  894610               mov dword ptr [esi + 0x10], eax
// 004d8a3b  894e14               mov dword ptr [esi + 0x14], ecx
// 004d8a3e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d8a42  894e18               mov dword ptr [esi + 0x18], ecx
// 004d8a45  3bc8                 cmp ecx, eax
// 004d8a47  7410                 je 0x4d8a59
// 004d8a49  83c104               add ecx, 4
// 004d8a4c  ba01000000           mov edx, 1
// 004d8a51  f00fc111             lock xadd dword ptr [ecx], edx
// 004d8a55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d8a59  894620               mov dword ptr [esi + 0x20], eax
// 004d8a5c  894624               mov dword ptr [esi + 0x24], eax
// 004d8a5f  884628               mov byte ptr [esi + 0x28], al
// 004d8a62  88462c               mov byte ptr [esi + 0x2c], al
// 004d8a65  894634               mov dword ptr [esi + 0x34], eax
// 004d8a68  894638               mov dword ptr [esi + 0x38], eax
// 004d8a6b  88463c               mov byte ptr [esi + 0x3c], al
// 004d8a6e  884640               mov byte ptr [esi + 0x40], al
// 004d8a71  884644               mov byte ptr [esi + 0x44], al
// 004d8a74  3bc8                 cmp ecx, eax
// 004d8a76  7434                 je 0x4d8aac
// 004d8a78  57                   push edi
// 004d8a79  8bf9                 mov edi, ecx
// 004d8a7b  83c104               add ecx, 4
// 004d8a7e  83c8ff               or eax, 0xffffffff
// 004d8a81  f00fc101             lock xadd dword ptr [ecx], eax
// 004d8a85  751e                 jne 0x4d8aa5
// 004d8a87  8b17                 mov edx, dword ptr [edi]
// 004d8a89  8b4204               mov eax, dword ptr [edx + 4]
// 004d8a8c  8bcf                 mov ecx, edi
// 004d8a8e  ffd0                 call eax
// 004d8a90  8d4f08               lea ecx, [edi + 8]
// 004d8a93  83caff               or edx, 0xffffffff
// 004d8a96  f00fc111             lock xadd dword ptr [ecx], edx
// 004d8a9a  7509                 jne 0x4d8aa5
// 004d8a9c  8b07                 mov eax, dword ptr [edi]
// 004d8a9e  8b5008               mov edx, dword ptr [eax + 8]
// 004d8aa1  8bcf                 mov ecx, edi
// 004d8aa3  ffd2                 call edx
// 004d8aa5  5f                   pop edi
// 004d8aa6  8bc6                 mov eax, esi
// 004d8aa8  5e                   pop esi
// 004d8aa9  c20800               ret 8
// 004d8aac  8bc6                 mov eax, esi
// 004d8aae  5e                   pop esi
// 004d8aaf  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Ref {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Ptr {
    void* p;
    Ref* r;
    ~Ptr();
};

__forceinline Ptr::~Ptr()
{
    if (r) {
        Ref* ref = r;
        if (_InterlockedDecrement(&ref->strong) == 0) {
            ref->dispose();
            if (_InterlockedDecrement(&ref->weak) == 0)
                ref->destroy();
        }
    }
}

struct S {
    S* f(Ptr value);
};

S* S::f(Ptr value)
{
    *(volatile int*)((char*)this + 0x00) = 0x826c24;
    *(volatile int*)((char*)this + 0x04) = 0;
    *(volatile int*)((char*)this + 0x08) = 0;
    *(volatile int*)((char*)this + 0x0c) = 0;
    *(volatile int*)((char*)this + 0x10) = 0;
    *(void* volatile*)((char*)this + 0x14) = value.p;
    *(Ref* volatile*)((char*)this + 0x18) = value.r;
    if (value.r)
        _InterlockedIncrement(&value.r->strong);

    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    *(char*)((char*)this + 0x28) = 0;
    *(char*)((char*)this + 0x2c) = 0;
    *(int*)((char*)this + 0x34) = 0;
    *(int*)((char*)this + 0x38) = 0;
    *(char*)((char*)this + 0x3c) = 0;
    *(char*)((char*)this + 0x40) = 0;
    *(char*)((char*)this + 0x44) = 0;
    return this;
}

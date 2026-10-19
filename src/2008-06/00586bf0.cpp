// from server: 84% by colin
// from server: 70% by colin
// roc 2008-06 00586bf0  unit: RBX::Script  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586bf0
//
// 00586bf0  83ec08               sub esp, 8
// 00586bf3  56                   push esi
// 00586bf4  8bf1                 mov esi, ecx
// 00586bf6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00586bfa  85c9                 test ecx, ecx
// 00586bfc  7411                 je 0x586c0f
// 00586bfe  e88d72eaff           call 0x42de90
// 00586c03  85c0                 test eax, eax
// 00586c05  7408                 je 0x586c0f
// 00586c07  56                   push esi
// 00586c08  8bc8                 mov ecx, eax
// 00586c0a  e821640200           call 0x5ad030
// 00586c0f  837c241400           cmp dword ptr [esp + 0x14], 0
// 00586c14  743e                 je 0x586c54
// 00586c16  8d442404             lea eax, [esp + 4]
// 00586c1a  50                   push eax
// 00586c1b  8bce                 mov ecx, esi
// 00586c1d  e8eefeffff           call 0x586b10
// 00586c22  8b742408             mov esi, dword ptr [esp + 8]
// 00586c26  85f6                 test esi, esi
// 00586c28  742a                 je 0x586c54
// 00586c2a  8d4e04               lea ecx, [esi + 4]
// 00586c2d  83caff               or edx, 0xffffffff
// 00586c30  f00fc111             lock xadd dword ptr [ecx], edx
// 00586c34  751e                 jne 0x586c54
// 00586c36  8b06                 mov eax, dword ptr [esi]
// 00586c38  8b5004               mov edx, dword ptr [eax + 4]
// 00586c3b  8bce                 mov ecx, esi
// 00586c3d  ffd2                 call edx
// 00586c3f  8d4608               lea eax, [esi + 8]
// 00586c42  83c9ff               or ecx, 0xffffffff
// 00586c45  f00fc108             lock xadd dword ptr [eax], ecx
// 00586c49  7509                 jne 0x586c54
// 00586c4b  8b16                 mov edx, dword ptr [esi]
// 00586c4d  8b4208               mov eax, dword ptr [edx + 8]
// 00586c50  8bce                 mov ecx, esi
// 00586c52  ffd0                 call eax
// 00586c54  5e                   pop esi
// 00586c55  83c408               add esp, 8
// 00586c58  c20800               ret 8

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
    volatile long refCount;
    volatile long weakCount;
};

struct Script;

extern void* __cdecl func_0042de90(void*);

struct Script {
    void method_005ad030(Script* other);
    void method_00586b10(void** out);
    void target(void* a, void* b);
};

void Script::target(void* a, void* b)
{
    if (a) {
        void* r = func_0042de90(a);
        if (r) {
            ((Script*)r)->method_005ad030(this);
        }
    }
    if (b) {
        void* out;
        method_00586b10(&out);
        RefCounted* p = (RefCounted*)out;
        if (p) {
            if (_InterlockedDecrement(&p->refCount) == 0) {
                p->unknown1();
                if (_InterlockedDecrement(&p->weakCount) == 0) {
                    p->unknown2();
                }
            }
        }
    }
}

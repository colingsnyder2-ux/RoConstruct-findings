// from server: 100% by colin
// roc 2008-06 004b3570  unit: RBX::VMotor::?$FactoryProduct::Creator  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3570
//
// 004b3570  56                   push esi
// 004b3571  8b742408             mov esi, dword ptr [esp + 8]
// 004b3575  57                   push edi
// 004b3576  56                   push esi
// 004b3577  8bf9                 mov edi, ecx
// 004b3579  e8726d1500           call 0x60a2f0
// 004b357e  83c404               add esp, 4
// 004b3581  84c0                 test al, al
// 004b3583  753e                 jne 0x4b35c3
// 004b3585  8d4708               lea eax, [edi + 8]
// 004b3588  85c0                 test eax, eax
// 004b358a  742c                 je 0x4b35b8
// 004b358c  8b0e                 mov ecx, dword ptr [esi]
// 004b358e  8908                 mov dword ptr [eax], ecx
// 004b3590  8b5604               mov edx, dword ptr [esi + 4]
// 004b3593  895004               mov dword ptr [eax + 4], edx
// 004b3596  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b3599  894808               mov dword ptr [eax + 8], ecx
// 004b359c  8b560c               mov edx, dword ptr [esi + 0xc]
// 004b359f  89500c               mov dword ptr [eax + 0xc], edx
// 004b35a2  8b7610               mov esi, dword ptr [esi + 0x10]
// 004b35a5  897010               mov dword ptr [eax + 0x10], esi
// 004b35a8  85f6                 test esi, esi
// 004b35aa  740c                 je 0x4b35b8
// 004b35ac  83c604               add esi, 4
// 004b35af  b801000000           mov eax, 1
// 004b35b4  f00fc106             lock xadd dword ptr [esi], eax
// 004b35b8  c707744c8200         mov dword ptr [edi], 0x824c74
// 004b35be  5f                   pop edi
// 004b35bf  5e                   pop esi
// 004b35c0  c20400               ret 4
// 004b35c3  c70700000000         mov dword ptr [edi], 0
// 004b35c9  5f                   pop edi
// 004b35ca  5e                   pop esi
// 004b35cb  c20400               ret 4

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    long unused;
    volatile long count;
};

struct Data {
    long a;
    long b;
    long c;
    long d;
    RefCount* owner;
};

extern bool __cdecl func_0060a2f0();
extern const char function_table;

struct S {
    const void* table;
    long unused;
    Data data;

    void f(const Data& source);
};

void S::f(const Data& source)
{
    typedef bool (__cdecl *Predicate)(const Data&);
    if (!((Predicate)func_0060a2f0)(source)) {
        Data* destination = &data;
        if (destination) {
            destination->a = source.a;
            destination->b = source.b;
            destination->c = source.c;
            destination->d = source.d;
            destination->owner = source.owner;
            if (destination->owner)
                _InterlockedIncrement(&destination->owner->count);
        }
        table = &function_table;
    } else {
        table = 0;
    }
}

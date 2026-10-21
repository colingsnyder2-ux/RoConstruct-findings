// from server: 87% by EspClaude
// roc 2008-06 004b34c0  unit: RBX::VMotor::?$FactoryProduct::Creator  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b34c0
//
// 004b34c0  6aff                 push -1
// 004b34c2  68b05e7d00           push 0x7d5eb0
// 004b34c7  64a100000000         mov eax, dword ptr fs:[0]
// 004b34cd  50                   push eax
// 004b34ce  64892500000000       mov dword ptr fs:[0], esp
// 004b34d5  51                   push ecx
// 004b34d6  56                   push esi
// 004b34d7  57                   push edi
// 004b34d8  6894149700           push 0x971494
// 004b34dd  6810c64a00           push 0x4ac610
// 004b34e2  8bf1                 mov esi, ecx
// 004b34e4  e8473e0a00           call 0x557330
// 004b34e9  83c408               add esp, 8
// 004b34ec  e8df7fffff           call 0x4ab4d0
// 004b34f1  8bf8                 mov edi, eax
// 004b34f3  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 004b34f9  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 004b34ff  81c690010000         add esi, 0x190
// 004b3505  8d4f01               lea ecx, [edi + 1]
// 004b3508  c1f803               sar eax, 3
// 004b350b  3bc8                 cmp ecx, eax
// 004b350d  7631                 jbe 0x4b3540
// 004b350f  83ec08               sub esp, 8
// 004b3512  8bc4                 mov eax, esp
// 004b3514  89642410             mov dword ptr [esp + 0x10], esp
// 004b3518  51                   push ecx
// 004b3519  c70000000000         mov dword ptr [eax], 0
// 004b351f  8bce                 mov ecx, esi
// 004b3521  c7400400000000       mov dword ptr [eax + 4], 0
// 004b3528  e893eff5ff           call 0x4124c0
// 004b352d  33c0                 xor eax, eax
// 004b352f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3533  64890d00000000       mov dword ptr fs:[0], ecx
// 004b353a  5f                   pop edi
// 004b353b  5e                   pop esi
// 004b353c  83c410               add esp, 0x10
// 004b353f  c3                   ret 
// 004b3540  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004b3543  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 004b3546  c1f903               sar ecx, 3
// 004b3549  3bf9                 cmp edi, ecx
// 004b354b  7206                 jb 0x4b3553
// 004b354d  ff1590288000         call dword ptr [0x802890]
// 004b3553  8b560c               mov edx, dword ptr [esi + 0xc]
// 004b3556  8b04fa               mov eax, dword ptr [edx + edi*8]
// 004b3559  85c0                 test eax, eax
// 004b355b  7500                 jne 0x4b355d
// 004b355d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3561  5f                   pop edi
// 004b3562  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3569  5e                   pop esi
// 004b356a  83c410               add esp, 0x10
// 004b356d  c3                   ret 

// from server: 67% by colin
// roc 2008-06 004b34c0  unit: RBX::VMotor::?$FactoryProduct::Creator  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b34c0
//
// 004b34c0  6aff                 push -1
// 004b34c2  68b05e7d00           push 0x7d5eb0
// 004b34c7  64a100000000         mov eax, dword ptr fs:[0]
// 004b34cd  50                   push eax
// 004b34ce  64892500000000       mov dword ptr fs:[0], esp
// 004b34d5  51                   push ecx
// 004b34d6  56                   push esi
// 004b34d7  57                   push edi
// 004b34d8  6894149700           push 0x971494
// 004b34dd  6810c64a00           push 0x4ac610
// 004b34e2  8bf1                 mov esi, ecx
// 004b34e4  e8473e0a00           call 0x557330
// 004b34e9  83c408               add esp, 8
// 004b34ec  e8df7fffff           call 0x4ab4d0
// 004b34f1  8bf8                 mov edi, eax
// 004b34f3  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 004b34f9  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 004b34ff  81c690010000         add esi, 0x190
// 004b3505  8d4f01               lea ecx, [edi + 1]
// 004b3508  c1f803               sar eax, 3
// 004b350b  3bc8                 cmp ecx, eax
// 004b350d  7631                 jbe 0x4b3540
// 004b350f  83ec08               sub esp, 8
// 004b3512  8bc4                 mov eax, esp
// 004b3514  89642410             mov dword ptr [esp + 0x10], esp
// 004b3518  51                   push ecx
// 004b3519  c70000000000         mov dword ptr [eax], 0
// 004b351f  8bce                 mov ecx, esi
// 004b3521  c7400400000000       mov dword ptr [eax + 4], 0
// 004b3528  e893eff5ff           call 0x4124c0
// 004b352d  33c0                 xor eax, eax
// 004b352f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3533  64890d00000000       mov dword ptr fs:[0], ecx
// 004b353a  5f                   pop edi
// 004b353b  5e                   pop esi
// 004b353c  83c410               add esp, 0x10
// 004b353f  c3                   ret 
// 004b3540  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004b3543  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 004b3546  c1f903               sar ecx, 3
// 004b3549  3bf9                 cmp edi, ecx
// 004b354b  7206                 jb 0x4b3553
// 004b354d  ff1590288000         call dword ptr [0x802890]
// 004b3553  8b560c               mov edx, dword ptr [esi + 0xc]
// 004b3556  8b04fa               mov eax, dword ptr [edx + edi*8]
// 004b3559  85c0                 test eax, eax
// 004b355b  7500                 jne 0x4b355d
// 004b355d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3561  5f                   pop edi
// 004b3562  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3569  5e                   pop esi
// 004b356a  83c410               add esp, 0x10
// 004b356d  c3                   ret 

//

#include <vector>

struct OnceFlag { int value; };
extern OnceFlag registrationFlag;
void __cdecl registerTypes();
void __cdecl callOnce(void (__cdecl *)(), OnceFlag &);
unsigned int __cdecl typeIndex();

struct Counted {
    void release();
    void add_ref();
};
struct Count {
    Counted *pi;
    Count() : pi(0) {}
    Count(const Count &o) : pi(o.pi) { if (pi) pi->add_ref(); }
    ~Count() { if (pi) pi->release(); }
};
struct Base { virtual ~Base(); };
struct Derived : Base {};
struct Ptr {
    Base *px;
    Count pn;
    Ptr() : px(0), pn() {}
    Ptr &operator=(const Ptr &);
    Base *get() const { return px; }
};

struct S {
    char padding[0x190];
    std::vector<Ptr> values;

    Derived *f();
    __forceinline Ptr create() { return Ptr(); }
};

Derived *S::f()
{
    callOnce(registerTypes, registrationFlag);
    unsigned int index = typeIndex();
    if (index + 1 > values.size()) {
        values.resize(index + 1);
        return 0;
    }
    Base *existing = values[index].get();
    if (existing)
        return static_cast<Derived *>(existing);
    Ptr result;
    if (!result.get())
        return 0;
    values[index] = result;
    return static_cast<Derived *>(result.get());
}

// from server: 87% by EspClaude
// roc 2008-06 005da370  unit: RBX::VHumanoid::?$SignalDesc  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da370
//
// 005da370  6aff                 push -1
// 005da372  68b05e7d00           push 0x7d5eb0
// 005da377  64a100000000         mov eax, dword ptr fs:[0]
// 005da37d  50                   push eax
// 005da37e  64892500000000       mov dword ptr fs:[0], esp
// 005da385  51                   push ecx
// 005da386  56                   push esi
// 005da387  57                   push edi
// 005da388  6860a29700           push 0x97a260
// 005da38d  68707c5d00           push 0x5d7c70
// 005da392  8bf1                 mov esi, ecx
// 005da394  e897cff7ff           call 0x557330
// 005da399  83c408               add esp, 8
// 005da39c  e84fd5ffff           call 0x5d78f0
// 005da3a1  8bf8                 mov edi, eax
// 005da3a3  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 005da3a9  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 005da3af  81c690010000         add esi, 0x190
// 005da3b5  8d4f01               lea ecx, [edi + 1]
// 005da3b8  c1f803               sar eax, 3
// 005da3bb  3bc8                 cmp ecx, eax
// 005da3bd  7631                 jbe 0x5da3f0
// 005da3bf  83ec08               sub esp, 8
// 005da3c2  8bc4                 mov eax, esp
// 005da3c4  89642410             mov dword ptr [esp + 0x10], esp
// 005da3c8  51                   push ecx
// 005da3c9  c70000000000         mov dword ptr [eax], 0
// 005da3cf  8bce                 mov ecx, esi
// 005da3d1  c7400400000000       mov dword ptr [eax + 4], 0
// 005da3d8  e8e380e3ff           call 0x4124c0
// 005da3dd  33c0                 xor eax, eax
// 005da3df  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005da3e3  64890d00000000       mov dword ptr fs:[0], ecx
// 005da3ea  5f                   pop edi
// 005da3eb  5e                   pop esi
// 005da3ec  83c410               add esp, 0x10
// 005da3ef  c3                   ret 
// 005da3f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005da3f3  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 005da3f6  c1f903               sar ecx, 3
// 005da3f9  3bf9                 cmp edi, ecx
// 005da3fb  7206                 jb 0x5da403
// 005da3fd  ff1590288000         call dword ptr [0x802890]
// 005da403  8b560c               mov edx, dword ptr [esi + 0xc]
// 005da406  8b04fa               mov eax, dword ptr [edx + edi*8]
// 005da409  85c0                 test eax, eax
// 005da40b  7500                 jne 0x5da40d
// 005da40d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005da411  5f                   pop edi
// 005da412  64890d00000000       mov dword ptr fs:[0], ecx
// 005da419  5e                   pop esi
// 005da41a  83c410               add esp, 0x10
// 005da41d  c3                   ret 

// from server: 67% by colin
// roc 2008-06 005da370  unit: RBX::VHumanoid::?$SignalDesc  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da370
//
// 005da370  6aff                 push -1
// 005da372  68b05e7d00           push 0x7d5eb0
// 005da377  64a100000000         mov eax, dword ptr fs:[0]
// 005da37d  50                   push eax
// 005da37e  64892500000000       mov dword ptr fs:[0], esp
// 005da385  51                   push ecx
// 005da386  56                   push esi
// 005da387  57                   push edi
// 005da388  6860a29700           push 0x97a260
// 005da38d  68707c5d00           push 0x5d7c70
// 005da392  8bf1                 mov esi, ecx
// 005da394  e897cff7ff           call 0x557330
// 005da399  83c408               add esp, 8
// 005da39c  e84fd5ffff           call 0x5d78f0
// 005da3a1  8bf8                 mov edi, eax
// 005da3a3  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 005da3a9  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 005da3af  81c690010000         add esi, 0x190
// 005da3b5  8d4f01               lea ecx, [edi + 1]
// 005da3b8  c1f803               sar eax, 3
// 005da3bb  3bc8                 cmp ecx, eax
// 005da3bd  7631                 jbe 0x5da3f0
// 005da3bf  83ec08               sub esp, 8
// 005da3c2  8bc4                 mov eax, esp
// 005da3c4  89642410             mov dword ptr [esp + 0x10], esp
// 005da3c8  51                   push ecx
// 005da3c9  c70000000000         mov dword ptr [eax], 0
// 005da3cf  8bce                 mov ecx, esi
// 005da3d1  c7400400000000       mov dword ptr [eax + 4], 0
// 005da3d8  e8e380e3ff           call 0x4124c0
// 005da3dd  33c0                 xor eax, eax
// 005da3df  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005da3e3  64890d00000000       mov dword ptr fs:[0], ecx
// 005da3ea  5f                   pop edi
// 005da3eb  5e                   pop esi
// 005da3ec  83c410               add esp, 0x10
// 005da3ef  c3                   ret 
// 005da3f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005da3f3  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 005da3f6  c1f903               sar ecx, 3
// 005da3f9  3bf9                 cmp edi, ecx
// 005da3fb  7206                 jb 0x5da403
// 005da3fd  ff1590288000         call dword ptr [0x802890]
// 005da403  8b560c               mov edx, dword ptr [esi + 0xc]
// 005da406  8b04fa               mov eax, dword ptr [edx + edi*8]
// 005da409  85c0                 test eax, eax
// 005da40b  7500                 jne 0x5da40d
// 005da40d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005da411  5f                   pop edi
// 005da412  64890d00000000       mov dword ptr fs:[0], ecx
// 005da419  5e                   pop esi
// 005da41a  83c410               add esp, 0x10
// 005da41d  c3                   ret 
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

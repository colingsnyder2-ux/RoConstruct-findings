// from server: 87% by EspClaude
// roc 2008-06 00617340  unit: RBX::VInstance::?$FilteredSelection  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00617340
//
// 00617340  6aff                 push -1
// 00617342  68b05e7d00           push 0x7d5eb0
// 00617347  64a100000000         mov eax, dword ptr fs:[0]
// 0061734d  50                   push eax
// 0061734e  64892500000000       mov dword ptr fs:[0], esp
// 00617355  51                   push ecx
// 00617356  56                   push esi
// 00617357  57                   push edi
// 00617358  6800bf9700           push 0x97bf00
// 0061735d  6800646100           push 0x616400
// 00617362  8bf1                 mov esi, ecx
// 00617364  e8c7fff3ff           call 0x557330
// 00617369  83c408               add esp, 8
// 0061736c  e8cfeeffff           call 0x616240
// 00617371  8bf8                 mov edi, eax
// 00617373  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 00617379  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 0061737f  81c690010000         add esi, 0x190
// 00617385  8d4f01               lea ecx, [edi + 1]
// 00617388  c1f803               sar eax, 3
// 0061738b  3bc8                 cmp ecx, eax
// 0061738d  7631                 jbe 0x6173c0
// 0061738f  83ec08               sub esp, 8
// 00617392  8bc4                 mov eax, esp
// 00617394  89642410             mov dword ptr [esp + 0x10], esp
// 00617398  51                   push ecx
// 00617399  c70000000000         mov dword ptr [eax], 0
// 0061739f  8bce                 mov ecx, esi
// 006173a1  c7400400000000       mov dword ptr [eax + 4], 0
// 006173a8  e813b1dfff           call 0x4124c0
// 006173ad  33c0                 xor eax, eax
// 006173af  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006173b3  64890d00000000       mov dword ptr fs:[0], ecx
// 006173ba  5f                   pop edi
// 006173bb  5e                   pop esi
// 006173bc  83c410               add esp, 0x10
// 006173bf  c3                   ret 
// 006173c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006173c3  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 006173c6  c1f903               sar ecx, 3
// 006173c9  3bf9                 cmp edi, ecx
// 006173cb  7206                 jb 0x6173d3
// 006173cd  ff1590288000         call dword ptr [0x802890]
// 006173d3  8b560c               mov edx, dword ptr [esi + 0xc]
// 006173d6  8b04fa               mov eax, dword ptr [edx + edi*8]
// 006173d9  85c0                 test eax, eax
// 006173db  7500                 jne 0x6173dd
// 006173dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006173e1  5f                   pop edi
// 006173e2  64890d00000000       mov dword ptr fs:[0], ecx
// 006173e9  5e                   pop esi
// 006173ea  83c410               add esp, 0x10
// 006173ed  c3                   ret 

// from server: 67% by colin
// roc 2008-06 00617340  unit: RBX::VInstance::?$FilteredSelection  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00617340
//
// 00617340  6aff                 push -1
// 00617342  68b05e7d00           push 0x7d5eb0
// 00617347  64a100000000         mov eax, dword ptr fs:[0]
// 0061734d  50                   push eax
// 0061734e  64892500000000       mov dword ptr fs:[0], esp
// 00617355  51                   push ecx
// 00617356  56                   push esi
// 00617357  57                   push edi
// 00617358  6800bf9700           push 0x97bf00
// 0061735d  6800646100           push 0x616400
// 00617362  8bf1                 mov esi, ecx
// 00617364  e8c7fff3ff           call 0x557330
// 00617369  83c408               add esp, 8
// 0061736c  e8cfeeffff           call 0x616240
// 00617371  8bf8                 mov edi, eax
// 00617373  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 00617379  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 0061737f  81c690010000         add esi, 0x190
// 00617385  8d4f01               lea ecx, [edi + 1]
// 00617388  c1f803               sar eax, 3
// 0061738b  3bc8                 cmp ecx, eax
// 0061738d  7631                 jbe 0x6173c0
// 0061738f  83ec08               sub esp, 8
// 00617392  8bc4                 mov eax, esp
// 00617394  89642410             mov dword ptr [esp + 0x10], esp
// 00617398  51                   push ecx
// 00617399  c70000000000         mov dword ptr [eax], 0
// 0061739f  8bce                 mov ecx, esi
// 006173a1  c7400400000000       mov dword ptr [eax + 4], 0
// 006173a8  e813b1dfff           call 0x4124c0
// 006173ad  33c0                 xor eax, eax
// 006173af  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006173b3  64890d00000000       mov dword ptr fs:[0], ecx
// 006173ba  5f                   pop edi
// 006173bb  5e                   pop esi
// 006173bc  83c410               add esp, 0x10
// 006173bf  c3                   ret 
// 006173c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006173c3  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 006173c6  c1f903               sar ecx, 3
// 006173c9  3bf9                 cmp edi, ecx
// 006173cb  7206                 jb 0x6173d3
// 006173cd  ff1590288000         call dword ptr [0x802890]
// 006173d3  8b560c               mov edx, dword ptr [esi + 0xc]
// 006173d6  8b04fa               mov eax, dword ptr [edx + edi*8]
// 006173d9  85c0                 test eax, eax
// 006173db  7500                 jne 0x6173dd
// 006173dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006173e1  5f                   pop edi
// 006173e2  64890d00000000       mov dword ptr fs:[0], ecx
// 006173e9  5e                   pop esi
// 006173ea  83c410               add esp, 0x10
// 006173ed  c3                   ret 

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

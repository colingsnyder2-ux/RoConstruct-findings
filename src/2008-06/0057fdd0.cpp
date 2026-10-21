// from server: 87% by EspClaude
// roc 2008-06 0057fdd0  unit: RBX::VModelInstance::?$FilteredSelection  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057fdd0
//
// 0057fdd0  6aff                 push -1
// 0057fdd2  68b05e7d00           push 0x7d5eb0
// 0057fdd7  64a100000000         mov eax, dword ptr fs:[0]
// 0057fddd  50                   push eax
// 0057fdde  64892500000000       mov dword ptr fs:[0], esp
// 0057fde5  51                   push ecx
// 0057fde6  56                   push esi
// 0057fde7  57                   push edi
// 0057fde8  68c8539700           push 0x9753c8
// 0057fded  68b0dd5700           push 0x57ddb0
// 0057fdf2  8bf1                 mov esi, ecx
// 0057fdf4  e83775fdff           call 0x557330
// 0057fdf9  83c408               add esp, 8
// 0057fdfc  e85fdaffff           call 0x57d860
// 0057fe01  8bf8                 mov edi, eax
// 0057fe03  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 0057fe09  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 0057fe0f  81c690010000         add esi, 0x190
// 0057fe15  8d4f01               lea ecx, [edi + 1]
// 0057fe18  c1f803               sar eax, 3
// 0057fe1b  3bc8                 cmp ecx, eax
// 0057fe1d  7631                 jbe 0x57fe50
// 0057fe1f  83ec08               sub esp, 8
// 0057fe22  8bc4                 mov eax, esp
// 0057fe24  89642410             mov dword ptr [esp + 0x10], esp
// 0057fe28  51                   push ecx
// 0057fe29  c70000000000         mov dword ptr [eax], 0
// 0057fe2f  8bce                 mov ecx, esi
// 0057fe31  c7400400000000       mov dword ptr [eax + 4], 0
// 0057fe38  e88326e9ff           call 0x4124c0
// 0057fe3d  33c0                 xor eax, eax
// 0057fe3f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057fe43  64890d00000000       mov dword ptr fs:[0], ecx
// 0057fe4a  5f                   pop edi
// 0057fe4b  5e                   pop esi
// 0057fe4c  83c410               add esp, 0x10
// 0057fe4f  c3                   ret 
// 0057fe50  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057fe53  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 0057fe56  c1f903               sar ecx, 3
// 0057fe59  3bf9                 cmp edi, ecx
// 0057fe5b  7206                 jb 0x57fe63
// 0057fe5d  ff1590288000         call dword ptr [0x802890]
// 0057fe63  8b560c               mov edx, dword ptr [esi + 0xc]
// 0057fe66  8b04fa               mov eax, dword ptr [edx + edi*8]
// 0057fe69  85c0                 test eax, eax
// 0057fe6b  7500                 jne 0x57fe6d
// 0057fe6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057fe71  5f                   pop edi
// 0057fe72  64890d00000000       mov dword ptr fs:[0], ecx
// 0057fe79  5e                   pop esi
// 0057fe7a  83c410               add esp, 0x10
// 0057fe7d  c3                   ret 

// from server: 67% by colin
// roc 2008-06 0057fdd0  unit: RBX::VModelInstance::?$FilteredSelection  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057fdd0
//
// 0057fdd0  6aff                 push -1
// 0057fdd2  68b05e7d00           push 0x7d5eb0
// 0057fdd7  64a100000000         mov eax, dword ptr fs:[0]
// 0057fddd  50                   push eax
// 0057fdde  64892500000000       mov dword ptr fs:[0], esp
// 0057fde5  51                   push ecx
// 0057fde6  56                   push esi
// 0057fde7  57                   push edi
// 0057fde8  68c8539700           push 0x9753c8
// 0057fded  68b0dd5700           push 0x57ddb0
// 0057fdf2  8bf1                 mov esi, ecx
// 0057fdf4  e83775fdff           call 0x557330
// 0057fdf9  83c408               add esp, 8
// 0057fdfc  e85fdaffff           call 0x57d860
// 0057fe01  8bf8                 mov edi, eax
// 0057fe03  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 0057fe09  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 0057fe0f  81c690010000         add esi, 0x190
// 0057fe15  8d4f01               lea ecx, [edi + 1]
// 0057fe18  c1f803               sar eax, 3
// 0057fe1b  3bc8                 cmp ecx, eax
// 0057fe1d  7631                 jbe 0x57fe50
// 0057fe1f  83ec08               sub esp, 8
// 0057fe22  8bc4                 mov eax, esp
// 0057fe24  89642410             mov dword ptr [esp + 0x10], esp
// 0057fe28  51                   push ecx
// 0057fe29  c70000000000         mov dword ptr [eax], 0
// 0057fe2f  8bce                 mov ecx, esi
// 0057fe31  c7400400000000       mov dword ptr [eax + 4], 0
// 0057fe38  e88326e9ff           call 0x4124c0
// 0057fe3d  33c0                 xor eax, eax
// 0057fe3f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057fe43  64890d00000000       mov dword ptr fs:[0], ecx
// 0057fe4a  5f                   pop edi
// 0057fe4b  5e                   pop esi
// 0057fe4c  83c410               add esp, 0x10
// 0057fe4f  c3                   ret 
// 0057fe50  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057fe53  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 0057fe56  c1f903               sar ecx, 3
// 0057fe59  3bf9                 cmp edi, ecx
// 0057fe5b  7206                 jb 0x57fe63
// 0057fe5d  ff1590288000         call dword ptr [0x802890]
// 0057fe63  8b560c               mov edx, dword ptr [esi + 0xc]
// 0057fe66  8b04fa               mov eax, dword ptr [edx + edi*8]
// 0057fe69  85c0                 test eax, eax
// 0057fe6b  7500                 jne 0x57fe6d
// 0057fe6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057fe71  5f                   pop edi
// 0057fe72  64890d00000000       mov dword ptr fs:[0], ecx
// 0057fe79  5e                   pop esi
// 0057fe7a  83c410               add esp, 0x10
// 0057fe7d  c3                   ret 
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

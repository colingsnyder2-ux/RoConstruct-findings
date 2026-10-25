// from server: 100% by colin
// roc 2008-06 004a8580  unit: RBX::VHint::?$FactoryProduct::Creator  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a8580
//
// 004a8580  6aff                 push -1
// 004a8582  68b87f7c00           push 0x7c7fb8
// 004a8587  64a100000000         mov eax, dword ptr fs:[0]
// 004a858d  50                   push eax
// 004a858e  64892500000000       mov dword ptr fs:[0], esp
// 004a8595  83ec18               sub esp, 0x18
// 004a8598  53                   push ebx
// 004a8599  55                   push ebp
// 004a859a  56                   push esi
// 004a859b  57                   push edi
// 004a859c  8bf9                 mov edi, ecx
// 004a859e  8d442413             lea eax, [esp + 0x13]
// 004a85a2  50                   push eax
// 004a85a3  8d4c2417             lea ecx, [esp + 0x17]
// 004a85a7  51                   push ecx
// 004a85a8  8bcf                 mov ecx, edi
// 004a85aa  897c2424             mov dword ptr [esp + 0x24], edi
// 004a85ae  e85ddbf9ff           call 0x446110
// 004a85b3  6804109700           push 0x971004
// 004a85b8  68007d4a00           push 0x4a7d00
// 004a85bd  c744243800000000     mov dword ptr [esp + 0x38], 0
// 004a85c5  e866ed0a00           call 0x557330
// 004a85ca  83c408               add esp, 8
// 004a85cd  e8cef6ffff           call 0x4a7ca0
// 004a85d2  8bf0                 mov esi, eax
// 004a85d4  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 004a85d7  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 004a85da  7606                 jbe 0x4a85e2
// 004a85dc  ff1590288000         call dword ptr [0x802890]
// 004a85e2  8b2e                 mov ebp, dword ptr [esi]
// 004a85e4  6804109700           push 0x971004
// 004a85e9  68007d4a00           push 0x4a7d00
// 004a85ee  e83ded0a00           call 0x557330
// 004a85f3  83c408               add esp, 8
// 004a85f6  e8a5f6ffff           call 0x4a7ca0
// 004a85fb  8bf0                 mov esi, eax
// 004a85fd  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a8600  89442414             mov dword ptr [esp + 0x14], eax
// 004a8604  39460c               cmp dword ptr [esi + 0xc], eax
// 004a8607  7606                 jbe 0x4a860f
// 004a8609  ff1590288000         call dword ptr [0x802890]
// 004a860f  8b16                 mov edx, dword ptr [esi]
// 004a8611  89542420             mov dword ptr [esp + 0x20], edx
// 004a8615  85ed                 test ebp, ebp
// 004a8617  7406                 je 0x4a861f
// 004a8619  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 004a861d  740a                 je 0x4a8629
// 004a861f  8b3590288000         mov esi, dword ptr [0x802890]
// 004a8625  ffd6                 call esi
// 004a8627  eb06                 jmp 0x4a862f
// 004a8629  8b3590288000         mov esi, dword ptr [0x802890]
// 004a862f  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 004a8633  7461                 je 0x4a8696
// 004a8635  85ed                 test ebp, ebp
// 004a8637  7553                 jne 0x4a868c
// 004a8639  ffd6                 call esi
// 004a863b  33c0                 xor eax, eax
// 004a863d  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 004a8640  7202                 jb 0x4a8644
// 004a8642  ffd6                 call esi
// 004a8644  8b03                 mov eax, dword ptr [ebx]
// 004a8646  8b771c               mov esi, dword ptr [edi + 0x1c]
// 004a8649  8d4c2418             lea ecx, [esp + 0x18]
// 004a864d  51                   push ecx
// 004a864e  8bcf                 mov ecx, edi
// 004a8650  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a8654  e847be0b00           call 0x5644a0
// 004a8659  8930                 mov dword ptr [eax], esi
// 004a865b  8b471c               mov eax, dword ptr [edi + 0x1c]
// 004a865e  83c9ff               or ecx, 0xffffffff
// 004a8661  85c0                 test eax, eax
// 004a8663  7607                 jbe 0x4a866c
// 004a8665  d1e8                 shr eax, 1
// 004a8667  41                   inc ecx
// 004a8668  85c0                 test eax, eax
// 004a866a  77f9                 ja 0x4a8665
// 004a866c  41                   inc ecx
// 004a866d  894f20               mov dword ptr [edi + 0x20], ecx
// 004a8670  85ed                 test ebp, ebp
// 004a8672  751d                 jne 0x4a8691
// 004a8674  ff1590288000         call dword ptr [0x802890]
// 004a867a  33c0                 xor eax, eax
// 004a867c  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 004a867f  7206                 jb 0x4a8687
// 004a8681  ff1590288000         call dword ptr [0x802890]
// 004a8687  83c304               add ebx, 4
// 004a868a  eb89                 jmp 0x4a8615
// 004a868c  8b4500               mov eax, dword ptr [ebp]
// 004a868f  ebac                 jmp 0x4a863d
// 004a8691  8b4500               mov eax, dword ptr [ebp]
// 004a8694  ebe6                 jmp 0x4a867c
// 004a8696  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004a869a  8bc7                 mov eax, edi
// 004a869c  5f                   pop edi
// 004a869d  5e                   pop esi
// 004a869e  5d                   pop ebp
// 004a869f  5b                   pop ebx
// 004a86a0  64890d00000000       mov dword ptr fs:[0], ecx
// 004a86a7  83c424               add esp, 0x24
// 004a86aa  c3                   ret 

#include <vector>
extern "C" void (__cdecl * const invalid_parameter_noinfo)();

struct Empty {
    Empty();
};

struct Empty2 {
    Empty2();
};

inline Empty::Empty() {}
inline Empty2::Empty2() {}

typedef std::vector<unsigned> Vector;
typedef Vector::iterator Iterator;
extern Vector* __cdecl getValues();
extern void __cdecl ensureInitialized(void (__cdecl*)(), unsigned*);
extern void __cdecl initializeRegistry();
extern unsigned registryGuard;

struct Base {
    unsigned storage[7];
    unsigned count;
    unsigned bits;
struct BothEmpty : Empty, Empty2 { BothEmpty() {} };


    Base(const Empty&, const Empty2&);
    ~Base();
    unsigned* lookup(const unsigned*);
};

struct S : Base {
    S();
};

S::S() : Base(BothEmpty(), BothEmpty())
{
    ensureInitialized(initializeRegistry, &registryGuard);
    Iterator current = getValues()->begin();
    ensureInitialized(initializeRegistry, &registryGuard);
    Iterator end = getValues()->end();
    for (; !(current == end); ++current) {
        unsigned key = *current;
        unsigned value = count;
        *lookup(&key) = value;

        unsigned n = count;
        unsigned result = ~0u;
        while (n > 0) {
            n >>= 1;
            ++result;
        }
        bits = result + 1;
    }
}

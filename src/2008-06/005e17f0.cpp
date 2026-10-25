// from server: 100% by king_originala
// roc 2008-06 005e17f0  unit: RBX::VLighting::?$BoundFuncDesc  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e17f0
//
// 005e17f0  83ec08               sub esp, 8
// 005e17f3  8bc1                 mov eax, ecx
// 005e17f5  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 005e17f8  034c240c             add ecx, dword ptr [esp + 0xc]
// 005e17fc  8b4038               mov eax, dword ptr [eax + 0x38]
// 005e17ff  56                   push esi
// 005e1800  ffd0                 call eax
// 005e1802  dd5c2404             fstp qword ptr [esp + 4]
// 005e1806  e805b5f8ff           call 0x56cd10
// 005e180b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e180f  6a10                 push 0x10
// 005e1811  8901                 mov dword ptr [ecx], eax
// 005e1813  8d7104               lea esi, [ecx + 4]
// 005e1816  e805f10b00           call 0x6a0920
// 005e181b  83c404               add esp, 4
// 005e181e  85c0                 test eax, eax
// 005e1820  740f                 je 0x5e1831
// 005e1822  dd442404             fld qword ptr [esp + 4]
// 005e1826  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 005e182c  dd5808               fstp qword ptr [eax + 8]
// 005e182f  eb02                 jmp 0x5e1833
// 005e1831  33c0                 xor eax, eax
// 005e1833  8d542410             lea edx, [esp + 0x10]
// 005e1837  8bc8                 mov ecx, eax
// 005e1839  3bd6                 cmp edx, esi
// 005e183b  7404                 je 0x5e1841
// 005e183d  8b0e                 mov ecx, dword ptr [esi]
// 005e183f  8906                 mov dword ptr [esi], eax
// 005e1841  5e                   pop esi
// 005e1842  85c9                 test ecx, ecx
// 005e1844  7408                 je 0x5e184e
// 005e1846  8b01                 mov eax, dword ptr [ecx]
// 005e1848  8b10                 mov edx, dword ptr [eax]
// 005e184a  6a01                 push 1
// 005e184c  ffd2                 call edx
// 005e184e  83c408               add esp, 8
// 005e1851  c20800               ret 8

struct Holder;

struct HolderTable {
    void (__thiscall *destroy)(Holder *, unsigned int);
};

struct Holder {
    HolderTable *table;
    unsigned int padding;
    double value;
};

extern HolderTable holderTable;
extern "C" void * __cdecl getType();
extern "C" void * __cdecl allocate(unsigned int);

struct Result {
    void *type;
    Holder *holder;
};

struct Descriptor {
    unsigned char padding[0x38];
    double (__thiscall *getter)(void *);
    int adjustment;

    void evaluate(Holder *object, Result *result);
};

void Descriptor::evaluate(Holder *object, Result *result)
{
    double value = getter((char *)object + adjustment);
    result->type = getType();
    Holder **slot = &result->holder;

    Holder *replacement = (Holder *)allocate(16);
    if (replacement) {
        replacement->table = &holderTable;
        replacement->value = value;
    } else {
        replacement = 0;
    }

    Holder *old = replacement;
    if (&object != slot) {
        old = *slot;
        *slot = replacement;
    }

    if (old)
        old->table->destroy(old, 1);
}

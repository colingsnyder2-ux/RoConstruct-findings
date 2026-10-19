// from server: 59% by colin
// from server: 58% by colin
// roc 2008-06 005796d0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005796d0
//
// 005796d0  6aff                 push -1
// 005796d2  6832097d00           push 0x7d0932
// 005796d7  64a100000000         mov eax, dword ptr fs:[0]
// 005796dd  50                   push eax
// 005796de  64892500000000       mov dword ptr fs:[0], esp
// 005796e5  83ec1c               sub esp, 0x1c
// 005796e8  56                   push esi
// 005796e9  8bf1                 mov esi, ecx
// 005796eb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005796ef  57                   push edi
// 005796f0  e8bb54ffff           call 0x56ebb0
// 005796f5  0fb600               movzx eax, byte ptr [eax]
// 005796f8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005796fc  50                   push eax
// 005796fd  e8ae59ffff           call 0x56f0b0
// 00579702  83ec1c               sub esp, 0x1c
// 00579705  8bcc                 mov ecx, esp
// 00579707  89642460             mov dword ptr [esp + 0x60], esp
// 0057970b  50                   push eax
// 0057970c  ff155c248000         call dword ptr [0x80245c]
// 00579712  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00579716  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0057971e  e88d59ffff           call 0x56f0b0
// 00579723  83ec1c               sub esp, 0x1c
// 00579726  8bcc                 mov ecx, esp
// 00579728  89642478             mov dword ptr [esp + 0x78], esp
// 0057972c  50                   push eax
// 0057972d  ff155c248000         call dword ptr [0x80245c]
// 00579733  8d4c2444             lea ecx, [esp + 0x44]
// 00579737  51                   push ecx
// 00579738  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057973b  034c2474             add ecx, dword ptr [esp + 0x74]
// 0057973f  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00579747  8b5638               mov edx, dword ptr [esi + 0x38]
// 0057974a  ffd2                 call edx
// 0057974c  8bf8                 mov edi, eax
// 0057974e  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00579756  e89536ffff           call 0x56cdf0
// 0057975b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0057975f  8901                 mov dword ptr [ecx], eax
// 00579761  8d7104               lea esi, [ecx + 4]
// 00579764  57                   push edi
// 00579765  8d4c2448             lea ecx, [esp + 0x48]
// 00579769  e8c2dae9ff           call 0x417230
// 0057976e  3bc6                 cmp eax, esi
// 00579770  7408                 je 0x57977a
// 00579772  8b16                 mov edx, dword ptr [esi]
// 00579774  8b08                 mov ecx, dword ptr [eax]
// 00579776  8910                 mov dword ptr [eax], edx
// 00579778  890e                 mov dword ptr [esi], ecx
// 0057977a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0057977e  85c9                 test ecx, ecx
// 00579780  7408                 je 0x57978a
// 00579782  8b01                 mov eax, dword ptr [ecx]
// 00579784  8b10                 mov edx, dword ptr [eax]
// 00579786  6a01                 push 1
// 00579788  ffd2                 call edx
// 0057978a  8d4c2408             lea ecx, [esp + 8]
// 0057978e  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00579796  ff1568248000         call dword ptr [0x802468]
// 0057979c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005797a0  5f                   pop edi
// 005797a1  64890d00000000       mov dword ptr fs:[0], ecx
// 005797a8  5e                   pop esi
// 005797a9  83c428               add esp, 0x28
// 005797ac  c21400               ret 0x14
#include <intrin.h>

struct TypeInfo {};

struct HolderTable {
    void* (__thiscall *destroy)(void*, unsigned int);
};

struct Holder {
    const HolderTable* table;
};

struct String {
    unsigned int data[8];
    String();
    String(const String&);
    ~String();
};

extern const TypeInfo int_type;
extern const TypeInfo float_type;
extern const TypeInfo double_type;
extern const double double_zero;

extern const TypeInfo* get_type(const TypeInfo*);
extern const TypeInfo* get_type2(const TypeInfo*);
extern Holder* make_holder();
extern void* map_find(void*, const void*);

extern "C" void* __stdcall string_ctor(void*, const void*);
extern "C" void __stdcall string_dtor(void*);

struct S {
    unsigned char pad[0x38];
    void* func;
    unsigned int offset;

    void method(int, int, int, int, int);
};

void S::method(int a1, int a2, int a3, int a4, int a5)
{
    const TypeInfo* t1 = get_type(&int_type);
    unsigned char b = *(const unsigned char*)t1;
    const TypeInfo* t2 = get_type2(&int_type);
    _ReadWriteBarrier();
    (void)b;
    (void)t2;

    String s1;
    string_ctor(&s1, t2);

    String s2;
    string_ctor(&s2, t2);

    void* result = ((void* (__thiscall*)(void*, void*))func)((char*)this + offset, &s2);

    Holder* h = make_holder();
    *(void**)h = result;
    void** slot = (void**)((char*)h + 4);

    void* found = map_find(&s1, slot);
    if (found != slot) {
        void* tmp = *slot;
        *(void**)found = tmp;
        *slot = *(void**)found;
    }

    if (s1.data[0] != 0) {
        void* p = (void*)s1.data[0];
        void** vt = *(void***)p;
        ((void (__thiscall*)(void*, int))vt[0])(p, 1);
    }

    string_dtor(&s1);
}

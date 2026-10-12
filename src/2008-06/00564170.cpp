// from server: 100% by king_originala
// roc 2008-06 00564170  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564170
//
// 00564170  83ec08               sub esp, 8
// 00564173  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00564176  8b01                 mov eax, dword ptr [ecx]
// 00564178  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056417c  8b4008               mov eax, dword ptr [eax + 8]
// 0056417f  56                   push esi
// 00564180  52                   push edx
// 00564181  ffd0                 call eax
// 00564183  dd5c2404             fstp qword ptr [esp + 4]
// 00564187  e8848b0000           call 0x56cd10
// 0056418c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00564190  6a10                 push 0x10
// 00564192  8901                 mov dword ptr [ecx], eax
// 00564194  8d7104               lea esi, [ecx + 4]
// 00564197  e884c71300           call 0x6a0920
// 0056419c  83c404               add esp, 4
// 0056419f  85c0                 test eax, eax
// 005641a1  740f                 je 0x5641b2
// 005641a3  dd442404             fld qword ptr [esp + 4]
// 005641a7  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 005641ad  dd5808               fstp qword ptr [eax + 8]
// 005641b0  eb02                 jmp 0x5641b4
// 005641b2  33c0                 xor eax, eax
// 005641b4  8d542410             lea edx, [esp + 0x10]
// 005641b8  8bc8                 mov ecx, eax
// 005641ba  3bd6                 cmp edx, esi
// 005641bc  7404                 je 0x5641c2
// 005641be  8b0e                 mov ecx, dword ptr [esi]
// 005641c0  8906                 mov dword ptr [esi], eax
// 005641c2  5e                   pop esi
// 005641c3  85c9                 test ecx, ecx
// 005641c5  7408                 je 0x5641cf
// 005641c7  8b01                 mov eax, dword ptr [ecx]
// 005641c9  8b10                 mov edx, dword ptr [eax]
// 005641cb  6a01                 push 1
// 005641cd  ffd2                 call edx
// 005641cf  83c408               add esp, 8
// 005641d2  c20800               ret 8

void* __cdecl func_0056cd10();
void* __cdecl operator new(unsigned int);

struct Holder
{
    virtual ~Holder();
    Holder(double);
    double value;
};

inline Holder::Holder(double v)
{
    value = v;
}

struct Getter
{
    virtual void slot0();
    virtual void slot1();
    virtual double get(void*);
};

struct Value
{
    void* type;
    Holder* holder;
};

struct S
{
    char padding[24];
    Getter* getter;
    void func_00564170(void*, Value*);
};

void S::func_00564170(void* object, Value* result)
{
    double value = getter->get(object);
    result->type = func_0056cd10();
    Holder** destination = &result->holder;
    Holder* fresh = new Holder(value);
    Holder* old = fresh;
    if (reinterpret_cast<Holder**>(&object) != destination)
    {
        old = *destination;
        *destination = fresh;
    }
    if (old)
        delete old;
}

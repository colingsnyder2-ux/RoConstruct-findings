// from server: 100% by king_originala
// roc 2008-06 004ae950  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae950
//
// 004ae950  56                   push esi
// 004ae951  57                   push edi
// 004ae952  8bb940010000         mov edi, dword ptr [ecx + 0x140]
// 004ae958  8b37                 mov esi, dword ptr [edi]
// 004ae95a  81c600010000         add esi, 0x100
// 004ae960  e82bfffeff           call 0x49e890
// 004ae965  0fb7805c010000       movzx eax, word ptr [eax + 0x15c]
// 004ae96c  50                   push eax
// 004ae96d  e81efffeff           call 0x49e890
// 004ae972  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 004ae979  51                   push ecx
// 004ae97a  e811fffeff           call 0x49e890
// 004ae97f  8b16                 mov edx, dword ptr [esi]
// 004ae981  db8054010000         fild dword ptr [eax + 0x154]
// 004ae987  83ec08               sub esp, 8
// 004ae98a  8bcf                 mov ecx, edi
// 004ae98c  dd1c24               fstp qword ptr [esp]
// 004ae98f  ffd2                 call edx
// 004ae991  5f                   pop edi
// 004ae992  5e                   pop esi
// 004ae993  c3                   ret 

struct Object;
typedef void (__thiscall *Callback)(Object *, double, unsigned short, unsigned short);

struct Object {
    Callback *vtable;
};

struct Values {
    char padding0[0x154];
    int value;
    unsigned short first;
    char padding1[2];
    unsigned short second;
};

extern "C" Values *__cdecl getValues();

struct S {
    char padding[0x140];
    Object *object;

    void update();
};

void S::update()
{
    Object *target = object;
    Callback *slot = target->vtable + 64;
    (*slot)(target, (double)getValues()->value,
            getValues()->first, getValues()->second);
}

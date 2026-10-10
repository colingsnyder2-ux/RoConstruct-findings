// from server: 17% by colin
// roc 2007-08 004b0360  unit: RBX::Network::VReplicator::?$SignalDesc  size: 298 bytes
// library rbxgs/v8datamodel\DataModel.cpp

struct S {
    char pad[4];
    void* field4;
    void method(int);
};

extern "C" void __cdecl sub_7273F0(void*, void*);
extern "C" void __cdecl sub_729380(void*, void*, void*, void*);
extern "C" void __cdecl sub_729350(void*, void*, void*, void*);
extern "C" void __cdecl sub_5F1980(void*);
extern "C" void __cdecl sub_7272D0(void*);
extern "C" void __cdecl sub_4AF950(void*, void*);

void S::method(int arg)
{
    char local18;
    int local34;
    void* local24;
    void* local58;
    void* local5b;
    void* local98;
    void* local9b;
    void* localbc;
    void* local60;
    void* locala0;

    sub_7273F0(&local24, this);
    local34 = 0;
    local18 = 0;

    void* p = local24;
    void* q = *(void**)this;
    void* r = *(void**)((char*)q + 0x30);

    local60 = &local58;
    void* ebx = &local58;
    void* ebp = p;

    sub_729380((char*)q + 8, &local58, &local5b, &local58);
    sub_729380((char*)ebp + 8, &local58, &local5b, &local58);
    sub_5F1980(ebx);

    locala0 = &local98;
    ebx = &local98;

    sub_729380((char*)q + 8, &local98, &local9b, &local98);
    sub_729350((char*)ebp + 8, &local98, &local9b, &local98);
    sub_5F1980(ebx);

    void* esi = localbc;
    sub_4AF950((char*)r + 4, esi);

    if (local18 != 0)
        local18 = 0;

    local34 = -1;
    sub_7272D0(&local24);
}

// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ArgStorage
{
    int a0;
    int a1;
    int a2;
    int a3;
    int a4;
};

struct FuncDescBase
{
    void* vptr;
    void* field4;
};

struct BoundFuncDesc : FuncDescBase
{
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    char field1C;

    void BoundFuncDesc_construct(ArgStorage* args);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl FuncDesc_ctor(void*, ArgStorage*);
extern "C" void __cdecl BoundFuncDesc_setFunction(void*, void*);
extern "C" void __cdecl BoundFuncDesc_declareSignature(void*);

void BoundFuncDesc::BoundFuncDesc_construct(ArgStorage* args)
{
    this->vptr = 0;
    this->field4 = 0;

    ArgStorage local;
    local.a0 = args->a0;
    local.a1 = args->a1;
    local.a2 = args->a2;
    local.a3 = args->a3;
    local.a4 = args->a4;

    if (local.a4 == 0)
    {
        _InterlockedExchangeAdd((volatile long*)(local.a4 + 4), 1);
    }

    FuncDesc_ctor(&this->field8, &local);

    BoundFuncDesc* alloc = (BoundFuncDesc*)operator_new(0x20);
    if (alloc != 0)
    {
        alloc->field4 = 0;
        alloc->field8 = 0;
        alloc->fieldC = 0;
        alloc->field14 = 0;
        alloc->field18 = 0;
        alloc->field1C = 0;
    }
    else
    {
        alloc = 0;
    }

    BoundFuncDesc_setFunction(this, alloc);
    BoundFuncDesc_declareSignature(this);
}

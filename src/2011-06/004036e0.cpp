// from server: 66% by atomic.potato
extern "C" void* __stdcall sub_00A42DE4(void*, void*, void*);

struct S
{
    S* __cdecl f(void*);
};

S* S::f(void* arg)
{
    sub_00A42DE4(this, (void*)0x00CB381C, 0);
    return this;
}

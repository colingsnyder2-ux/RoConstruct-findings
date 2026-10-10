// from server: 40% by atomic.potato
extern "C" double __cdecl f78a830(double, double);
extern "C" void __cdecl f788d60(void*, double);

int f0079c700(double value, void* state)
{
    f788d60(state, f78a830(1.0, value));
    return 1;
}

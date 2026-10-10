// from server: 82% by atomic.potato
extern "C" double __cdecl rbx_call_78a830(void*, int);
extern "C" void __cdecl rbx_call_788d60(void*, double);

int rbx_function(void* state)
{
    double value = rbx_call_78a830(state, 1);
    rbx_call_788d60(state, value);
    return 1;
}

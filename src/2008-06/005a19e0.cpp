// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// from server: 86% by king_originala
struct Callback {
    void (__cdecl* function)(void*);
    void* argument;
};

void __cdecl invoke(Callback* callback)
{
    void* arg = callback->argument;
    callback->function(arg);
}

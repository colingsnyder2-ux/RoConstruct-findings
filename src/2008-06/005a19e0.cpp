// from server: 86% by king_originala
struct Callback {
    void (__cdecl* function)(void*);
    void* argument;
};

void __cdecl invoke(Callback* callback)
{
    callback->function(callback->argument);
}

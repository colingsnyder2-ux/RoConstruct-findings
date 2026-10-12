// from server: 87% by king_originala
typedef void (__cdecl *Callback)(void*);

void invoke(Callback* callback, void* argument)
{
    (*callback)(argument);
}

// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// from server: 87% by king_originala
typedef void (__cdecl *Callback)(void*);

void invoke(Callback* callback, void* argument)
{
    (*callback)(argument);
}

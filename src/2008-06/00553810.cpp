// from server: 100% by king_originala
typedef void (__thiscall *Callback)(void *);

struct S {
    Callback callback;
    void invoke(void *object);
};

#pragma optimize("", off)
void S::invoke(void *object)
{
    callback(object);
}
#pragma optimize("", on)

// from server: 88% by king_originala
struct S
{
    int value;
    float key;
};

void __cdecl sortThree(S* a, S* b, S* c)
{
    if (a->key > b->key)
    {
        if (b != a)
        {
            S temp = *b;
            *b = *a;
            *a = temp;
        }
    }

    if (b->key > c->key)
    {
        if (c != b)
        {
            S temp = *c;
            *c = *b;
            *b = temp;
        }
    }

    if (a->key > b->key)
    {
        if (b != a)
        {
            S temp = *b;
            *b = *a;
            *a = temp;
        }
    }
}

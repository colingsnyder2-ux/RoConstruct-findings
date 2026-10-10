// from server: 65% by atomic.potato
struct S
{
    S* __cdecl f(void*);
};

S* S::f(void* value)
{
    S* self = this;
    *(int*)((char*)this + 8) = 0;
    self->f(value);
    return self;
}

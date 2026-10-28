// from server: 25% by atomic.potato
struct S {
    char pad0[0x3c];
    int flags;
    virtual void vfunc(int);
};

void S::vfunc(int) {}

void f(S* self, int a, S* other, int b, int c)
{
    if (a == 1) {
        if (!(self->flags & 2)) {
            self->flags |= 2;
            self->vfunc(a);
        }
    }
    if (a == 2) {
        if (!(self->flags & 4)) {
            self->flags |= 4;
            self->vfunc(a);
        }
    }
    if (c == 1) {
        if (!(other->flags & 2)) {
            other->flags |= 2;
            other->vfunc(1);
        }
    }
}

// from server: 45% by atomic.potato
// roc 2009-12 00518270  unit: RBX::VInstance::?$NonFactoryProduct  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00518270

typedef unsigned int DWORD;

struct S {
    DWORD field0;
    DWORD field4;
    DWORD field8;
};

void __fastcall func(S* self, void* dummy, S* first, S* last, void (*fn)(DWORD*, DWORD), DWORD arg);

void __fastcall func(S* self, void* dummy, S* first, S* last, void (*fn)(DWORD*, DWORD), DWORD arg)
{
    S* cur = first;
    while (cur != last) {
        fn(&cur->field8, arg);
        cur = (S*)cur->field0;
    }
    self->field0 = (DWORD)first;
    self->field4 = (DWORD)last;
}

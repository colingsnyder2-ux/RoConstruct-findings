// from server: 100% by king_originala
// roc 2008-06 005fc090  unit: RBX::LocalBackpackItem  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fc090
//
// 005fc090  894c2404             mov dword ptr [esp + 4], ecx
// 005fc094  8b8904010000         mov ecx, dword ptr [ecx + 0x104]
// 005fc09a  e951ffffff           jmp 0x5fbff0

struct S;

struct T
{
    void f(S*);
};

struct S
{
    char padding[0x104];
    T* target;
    void f(S*);
};

void S::f(S*)
{
    target->f(this);
}

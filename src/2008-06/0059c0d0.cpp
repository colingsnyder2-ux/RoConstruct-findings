// from server: 100% by king_originala
// roc 2008-06 0059c0d0  unit: RBX::PartInstance  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c0d0
//
// 0059c0d0  51                   push ecx
// 0059c0d1  81c12cfeffff         add ecx, 0xfffffe2c
// 0059c0d7  8d0424               lea eax, [esp]
// 0059c0da  890c24               mov dword ptr [esp], ecx
// 0059c0dd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059c0e1  50                   push eax
// 0059c0e2  e8b952e8ff           call 0x4213a0
// 0059c0e7  59                   pop ecx
// 0059c0e8  c20400               ret 4

struct S;

struct Listener {
    void notify(S** value);
};

struct S {
    void f(Listener* listener);
};

void S::f(Listener* listener)
{
    S* owner = reinterpret_cast<S*>(reinterpret_cast<char*>(this) - 468);
    listener->notify(&owner);
}

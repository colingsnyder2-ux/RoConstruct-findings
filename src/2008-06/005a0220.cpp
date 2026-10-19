// from server: 71% by colin
// from server: 64% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
struct Target { void run(); };
struct Inner {
    virtual void slot0();
    virtual Target* slot1(int);
};
struct S {
    char padding[0x288];
    Inner inner;
    void f(int);
};
void S::f(int a)
{
    inner.slot1(a)->run();
}

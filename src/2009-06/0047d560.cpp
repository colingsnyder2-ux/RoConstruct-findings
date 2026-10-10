// from server: 69% by why2
struct ManualObject {
    void f();
};

void ManualObject::f() {
    void (*fn)(ManualObject*);
    fn = *(void (**)(ManualObject*))((*(char**)this) + 0x1bc);
    fn(this);
}

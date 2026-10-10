// from server: 77% by why2
struct S {
    bool f();
};

bool S::f() {
    return (*(bool (__thiscall **)(S *))(*(int *)this + 0xe8))(this) != 0;
}

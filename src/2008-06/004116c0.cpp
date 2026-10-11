// from server: 66% by tester
// roc 2008-06 004116c0  unit: CBrush  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004116c0

struct std_exception {
    std_exception(const std_exception&);
};

struct bad_weak_ptr : std_exception {
    bad_weak_ptr(const bad_weak_ptr&);
};

extern "C" void __stdcall sub_802888();
extern "C" void __cdecl sub_6a158c();

struct CBrush {
    void f(const bad_weak_ptr&);
};

void CBrush::f(const bad_weak_ptr& other) {
    bad_weak_ptr copy(other);
    sub_802888();
    *(void**)0x80dfa8 = (void*)0x80dfa8;
    sub_6a158c();
}

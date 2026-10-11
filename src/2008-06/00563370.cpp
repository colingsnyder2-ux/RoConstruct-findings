// from server: 56% by colin
// roc 2008-06 00563370  unit: RBX::ContentProvider  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563370

extern "C" {
    void __stdcall sub_802460(void*);
    void __stdcall sub_802458(const char*);
    void __stdcall sub_80245c(void*);
    void __stdcall sub_802468(void*);
}

struct MyString {
    void* rep;
    MyString();
    MyString(const char*);
    MyString(const MyString&);
    ~MyString();
};

bool __cdecl sub_514190(MyString* a, MyString* b);

struct ContentProvider {
    MyString field0;
    MyString field4;
    MyString getSystemProductName();
};

MyString ContentProvider::getSystemProductName() {
    MyString local1;
    MyString local2;
    bool ok = sub_514190(&local1, &local2);
    if (ok) {
        sub_80245c(&local1);
    } else {
        sub_802458("Shadows");
    }
    return local1;
}

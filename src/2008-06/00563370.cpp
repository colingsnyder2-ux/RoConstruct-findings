// from server: 59% by tester
// roc 2008-06 00563370  unit: RBX::ContentProvider  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563370

struct MyString {
    void* rep;
    MyString();
    MyString(const char*);
    MyString(const MyString&);
    ~MyString();
};

extern "C" void __stdcall sub_802460(MyString*);
extern "C" void __stdcall sub_802458(MyString*, const char*);
extern "C" void __stdcall sub_80245c(MyString*, const MyString*);
extern "C" void __stdcall sub_802468(MyString*);

extern "C" bool __cdecl sub_514190(MyString*, MyString*);

struct ContentProvider {
    MyString getSystemProductName();
};

MyString ContentProvider::getSystemProductName() {
    MyString local1;
    sub_802460(&local1);
    MyString local2;
    sub_802458(&local2, "HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\BIOS\\SystemProductName");
    bool ok = sub_514190(&local2, &local1);
    sub_802468(&local2);
    MyString result;
    if (ok) {
        sub_80245c(&result, &local1);
    } else {
        sub_802458(&result, "Shadows");
    }
    sub_802468(&local1);
    return result;
}

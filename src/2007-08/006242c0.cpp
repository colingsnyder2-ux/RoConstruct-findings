// from server: 44% by colin
// roc 2007-08 006242c0  unit: RBX::ArrowButton  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006242c0

extern "C" {
    void __stdcall sub_77E460();
    void __stdcall sub_77E5E4();
    void __stdcall sub_77E5E0();
    void __stdcall sub_77E434();
    void __stdcall sub_77E4FC();
}

struct StringIter {
    void* p;
};

struct MyString {
    char pad[0x1c];
    void begin(StringIter* out);
    void end(StringIter* out);
    void erase(StringIter* out, StringIter first, StringIter last);
};

struct Locale {
    void _Incref();
    void dtor();
};

struct ArrowButton {
    void func(int a, int b);
};

void __stdcall helper_6241c0(void* out, int a, int b, int c, int d);

void ArrowButton::func(int a, int b)
{
    Locale loc;
    StringIter first;
    StringIter last;
    StringIter result;
    MyString* str = (MyString*)((char*)this + 0x4c);
    str->begin(&first);
    str->end(&last);
    helper_6241c0(&result, *(int*)&first, *(int*)&last, a, b);
    str->erase(&result, first, last);
    loc.dtor();
}

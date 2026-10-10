// from server: 44% by colin
struct String_sink {
    void* vtable;
    void* s;
    String_sink(void* s);
};

extern "C" void __stdcall basic_string_ctor(void* self, const char* str);
extern "C" void __stdcall basic_string_dtor(void* self);

void* __stdcall sub_412dc0(void* self, void* arg);

String_sink::String_sink(void* s) {
    char buf[28];
    basic_string_ctor(buf, "no write access");
    sub_412dc0(this, buf);
    this->vtable = (void*)0x7a783c;
    basic_string_dtor(buf);
}

// from server: 35% by colin
struct S {
    void f(unsigned int value);
};

extern "C" {
    void* __stdcall end_impl(void*);
    void __stdcall insert_impl(void*, void*, const char*, const char*);
}

void S::f(unsigned int value)
{
    char* p = (char*)this;
    char buf[8];
    char c;

    c = (char)value;
    end_impl(*(void**)p);
    insert_impl(*(void**)p, buf, &c, &c + 1);

    c = (char)(value >> 8);
    end_impl(*(void**)p);
    insert_impl(*(void**)p, buf, &c, &c + 1);

    c = (char)(value >> 16);
    end_impl(*(void**)p);
    insert_impl(*(void**)p, buf, &c, &c + 1);

    c = (char)(value >> 24);
    end_impl(*(void**)p);
    insert_impl(*(void**)p, buf, &c, &c + 1);
}

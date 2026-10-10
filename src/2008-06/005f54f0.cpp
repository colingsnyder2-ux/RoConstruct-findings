// from server: 47% by tester
struct String {
    void end(void*);
    void insert(void*, const char*, const char*);
};

void func_005f54f0(int value, String* str)
{
    char buf[8];
    char c;

    c = (char)value;
    str->end(buf);
    str->insert(*(void**)buf, &c, &c + 1);

    c = (char)(value >> 8);
    str->end(buf);
    str->insert(*(void**)buf, &c, &c + 1);

    c = (char)(value >> 16);
    str->end(buf);
    str->insert(*(void**)buf, &c, &c + 1);

    c = (char)(value >> 24);
    str->end(buf);
    str->insert(*(void**)buf, &c, &c + 1);
}

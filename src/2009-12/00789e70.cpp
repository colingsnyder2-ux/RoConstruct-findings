// from server: 56% by atomic.potato
extern "C" void* __cdecl strchr(const char*, int);

void __cdecl sub_7887B0(void*, int);
void __cdecl sub_788800(void*, int);
void __cdecl sub_788960(void*, int);
int  __cdecl sub_788990(void*, int);
void __cdecl sub_788DA0(void*, const char*, int);
void __cdecl sub_789050(void*, int);
void __cdecl sub_7890D0(void*, int, int);
void __cdecl sub_789200(void*, int);

struct UniversalTool {
    char pad[8];
    int __cdecl f(int a, const char* b);
};

int UniversalTool::f(int a, const char* b) {
    sub_788960(this, a);
    const char* p = b;
    for (;;) {
        char* dot = (char*)strchr(p, '.');
        char* end;
        if (dot == 0) {
            const char* q = p;
            while (*q) q++;
            end = (char*)q;
        } else {
            end = dot;
        }
        int len = (int)(end - p);
        sub_788DA0(this, p, len);
        sub_789050(this, -2);
        if (sub_788990(this, -1) == 0) {
            sub_7887B0(this, -2);
            int flag = (*end == '.') ? 1 : a;
            sub_7890D0(this, 0, flag);
            sub_788DA0(this, p, len);
            sub_788960(this, -2);
            sub_789200(this, -4);
        } else {
            if (sub_788990(this, -1) != 5)
                return (int)p;
            sub_788800(this, -2);
            if (*end != '.')
                return 0;
            p = end + 1;
            continue;
        }
        sub_788800(this, -2);
        if (*end != '.')
            return 0;
        p = end + 1;
    }
}

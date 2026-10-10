// from server: 53% by colin
struct S {
    char* f(char* first, char* last, int value);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int __cdecl sub_4891B0(char* out, char* a, char* b);
extern "C" int __cdecl sub_4893C0(char* a, char* b, int c, char* d, char* e);
extern "C" void __cdecl sub_62FC62(void* p);

char* S::f(char* first, char* last, int value)
{
    char* result = first;
    if (first != last) {
        char local;
        do {
            local = *first;
            int* p = (int*)sub_4891B0(&local, first, (char*)&value);
            if (*p != 0) {
                if (*p != (int)&local) {
                    _invalid_parameter_noinfo();
                }
            } else {
                _invalid_parameter_noinfo();
            }
            if (p[1] == value) {
                ++first;
            } else {
                break;
            }
        } while (first != last);
    }
    char* tmp = result;
    sub_4893C0((char*)&tmp, (char*)&tmp, *(int*)tmp, (char*)&tmp, (char*)&tmp);
    sub_62FC62(tmp);
    return first;
}

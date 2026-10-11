// from server: 36% by colin
struct S_func_00501650 {
    int f();
};

extern "C" int __stdcall sub_00509b10(int, const char*, int);
extern "C" char __stdcall sub_00513f50(int*);
extern "C" void __stdcall sub_00802468(int*);

int S_func_00501650::f()
{
    int count = 0;
    int str[8];
    sub_00509b10((int)str, "HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\%d", 0);
    if (sub_00513f50(str)) {
        do {
            count++;
            sub_00802468(str);
            sub_00509b10((int)str, "HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\%d", count);
        } while (sub_00513f50(str));
    }
    sub_00802468(str);
    return count;
}

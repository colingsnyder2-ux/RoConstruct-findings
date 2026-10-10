// from server: 55% by tester
extern "C" int __cdecl sub_0067F2E0(const char*);

int g_00692880_0;
int g_00692880_1;

int f_00692880()
{
    __try {
        if ((g_00692880_1 & 1) == 0) {
            g_00692880_1 |= 1;
            g_00692880_0 = sub_0067F2E0("333?Unknown error.");
        }
    } __except (1) {
    }
    return g_00692880_0;
}

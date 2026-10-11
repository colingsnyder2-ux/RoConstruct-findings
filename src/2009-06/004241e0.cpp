// from server: 68% by atomic.potato
extern "C" int __cdecl sub_422DE0(int, int);
extern "C" int __cdecl sub_423E90(int, int, int, int, int, int);

struct MainLogManager {
};

int __cdecl sub_4241E0(int a, int b) {
    int ecx = b;
    int eax = *(int*)ecx;
    int edx = *(int*)(eax + 4);
    int esi = ((int (__thiscall*)(int))edx)(ecx);
    sub_422DE0(1, esi);
    int eax2 = a;
    sub_423E90(eax2, esi, 0, 0, 0x8F1280, 0);
    return eax2;
}

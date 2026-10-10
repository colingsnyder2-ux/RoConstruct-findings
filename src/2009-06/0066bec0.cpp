// from server: 73% by why2
struct Humanoid {
    char pad[0x13c];
    int isSomething();
    int check();
};

int Humanoid::check()
{
    return isSomething() != 0;
}

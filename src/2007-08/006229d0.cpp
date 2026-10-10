// from server: 76% by colin
struct ScoreHud {
    char pad[0x108];
    int f();
};

extern "C" void __cdecl sub_555c70();

int ScoreHud::f()
{
    sub_555c70();
    *(float*)((char*)this + 0xf4) = *(float*)0x796468;
    *(int*)((char*)this + 0x00) = 0x7c4584;
    *(int*)((char*)this + 0x04) = 0x7c457c;
    *(int*)((char*)this + 0x10) = 0x7c4574;
    *(int*)((char*)this + 0x14) = 0x7c4564;
    *(int*)((char*)this + 0x2c) = 0x7c4554;
    *(int*)((char*)this + 0x44) = 0x7c4544;
    *(int*)((char*)this + 0x5c) = 0x7c4534;
    *(int*)((char*)this + 0x74) = 0x7c4524;
    *(int*)((char*)this + 0x8c) = 0x7c4514;
    *(int*)((char*)this + 0xe8) = 0x7c450c;
    *(int*)((char*)this + 0xfc) = 0;
    *(float*)((char*)this + 0xf8) = *(float*)0x78fef0;
    *(int*)((char*)this + 0x100) = 0;
    return (int)this;
}

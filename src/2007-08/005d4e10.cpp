// from server: 44% by colin
struct S {
    char pad[0xf4];
    float f4;
    float f8;
    S(float a, float b);
};

extern "C" void __fastcall sub_555c70(void*);

S::S(float a, float b)
{
    sub_555c70(this);
    *(int*)((char*)this + 0x00) = 0x7bb934;
    *(int*)((char*)this + 0x04) = 0x7bb92c;
    *(int*)((char*)this + 0x10) = 0x7bb924;
    *(int*)((char*)this + 0x14) = 0x7bb914;
    *(int*)((char*)this + 0x2c) = 0x7bb904;
    *(int*)((char*)this + 0x44) = 0x7bb8f4;
    *(int*)((char*)this + 0x5c) = 0x7bb8e4;
    *(int*)((char*)this + 0x74) = 0x7bb8d4;
    *(int*)((char*)this + 0x8c) = 0x7bb8c4;
    *(int*)((char*)this + 0xe8) = 0x7bb8bc;
    *(float*)((char*)this + 0xf4) = a;
    *(float*)((char*)this + 0xf8) = b;
}

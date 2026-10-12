// from server: 86% by colin
// roc 2008-06 005b9840  unit: RBX::Soundscape::SoundChannel  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b9840

extern "C" int __cdecl sub_69FBF4(int, int);
extern "C" void __cdecl sub_5B87A0(int);
extern "C" void __cdecl sub_456E80(int);

struct SoundChannel {
    char pad[0x134];
    int field_134;
    int field_138;
    int field_13C;
    void method(int, int);
};

void SoundChannel::method(int, int)
{
    if (field_13C) {
        sub_5B87A0(sub_69FBF4(field_13C, 0));
        field_13C = 0;
    }
    if (field_134) {
        field_134 -= 1;
        sub_456E80((int)&field_134);
    }
}

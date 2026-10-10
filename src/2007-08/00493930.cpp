// from server: 42% by colin
// roc 2007-08 00493930  unit: RBX::Network::VPlayers::Notifier  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493930

struct Notifier {
    char pad0[8];
    void* field8;
    char padC[0x18];
    void* field24;
    void* field28;
    void* field2C;
    Notifier();
};

extern "C" void __stdcall sub_77e6a4(void*);
extern "C" void* __fastcall sub_545c80(void*);

Notifier::Notifier()
{
    sub_77e6a4(&this->field8);
    this->field24 = sub_545c80(&this->field24);
    this->field28 = 0;
}

// from server: 85% by colin
struct Contact {
    char pad[0x2c];
};

struct BallBallContact {
    char pad[0x2c];
    Contact* field_2c;
    void deleteAllConnectors();
};

extern "C" void __cdecl sub_5cda80(Contact*);

void BallBallContact::deleteAllConnectors() {
    sub_5cda80(field_2c);
}

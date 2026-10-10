// from server: 22% by colin
struct Message {
    void construct(int);
};

struct Hint : Message {
    void construct(int);
    int field_0c;
};

void Message::construct(int) {}

void Hint::construct(int arg) {
    Message::construct(arg);
    field_0c = 0;
    *(int*)((char*)this + 0x0c) = 0;
    *(int*)((char*)this + 0x00) = 0x7bfee4;
    *(int*)((char*)this + 0x04) = 0x7bfedc;
    *(int*)((char*)this + 0x10) = 0x7bfed4;
    *(int*)((char*)this + 0x14) = 0x7bfec4;
    *(int*)((char*)this + 0x2c) = 0x7bfeb4;
    *(int*)((char*)this + 0x44) = 0x7bfea4;
    *(int*)((char*)this + 0x5c) = 0x7bfe94;
    *(int*)((char*)this + 0x74) = 0x7bfe84;
    *(int*)((char*)this + 0x8c) = 0x7bfe74;
    *(int*)((char*)this + 0x0c) = 0;
}

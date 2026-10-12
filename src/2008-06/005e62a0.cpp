// from server: 64% by atomic.potato
struct Clump {
    char pad0[0x14];
    unsigned char flag14;
    char pad1[0x3f];
    unsigned char flag54;
    char pad2[0x14];
    unsigned char flag69;
    char pad3[0x0c];
    Clump* next;

    void setFlags();
};

void Clump::setFlags()
{
    unsigned char one = 1;
    flag14 = one;
    flag54 = one;
    flag69 = one;

    Clump* node = next;
    while (node) {
        node->flag14 = one;
        node->flag54 = one;
        node->flag69 = one;
        node = node->next;
    }
}

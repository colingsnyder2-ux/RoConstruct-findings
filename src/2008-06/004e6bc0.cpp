// from server: 67% by king_originala
struct PartChunk {
    void update(unsigned int key);
    void updateFirst();
    void updateSecond();
};

void PartChunk::update(unsigned int key)
{
    if (key == 0x0097B57C) {
        updateSecond();
    } else if (key == 0x00975F14 ||
               key == 0x00975EF8 ||
               key == 0x00975F30) {
        updateFirst();
    } else if (key == 0x00975F68 ||
               key == 0x00975F4C) {
        updateSecond();
    }
}

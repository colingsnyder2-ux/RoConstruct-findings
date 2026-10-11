// from server: 97% by atomic.potato
struct VTouchTransmitter {
    char pad0[4];
    char* begin;
    char* end;
    void insert(char* pos, int count, char* val);

    void FactoryProduct(char** out, char* pos, char* val);
};

void VTouchTransmitter::FactoryProduct(char** out, char* pos, char* val) {
    char* first = this->begin;
    int n = (int)((this->end - first) / 24);
    int idx;
    if (n == 0) {
        idx = 0;
    } else {
        idx = (int)((pos - first) / 24);
    }
    insert(pos, 1, val);
    char* b = this->begin;
    *out = b + idx * 24;
}

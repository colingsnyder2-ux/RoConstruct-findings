// from server: 23% by atomic.potato
struct Mesh {
    unsigned int begin;
    unsigned int end;
    bool contains(unsigned int value);
};

bool Mesh::contains(unsigned int value) {
    bool result;
    if (value >= this->begin && value < this->begin + this->end * 8) {
        result = true;
    } else {
        result = false;
    }
    return result;
}

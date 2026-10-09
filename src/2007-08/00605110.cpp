// from server: 75% by colin
// roc 2007-08 00605110  unit: RBX::SleepStage  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605110

extern "C" {
    void __stdcall _invalid_parameter_noinfo();
    int __cdecl memmove_s(void* dest, unsigned int destSize, const void* src, unsigned int count);
}

struct SleepStage {
    char pad[0x78];
    int* begin;
    int* end;
    void remove(int value);
};

void SleepStage::remove(int value) {
    int* first = this->begin;
    int* last = this->end;
    if (first > last) {
        _invalid_parameter_noinfo();
    }
    int* p = this->begin;
    if (p > this->end) {
        _invalid_parameter_noinfo();
    }
    int* found = p;
    while (found != last) {
        if (*found == value) {
            break;
        }
        ++found;
    }
    int* next = found + 1;
    int count = (int)((this->end - next) >> 2);
    if (count > 0) {
        memmove_s(found, count * 4, next, count * 4);
    }
    this->end -= 1;
}

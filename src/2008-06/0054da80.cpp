// from server: 64% by king_originala
#pragma optimize("", off)

struct S {
    unsigned int reserved[3];
    int* first;
    int* last;
    int* limit;

    bool allocate(unsigned int count);
    int* fill(int* destination, unsigned int count, const int& value);
    bool assign(unsigned int count, const int& value);
};

bool S::assign(unsigned int count, const int& value)
{
    if (allocate(count)) {
        try {
            last = fill(first, count, value);
        }
        catch (...) {
            return false;
        }
        return true;
    }
    return false;
}

// from server: 33% by colin
// roc 2007-08 00620260  unit: RBX::ScoreHud  size: 228 bytes
// Reconstructed: vector-like insert with range fill.

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Elem { int v[4]; };

struct Vec {
    Elem* first;
    Elem* last;
    Elem* end;

    void insert(Elem* pos, unsigned int count, const Elem& val);
    void fill(Elem* pos, unsigned int count, const Elem& val);
    void grow(Elem* pos, unsigned int count, const Elem& val);
};

void Vec::insert(Elem* pos, unsigned int count, const Elem& val)
{
    unsigned int have;
    if (this->first == 0)
        have = 0;
    else
        have = (unsigned int)((this->last - this->first) >> 4);

    if (have >= count) {
        if (this->first == 0)
            return;
        Elem* last = this->last;
        unsigned int avail = (unsigned int)((last - this->first) >> 4);
        if (count >= avail)
            return;
        if (this->first > last)
            _invalid_parameter_noinfo();
        Elem* p = this->first;
        if (p > this->last)
            _invalid_parameter_noinfo();
        Elem* dest = p + count;
        if (dest > this->last || dest < this->first)
            _invalid_parameter_noinfo();
        this->fill(dest, (unsigned int)((this->last - dest) >> 4), val);
        this->grow(pos, count, val);
    } else {
        if (this->first == 0)
            return;
        unsigned int cur = (unsigned int)((this->last - this->first) >> 4);
        Elem* last = this->last;
        if (this->first > last)
            _invalid_parameter_noinfo();
        Elem* p = this->first;
        if (p > this->last)
            _invalid_parameter_noinfo();
        this->fill(p + cur, count - cur, val);
    }
}

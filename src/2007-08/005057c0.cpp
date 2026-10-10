// from server: 56% by colin
struct Log {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    void sub_505790(int, int, int);
    Log* copyTo(Log* other, int a, int b);
};

Log* Log::copyTo(Log* other, int a, int b) {
    int count;
    int i;
    int src;
    int dst;
    unsigned char v;

    this->sub_505790(this->f8, this->fc, 4);
    count = this->f8 * this->fc;
    i = 0;
    if (count > 0) {
        do {
            src = this->f10 * i;
            v = *(unsigned char*)(this->f4 + src);
            *(unsigned char*)(other->f4 + i * 4) = v;

            src = this->f10 * i;
            v = *(unsigned char*)(this->f4 + src + 1);
            *(unsigned char*)(other->f4 + i * 4 + 1) = v;

            src = this->f10 * i;
            v = *(unsigned char*)(this->f4 + src + 2);
            *(unsigned char*)(other->f4 + i * 4 + 2) = v;

            src = a * i;
            v = *(unsigned char*)(b + src);
            *(unsigned char*)(other->f4 + i * 4 + 3) = v;

            count = this->f8 * this->fc;
            i++;
        } while (i < count);
    }
    return other;
}

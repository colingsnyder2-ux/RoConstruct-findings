// from server: 26% by colin
struct Bucket {
    int compare(const Bucket& other) const;
};

int Bucket::compare(const Bucket& other) const {
    int a = *(const int*)this;
    int b = *(const int*)&other;
    return (a < b) ? 1 : 0;
}

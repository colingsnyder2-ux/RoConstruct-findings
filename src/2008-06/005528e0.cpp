// from server: 13% by colin
struct Inner {
    char pad[0x18];
    int count;
    int getCount();
    void setAt(int, int*);
    int* at(int);
};

struct Outer {
    int f(int, int);
};

int Inner::getCount() {
    return count;
}

void Inner::setAt(int idx, int* val) {
    at(idx)[0] = *val;
}

int* Inner::at(int idx) {
    return (int*)((char*)this + idx * 4);
}

int Outer::f(int a, int b) {
    int result = 1;
    while (result) {
        Inner* inner = (Inner*)((char*)&b + 0xc);
        int c = inner->getCount();
        if (c != *(int*)((char*)&b + 0x24)) {
            inner->setAt(c, &a);
            *(int*)((char*)&b + 0x24) = *(int*)((char*)&b + 0x24) + 1;
            return 1;
        }
        int* p = inner->at(*(int*)((char*)&b + 0x24));
        int saved = *p;
        int r = this->f(saved, b);
        if (r == b) {
            *(int*)((char*)&b + 0x24) = *(int*)((char*)&b + 0x24) + 1;
        } else {
            inner->at(*(int*)((char*)&b + 0x24))[0] = a;
            result = this->f(saved, r) + 1;
        }
    }
    return result;
}

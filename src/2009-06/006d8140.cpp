// from server: 97% by colin
struct Joint {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void* getPoint(int);
};

struct MultiJoint : Joint {
    void* findPoint();
};

void* MultiJoint::findPoint()
{
    int i = 0;
    while (i < 2) {
        void* p = getPoint(i);
        if (p && *(void**)((char*)p + 0x24) == this)
            return p;
        ++i;
    }
    return 0;
}

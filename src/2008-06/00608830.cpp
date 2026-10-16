// from server: 69% by colin
struct Extents {
    float lowX;
    float lowY;
    float lowZ;
    float highX;
    float highY;
    float highZ;
    bool overlapsOrTouches(const Extents& other) const;
};

struct Contact {
    virtual void slot0();
    virtual int kind();
    bool computeIsColliding(float overlapIgnored);
    bool stepContact();
    void deleteAllConnectors();
    int numConnectors() const;
    void* getConnector(int i);
};

struct BlockBlockContact : public Contact {
    char pad[0x54 - sizeof(Contact)];
    float overlapIgnored;
    bool computeIsColliding(float overlapIgnored);
    bool stepContact();
    bool computeIsCollidingInternal(float overlapIgnored);
    void generateDataForMovingAssemblyStage();
};

extern float g_float_81c3b8;
extern float g_float_82d030;

bool BlockBlockContact::stepContact() {
    Extents* e0 = (Extents*)((char*)this + 0xc);
    Extents* e1 = (Extents*)((char*)this + 0x10);
    if (e0->overlapsOrTouches(*e1)) {
        if (this->computeIsCollidingInternal(0.0f)) {
            this->overlapIgnored = g_float_81c3b8;
        } else {
            this->overlapIgnored = g_float_82d030;
        }
    } else {
        this->overlapIgnored = g_float_82d030;
    }
    this->generateDataForMovingAssemblyStage();
    return this->overlapIgnored >= 0.0f;
}

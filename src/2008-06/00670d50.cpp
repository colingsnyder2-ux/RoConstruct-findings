// from server: 57% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct ParticleSystem;
struct Emitter;
extern unsigned int (__thiscall *getParticleQuota)(const ParticleSystem *);
extern Emitter *(__thiscall *getEmitter)(const ParticleSystem *, unsigned short);
extern void (__thiscall *setParticleQuota)(ParticleSystem *, unsigned int);

extern "C" double __cdecl pow(double, double);
#pragma intrinsic(pow)
#pragma float_control(precise, off)

extern const double scaleExponent;
extern const float scaleOrigin;
extern const float scaleMultiplier;

#define SLOT(N) virtual void slot##N()
#define TEN(A,B,C,D,E,F,G,H,I,J) \
    SLOT(A); SLOT(B); SLOT(C); SLOT(D); SLOT(E); \
    SLOT(F); SLOT(G); SLOT(H); SLOT(I); SLOT(J)

struct Emitter {
    TEN(0,1,2,3,4,5,6,7,8,9);
    SLOT(10); SLOT(11); SLOT(12); SLOT(13);
    SLOT(14); SLOT(15); SLOT(16); SLOT(17);
    virtual void setFirst(float);
    virtual void setSecond(float);
    SLOT(20);
    virtual float getFirst();
    virtual float getSecond();
    TEN(23,24,25,26,27,28,29,30,31,32);
    TEN(33,34,35,36,37,38,39,40,41,42);
    SLOT(43); SLOT(44); SLOT(45); SLOT(46);
    virtual float getThird();
    virtual void setThird(float);
    virtual void setFourth(float);
};

struct ParticleSystem {
    void *table;
};

struct Object {
    TEN(0,1,2,3,4,5,6,7,8,9);
    TEN(10,11,12,13,14,15,16,17,18,19);
    TEN(20,21,22,23,24,25,26,27,28,29);
    TEN(30,31,32,33,34,35,36,37,38,39);
    TEN(40,41,42,43,44,45,46,47,48,49);
    TEN(50,51,52,53,54,55,56,57,58,59);
    TEN(60,61,62,63,64,65,66,67,68,69);
    SLOT(70); SLOT(71); SLOT(72); SLOT(73); SLOT(74);
    SLOT(75); SLOT(76); SLOT(77); SLOT(78);
    virtual char *query(int);
};
#undef TEN
#undef SLOT

struct Node {
    Node *next;
    char padding[36];
    Object *object;
};

struct Owner {
    Owner *container;
    char padding[20];
    Node *head;
};

struct Iterator {
    Owner *owner;
    Node *node;
    void next();
};

struct S {
    char padding0[68];
    int total;
    char padding1[112];
    Owner *firstOwner;
    char padding2[20];
    Node *firstHead;
    char padding3[32];
    Owner *secondOwner;
    char padding4[20];
    Node *secondHead;

    unsigned int measure();
    void update();
};

#define CHECK_ITERATOR(O,H) \
    Owner *owner = it.owner; \
    Node *node = it.node; \
    Node *end = (H); \
    Owner *expected = (O); \
    if (!owner || owner != expected) invalid_parameter_noinfo(); \
    if (node == end) break

#define FETCH_SYSTEM(P) \
    if (!owner) invalid_parameter_noinfo(); \
    else owner = owner->container; \
    if (node == owner->head) invalid_parameter_noinfo(); \
    char *queried = node->object->query(0); \
    ParticleSystem *P = queried ? (ParticleSystem *)(queried - 32) : 0

void S::update()
{
    unsigned int value = measure();
    int limit = 10000;
    if (value < 60000000)
        limit = 5000;
    else if (value > 300000000)
        limit = 12000;

    total = 0;

    Iterator it;
    it.node = firstHead->next;
    it.owner = firstOwner;
    for (;;) {
        CHECK_ITERATOR(firstOwner, firstHead);
        FETCH_SYSTEM(system);
        total += getParticleQuota(system);
        it.next();
    }

    it.node = secondHead->next;
    it.owner = secondOwner;
    for (;;) {
        CHECK_ITERATOR(secondOwner, secondHead);
        FETCH_SYSTEM(system);
        total += getParticleQuota(system);
        it.next();
    }

    int count = total;
    if (count > limit) {
        float ratio = (float)limit / count;

        it.node = firstHead->next;
        it.owner = firstOwner;
        for (;;) {
            CHECK_ITERATOR(firstOwner, firstHead);
            FETCH_SYSTEM(system);

            Emitter *emitter = getEmitter(system, 0);
            int quota = getParticleQuota(system);
            float first = emitter->getFirst();
            float second = emitter->getSecond();
            float third = emitter->getThird();

            setParticleQuota(system, (unsigned int)(quota * ratio));

            float scale = (float)pow(ratio, scaleExponent);
            emitter->setFirst(scale * first);
            emitter->setSecond(scale * second);
            third += (ratio - scaleOrigin) * scaleMultiplier;
            emitter->setThird(third);
            emitter->setFourth(third);

            it.next();
        }

        it.node = secondHead->next;
        it.owner = secondOwner;
        for (;;) {
            CHECK_ITERATOR(secondOwner, secondHead);
            FETCH_SYSTEM(system);
            getEmitter(system, 0);
            setParticleQuota(system, 1);
            it.next();
        }

        total = limit;
    }
}

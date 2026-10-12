// from server: 78% by king_originala
struct Ring {
    unsigned int head;
    unsigned int tail;
    unsigned int capacity;
};

struct Item {
    char padding[12];
    unsigned int size;
};

struct Node {
    char paddingBeforeSize[4];
    unsigned int size;
    char paddingBeforeNext[256];
    Node* next;
};

struct S {
    char paddingBeforeQueue[16];
    Ring queue;
    char paddingBeforeCounter[4];
    unsigned int counter;
    char paddingBeforeNodes[44];
    Node* nodes;
    char paddingBeforeRings[20];
    Ring primary;
    char paddingAfterPrimary[4];
    Ring secondary;
    char paddingAfterSecondary[4];
    Ring tertiary;
    char paddingAfterTertiary[4];
    Ring quaternary;
    Item** items;
    unsigned int itemCount;
    char paddingBeforeStatistics[820];
    unsigned int primaryCount;
    unsigned int secondaryCount;
    unsigned int tertiaryCount;
    unsigned int quaternaryCount;
    char paddingBeforeCounterCopy[56];
    unsigned int counterCopy;
    char paddingBeforeNodeTotal[20];
    unsigned int nodeTotal;
    char paddingBeforeItemTotal[76];
    unsigned int itemTotal;
    unsigned int queueCount;
    double rate;
    char paddingBeforeExpired[4];
    bool expired;
    char paddingBeforeStart[3];
    __int64 start;
    unsigned int samples;
    char paddingBeforeCurrent[28];
    __int64 current;
    char paddingBeforeEnabled[44];
    bool enabled;
    char paddingBeforeTimestamp[3];
    __int64 timestamp;

    unsigned int* f();
};

unsigned int* S::f()
{
    primaryCount = primary.head <= primary.tail
        ? primary.tail - primary.head
        : primary.capacity - primary.head + primary.tail;

    secondaryCount = secondary.head <= secondary.tail
        ? secondary.tail - secondary.head
        : secondary.capacity - secondary.head + secondary.tail;

    tertiaryCount = tertiary.head <= tertiary.tail
        ? tertiary.tail - tertiary.head
        : tertiary.capacity - tertiary.head + tertiary.tail;

    quaternaryCount = quaternary.head <= quaternary.tail
        ? quaternary.tail - quaternary.head
        : quaternary.capacity - quaternary.head + quaternary.tail;

    counterCopy = counter;
    __int64 now = current;
    __int64 beginning = start;

    if (now > beginning && samples > 0)
        rate = double(samples) / (double(now - beginning) * 0.000001);
    else
        rate = 0.0;

    itemTotal = 0;
    if (itemCount > 0) {
        Item** p = items;
        unsigned int i = 0;
        do {
            itemTotal += (*p)->size;
            ++i;
            ++p;
        } while (i < itemCount);
    }

    queueCount = queue.head <= queue.tail
        ? queue.tail - queue.head
        : queue.capacity - queue.head + queue.tail;

    expired = enabled && now - timestamp > 1000000;

    unsigned int total = 0;
    Node* p = nodes;
    while (p) {
        total += p->size;
        p = p->next;
    }
    nodeTotal = total;
    return &primaryCount;
}

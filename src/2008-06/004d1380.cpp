// from server: 93% by king_originala
extern const double timeScale;

struct Item
{
    char padding[12];
    unsigned count;
};

struct Node
{
    unsigned unused;
    unsigned count;
    char padding[256];
    Node* next;
};

struct S
{
    char p000[16];
    unsigned begin0, end0, capacity0;
    char p01c[4];
    unsigned count20;
    char p024[44];
    Node* head;
    char p054[20];
    unsigned begin1, end1, capacity1;
    char p074[4];
    unsigned begin2, end2, capacity2;
    char p084[4];
    unsigned begin3, end3, capacity3;
    char p094[4];
    unsigned begin4, end4, capacity4;
    Item** items;
    unsigned itemCount;
    char p0ac[820];
    volatile unsigned result1, result2, result3, result4;
    char p3f0[56];
    unsigned result20;
    char p42c[20];
    unsigned nodeCount;
    char p444[76];
    unsigned totalCount;
    unsigned result0;
    double rate;
    char p4a0[4];
    bool expired;
    char p4a5[3];
    __int64 previous;
    unsigned samples;
    char p4b4[28];
    __int64 current;
    char p4d8[44];
    bool enabled;
    char p505[3];
    __int64 started;

    unsigned* f();
};

unsigned* S::f()
{
    unsigned end = end1;
    unsigned begin = begin1;
    result1 = begin <= end
        ? end - begin : capacity1 - begin + end;

    end = end2;
    begin = begin2;
    result2 = begin <= end
        ? end - begin : capacity2 - begin + end;

    end = end3;
    begin = begin3;
    result3 = begin <= end
        ? end - begin : capacity3 - begin + end;

    end = end4;
    begin = begin4;
    result4 = begin <= end
        ? end - begin : capacity4 - begin + end;

    result20 = count20;

    __int64 now = current;
    __int64 before = previous;
    if (now > before && samples > 0)
        rate = double(samples) / (double(now - before) * timeScale);
    else
        rate = 0.0;

    totalCount = 0;
    for (unsigned i = 0; i < itemCount; ++i)
        totalCount += items[i]->count;

    end = end0;
    begin = begin0;
    result0 = begin <= end
        ? end - begin : capacity0 - begin + end;

    expired = enabled && now - started > 1000000;

    unsigned sum = 0;
    for (Node* n = head; n; n = n->next)
        sum += n->count;
    nodeCount = sum;

    return const_cast<unsigned*>(&result1);
}

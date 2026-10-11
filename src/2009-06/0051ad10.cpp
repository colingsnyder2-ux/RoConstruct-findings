// from server: 17% by atomic.potato
struct Node {
    int key;
    int val;
    char pad[16];
    Node* next;
};

struct Hash {
    char pad0[4];
    int count;
    int* buckets;
    int bucketCount;
    void grow(int n);
    Node* find(int k);
    Node* insert(int k, int v);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl op_delete(void*);

struct Pair {
    void* vtbl;
    int a;
    int b;
    int c;
};

extern "C" void __stdcall Pair_ctor(Pair*, int, int);
extern "C" void __stdcall Node_dtor(Node*);
extern "C" void __stdcall Node_assign(Node*, Pair*);
extern "C" Node* __stdcall Node_new(Pair*, int);

void Hash::grow(int n) {
    int* nb = (int*)operator_new(n * 4);
    int i;
    for (i = 0; i < n; i++) nb[i] = 0;
    for (i = 0; i < bucketCount; i++) {
        Node* p = (Node*)buckets[i];
        while (p) {
            Node* nx = p->next;
            int idx = p->key % n;
            p->next = (Node*)nb[idx];
            nb[idx] = (int)p;
            p = nx;
        }
    }
    if (buckets) op_delete(buckets);
    buckets = nb;
    bucketCount = n;
}

Node* Hash::find(int k) {
    Node* p = (Node*)buckets[k % bucketCount];
    while (p) {
        if (p->key == k) return p;
        p = p->next;
    }
    return 0;
}

Node* Hash::insert(int k, int v) {
    int idx = k % bucketCount;
    Node* p = (Node*)buckets[idx];
    int found = 0;
    int depth = 1;
    while (p) {
        if (p->key == k) { found = 1; break; }
        p = p->next;
        depth++;
    }
    if (!found && depth > 5) {
        int newSize = bucketCount * 2;
        if (bucketCount < newSize) {
            grow(bucketCount * 2 + 1);
        }
    }
    idx = k % bucketCount;
    Node* nn = (Node*)operator_new(0x1c);
    if (nn) {
        Pair pr;
        pr.vtbl = (void*)0x8c9cc0;
        Pair_ctor(&pr, k, v);
        Node* existing = (Node*)buckets[idx];
        Node_new(&pr, (int)existing);
    } else {
        nn = 0;
    }
    buckets[idx] = (int)nn;
    count++;
    return nn;
}

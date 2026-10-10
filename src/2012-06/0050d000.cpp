// from server: 41% by Intel
struct NodeVisitor {
    int* head;
    void insert(int* base, int* limit, int stride);
};

void NodeVisitor::insert(int* base, int* limit, int stride) {
    int* current = base;
    int count = (current - limit) / stride;
    int index = 0;
    int* head_val = head;

    if (count > 0) {
        do {
            int* next = current + stride;
            *current = (int)head_val;
            head_val = current;
            current = next;
            --count;
        } while (count);
    }

    int* prev = 0;
    current = base;
    while (current != limit) {
        int* next = current + stride;
        *current = (int)prev;
        prev = current;
        current = next;
    }

    *limit = (int)prev;
    head = base;
}

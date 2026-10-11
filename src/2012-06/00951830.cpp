// from server: 75% by atomic.potato
struct AdvRotateTool {
    char pad0[4];
    int* begin;
    int* end;
    void insert(int* pos, int count, int* val, int* out);
};

void AdvRotateTool::insert(int* pos, int count, int* val, int* out) {
    int* first = begin;
    int n = (int)(end - first) / 20;
    int idx;
    if (n == 0) {
        idx = 0;
    } else {
        idx = (int)(pos - first) / 20;
    }
    insert(pos, 1, val, out);
    int* p = begin + idx * 20;
    *out = (int)p;
}

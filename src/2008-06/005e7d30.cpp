// from server: 66% by tester
struct Geometry {
    char pad[0x1c];
    int* indices;
    int count;
    int* values;

    int find(Geometry* other);
};

int Geometry::find(Geometry* other) {
    Geometry* a = other;
    Geometry* b = this;
    Geometry* first;
    Geometry* second;
    if (a->count < b->count) {
        first = a;
        second = b;
    } else {
        first = b;
        if (b != a) {
            second = b;
        } else {
            second = a;
        }
    }
    int n = first->count;
    for (int i = 0; i < n; ++i) {
        if (first->indices[i] == (int)second) {
            return first->values[i];
        }
    }
    return 0;
}

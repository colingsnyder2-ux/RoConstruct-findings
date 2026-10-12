// from server: 87% by king_originala
struct Range {
    float* first;
    float* second;
    Range();
};

extern Range __cdecl partition_range(float*, float*);
extern void __cdecl insertion_sort(float*, float*, int);
extern void __cdecl adjust_heap(float*, int, int, float);
extern void __cdecl sort_heap(float*, float*);

void __cdecl sort_range(float* first, float* last, int ideal)
{
    int count = last - first;

    for (; count > 32 && ideal > 0; count = last - first) {
        Range middle = partition_range(first, last);

        ideal /= 2;
        ideal += ideal / 2;

        if (middle.first - first < last - middle.second) {
            sort_range(first, middle.first, ideal);
            first = middle.second;
        } else {
            sort_range(middle.second, last, ideal);
            last = middle.first;
        }
    }

    if (count > 32) {
        if (last - first > 1) {
            typedef void (__cdecl *HeapFunction)(float*, float*, int, int);
            reinterpret_cast<HeapFunction>(adjust_heap)(first, last, 0, 0);
        }
        sort_heap(first, last);
    } else if (count > 1) {
        insertion_sort(first, last, 0);
    }
}

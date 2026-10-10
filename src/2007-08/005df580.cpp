// from server: 46% by colin
struct Range {
    int* first;
    int* last;
};

extern "C" void __cdecl sort_helper(int*, int*, int*);

void __cdecl do_sort(int* begin, int* end, Range* result) {
    int* mid = begin + ((end - begin) / 2);
    int* last = end - 1;
    sort_helper(begin, mid, last);

    int* lo = mid;
    int* hi = mid + 1;

    while (begin < lo) {
        if (lo[-1] < *lo) break;
        if (lo[-1] > *lo) break;
        --lo;
    }

    while (hi < end) {
        if (*lo < *hi) break;
        if (*lo > *hi) break;
        ++hi;
    }

    int* p = hi;
    int* q = lo;

    while (p < end) {
        if (*p < *q) {
            ++p;
        } else if (*p > *q) {
            break;
        } else {
            int tmp = *hi;
            *hi = *p;
            *p = tmp;
            ++hi;
            ++p;
        }
    }

    while (q > begin) {
        if (q[-1] < *q) break;
        if (q[-1] > *q) break;
        --q;
    }

    if (q == begin) {
        if (p == end) {
            result->first = lo;
            result->last = hi;
            return;
        }
        if (hi != p) {
            int tmp = *hi;
            *hi = *lo;
            *lo = tmp;
        }
        int tmp = *lo;
        *lo = *p;
        *p = tmp;
        ++hi;
        ++lo;
        ++p;
    } else {
        --q;
        if (p == end) {
            --lo;
            if (q != lo) {
                int tmp = *lo;
                *lo = *q;
                *q = tmp;
            }
            int tmp = hi[-1];
            hi[-1] = *lo;
            *lo = tmp;
            --hi;
        } else {
            int tmp = *p;
            *p = *q;
            *q = tmp;
            ++p;
        }
    }

    result->first = lo;
    result->last = hi;
}

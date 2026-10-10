// from server: 73% by colin
struct CXTPControlGallery {
    int GetCount();
    int GetItem(int index);
    int FindItem(int start, int count);
};

int CXTPControlGallery::FindItem(int start, int count) {
    int total = GetCount();
    if (total == 0)
        return -1;

    int end = start + count;
    if (start == -1 && count == -1) {
        end = GetCount() - 1;
    }

    int wrapped = 0;
    if (end == start)
        return end;

    for (;;) {
        int n = GetCount();
        if (end >= n) {
            if (start == -1 && count == 1)
                return -1;
            if (wrapped)
                return -1;
            end = 0;
        } else if (end < 0) {
            if (start == -1 && count == -1)
                return -1;
            if (wrapped)
                return -1;
            end = GetCount() - 1;
        }
        wrapped = 1;

        if (GetItem(end) != 0) {
            end += count;
            if (end != start)
                continue;
            return end;
        }
        return end;
    }
}

// from server: 68% by colin
struct VCXTPReportRows {
    int field_30;
    int field_34;
    int Find(int value);
};

int VCXTPReportRows::Find(int value) {
    if (value == 0)
        return 0;

    int result = (*(int (__thiscall **)(int))(*(int *)value + 0x6c))(value);

    int count = this->field_34;
    if (count == 0)
        return 0;
    if (count <= 0)
        return 0;

    int *arr = (int *)this->field_30;
    if (arr[0] > result)
        return 0;

    int idx = count - 1;
    if (idx < 0)
        return 0;
    if (idx >= count)
        return 0;

    if (arr[idx * 2 + 1] > result) {
        idx = 0;
        if (count <= 0)
            return 0;
        while (idx < count) {
            if (idx < 0)
                return 0;
            if (idx >= count)
                return 0;
            if (arr[idx * 2] > result)
                break;
            if (idx >= count)
                return 0;
            if (arr[idx * 2 + 1] > result)
                return 1;
            idx++;
        }
        return 0;
    }
    return 0;
}

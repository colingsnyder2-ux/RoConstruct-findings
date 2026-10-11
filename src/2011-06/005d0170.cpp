// from server: 77% by atomic.potato
struct W4UploadSetting {
    char pad0[0x68];
    int* begin;
    int* end;
    int* getIndex(int) const;
    int getValue(int) const;
};

int W4UploadSetting::getValue(int index) const {
    int i = *getIndex(index);
    if (i < 0)
        return 0;
    if ((unsigned)i >= (unsigned)((end - begin) >> 2))
        return 0;
    return begin[i];
}

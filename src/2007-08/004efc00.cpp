// from server: 37% by colin
struct WeakRefCountedPtr {
    int* ptr;
    int refCount;
};

struct VChunk {
    int* begin_;
    int* end_;
    int* capacity_;

    void insert(int* pos, int* val);
};

extern "C" {
    long __stdcall InterlockedIncrement(long volatile*);
    long __stdcall InterlockedDecrement(long volatile*);
    void __stdcall unknown_457dd0(int*);
    void __stdcall unknown_474f70(int*);
    void __stdcall unknown_4ef860(void*, int, int);
}

void VChunk::insert(int* pos, int* val)
{
    if (end_ < capacity_) {
        int* p = end_;
        if (p) {
            *p = 0;
            unknown_474f70(val);
        }
        end_ = end_ + 1;
        return;
    }
    if (pos >= begin_ && pos < end_) {
        int* v = (int*)*pos;
        int* tmp = v;
        if (tmp) {
            InterlockedIncrement((long*)(tmp + 1));
        }
        WeakRefCountedPtr w;
        w.ptr = tmp;
        w.refCount = 1;
        insert(pos, (int*)&w);
        if (w.ptr) {
            if (InterlockedDecrement((long*)(w.ptr + 1)) == 0) {
                unknown_457dd0(w.ptr);
                if (w.ptr) {
                    (*(void(**)(int*, int))(*w.ptr))(w.ptr, 1);
                }
            }
        }
        return;
    }
    unknown_4ef860(this, (int)(end_ - begin_) + 1, 0);
    int* p = end_ - 1;
    unknown_474f70(val);
}

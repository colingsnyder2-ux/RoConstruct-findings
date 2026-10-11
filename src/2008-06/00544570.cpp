// from server: 27% by atomic.potato
struct WeakRef {
    void* p0;
    void* p4;
    void release();
    WeakRef* assign(WeakRef* other, WeakRef* out);
};

WeakRef* WeakRef::assign(WeakRef* other, WeakRef* out) {
    WeakRef tmp;
    tmp.p0 = this->p0;
    tmp.p4 = this->p4;
    this->release();
    out->p0 = tmp.p0;
    out->p4 = tmp.p4;
    return out;
}

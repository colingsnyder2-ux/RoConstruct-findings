// from server: 15% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" {
    bool __stdcall MSVCR90_type_info_equal(const type_info*, const type_info*);
}

struct VChatService_EventDesc {
    void* field0;
    void* get();
};

void* VChatService_EventDesc::get() {
    void* p = this->field0;
    if (p == 0) {
        return 0;
    }
    void** vtbl = *(void***)p;
    void* (*fn)(void*) = (void* (*)(void*))vtbl[1];
    void* result = fn(p);
    return result;
}

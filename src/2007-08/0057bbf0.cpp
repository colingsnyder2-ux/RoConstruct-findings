// from server: 92% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info type_info_008a1b58;
extern void* op_new(unsigned int);
extern void op_delete(void*);

void* func_0057bbf0(void* self, int mode, void* arg)
{
    if (mode == 2) {
        void* p = arg;
        bool same = type_info_008a1b58.operator==(*(const type_info*)p);
        return same ? p : 0;
    }
    if (mode == 0) {
        void* mem = op_new(0x10);
        if (mem != 0) {
            *(int*)((char*)mem + 0) = *(int*)((char*)arg + 0);
            *(int*)((char*)mem + 4) = *(int*)((char*)arg + 4);
            *(int*)((char*)mem + 8) = *(int*)((char*)arg + 8);
            *(int*)((char*)mem + 12) = *(int*)((char*)arg + 12);
        }
        return mem;
    }
    op_delete(arg);
    return 0;
}

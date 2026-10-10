// from server: 26% by colin
struct stream_buffer;

struct gzip_compressor {
    char pad[0x14];
    char* first;
    char* last;
    char* cur;
    char* end;
    unsigned int flags;
};

struct allocator {
    gzip_compressor* ptr;
    void flush(int a, int b);
    void write(const char* data, int len);
    void put(int c);
    int sync();
};

extern "C" int __stdcall _write(int fd, const void* buf, unsigned int len);

extern "C" {
    int __cdecl _sputn_stub(void*, const char*, int);
}

struct S {
    allocator* a;
    void func(char mode);
};

void S::func(char mode) {
    gzip_compressor* g = a->ptr;
    if ((g->flags & 1) && (mode & 1)) {
        g->flags = 0;
        g = a->ptr;
        char* p = g->first;
        g->cur = p;
        g->end = p;
        a->flush(1, 1);
    }
    g = a->ptr;
    if ((g->flags & 2) && (mode & 2)) {
        char* base = g->first;
        char* limit = g->end;
        int total = (int)(limit - base);
        int done = 0;
        while (done < total) {
            int n = _write(*(int*)0, base + done, total - done);
            done += n;
        }
        g = a->ptr;
        char* newcur = g->first + (total - done) + (int)(g->cur - g->first) - (int)(g->cur - g->first);
        newcur = g->first + (total - done);
        g->cur = newcur;
        g->end = g->first + (int)(g->end - g->first) + (int)(g->cur - g->first);
        if (mode & 1) {
            // loop again
        }
    }
}

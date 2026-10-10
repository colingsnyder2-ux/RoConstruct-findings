// from server: 45% by colin
extern "C" {
    void* __stdcall G1_allocator_allocate(void* self, unsigned int n, const void* hint);
    void __stdcall G1_allocator_deallocate(void* self, char* p, unsigned int n);
    int __stdcall G1_streambuf_sgetn(void* self, char* s, int n);
    void* __stdcall G1_string_append(void* self, const char* s, unsigned int n);
}

struct G1_allocator {
    char* allocate(unsigned int n, const void* hint);
    void deallocate(char* p, unsigned int n);
};

char* G1_allocator::allocate(unsigned int n, const void* hint)
{
    return (char*)G1_allocator_allocate(this, n, hint);
}

void G1_allocator::deallocate(char* p, unsigned int n)
{
    G1_allocator_deallocate(this, p, n);
}

struct G1_streambuf {
    int sgetn(char* s, int n);
};

int G1_streambuf::sgetn(char* s, int n)
{
    return G1_streambuf_sgetn(this, s, n);
}

struct G1_string {
    void* append(const char* s, unsigned int n);
};

void* G1_string::append(const char* s, unsigned int n)
{
    return G1_string_append(this, s, n);
}

struct G1_filtering_stream {
    void read(void* dest, unsigned int n);
};

void G1_filtering_stream::read(void* dest, unsigned int n)
{
    char* buf;
    unsigned int total;
    unsigned int chunk;
    int got;
    bool eof;
    G1_allocator alloc;
    G1_streambuf* sb;
    G1_string* str;

    buf = alloc.allocate(n, 0);
    total = 0;
    eof = false;
    while (!eof) {
        sb = *(G1_streambuf**)(*(char**)(*(char**)this + 8) + 4);
        got = sb->sgetn(buf, (int)n);
        if (got != 0) {
            got = -1;
        }
        eof = (got == -1);
        if (got != -1) {
            unsigned int i = 0;
            while (i < (unsigned int)got) {
                chunk = (unsigned int)got - i;
                str = *(G1_string**)dest;
                str->append(buf + i, chunk);
                i += chunk;
            }
            total += (unsigned int)got;
        }
    }
    if (buf != 0) {
        alloc.deallocate(buf, n);
    }
}

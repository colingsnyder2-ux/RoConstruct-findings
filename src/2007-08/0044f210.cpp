// from server: 47% by colin
// roc 2007-08 0044f210  unit: CRobloxDoc  size: 243 bytes
// library xtp-11.2.2-vc8/Source\SyntaxEdit\XTPSyntaxEditView.cpp

extern "C" {
    void __stdcall allocator_ctor(void*);
    char* __stdcall allocator_allocate(void*, unsigned int, void*);
    void __stdcall allocator_deallocate(void*, char*, unsigned int);
    void* __stdcall ios_rdbuf(void*);
    int __stdcall streambuf_sgetn(void*, char*, int);
    int __stdcall streambuf_sputn(void*, const char*, int);
}

struct CRobloxDoc {
    int CopyStream(void* src, void* dst);
};

int CRobloxDoc::CopyStream(void* src, void* dst)
{
    char local_alloc[4];
    char local_buf[4];
    int total = 0;
    int count;
    int result;
    char* buffer;
    int pos;
    int remaining;
    int written;
    bool eof;

    allocator_ctor(local_alloc);

    buffer = allocator_allocate(local_alloc, 0x1000, 0);
    count = 0x1000;

    for (;;) {
        void* rdbuf = ios_rdbuf(*(void**)((char*)src + 4));
        int n = streambuf_sgetn(rdbuf, buffer, count);
        if (n != 0) {
            result = n;
        } else {
            result = -1;
        }
        eof = (result == -1);
        if (result != -1) {
            pos = 0;
            while (pos < result) {
                remaining = result - pos;
                written = streambuf_sputn(*(void**)((char*)dst + 4), buffer + pos, remaining);
                pos += written;
            }
            total += result;
        }
        if (eof) {
            break;
        }
    }

    if (buffer != 0) {
        allocator_deallocate(local_alloc, buffer, 0x1000);
    }

    return total;
}

// from server: 39% by colin
struct StreamBuf {
    int sgetn(char*, int);
};

struct GzipState {
    unsigned int flags;
    char* next_in;
    char* next_out;
    char* avail_in;
    char* avail_out;
    char* total_in;
    char* total_out;
    char* msg;
    int state;
};

struct GzipDecompressor {
    GzipState* state;
    int decompress(char* out, int outLen, int flush);
};

extern "C" int __stdcall gzread(void*, void*, unsigned int);
extern "C" int __stdcall gzflush(void*, int);

extern int gz_errno;
extern int gz_error_code;
extern int gz_stream_end;
extern int gz_ok;

int GzipDecompressor::decompress(char* out, int outLen, int flush)
{
    GzipState* s = state;
    if ((s->flags & 1) == 0) {
        s->flags |= 1;
        s->total_in = s->next_in;
        s->total_out = s->next_out;
    }

    int mode = ((~((s->flags >> 2)) & 1) | 4);
    char* start = out;
    char* end = out + outLen;
    char** pnext_out = &s->next_out;
    char** pnext_in = &s->next_in;

    for (;;) {
        char* cur_out = *pnext_out;
        char* cur_in = *pnext_in;
        int at_end = (mode == 4);
        if (cur_out != cur_in || !at_end) {
            int r = gzread(s, &cur_out, (int)(end - start));
            int err = (at_end ? gz_error_code : gz_ok);
            int res = gzflush(s, err);
            int r2 = gzread(s, &cur_out, 1);
            gzread(s, &cur_out, 0);
            *pnext_out = cur_out;
            if (res == gz_stream_end) {
                int produced = (int)(cur_out - out);
                if (produced == 0)
                    return -1;
                return produced;
            }
        }

        if (mode == 6) {
            if (*pnext_out == *pnext_in)
                break;
        }
        if (start == end)
            break;
        if (mode == 5) {
            int r = gzread(s, s->next_in, (int)(s->next_out - s->next_in));
            if (r == -1) {
                mode = 4;
                s->flags |= 4;
                continue;
            }
            s->total_in = s->next_in;
            s->total_in += r;
            s->total_out = s->next_in;
            mode = (r != (int)(s->next_out - s->next_in)) ? 6 : 5;
            continue;
        }
    }

    return (int)(start - out);
}

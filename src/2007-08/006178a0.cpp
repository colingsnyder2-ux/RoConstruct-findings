// from server: 53% by colin
extern "C" {
int __cdecl isalnum(int);
int __cdecl isdigit(int);
}

struct Buf {
    char *data;
    int count;
    int cap;
};

struct Lexer {
    int cur;
    char pad0[0x30];
    void *stream;
    Buf *buf;
    int *counter;
    char pad1[4];
    char sep;

    void run(void *arg);
};

extern "C" void __cdecl sub_60eeb0(void *, void *, int);
extern "C" void __cdecl sub_60ee90(void *, void *, void *, void *, void *);
extern "C" void __cdecl sub_5c6020(void *, int);
extern "C" void *__cdecl sub_6139f0(void *, void *, int, int);
extern "C" void *__cdecl sub_6139d0(void *);
extern "C" int __cdecl sub_6132f0(void *);
extern "C" void __cdecl sub_617400(Lexer *, int);
extern "C" int __cdecl sub_617750(Lexer *, void *);
extern "C" void __cdecl sub_6177b0(Lexer *, void *);
extern "C" int __cdecl sub_60eae0(void *, void *);

extern "C" int __cdecl isalnum(int);
extern "C" int __cdecl isdigit(int);

void Lexer::run(void *arg)
{
    Buf *b;
    int c;
    int i;
    int n;
    char *p;
    int *cnt;
    char *s;

    for (;;) {
        b = this->buf;
        c = b->count + 1;
        if (c > b->cap) {
            if (b->cap >= 0x7ffffffe) {
                sub_60eeb0((char *)this + 0x50, (char *)this->stream + 0x10, 0x50);
                sub_60ee90(this->stream, (void *)0x7b9778, (char *)this + 0x10, (void *)0x7c3930, (void *)0x7c3930);
                sub_5c6020(this->stream, 3);
            }
            n = b->cap * 2;
            if ((unsigned)(n + 1) > 0xfffffffc) {
                p = (char *)sub_6139d0(this->stream);
            } else {
                p = (char *)sub_6139f0(this->stream, b->data, b->cap, n);
            }
            b->data = p;
            b->cap = n;
        }
        b->data[b->count] = (char)this->cur;
        b->count++;

        cnt = this->counter;
        i = *cnt;
        *cnt = i - 1;
        if (i > 0) {
            c = *(unsigned char *)this->counter[1];
            this->counter[1] = (int)((char *)this->counter[1] + 1);
        } else {
            c = sub_6132f0(this->counter);
        }
        this->cur = c;
        if (isalnum(c) != 0)
            continue;
        if (this->cur == '.')
            continue;

        if (sub_617750(this, (void *)0x7c39a0) != 0) {
            sub_617750(this, (void *)0x7c399c);
        }

        while (isdigit(this->cur) != 0 || this->cur == '_') {
            b = this->buf;
            c = b->count + 1;
            if (c > b->cap) {
                if (b->cap >= 0x7ffffffe) {
                    sub_60eeb0((char *)this + 0x50, (char *)this->stream + 0x10, 0x50);
                    sub_60ee90(this->stream, (void *)0x7b9778, (char *)this + 0x10, (void *)0x7c3930, (void *)0x7c3930);
                    sub_5c6020(this->stream, 3);
                }
                n = b->cap * 2;
                if ((unsigned)(n + 1) > 0xfffffffc) {
                    p = (char *)sub_6139d0(this->stream);
                } else {
                    p = (char *)sub_6139f0(this->stream, b->data, b->cap, n);
                }
                b->data = p;
                b->cap = n;
            }
            b->data[b->count] = (char)this->cur;
            b->count++;

            cnt = this->counter;
            i = *cnt;
            *cnt = i - 1;
            if (i > 0) {
                c = *(unsigned char *)this->counter[1];
                this->counter[1] = (int)((char *)this->counter[1] + 1);
                this->cur = c;
            } else {
                c = sub_6132f0(this->counter);
                this->cur = c;
            }
        }

        sub_617400(this, 0);

        b = this->buf;
        n = b->count;
        s = b->data;
        if (n != 0) {
            do {
                n--;
                if (s[n] == '.')
                    s[n] = this->sep;
            } while (n != 0);
        }

        if (sub_60eae0(this->buf->data, arg) == 0) {
            sub_6177b0(this, arg);
        }
        return;
    }
}

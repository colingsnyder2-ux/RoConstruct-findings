// from server: 25% by colin
struct LDrawCommand {
    void execute(const char* param);
};

extern "C" {
    int __stdcall strlen(const char*);
}

struct basic_streambuf {
    int sputc(char);
    int sputn(const char*, int);
};

struct ios_base {
    int flags() const;
};

struct basic_ios {
    basic_streambuf* rdbuf() const;
};

struct LDrawCommandImpl {
    char pad[0x30];
    char ch;
};

void LDrawCommand::execute(const char* param)
{
    int len = strlen(param);
    int count = 0;
    if (len > 0) {
        count = len;
    }
    LDrawCommandImpl* impl = (LDrawCommandImpl*)this;
    if (impl->ch != 0) {
        int flags = ((ios_base*)this)->flags();
        if ((flags & 0x1c0) == 0x40) {
            goto do_sputn;
        }
        while (count > 0) {
            char c = impl->ch;
            basic_streambuf* sb = ((basic_ios*)this)->rdbuf();
            int eof = -1;
            int ch = sb->sputc(c);
            if (ch != eof) {
                count--;
                continue;
            }
            break;
        }
        if (count == 0) {
            goto do_sputn;
        }
    }
    {
        basic_streambuf* sb = ((basic_ios*)this)->rdbuf();
        int n = sb->sputn(param, len);
        if (n != len) {
            goto done;
        }
    }
do_sputn:
    {
        basic_streambuf* sb = ((basic_ios*)this)->rdbuf();
        sb->sputn(param, len);
    }
done:
    return;
}

// from server: 35% by colin
struct ScoreHud {
    char pad0[4];
    void* begin;
    void* end;
    void* cap;
    void insert(void* pos, unsigned int count, const void* value);
};

extern "C" void __cdecl sub_429A50(void* dst, const void* src);
extern "C" void* __cdecl sub_442C00(unsigned int count, int align);
extern "C" void __cdecl sub_5CCD30();
extern "C" void* __cdecl sub_61E350(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h);
extern "C" void __cdecl sub_61E700(void* a, void* b, void* c, void* d);
extern "C" void __cdecl sub_62FC62(void* p);
extern "C" void __cdecl sub_61F510(void* self, void* a, void* b, void* c);

void ScoreHud::insert(void* pos, unsigned int count, const void* value)
{
    char tmp[16];
    sub_429A50(tmp, value);

    unsigned int size = 0;
    if (this->begin != 0)
        size = ((char*)this->end - (char*)this->begin) >> 4;

    if (count != 0)
    {
        unsigned int cap = 0;
        if (this->begin != 0)
            cap = ((char*)this->cap - (char*)this->begin) >> 4;

        if (0x0FFFFFFF - cap < count)
            sub_5CCD30();

        unsigned int cur = 0;
        if (this->begin != 0)
            cur = ((char*)this->cap - (char*)this->begin) >> 4;

        if (size < cur + count)
        {
            unsigned int newcap = size + (size >> 1);
            if (0x0FFFFFFF - (size >> 1) < size)
                newcap = 0;

            unsigned int cur2 = 0;
            if (this->begin != 0)
                cur2 = ((char*)this->cap - (char*)this->begin) >> 4;

            if (newcap < cur2 + count)
            {
                unsigned int cur3 = 0;
                if (this->begin != 0)
                    cur3 = ((char*)this->cap - (char*)this->begin) >> 4;
                newcap = cur3 + count;
            }

            void* newbuf = sub_442C00(newcap, 0);
            void* oldbegin = this->begin;
            void* result = sub_61E350(oldbegin, newbuf, this, newbuf, pos, (void*)count, tmp, 0);
            sub_61F510(this, result, pos, tmp);
            void* oldend = this->end;
            sub_61E350(oldbegin, oldend, this, result, pos, (void*)count, tmp, 0);

            unsigned int cur4 = 0;
            if (this->begin != 0)
                cur4 = ((char*)this->cap - (char*)this->begin) >> 4;

            unsigned int newoff = (unsigned int)pos + cur4;

            if (this->begin != 0)
            {
                sub_61E700(this->begin, this->cap, this, result);
                sub_62FC62(this->begin);
            }

            this->begin = newbuf;
            this->end = (char*)newbuf + (newoff << 4);
            this->cap = (char*)newbuf + (newcap << 4);
        }
    }
}

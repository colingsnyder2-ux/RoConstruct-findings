// from server: 74% by atomic.potato




extern "C" {
    typedef unsigned int size_t;
}

namespace std {
    template<class T> class allocator;
    template<class C, class T, class A> class basic_string;
    template<class C> struct char_traits;
}

extern "C" {
    typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;
    String* __stdcall string_append(String* self, const char* ptr, unsigned int count);
}

struct UString_sink_stream_buffer {
    char pad_00[0x14];
    int* field_14;
    char pad_18[0x0c];
    int* field_24;
    char pad_28[0x0c];
    int* field_34;
    char pad_38[0x08];
    String* field_40;
    char pad_44[0x08];
    int field_4c;
    int field_50;

    void flush();
};

void UString_sink_stream_buffer::flush() {
    int* p14 = field_14;
    int start = *p14;
    int* p24 = field_24;
    int end = *p24;
    int count = end - start;
    if (count > 0) {
        string_append(field_40, (const char*)start, (unsigned int)count);
        int newpos = field_4c;
        int span = field_50;
        *field_14 = newpos;
        *field_24 = newpos;
        *field_34 = newpos + span - newpos;
    }
}

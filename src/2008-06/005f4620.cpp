// from server: 82% by king_originala
namespace std {
    template<class T> class allocator {
    public:
        T* allocate(unsigned int, const void*);
        void deallocate(T*, unsigned int);
    };

    template<class T> struct char_traits;

    template<class T, class Traits> class basic_streambuf {
    public:
        int sgetn(T*, int);
    };
}

struct Input {
    void* stream;
};

struct Output {
    void* sink;
    Output(const Output&);
    void write(const char*, int);
};

inline Output::Output(const Output& other) : sink(other.sink) {
}

struct Buffer {
    char* data;
    unsigned int size;
    Buffer(unsigned int);
    ~Buffer();
};

inline Buffer::Buffer(unsigned int n) {
    std::allocator<char> allocator;
    data = allocator.allocate(n, 0);
    size = n;
}

inline Buffer::~Buffer() {
    if (data) {
        std::allocator<char> allocator;
        allocator.deallocate(data, size);
    }
}

int copy(Input* input, Output output, unsigned int size) {
    Buffer buffer(size);
    Output destination(output);
    int total = 0;
    int count = 0;

    for (;;) {
        char* stream = static_cast<char*>(input->stream);
        int* table = *reinterpret_cast<int**>(stream);
        int offset = table[1];
        std::basic_streambuf<char, std::char_traits<char> >* source =
            *reinterpret_cast<
                std::basic_streambuf<char, std::char_traits<char> >**
            >(stream + offset + 40);

        int result = source->sgetn(buffer.data, size);
        if (result)
            count = result;
        else
            count = -1;

        bool done = count == -1;
        if (count != -1) {
            destination.write(buffer.data, count);
            total += count;
        }
        if (done)
            break;
    }

    return total;
}
